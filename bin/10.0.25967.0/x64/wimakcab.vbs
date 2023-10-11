' Windows Installer utility to generate file cabinets from MSI database
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the access to install engine and actions
'
Option Explicit

' FileSystemObject.CreateTextFile and FileSystemObject.OpenTextFile
Const OpenAsASCII   = 0 
Const OpenAsUnicode = -1

' FileSystemObject.CreateTextFile
Const OverwriteIfExist = -1
Const FailIfExist      = 0

' FileSystemObject.OpenTextFile
Const OpenAsDefault    = -2
Const CreateIfNotExist = -1
Const FailIfNotExist   = 0
Const ForReading = 1
Const ForWriting = 2
Const ForAppending = 8

Const msiOpenDatabaseModeReadOnly = 0
Const msiOpenDatabaseModeTransact = 1

Const msiViewModifyInsert         = 1
Const msiViewModifyUpdate         = 2
Const msiViewModifyAssign         = 3
Const msiViewModifyReplace        = 4
Const msiViewModifyDelete         = 6

Const msiUILevelNone = 2

Const msiRunModeSourceShortNames = 9

Const msidbFileAttributesNoncompressed = &h00002000

Dim argCount:argCount = Wscript.Arguments.Count
Dim iArg:iArg = 0
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If (argCount < 2) Then
	Wscript.Echo "Windows Installer utility to generate compressed file cabinets from MSI database" &_
		vbNewLine & " The 1st argument is the path to MSI database, at the source file root" &_
		vbNewLine & " The 2nd argument is the base name used for the generated files (DDF, INF, RPT)" &_
		vbNewLine & " The 3rd argument can optionally specify separate source location from the MSI" &_
		vbNewLine & " The following options may be specified at any point on the command line" &_
		vbNewLine & "  /L to use LZX compression instead of MSZIP" &_
		vbNewLine & "  /F to limit cabinet size to 1.44 MB floppy size rather than CD" &_
		vbNewLine & "  /C to run compression, else only generates the .DDF file" &_
		vbNewLine & "  /U to update the MSI database to reference the generated cabinet" &_
		vbNewLine & "  /E to embed the cabinet file in the installer package as a stream" &_
		vbNewLine & "  /S to sequence number file table, ordered by directories" &_
		vbNewLine & "  /R to revert to non-cabinet install, removes cabinet if /E specified" &_
		vbNewLine & " Notes:" &_
		vbNewLine & "  In order to generate a cabinet, MAKECAB.EXE must be on the PATH" &_
		vbNewLine & "  base name used for files and cabinet stream is case-sensitive" &_
		vbNewLine & "  If source type set to compressed, all files will be opened at the root" &_
		vbNewLine & "  (The /R option removes the compressed bit - SummaryInfo property 15 & 2)" &_
		vbNewLine & "  To replace an embedded cabinet, include the options: /R /C /U /E" &_
		vbNewLine & "  Does not handle updating of Media table to handle multiple cabinets" &_
		vbNewLine &_
		vbNewLine & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

' Get argument values, processing any option flags
Dim compressType : compressType = "MSZIP"
Dim cabSize      : cabSize      = "CDROM"
Dim makeCab      : makeCab      = False
Dim embedCab     : embedCab     = False
Dim updateMsi    : updateMsi    = False
Dim sequenceFile : sequenceFile = False
Dim removeCab    : removeCab    = False
Dim databasePath : databasePath = NextArgument
Dim baseName     : baseName     = NextArgument
Dim sourceFolder : sourceFolder = NextArgument
If Not IsEmpty(NextArgument) Then Fail "More than 3 arguments supplied" ' process any trailing options
If Len(baseName) < 1 Or Len(baseName) > 8 Then Fail "Base file name must be from 1 to 8 characters"
If Not IsEmpty(sourceFolder) And Right(sourceFolder, 1) <> "\" Then sourceFolder = sourceFolder & "\"
Dim cabFile : cabFile = baseName & ".CAB"
Dim cabName : cabName = cabFile : If embedCab Then cabName = "#" & cabName

