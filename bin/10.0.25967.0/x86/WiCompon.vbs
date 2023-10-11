' Windows Installer utility to list component composition of an MSI database
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the various tables having foreign keys to the Component table
'
Option Explicit
Public isGUI, installer, database, message, compParam  'global variables access across functions

Const msiOpenDatabaseModeReadOnly     = 0

' Check if run from GUI script host, in order to modify display
If UCase(Mid(Wscript.FullName, Len(Wscript.Path) + 2, 1)) = "W" Then isGUI = True

' Show help if no arguments or if argument contains ?
Dim argCount:argCount = Wscript.Arguments.Count
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If argCount = 0 Then
	Wscript.Echo "Windows Installer utility to list component composition in an install database." &_
		vbLf & " The 1st argument is the path to an install database, relative or complete path" &_
		vbLf & " The 2nd argument is the name of the component (primary key of Component table)" &_
		vbLf & " If the 2nd argument is not present, the names of all components will be listed" &_
		vbLf & " If the 2nd argument is a ""*"", the composition of all components will be listed" &_
		vbLf & " Large databases or components are better displayed using CScript than WScript." &_
		vbLf & " Note: The name of the component, if provided,  is case-sensitive" &_
		vbNewLine &_
		vbNewLine & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

' Connect to Windows Installer object
On Error Resume Next
Set installer = Nothing
Set installer = Wscript.CreateObject("WindowsInstaller.Installer") : CheckError

' Open database
Dim databasePath:databasePath = Wscript.Arguments(0)
Set database = installer.OpenDatabase(databasePath, msiOpenDatabaseModeReadOnly) : CheckError

If argCount = 1 Then  'If no component specified, then simply list components
	ListComponents False
	ShowOutput "Components for " & databasePath, message
ElseIf Left(Wscript.Arguments(1), 1) = "*" Then 'List all components
	ListComponents True
Else
	QueryComponent Wscript.Arguments(1) 
End If
Wscript.Quit 0

' List all table rows referencing a given component
Function QueryComponent(component)
	' Get component info and format output header
	Dim view, record, header, componentId
	Set view = database.OpenView("SELECT `ComponentId` FROM `Component` WHERE `Component` = ?") : CheckError
	Set compParam = installer.CreateRecord(1)
	compParam.StringData(1) = component
	view.Execute compParam : CheckError
	Set record = view.Fetch : CheckError
	Set view = Nothing
	If record Is Nothing Then Fail "Component not in database: " & component
	componentId = record.StringData(1)
	header = "Component: "& component & "  ComponentId = " & componentId

	' List of tables with foreign keys to Component table - with subsets of columns to display
	DoQuery "FeatureComponents","Feature_"                           '
	DoQuery "PublishComponent", "ComponentId,Qualifier"              'AppData,Feature
	DoQuery "File",             "File,Sequence,FileName,Version"     'FileSize,Language,Attributes
	DoQuery "SelfReg,File",     "File_"                              'Cost
	DoQuery "BindImage,File",   "File_"                              'Path
	DoQuery "Font,File",        "File_,FontTitle"                    '
	DoQuery "Patch,File",       "File_"                              'Sequence,PatchSize,Attributes,Header
	DoQuery "DuplicateFile",    "FileKey,File_,DestName"             'DestFolder
	DoQuery "MoveFile",         "FileKey,SourceName,DestName"        'SourceFolder,DestFolder,Options
	DoQuery "RemoveFile",       "FileKey,FileName,DirProperty"       'InstallMode
	DoQuery "IniFile",          "IniFile,FileName,Section,Key"       'Value,Action
	DoQuery "RemoveIniFile",    "RemoveIniFile,FileName,Section,Key" 'Value,Action
	DoQuery "Registry",         "Registry,Root,Key,Name"             'Value
	DoQuery "RemoveRegistry",   "RemoveRegistry,Root,Key,Name"       '
	DoQuery "Shortcut",         "Shortcut,Directory_,Name,Target"    'Arguments,Description,Hotkey,Icon_,IconIndex,ShowCmd,WkDir
	DoQuery "Class",            "CLSID,Description"                  'Context,ProgId_Default,AppId_,FileType,Mask,Icon_,IconIndex,DefInprocHandler,Argument,Feature_
	DoQuery "ProgId,Class",     "Class_,ProgId,Description"          'ProgId_Parent,Icon_IconIndex,Insertable
	DoQuery "Extension",        "Extension,ProgId_"                  'MIME_,Feature_
	DoQuery "Verb,Extension",   "Extension_,Verb"                    'Sequence,Command.Argument
	DoQuery "MIME,Extension",   "Extension_,ContentType"             'CLSID
	DoQuery "TypeLib",          "LibID,Language,Version,Description" 'Directory_,Feature_,Cost
	DoQuery "CreateFolder",     "Directory_"                         ' 
	DoQuery "Environment",      "Environment,Name"                   'Value
	DoQuery "ODBCDriver",       "Driver,Description"                 'File_,File_Setup
	DoQuery "ODBCAttribute,ODBCDriver", "Driver_,Attribute,Value" '
	DoQuery "ODBCTranslator",   "Translator,Description"             'File_,File_Setup
	DoQuery "ODBCDataSource",   "DataSource,Description,DriverDescription" 'Registration
	DoQuery "ODBCSourceAttribute,ODBCDataSource", "DataSource_,Attribute,Value" '
	DoQuery "ServiceControl",   "ServiceControl,Name,Event"          'Arguments,Wait
	DoQuery "ServiceInstall",   "ServiceInstall,Name,DisplayName"    'ServiceType,StartType,ErrorControl,LoadOrderGroup,Dependencies,StartName,Password
	DoQuery "ReserveCost",      "ReserveKey,ReserveFolder"           'ReserveLocal,ReserveSource

	QueryComponent = ShowOutput(header, message)
	message = Empty
