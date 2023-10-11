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
'' SIG '' MIIROAYJKoZIhvcNAQcCoIIRKTCCESUCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' +3czCZ7bOIQLc7kJN8m8lyJpE9uBKr7KXjIe8c3/+0yg
'' SIG '' gg3IMIIGKDCCBBCgAwIBAgITMwAABrG6aGhh3T/S4QAA
'' SIG '' AAAGsTANBgkqhkiG9w0BAQsFADB9MQswCQYDVQQGEwJV
'' SIG '' UzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMH
'' SIG '' UmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
'' SIG '' cmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2ZWxv
'' SIG '' cG1lbnQgUENBIDIwMTQwHhcNMjMwNzEzMjIzNzIwWhcN
'' SIG '' MjQwOTE1MjIzNzIwWjB/MQswCQYDVQQGEwJVUzETMBEG
'' SIG '' A1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
'' SIG '' ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9u
'' SIG '' MSkwJwYDVQQDEyBNaWNyb3NvZnQgV2luZG93cyBLaXRz
'' SIG '' IFB1Ymxpc2hlcjCCASIwDQYJKoZIhvcNAQEBBQADggEP
'' SIG '' ADCCAQoCggEBAJBcN+eOn5wG7eAY4tnptAO9YcTSIP2/
'' SIG '' QUoogo7Y/w/HgBlVZi+NW5ZvaQj0hUZihGEnUWD4fvhp
'' SIG '' 2PpBLre4LdwMjJ7gnNCwa3jtO7+bZi6bchSajzZVZxXL
'' SIG '' s6lg2G4NYrk/Dm9eHABSreM1d4rt7Rcy3UIzqXTHga/2
'' SIG '' o90tWR179JgpBxMju/F/lCxJJA979SZyrMT3uS9ubWIh
'' SIG '' sFLKBfurt4bb+AhHepTNx+ICT2O+m6z8jktICc5Z0Z5f
'' SIG '' x57595plSzca67m56fKLjpbVC14kxeE7xwL9vOZlq4xG
'' SIG '' FhWAHwtgCrkRTpMnIGmCL3k/5tkWE0UQds1nc+nPqyNh
'' SIG '' fWsCAwEAAaOCAZ0wggGZMDcGA1UdJQQwMC4GCisGAQQB
'' SIG '' gjcKAw0GCisGAQQBgjcKAxQGCisGAQQBgjcKAxsGCCsG
'' SIG '' AQUFBwMDMB0GA1UdDgQWBBQEkEMReeaiQdy12lrprkX9
'' SIG '' Sl2XPTBFBgNVHREEPjA8pDowODEeMBwGA1UECxMVTWlj
'' SIG '' cm9zb2Z0IENvcnBvcmF0aW9uMRYwFAYDVQQFEw0yMzEx
'' SIG '' MzkrNTAxMTIzMB8GA1UdIwQYMBaAFITdEDZ7C9IIoyZW
'' SIG '' nyKVJUGFLAnAMF0GA1UdHwRWMFQwUqBQoE6GTGh0dHA6
'' SIG '' Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY3JsL01p
'' SIG '' Y3Jvc29mdCUyMERldmVsb3BtZW50JTIwUENBJTIwMjAx
'' SIG '' NC5jcmwwagYIKwYBBQUHAQEEXjBcMFoGCCsGAQUFBzAC
'' SIG '' hk5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3Bz
'' SIG '' L2NlcnRzL01pY3Jvc29mdCUyMERldmVsb3BtZW50JTIw
'' SIG '' UENBJTIwMjAxNC5jcnQwDAYDVR0TAQH/BAIwADANBgkq
'' SIG '' hkiG9w0BAQsFAAOCAgEAafxX5KMH8TcjV52+BhSRZZG+
'' SIG '' Zk//aPIteDb5mhHpUVED8TvD5BMXgtADdWTMTYLEF7qC
'' SIG '' R12hbV2BmXGsXTjJC1puZ52UTkQ8OLOiSVdyMymsbcje
'' SIG '' MvjEFMQk8gfh/ha485cXM4kd7l3bgLKmqVvI8NEps0dx
'' SIG '' 2K2I5n93mfCB68ilIXd8xE2LaNDwKd/mLGD7x0BJpZwh
'' SIG '' iOBwjIK+CpruqGCMHqp5C2gXlMhjSozXDbnhVvD1sHBq
'' SIG '' wWmjJRiqcbc2xDduzo+/lBfj3pJeSrPcVQBQlUyaR0kX
'' SIG '' zOuGAorX1MNylINGtZKEQT2P0q+oBbkMNqI8iz5Vyjvn
'' SIG '' 3fhkvtYTzFOTZZ3TtBqSS7y7Fk9YADVplo4GZGwHBVs8
'' SIG '' GQn2t1gNiiMx4M17Bwt+ZBK688tnE/yFLQJk9IXEKI01
'' SIG '' Z5+l+DG+JnvAszvfC5sTq817AZ9rzJpNBFnxPdtIywNl
'' SIG '' IwBMAshPGzyKkVpvRhZIl3gb5x959DlH3+oEO6pVvBts
'' SIG '' V7ZgQ40XBhTe7EAb2Hb/7TAU4cJsgJJHJdYO4cG7EU/Q
'' SIG '' VhuTYvJN5FKSWd7b2wmJDAFaBZ0tHO1XM/81fM/bJsMp
'' SIG '' A1jqyFigN6zZS2XABqd5zb/CDoUm5ewGw5d0WhjMMaAV
'' SIG '' 64JJYh/WTJfQohaeJn7pIWvBACZ58GYYAR+2xPQ0hn4w
'' SIG '' ggeYMIIFgKADAgECAhMzAAAAA8b5tMOuvllLAAAAAAAD
'' SIG '' MA0GCSqGSIb3DQEBCwUAMIGUMQswCQYDVQQGEwJVUzET
'' SIG '' MBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVk
'' SIG '' bW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0
'' SIG '' aW9uMT4wPAYDVQQDEzVNaWNyb3NvZnQgRGV2ZWxvcG1l
'' SIG '' bnQgUm9vdCBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkgMjAx
'' SIG '' NDAeFw0xNDA1MjgxNzMzMzNaFw0yOTA1MjgxNzQzMzNa
'' SIG '' MH0xCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5n
'' SIG '' dG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVN
'' SIG '' aWNyb3NvZnQgQ29ycG9yYXRpb24xJzAlBgNVBAMTHk1p
'' SIG '' Y3Jvc29mdCBEZXZlbG9wbWVudCBQQ0EgMjAxNDCCAiIw
'' SIG '' DQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBAMtTDEH5
'' SIG '' TUQkyNplTmZsxYKVcHIz87cuhq4WQbzc1Lhp+xLAlL6v
'' SIG '' lMJ/dpw801TUtYjtj7EMG1FKj+qQ46xO99/SEnuOf3LQ
'' SIG '' NTys6OlnzOkyMjHoQ1/fFJpAjxgLmQcTO3GSmx0Z+ZuV
'' SIG '' 9081YThWMrLtZIQY+lqFsZK/AbjGlpMEOqjq7ILqzR6C
'' SIG '' wuYA5Jk9iaXdcSCeiN1eTa1tzwnzqKYTbwwD4QwumLTC
'' SIG '' owecGm9f03YvvpnulcawlF+xuKZLky8C8cwjwkOWOKW/
'' SIG '' m3wtbBw1R7iAPOf6nwyc799ejM90Cwwzl3/qBNXFM9MP
'' SIG '' nrCQJdq6/WieybQBbqnvYzMw6QjI65PPW5m/ocpUOsCK
'' SIG '' HZNsitC8L8ci/kDjRHaa0pTfF2VLeyaAztlHM031ZuT8
'' SIG '' xs1yrH7xcJKDPnIhkMDsjf9ZsVuzMlCUxcFse2pWyPkQ
'' SIG '' fEsanmEsoiHuX5ykZOwy0rR7mohCqSxWLheW/pMrRAxe
'' SIG '' nyPOAvY7iZjAQfxB1/oofUQB8pGy0bpintgFYwZWpsIY
'' SIG '' AWb9vUQrTVnC8JssEHQ0byChKj1YzlzwUeEloem/szVx
'' SIG '' yQ1lxWx1AbfD/LOWk8LYr01ZKv3Mz6bzw7WWknqrtEqu
'' SIG '' OKICPeaRkN2j7KklyQjBUbGpIFyMajqR5wkSf87KeM8o
'' SIG '' Q6p0C1yeEXD/xFk1AgMBAAGjggH3MIIB8zAQBgkrBgEE
'' SIG '' AYI3FQEEAwIBADAdBgNVHQ4EFgQUhN0QNnsL0gijJlaf
'' SIG '' IpUlQYUsCcAwZAYDVR0gBF0wWzAGBgRVHSAAMFEGDCsG
'' SIG '' AQQBgjdMg30BATBBMD8GCCsGAQUFBwIBFjNodHRwOi8v
'' SIG '' d3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL0RvY3MvUmVw
'' SIG '' b3NpdG9yeS5odG0wGQYJKwYBBAGCNxQCBAweCgBTAHUA
'' SIG '' YgBDAEEwCwYDVR0PBAQDAgGGMA8GA1UdEwEB/wQFMAMB
'' SIG '' Af8wHwYDVR0jBBgwFoAUhXAAn3dZHoysPJ93JigZzJrB
'' SIG '' jzIweAYDVR0fBHEwbzBtoGugaYZnaHR0cDovL3d3dy5t
'' SIG '' aWNyb3NvZnQuY29tL3BraW9wcy9jcmwvTWljcm9zb2Z0
'' SIG '' JTIwRGV2ZWxvcG1lbnQlMjBSb290JTIwQ2VydGlmaWNh
'' SIG '' dGUlMjBBdXRob3JpdHklMjAyMDE0LmNybDCBhQYIKwYB
'' SIG '' BQUHAQEEeTB3MHUGCCsGAQUFBzAChmlodHRwOi8vd3d3
'' SIG '' Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NlcnRzL01pY3Jv
'' SIG '' c29mdCUyMERldmVsb3BtZW50JTIwUm9vdCUyMENlcnRp
'' SIG '' ZmljYXRlJTIwQXV0aG9yaXR5JTIwMjAxNC5jcnQwDQYJ
'' SIG '' KoZIhvcNAQELBQADggIBAE7qHQz+04LRdV/wMN93jayD
'' SIG '' VrA0zb6nB/N0rO48Sl0f2r0q9mj7KjdDlwl5LAG9odSa
'' SIG '' dTiUl2LI63O8iZRDyyi0S1W58VbVJOLLp/BGQNb+MP4p
'' SIG '' MlPtOSEDczCVLWqxhwPfUXzxRhP59QVE3Q+SYzpxzM+g
'' SIG '' VfFtLZUh4HZUZJXZZo9/ayXFioYZcTTFUyL23FWb2rrm
'' SIG '' pfL39ix2RtJh3kja43AeVeAxjFv0s8Id+v9+sY213v6U
'' SIG '' /QFKy/ofTA20WnIigrYrI1MKnS7fVT38GLMyW06xrwC/
'' SIG '' mviRVi5xTkRSxzV503VKuESlpflnRM8nMNx4T34J1aFR
'' SIG '' wGs/iuNZC3HvypI1ndEqt4x1IEOSdC4S3056e1mmDGWH
'' SIG '' yptpU3UirNn22Q85vsaTSeFt2GNy5YZcKcfV26X5XpM5
'' SIG '' sMWEyXHiFVSmzIqpHkYkTeQ8n8EF34w0M24FwaFA2agL
'' SIG '' lUlzDANPzMN8UiPepDbFzYI9y/jwEnzYHC1dt7oFfsAO
'' SIG '' GZ9Se1M/Bpq9lCdiT1UDluKJr/PMZ5UwLRq0ALtVx2+L
'' SIG '' kH1NTyxCUIRjPit2wwT3VuDgMXZQ5QIMAKoOT/SkKR8S
'' SIG '' lmKoZNzxww4m12Ljxq2kaABnMEEBFx/fYWSLgx03uoLx
'' SIG '' aJ20aZ+tgtzbE1LWTFULDM3z1blZxvdxi33/cV492d4A
'' SIG '' MYICyDCCAsQCAQEwgZQwfTELMAkGA1UEBhMCVVMxEzAR
'' SIG '' BgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1v
'' SIG '' bmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlv
'' SIG '' bjEnMCUGA1UEAxMeTWljcm9zb2Z0IERldmVsb3BtZW50
'' SIG '' IFBDQSAyMDE0AhMzAAAGsbpoaGHdP9LhAAAAAAaxMA0G
'' SIG '' CWCGSAFlAwQCAQUAoIIBBDAZBgkqhkiG9w0BCQMxDAYK
'' SIG '' KwYBBAGCNwIBBDAcBgorBgEEAYI3AgELMQ4wDAYKKwYB
'' SIG '' BAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQgxDFZYfd/RKjH
'' SIG '' OE5Cgv/lYGksv4yH37lgLg2yLK/O9h8wPAYKKwYBBAGC
'' SIG '' NwoDHDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005
'' SIG '' VnVaUnVXWmFlZjJlMjJSczU0PTBaBgorBgEEAYI3AgEM
'' SIG '' MUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkA
'' SIG '' bgBkAG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0
'' SIG '' LmNvbS93aW5kb3dzMA0GCSqGSIb3DQEBAQUABIIBAF17
'' SIG '' f40ADW53zrQOmyVHiIHhCLuf3U1wbTRjypdW4BH+Ykkn
'' SIG '' C/VMuS7Qx72qDs6y9i251X/cHfvCnF8Yotrt40CQkFgW
'' SIG '' YPAHmIv76nzjoQwqFFFgvBTCQgqgUaCsC1E8MT6JHP/6
'' SIG '' VhqLT9jxm9sg39GVcr170LT/8Ih8PaWaolR8aybQLSiL
'' SIG '' n30q0t/ttKfFAKVo53NpDhsygnlNCJoEFA7hU/dGUGga
'' SIG '' z6qefz9oi6UO8IPt/6CCNxYiiACmFaKWCP+F3kkWuqwD
'' SIG '' 2FsurCbkFW/H3vkbTQsmTy5puX6WAM9bj5L1DmZFr4x0
'' SIG '' YFivdMFjmvGyqPOcf4xvTHr6rju80nM=
'' SIG '' End signature block