' Connect to Windows Installer object
On Error Resume Next
Dim installer : Set installer = Nothing
Set installer = Wscript.CreateObject("WindowsInstaller.Installer") : CheckError

' Open database
Dim database, openMode, view, record, updateMode, sumInfo, sequence, lastSequence
If updateMsi Or sequenceFile Or removeCab Then openMode = msiOpenDatabaseModeTransact Else openMode = msiOpenDatabaseModeReadOnly
Set database = installer.OpenDatabase(databasePath, openMode) : CheckError

' Remove existing cabinet(s) and revert to source tree install if options specified
If removeCab Then
	Set view = database.OpenView("SELECT DiskId, LastSequence, Cabinet FROM Media ORDER BY DiskId") : CheckError
	view.Execute : CheckError
	updateMode = msiViewModifyUpdate
	Set record = view.Fetch : CheckError
	If Not record Is Nothing Then ' Media table not empty
		If Not record.IsNull(3) Then
			If record.StringData(3) <> cabName Then Wscript.Echo "Warning, cabinet name in media table, " & record.StringData(3) & " does not match " & cabName
			record.StringData(3) = Empty
		End If
		record.IntegerData(2) = 9999 ' in case of multiple cabinets, force all files from 1st media
		view.Modify msiViewModifyUpdate, record : CheckError
		Do
			Set record = view.Fetch : CheckError
			If record Is Nothing Then Exit Do
			view.Modify msiViewModifyDelete, record : CheckError 'remove other cabinet records
		Loop
	End If
	Set sumInfo = database.SummaryInformation(3) : CheckError
	sumInfo.Property(11) = Now
	sumInfo.Property(13) = Now
	sumInfo.Property(15) = sumInfo.Property(15) And Not 2
	sumInfo.Persist
	Set view = database.OpenView("SELECT `Name`,`Data` FROM _Streams WHERE `Name`= '" & cabFile & "'") : CheckError
	view.Execute : CheckError
	Set record = view.Fetch
	If record Is Nothing Then
		Wscript.Echo "Warning, cabinet stream not found in package: " & cabFile
	Else
		view.Modify msiViewModifyDelete, record : CheckError
	End If
	Set sumInfo = Nothing ' must release stream
	database.Commit : CheckError
	If Not updateMsi Then Wscript.Quit 0
End If

' Create an install session and execute actions in order to perform directory resolution
installer.UILevel = msiUILevelNone
Dim session : Set session = installer.OpenPackage(database,1) : If Err <> 0 Then Fail "Database: " & databasePath & ". Invalid installer package format"
Dim shortNames : shortNames = session.Mode(msiRunModeSourceShortNames) : CheckError
If Not IsEmpty(sourceFolder) Then session.Property("OriginalDatabase") = sourceFolder : CheckError
Dim stat : stat = session.DoAction("CostInitialize") : CheckError
If stat <> 1 Then Fail "CostInitialize failed, returned " & stat

' Check for non-cabinet files to avoid sequence number collisions
lastSequence = 0
If sequenceFile Then
	Set view = database.OpenView("SELECT Sequence,Attributes FROM File") : CheckError
	view.Execute : CheckError
	Do
		Set record = view.Fetch : CheckError
		If record Is Nothing Then Exit Do
		sequence = record.IntegerData(1)
		If (record.IntegerData(2) And msidbFileAttributesNoncompressed) <> 0 And sequence > lastSequence Then lastSequence = sequence
	Loop	
End If

' Join File table to Component table in order to find directories
Dim orderBy : If sequenceFile Then orderBy = "Directory_" Else orderBy = "Sequence"
Set view = database.OpenView("SELECT File,FileName,Directory_,Sequence,File.Attributes FROM File,Component WHERE Component_=Component ORDER BY " & orderBy) : CheckError
view.Execute : CheckError

