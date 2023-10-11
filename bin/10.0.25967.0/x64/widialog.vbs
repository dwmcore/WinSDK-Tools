' Windows Installer utility to preview dialogs from a install database
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the use of preview APIs
'
Option Explicit

Const msiOpenDatabaseModeReadOnly = 0

' Show help if no arguments or if argument contains ?
Dim argCount : argCount = Wscript.Arguments.Count
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If argCount = 0 Then
	Wscript.Echo "Windows Installer utility to preview dialogs from an install database." &_
		vbLf & " The 1st argument is the path to an install database, relative or complete path" &_
		vbLf & " Subsequent arguments are dialogs to display (primary key of Dialog table)" &_
		vbLf & " To show a billboard, append the Control name (Control table key) and Billboard" &_
		vbLf & "       name (Billboard table key) to the Dialog name, separated with colons." &_
		vbLf & " If no dialogs specified, all dialogs in Dialog table are displayed sequentially" &_
		vbLf & " Note: The name of the dialog, if provided,  is case-sensitive" &_
		vblf &_
		vblf & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

' Connect to Windows Installer object
On Error Resume Next
Dim installer : Set installer = Nothing
Set installer = Wscript.CreateObject("WindowsInstaller.Installer") : CheckError

' Open database
Dim databasePath : databasePath = Wscript.Arguments(0)
Dim database : Set database = installer.OpenDatabase(databasePath, msiOpenDatabaseModeReadOnly) : CheckError

' Create preview object
Dim preview : Set preview = Database.EnableUIpreview : CheckError

' Get properties from Property table and put into preview object
Dim record, view : Set view = database.OpenView("SELECT `Property`,`Value` FROM `Property`") : CheckError
view.Execute : CheckError
Do
	Set record = view.Fetch : CheckError
	If record Is Nothing Then Exit Do
	preview.Property(record.StringData(1)) = record.StringData(2) : CheckError
Loop

' Loop through list of dialog names and display each one
If argCount = 1 Then ' No dialog name, loop through all dialogs
	Set view = database.OpenView("SELECT `Dialog` FROM `Dialog`") : CheckError
	view.Execute : CheckError
	Do
		Set record = view.Fetch : CheckError
		If record Is Nothing Then Exit Do
		preview.ViewDialog(record.StringData(1)) : CheckError
		Wait
	Loop
Else ' explicit dialog names supplied
	Set view = database.OpenView("SELECT `Dialog` FROM `Dialog` WHERE `Dialog`=?") : CheckError
	Dim paramRecord, argNum, argArray, dialogName, controlName, billboardName
	Set paramRecord = installer.CreateRecord(1)
	For argNum = 1 To argCount-1
		dialogName = Wscript.Arguments(argNum)
		argArray = Split(dialogName,":",-1,vbTextCompare)
		If UBound(argArray) <> 0 Then  ' billboard to add to dialog
			If UBound(argArray) <> 2 Then Fail "Incorrect billboard syntax, must specify 3 values"
			dialogName    = argArray(0)
			controlName   = argArray(1) ' we could validate that controlName is in the Control table
			billboardName = argArray(2) ' we could validate that billboard is in the Billboard table
		End If
		paramRecord.StringData(1) = dialogName
		view.Execute paramRecord : CheckError
		If view.Fetch Is Nothing Then Fail "Dialog not found: " & dialogName
		preview.ViewDialog(dialogName) : CheckError
		If UBound(argArray) = 2 Then preview.ViewBillboard controlName, billboardName : CheckError
		Wait
	Next
End If
preview.ViewDialog ""  ' clear dialog, must do this to release object deadlock

' Wait until user input to clear dialog. Too bad there's no function to wait for keyboard input
Sub Wait
	Dim shell : Set shell = Wscript.CreateObject("Wscript.Shell")
	MsgBox "Next",0,"Drag me away"
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

Sub Fail(message)
	Wscript.Echo message
	Wscript.Quit 2
End Sub

'' SIG '' Begin signature block
'' SIG '' MIIRLQYJKoZIhvcNAQcCoIIRHjCCERoCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' mOr7DzNLA7B3kQygPHKkFo0lJ4ImjipM2G/ZKh4w1cKg
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
'' SIG '' KoZIhvcNAQkEMSIEIEBA3MbSnbhNQ3UvxkNEqfdFY2jD
'' SIG '' JIQq8JrkL272eOC6MDwGCisGAQQBgjcKAxwxLgwsc1BZ
'' SIG '' N3hQQjdoVDVnNUhIcll0OHJETFNNOVZ1WlJ1V1phZWYy
'' SIG '' ZTIyUnM1ND0wWgYKKwYBBAGCNwIBDDFMMEqgJIAiAE0A
'' SIG '' aQBjAHIAbwBzAG8AZgB0ACAAVwBpAG4AZABvAHcAc6Ei
'' SIG '' gCBodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vd2luZG93
'' SIG '' czANBgkqhkiG9w0BAQEFAASCAQBCMB1tca6Rw9T5gUrY
'' SIG '' hXKB+vRnUCGyhZqNpGbJCW7TxSpQZRsVzPlgabLg1T7x
'' SIG '' HVnQsm/34Qmlg+khfOI7k6d1mTV9DVRaNN+NgKZIB3Lz
'' SIG '' QoQfOzE6gzP9MY3WleBtciRm8+/gz+XHsi18wg7CwZLP
'' SIG '' 7igPHYXqMopvi3vealhoBlQbwOLHKtKj5i2k4QAj1q0e
'' SIG '' u3Iqo+Q1ZzRrKTF/HxuSoq5LWHM9Ex4jJxqrXQf6zhHN
'' SIG '' LByLl4Echsx8VitfTttqWt02ft+oOFTlr53KdVX08H8B
'' SIG '' bPpsSyJATvVaac6/CN7CPWPe3KYCgQRtZnp0buA6BMTx
'' SIG '' j/6knjlro54hs04i
'' SIG '' End signature block