End Function

' List all components in database
Sub ListComponents(queryAll)
	Dim view, record, component
	Set view = database.OpenView("SELECT `Component`,`ComponentId` FROM `Component`") : CheckError
	view.Execute : CheckError
	Do
		Set record = view.Fetch : CheckError
		If record Is Nothing Then Exit Do
		component = record.StringData(1)
		If queryAll Then
			If QueryComponent(component) = vbCancel Then Exit Sub
		Else
			If Not IsEmpty(message) Then message = message & vbLf
			message = message & component
		End If
	Loop
End Sub

' Perform a join to query table rows linked to a given component, delimiting and qualifying names to prevent conflicts
Sub DoQuery(table, columns)
	Dim view, record, columnCount, column, output, header, delim, columnList, tableList, tableDelim, query, joinTable, primaryKey, foreignKey, columnDelim
	On Error Resume Next
	tableList  = Replace(table,   ",", "`,`")
	tableDelim = InStr(1, table, ",", vbTextCompare)
	If tableDelim Then  ' need a 3-table join
		joinTable = Right(table, Len(table)-tableDelim)
		table = Left(table, tableDelim-1)
		foreignKey = columns
		Set record = database.PrimaryKeys(joinTable)
		primaryKey = record.StringData(1)
		columnDelim = InStr(1, columns, ",", vbTextCompare)
		If columnDelim Then foreignKey = Left(columns, columnDelim - 1)
		query = " AND `" & foreignKey & "` = `" & primaryKey & "`"
	End If
	columnList = table & "`." & Replace(columns, ",", "`,`" & table & "`.`")
	query = "SELECT `" & columnList & "` FROM `" & tableList & "` WHERE `Component_` = ?" & query
	If database.TablePersistent(table) <> 1 Then Exit Sub
	Set view = database.OpenView(query) : CheckError
	view.Execute compParam : CheckError
	Do
		Set record = view.Fetch : CheckError
		If record Is Nothing Then Exit Do
		If IsEmpty(output) Then
			If Not IsEmpty(message) Then message = message & vbLf
			message = message & "----" & table & " Table----  (" & columns & ")" & vbLf
		End If
		output = Empty
		columnCount = record.FieldCount
		delim = "  "
		For column = 1 To columnCount
			If column = columnCount Then delim = vbLf
			output = output & record.StringData(column) & delim
		Next
		message = message & output
	Loop
End Sub

Sub CheckError
	Dim message, errRec
	If Err = 0 Then Exit Sub
	message = Err.Source & " " & Hex(Err) & ": " & Err.Description
	If Not installer Is Nothing Then
		Set errRec = installer.LastErrorRecord
		If Not errRec Is Nothing Then message = message & vbLf & errRec.FormatText
	End If
	Fail message
End Sub

Function ShowOutput(header, message)
	ShowOutput = vbOK
	If IsEmpty(message) Then Exit Function
	If isGUI Then
		ShowOutput = MsgBox(message, vbOKCancel, header)
	Else
		Wscript.Echo "> " & header
		Wscript.Echo message
	End If
End Function

Sub Fail(message)
	Wscript.Echo message
	Wscript.Quit 2
End Sub

'' SIG '' Begin signature block
'' SIG '' MIIRLQYJKoZIhvcNAQcCoIIRHjCCERoCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' WoLLQA6rHA8fttRtGpZpVGF985uNg+TIhlmzKb0W2sOg
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
'' SIG '' KoZIhvcNAQkEMSIEIFPh9s4bTzv27NU4gWcsyD6u/XHE
'' SIG '' 1Rmh5sNcAnfVqYxYMDwGCisGAQQBgjcKAxwxLgwsc1BZ
'' SIG '' N3hQQjdoVDVnNUhIcll0OHJETFNNOVZ1WlJ1V1phZWYy
'' SIG '' ZTIyUnM1ND0wWgYKKwYBBAGCNwIBDDFMMEqgJIAiAE0A
'' SIG '' aQBjAHIAbwBzAG8AZgB0ACAAVwBpAG4AZABvAHcAc6Ei
'' SIG '' gCBodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vd2luZG93
'' SIG '' czANBgkqhkiG9w0BAQEFAASCAQCstiEKjyENE/cyQC8S
'' SIG '' 6GfIzyIt1sMHbo48GkB14jvg5yIYmMvtN95J+jynjMT2
'' SIG '' 7W1wQ4+oY1N6bXTEnRAiS2SAa9YdDDbtBJeUvWXGQ8ee
'' SIG '' oczmw6YioGAzJNXR5kqMpDFRCrU3uqk9h/Nf7+8elLht
'' SIG '' OqzL4bpCwU2y1eCdaZwiwGY361bsbZFZrH24nWOE1igu
'' SIG '' MgSrBnWSmYOnVOo852q1SBDyEdwwKiCceBcWWJM/Zs81
'' SIG '' ANA63zttsDtEGc8fhm6r/d/RKU118yip+9rnj6DpIG5H
'' SIG '' CVsafTTX3ujrMaEmLCCTafwxTS/zl46va29Qz9v3BMzg
'' SIG '' v10MAxGAaVhq6utu
'' SIG '' End signature block