' Create DDF file and write header properties
Dim FileSys : Set FileSys = CreateObject("Scripting.FileSystemObject") : CheckError
Dim outStream : Set outStream = FileSys.CreateTextFile(baseName & ".DDF", OverwriteIfExist, OpenAsASCII) : CheckError
outStream.WriteLine "; Generated from " & databasePath & " on " & Now
outStream.WriteLine ".Set CabinetNameTemplate=" & baseName & "*.CAB"
outStream.WriteLine ".Set CabinetName1=" & cabFile
outStream.WriteLine ".Set ReservePerCabinetSize=8"
outStream.WriteLine ".Set MaxDiskSize=" & cabSize
outStream.WriteLine ".Set CompressionType=" & compressType
outStream.WriteLine ".Set InfFileLineFormat=(*disk#*) *file#*: *file* = *Size*"
outStream.WriteLine ".Set InfFileName=" & baseName & ".INF"
outStream.WriteLine ".Set RptFileName=" & baseName & ".RPT"
outStream.WriteLine ".Set InfHeader="
outStream.WriteLine ".Set InfFooter="
outStream.WriteLine ".Set DiskDirectoryTemplate=."
outStream.WriteLine ".Set Compress=ON"
outStream.WriteLine ".Set Cabinet=ON"

' Fetch each file and request the source path, then verify the source path
Dim fileKey, fileName, folder, sourcePath, delim, message, attributes
Do
	Set record = view.Fetch : CheckError
	If record Is Nothing Then Exit Do
	fileKey    = record.StringData(1)
	fileName   = record.StringData(2)
	folder     = record.StringData(3)
	sequence   = record.IntegerData(4)
	attributes = record.IntegerData(5)
	If (attributes And msidbFileAttributesNoncompressed) = 0 Then
		If sequence <= lastSequence Then
			If Not sequenceFile Then Fail "Duplicate sequence numbers in File table, use /S option"
			sequence = lastSequence + 1
			record.IntegerData(4) = sequence
			view.Modify msiViewModifyUpdate, record
		End If
		lastSequence = sequence
		delim = InStr(1, fileName, "|", vbTextCompare)
		If delim <> 0 Then
			If shortNames Then fileName = Left(fileName, delim-1) Else fileName = Right(fileName, Len(fileName) - delim)
		End If
		sourcePath = session.SourcePath(folder) & fileName
		outStream.WriteLine """" & sourcePath & """" & " " & fileKey
		If installer.FileAttributes(sourcePath) = -1 Then message = message & vbNewLine & sourcePath
	End If
Loop
outStream.Close
REM Wscript.Echo "SourceDir = " & session.Property("SourceDir")
If Not IsEmpty(message) Then Fail "The following files were not available:" & message

' Generate compressed file cabinet
If makeCab Then
	Dim WshShell : Set WshShell = Wscript.CreateObject("Wscript.Shell") : CheckError
	Dim cabStat : cabStat = WshShell.Run("MakeCab.exe /f " & baseName & ".DDF", 7, True) : CheckError
	If cabStat <> 0 Then Fail "MAKECAB.EXE failed, possibly could not find source files, or invalid DDF format"
End If

' Update Media table and SummaryInformation if requested
If updateMsi Then
	Set view = database.OpenView("SELECT DiskId, LastSequence, Cabinet FROM Media ORDER BY DiskId") : CheckError
	view.Execute : CheckError
	updateMode = msiViewModifyUpdate
	Set record = view.Fetch : CheckError
	If record Is Nothing Then ' Media table empty
		Set record = Installer.CreateRecord(3)
		record.IntegerData(1) = 1
		updateMode = msiViewModifyInsert
	End If
	record.IntegerData(2) = lastSequence
	record.StringData(3) = cabName
	view.Modify updateMode, record
	Set sumInfo = database.SummaryInformation(3) : CheckError
	sumInfo.Property(11) = Now
	sumInfo.Property(13) = Now
	sumInfo.Property(15) = (shortNames And 1) + 2
	sumInfo.Persist
End If

' Embed cabinet if requested
If embedCab Then
	Set view = database.OpenView("SELECT `Name`,`Data` FROM _Streams") : CheckError
	view.Execute : CheckError
	Set record = Installer.CreateRecord(2)
	record.StringData(1) = cabFile
	record.SetStream 2, cabFile : CheckError
	view.Modify msiViewModifyAssign, record : CheckError 'replace any existing stream of that name
End If

' Commit database in case updates performed
database.Commit : CheckError
Wscript.Quit 0

' Extract argument value from command line, processing any option flags
Function NextArgument
	Dim arg
	Do  ' loop to pull in option flags until an argument value is found
		If iArg >= argCount Then Exit Function
		arg = Wscript.Arguments(iArg)
		iArg = iArg + 1
		If (AscW(arg) <> AscW("/")) And (AscW(arg) <> AscW("-")) Then Exit Do
		Select Case UCase(Right(arg, Len(arg)-1))
			Case "C" : makeCab      = True
			Case "E" : embedCab     = True
			Case "F" : cabSize      = "1.44M"
			Case "L" : compressType = "LZX"
			Case "R" : removeCab    = True
			Case "S" : sequenceFile = True
			Case "U" : updateMsi    = True
			Case Else: Wscript.Echo "Invalid option flag:", arg : Wscript.Quit 1
		End Select
	Loop
	NextArgument = arg
End Function

Sub CheckError
	Dim message, errRec
	If Err = 0 Then Exit Sub
	message = Err.Source & " " & Hex(Err) & ": " & Err.Description
	If Not installer Is Nothing Then
		Set errRec = installer.LastErrorRecord
		If Not errRec Is Nothing Then message = message & vbNewLine & errRec.FormatText
	End If
	Fail message
End Sub

Sub Fail(message)
	Wscript.Echo message
	Wscript.Quit 2
End Sub

'' SIG '' Begin signature block
'' SIG '' MIIRLQYJKoZIhvcNAQcCoIIRHjCCERoCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' +3czCZ7bOIQLc7kJN8m8lyJpE9uBKr7KXjIe8c3/+0yg
'' SIG '' gg29MIIGHTCCBAWgAwIBAgITMwAABqK9Z7xIY6KunQAA
'' SIG '' AAAGojANBgkqhkiG9w0BAQsFADB9MQswCQYDVQQGEwJV
'' SIG '' UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
'' SIG '' UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
'' SIG '' cmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2ZWxv
'' SIG '' cG1lbnQgUENBIDIwMTQwHhcNMjMwNzEzMjIzNjQwWhcN
'' SIG '' MjQwOTE1MjIzNjQwWjB0MQswCQYDVQQGEwJVUzETMBEG
'' SIG '' A1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
'' SIG '' ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
'' SIG '' MR4wHAYDVQQDExVNaWNyb3NvZnQgQ29ycG9yYXRpb24w
'' SIG '' ggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCv
'' SIG '' 6wy1fRmNIH+mLta8TD4+LdbxLUGEbWmTpjXFPtMsdlVs
'' SIG '' 19gXzLZs3GU0k4mUDvJD7YYr+5f7NyBjVJQW4BZ4HnuQ
'' SIG '' Fzo+hKWZATGoPbxotsANxjANFVWJG/3zljR0IxCCfUYn
'' SIG '' XJqVxeanl0XNVb4h2XQystC0iZxNuKTp1zi1HlINvGC9
'' SIG '' 7wgEXiyS5RkEKuBFgcZjyv138YBc4LdByO8jEaysUC6P
'' SIG '' WfgxO1+Q1QwcWZceLQ6NrbGF0/nHrlVgi2DuQqWmla/f
'' SIG '' vx8i9QVesOyInSCa4rV8B3CCEtcL9dNZPuDBWTDU7WQu
'' SIG '' QZc4KeQLhESdPMaH0rHMNuKRLjHuLxRxAgMBAAGjggGd
'' SIG '' MIIBmTA3BgNVHSUEMDAuBgorBgEEAYI3CgMNBgorBgEE
'' SIG '' AYI3CgMbBgorBgEEAYI3PQYBBggrBgEFBQcDAzAdBgNV
'' SIG '' HQ4EFgQUPi8urKM8JdW3F8JP7L5LdMBAYB4wRQYDVR0R
'' SIG '' BD4wPKQ6MDgxHjAcBgNVBAsTFU1pY3Jvc29mdCBDb3Jw
'' SIG '' b3JhdGlvbjEWMBQGA1UEBRMNMjMxMTA1KzUwMTEyMDAf
'' SIG '' BgNVHSMEGDAWgBSE3RA2ewvSCKMmVp8ilSVBhSwJwDBd
'' SIG '' BgNVHR8EVjBUMFKgUKBOhkxodHRwOi8vd3d3Lm1pY3Jv
'' SIG '' c29mdC5jb20vcGtpb3BzL2NybC9NaWNyb3NvZnQlMjBE
'' SIG '' ZXZlbG9wbWVudCUyMFBDQSUyMDIwMTQuY3JsMGoGCCsG
'' SIG '' AQUFBwEBBF4wXDBaBggrBgEFBQcwAoZOaHR0cDovL3d3
'' SIG '' dy5taWNyb3NvZnQuY29tL3BraW9wcy9jZXJ0cy9NaWNy
'' SIG '' b3NvZnQlMjBEZXZlbG9wbWVudCUyMFBDQSUyMDIwMTQu
'' SIG '' Y3J0MAwGA1UdEwEB/wQCMAAwDQYJKoZIhvcNAQELBQAD
'' SIG '' ggIBAHGKAVDv5Jpdaav0FNV2O5TL2ze/7osH+3Cp67xy
'' SIG '' S/TfFfPk3PFo7RrXRS9rNpoas0YZLwoRgRJROCNiVLjy
'' SIG '' pzck37TOwbuhrg3Mmuz9Z0B9IxUkf7l7uKYioBxNHtqw
'' SIG '' tthV/3egoHF2z+usNliZkmp5e71OiBzFjKEVL2pnuV8s
'' SIG '' UuU3jAaMiiT5082ykrTHpJoJQcX6GVbgkFTeMc9tK8F/
'' SIG '' iNaQxfV0/lysfah+hYO3GUnsRdXcR/ZpF2NxPuAGQuwd
'' SIG '' NZs+L1NFdok4xCboDH8r0OuW9Gz3ydh+9m5kA0yC/HgH
'' SIG '' fdxlX6oUm4QkSGlWoZHZO6mO2vVg9bfNPELsDKruFpYS
'' SIG '' z+1EAmTaCw/XCBA4X0DgO2s0el47xRoMZoHKAe8oraiO
'' SIG '' 48sryvIJnP7mylyQCLc5isPiXJgOWLoxOgFFxx3C+oPj
'' SIG '' +qFan3vZWb13pz1xJUvMh3aEyPlR+Q2uQjUCgry5mMkq
'' SIG '' TNQVQS+Jf00JDHo5dtXBQf7NEX4OevW3a7BBBQLfZvAH
'' SIG '' cqFDuI0prxR6jOhsO+UT7RkjFGMQUCTW+I/dsB3HxS9X
'' SIG '' w/W/J1Otfjpqf556/WEwiiEl1o8+zNmw1MlSu+IzNRLH
'' SIG '' Svzd02NGVLMzRCLUzeuGB0JbzD74RpOD75F88r60f01r
'' SIG '' K7BvNVPNieF+FiWno4HAc4ZzzQWNMIIHmDCCBYCgAwIB
'' SIG '' AgITMwAAAAPG+bTDrr5ZSwAAAAAAAzANBgkqhkiG9w0B
'' SIG '' AQsFADCBlDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldh
'' SIG '' c2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNV
'' SIG '' BAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjE+MDwGA1UE
'' SIG '' AxM1TWljcm9zb2Z0IERldmVsb3BtZW50IFJvb3QgQ2Vy
'' SIG '' dGlmaWNhdGUgQXV0aG9yaXR5IDIwMTQwHhcNMTQwNTI4
'' SIG '' MTczMzMzWhcNMjkwNTI4MTc0MzMzWjB9MQswCQYDVQQG
'' SIG '' EwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UE
'' SIG '' BxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENv
'' SIG '' cnBvcmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2
'' SIG '' ZWxvcG1lbnQgUENBIDIwMTQwggIiMA0GCSqGSIb3DQEB
'' SIG '' AQUAA4ICDwAwggIKAoICAQDLUwxB+U1EJMjaZU5mbMWC
'' SIG '' lXByM/O3LoauFkG83NS4afsSwJS+r5TCf3acPNNU1LWI
'' SIG '' 7Y+xDBtRSo/qkOOsTvff0hJ7jn9y0DU8rOjpZ8zpMjIx
'' SIG '' 6ENf3xSaQI8YC5kHEztxkpsdGfmblfdPNWE4VjKy7WSE
'' SIG '' GPpahbGSvwG4xpaTBDqo6uyC6s0egsLmAOSZPYml3XEg
'' SIG '' nojdXk2tbc8J86imE28MA+EMLpi0wqMHnBpvX9N2L76Z
'' SIG '' 7pXGsJRfsbimS5MvAvHMI8JDljilv5t8LWwcNUe4gDzn
'' SIG '' +p8MnO/fXozPdAsMM5d/6gTVxTPTD56wkCXauv1onsm0
'' SIG '' AW6p72MzMOkIyOuTz1uZv6HKVDrAih2TbIrQvC/HIv5A
'' SIG '' 40R2mtKU3xdlS3smgM7ZRzNN9Wbk/MbNcqx+8XCSgz5y
'' SIG '' IZDA7I3/WbFbszJQlMXBbHtqVsj5EHxLGp5hLKIh7l+c
'' SIG '' pGTsMtK0e5qIQqksVi4Xlv6TK0QMXp8jzgL2O4mYwEH8
'' SIG '' Qdf6KH1EAfKRstG6Yp7YBWMGVqbCGAFm/b1EK01ZwvCb
'' SIG '' LBB0NG8goSo9WM5c8FHhJaHpv7M1cckNZcVsdQG3w/yz
'' SIG '' lpPC2K9NWSr9zM+m88O1lpJ6q7RKrjiiAj3mkZDdo+yp
'' SIG '' JckIwVGxqSBcjGo6kecJEn/OynjPKEOqdAtcnhFw/8RZ
'' SIG '' NQIDAQABo4IB9zCCAfMwEAYJKwYBBAGCNxUBBAMCAQAw
'' SIG '' HQYDVR0OBBYEFITdEDZ7C9IIoyZWnyKVJUGFLAnAMGQG
'' SIG '' A1UdIARdMFswBgYEVR0gADBRBgwrBgEEAYI3TIN9AQEw
'' SIG '' QTA/BggrBgEFBQcCARYzaHR0cDovL3d3dy5taWNyb3Nv
'' SIG '' ZnQuY29tL3BraW9wcy9Eb2NzL1JlcG9zaXRvcnkuaHRt
'' SIG '' MBkGCSsGAQQBgjcUAgQMHgoAUwB1AGIAQwBBMAsGA1Ud
'' SIG '' DwQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB8GA1UdIwQY
'' SIG '' MBaAFIVwAJ93WR6MrDyfdyYoGcyawY8yMHgGA1UdHwRx
'' SIG '' MG8wbaBroGmGZ2h0dHA6Ly93d3cubWljcm9zb2Z0LmNv
'' SIG '' bS9wa2lvcHMvY3JsL01pY3Jvc29mdCUyMERldmVsb3Bt
'' SIG '' ZW50JTIwUm9vdCUyMENlcnRpZmljYXRlJTIwQXV0aG9y
'' SIG '' aXR5JTIwMjAxNC5jcmwwgYUGCCsGAQUFBwEBBHkwdzB1
'' SIG '' BggrBgEFBQcwAoZpaHR0cDovL3d3dy5taWNyb3NvZnQu
'' SIG '' Y29tL3BraW9wcy9jZXJ0cy9NaWNyb3NvZnQlMjBEZXZl
'' SIG '' bG9wbWVudCUyMFJvb3QlMjBDZXJ0aWZpY2F0ZSUyMEF1
'' SIG '' dGhvcml0eSUyMDIwMTQuY3J0MA0GCSqGSIb3DQEBCwUA
'' SIG '' A4ICAQBO6h0M/tOC0XVf8DDfd42sg1awNM2+pwfzdKzu
'' SIG '' PEpdH9q9KvZo+yo3Q5cJeSwBvaHUmnU4lJdiyOtzvImU
'' SIG '' Q8sotEtVufFW1STiy6fwRkDW/jD+KTJT7TkhA3MwlS1q
'' SIG '' sYcD31F88UYT+fUFRN0PkmM6cczPoFXxbS2VIeB2VGSV
'' SIG '' 2WaPf2slxYqGGXE0xVMi9txVm9q65qXy9/YsdkbSYd5I
'' SIG '' 2uNwHlXgMYxb9LPCHfr/frGNtd7+lP0BSsv6H0wNtFpy
'' SIG '' IoK2KyNTCp0u31U9/BizMltOsa8Av5r4kVYucU5EUsc1
'' SIG '' edN1SrhEpaX5Z0TPJzDceE9+CdWhUcBrP4rjWQtx78qS
'' SIG '' NZ3RKreMdSBDknQuEt9OentZpgxlh8qbaVN1IqzZ9tkP
'' SIG '' Ob7Gk0nhbdhjcuWGXCnH1dul+V6TObDFhMlx4hVUpsyK
'' SIG '' qR5GJE3kPJ/BBd+MNDNuBcGhQNmoC5VJcwwDT8zDfFIj
'' SIG '' 3qQ2xc2CPcv48BJ82BwtXbe6BX7ADhmfUntTPwaavZQn
'' SIG '' Yk9VA5biia/zzGeVMC0atAC7Vcdvi5B9TU8sQlCEYz4r
'' SIG '' dsME91bg4DF2UOUCDACqDk/0pCkfEpZiqGTc8cMOJtdi
'' SIG '' 48atpGgAZzBBARcf32Fki4MdN7qC8WidtGmfrYLc2xNS
'' SIG '' 1kxVCwzN89W5Wcb3cYt9/3FePdneADGCAsgwggLEAgEB
'' SIG '' MIGUMH0xCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNo
'' SIG '' aW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQK
'' SIG '' ExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xJzAlBgNVBAMT
'' SIG '' Hk1pY3Jvc29mdCBEZXZlbG9wbWVudCBQQ0EgMjAxNAIT
'' SIG '' MwAABqK9Z7xIY6KunQAAAAAGojANBglghkgBZQMEAgEF
'' SIG '' AKCCAQQwGQYJKoZIhvcNAQkDMQwGCisGAQQBgjcCAQQw
'' SIG '' HAYKKwYBBAGCNwIBCzEOMAwGCisGAQQBgjcCARUwLwYJ
'' SIG '' KoZIhvcNAQkEMSIEIMQxWWH3f0SoxzhOQoL/5WBpLL+M
'' SIG '' h9+5YC4NsiyvzvYfMDwGCisGAQQBgjcKAxwxLgwsc1BZ
'' SIG '' N3hQQjdoVDVnNUhIcll0OHJETFNNOVZ1WlJ1V1phZWYy
'' SIG '' ZTIyUnM1ND0wWgYKKwYBBAGCNwIBDDFMMEqgJIAiAE0A
'' SIG '' aQBjAHIAbwBzAG8AZgB0ACAAVwBpAG4AZABvAHcAc6Ei
'' SIG '' gCBodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vd2luZG93
'' SIG '' czANBgkqhkiG9w0BAQEFAASCAQAWRhkp6Z9sI2E5654l
'' SIG '' rrF57iYSIXGiBkNoEFUdPS4zt6DHFkFKgx7I5ocZDnXN
'' SIG '' WxZFSbU3ePHvSk1njpNrs6mP5XblFEsytNPdCespztNG
'' SIG '' u4iUWsWSjmf1CZu61773me6emdXtH90T2aS1J0qjpT18
'' SIG '' u7ZXZUgnvNgPRWlgenmNEcMJ7iGAbJS8KC2ybxUhrenN
'' SIG '' ss0NhVztweKfOtZqpP/+d8FpXJNwcSmxMRkY3NkdHuDr
'' SIG '' fQs9y34bYOXwUxcKO9gBiFkSvn2R4OkZlwvYdiI6s4iy
'' SIG '' cC/R9SUujU+EOuaALVVt4id3vHY/J75wHOXLRTmodQJa
'' SIG '' YhWmmPF4PxUl2jtS
'' SIG '' End signature block
