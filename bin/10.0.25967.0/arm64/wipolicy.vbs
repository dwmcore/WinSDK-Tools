' Windows Installer utility to manage installer policy settings
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the use of the installer policy keys
' Policy can be configured by an administrator using the NT Group Policy Editor
'
Option Explicit

Dim policies(21, 4)
policies(1, 0)="LM" : policies(1, 1)="HKLM" : policies(1, 2)="Logging"              : policies(1, 3)="REG_SZ"    : policies(1, 4) = "Logging modes if not supplied by install, set of iwearucmpv"
policies(2, 0)="DO" : policies(2, 1)="HKLM" : policies(2, 2)="Debug"                : policies(2, 3)="REG_DWORD" : policies(2, 4) = "OutputDebugString: 1=debug output, 2=verbose debug output, 7=include command line"
policies(3, 0)="DI" : policies(3, 1)="HKLM" : policies(3, 2)="DisableMsi"           : policies(3, 3)="REG_DWORD" : policies(3, 4) = "1=Disable non-managed installs, 2=disable all installs"
policies(4, 0)="WT" : policies(4, 1)="HKLM" : policies(4, 2)="Timeout"              : policies(4, 3)="REG_DWORD" : policies(4, 4) = "Wait timeout in seconds in case of no activity"
policies(5, 0)="DB" : policies(5, 1)="HKLM" : policies(5, 2)="DisableBrowse"        : policies(5, 3)="REG_DWORD" : policies(5, 4) = "Disable user browsing of source locations if 1"
policies(6, 0)="AB" : policies(6, 1)="HKLM" : policies(6, 2)="AllowLockdownBrowse"  : policies(6, 3)="REG_DWORD" : policies(6, 4) = "Allow non-admin users to browse to new sources for managed applications if 1 - use is not recommended"
policies(7, 0)="AM" : policies(7, 1)="HKLM" : policies(7, 2)="AllowLockdownMedia"   : policies(7, 3)="REG_DWORD" : policies(7, 4) = "Allow non-admin users to browse to new media sources for managed applications if 1 - use is not recommended"
policies(8, 0)="AP" : policies(8, 1)="HKLM" : policies(8, 2)="AllowLockdownPatch"   : policies(8, 3)="REG_DWORD" : policies(8, 4) = "Allow non-admin users to apply small and minor update patches to managed applications if 1 - use is not recommended"
policies(9, 0)="DU" : policies(9, 1)="HKLM" : policies(9, 2)="DisableUserInstalls"  : policies(9, 3)="REG_DWORD" : policies(9, 4) = "Disable per-user installs if 1 - available on Windows Installer version 2.0 and later"
policies(10, 0)="DP" : policies(10, 1)="HKLM" : policies(10, 2)="DisablePatch"         : policies(10, 3)="REG_DWORD" : policies(10, 4) = "Disable patch application to all products if 1"
policies(11, 0)="UC" : policies(11, 1)="HKLM" : policies(11, 2)="EnableUserControl"    : policies(11, 3)="REG_DWORD" : policies(11, 4) = "All public properties sent to install service if 1"
policies(12, 0)="ER" : policies(12, 1)="HKLM" : policies(12, 2)="EnableAdminTSRemote"  : policies(12, 3)="REG_DWORD" : policies(12, 4) = "Allow admins to perform installs from terminal server client sessions if 1"
policies(13, 0)="LS" : policies(13, 1)="HKLM" : policies(13, 2)="LimitSystemRestoreCheckpointing" : policies(13, 3)="REG_DWORD" : policies(13, 4) = "Turn off creation of system restore check points on Windows XP if 1 - available on Windows Installer version 2.0 and later"
policies(14, 0)="SS" : policies(14, 1)="HKLM" : policies(14, 2)="SafeForScripting"     : policies(14, 3)="REG_DWORD" : policies(14, 4) = "Do not prompt when scripts within a webpage access Installer automation interface if 1 - use is not recommended"
policies(15, 0)="TP" : policies(15,1)="HKLM" : policies(15, 2)="TransformsSecure"     : policies(15, 3)="REG_DWORD" : policies(15, 4) = "Pin tranforms in secure location if 1 (only admin and system have write privileges to cache location)"
policies(16, 0)="EM" : policies(16, 1)="HKLM" : policies(16, 2)="AlwaysInstallElevated": policies(16, 3)="REG_DWORD" : policies(16, 4) = "System privileges if 1 and HKCU value also set - dangerous policy as non-admin users can install with elevated privileges if enabled"
policies(17, 0)="EU" : policies(17, 1)="HKCU" : policies(17, 2)="AlwaysInstallElevated": policies(17, 3)="REG_DWORD" : policies(17, 4) = "System privileges if 1 and HKLM value also set - dangerous policy as non-admin users can install with elevated privileges if enabled"
policies(18,0)="DR" : policies(18,1)="HKCU" : policies(18,2)="DisableRollback"      : policies(18,3)="REG_DWORD" : policies(18,4) = "Disable rollback if 1 - use is not recommended"
policies(19,0)="TS" : policies(19,1)="HKCU" : policies(19,2)="TransformsAtSource"   : policies(19,3)="REG_DWORD" : policies(19,4) = "Locate transforms at root of source image if 1"
policies(20,0)="SO" : policies(20,1)="HKCU" : policies(20,2)="SearchOrder"          : policies(20,3)="REG_SZ"    : policies(20,4) = "Search order of source types, set of n,m,u (default=nmu)"
policies(21,0)="DM" : policies(21,1)="HKCU" : policies(21,2)="DisableMedia"          : policies(21,3)="REG_DWORD"    : policies(21,4) = "Browsing to media sources is disabled"

Dim argCount:argCount = Wscript.Arguments.Count
Dim message, iPolicy, policyKey, policyValue, WshShell, policyCode
On Error Resume Next

' If no arguments supplied, then list all current policy settings
If argCount = 0 Then
	Set WshShell = WScript.CreateObject("WScript.Shell") : CheckError
	For iPolicy = 0 To UBound(policies)
		policyValue = ReadPolicyValue(iPolicy)
		If Not IsEmpty(policyValue) Then 'policy key present, else skip display
			If Not IsEmpty(message) Then message = message & vbLf
			message = message & policies(iPolicy,0) & ": " & policies(iPolicy,2) & "(" & policies(iPolicy,1) & ") = " & policyValue
		End If
	Next
	If IsEmpty(message) Then message = "No installer policies set"
	Wscript.Echo message
	Wscript.Quit 0
End If

' Check for ?, and show help message if found
policyCode = UCase(Wscript.Arguments(0))
If InStr(1, policyCode, "?", vbTextCompare) <> 0 Then
	message = "Windows Installer utility to manage installer policy settings" &_
		vbLf & " If no arguments are supplied, current policy settings in list will be reported" &_
		vbLf & " The 1st argument specifies the policy to set, using a code from the list below" &_
		vbLf & " The 2nd argument specifies the new policy setting, use """" to remove the policy" &_
		vbLf & " If the 2nd argument is not supplied, the current policy value will be reported"
	For iPolicy = 0 To UBound(policies)
		message = message & vbLf & policies(iPolicy,0) & ": " & policies(iPolicy,2) & "(" & policies(iPolicy,1) & ")  " & policies(iPolicy,4) & vbLf
	Next
	message = message & vblf & vblf & "Copyright (C) Microsoft Corporation.  All rights reserved."

	Wscript.Echo message
	Wscript.Quit 1
End If

' Policy code supplied, look up in array
For iPolicy = 0 To UBound(policies)
	If policies(iPolicy, 0) = policyCode Then Exit For
Next
If iPolicy > UBound(policies) Then Wscript.Echo "Unknown policy code: " & policyCode : Wscript.Quit 2
Set WshShell = WScript.CreateObject("WScript.Shell") : CheckError

' If no value supplied, then simply report current value
policyValue = ReadPolicyValue(iPolicy)
If IsEmpty(policyValue) Then policyValue = "Not present"
message = policies(iPolicy,0) & ": " & policies(iPolicy,2) & "(" & policies(iPolicy,1) & ") = " & policyValue
If argCount > 1 Then ' Value supplied, set policy
	policyValue = WritePolicyValue(iPolicy, Wscript.Arguments(1))
	If IsEmpty(policyValue) Then policyValue = "Not present"
	message = message & " --> " & policyValue
End If
Wscript.Echo message

Function ReadPolicyValue(iPolicy)
	On Error Resume Next
	Dim policyKey:policyKey = policies(iPolicy,1) & "\Software\Policies\Microsoft\Windows\Installer\" & policies(iPolicy,2)
	ReadPolicyValue = WshShell.RegRead(policyKey)
End Function

Function WritePolicyValue(iPolicy, policyValue)
	On Error Resume Next
	Dim policyKey:policyKey = policies(iPolicy,1) & "\Software\Policies\Microsoft\Windows\Installer\" & policies(iPolicy,2)
	If Len(policyValue) Then
		WshShell.RegWrite policyKey, policyValue, policies(iPolicy,3) : CheckError
		WritePolicyValue = policyValue
	ElseIf Not IsEmpty(ReadPolicyValue(iPolicy)) Then
		WshShell.RegDelete policyKey : CheckError
	End If
End Function

Sub CheckError
	Dim message, errRec
	If Err = 0 Then Exit Sub
	message = Err.Source & " " & Hex(Err) & ": " & Err.Description
	If Not installer Is Nothing Then
		Set errRec = installer.LastErrorRecord
		If Not errRec Is Nothing Then message = message & vbLf & errRec.FormatText
	End If
	Wscript.Echo message
	Wscript.Quit 2
End Sub

'' SIG '' Begin signature block
'' SIG '' MIIROAYJKoZIhvcNAQcCoIIRKTCCESUCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' /P2vh2Oob6dK4LJgJX9q0NCUL4Tr2otbVtqd2lYQZG6g
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
'' SIG '' BAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQgG74cd1WwHhi9
'' SIG '' o902FBuqooOIxL5KiicynZhgW/cwOaswPAYKKwYBBAGC
'' SIG '' NwoDHDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005
'' SIG '' VnVaUnVXWmFlZjJlMjJSczU0PTBaBgorBgEEAYI3AgEM
'' SIG '' MUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkA
'' SIG '' bgBkAG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0
'' SIG '' LmNvbS93aW5kb3dzMA0GCSqGSIb3DQEBAQUABIIBAANc
'' SIG '' mK3Yp7dOoQ79oePz+TaJY5Gklpdeb1vpoum3ZWcucjp0
'' SIG '' pw4VJoAyH9wUxaBMgPmF3h+U3W/PujFUK3VKkFvM54Va
'' SIG '' K5lLirDehyozFQvX8B224RBTKDnwj60ovp2IHajoYYt8
'' SIG '' vopxGoKzdEHlZNietaXtahXiZ/8fUBpI74XS3RN3dJuc
'' SIG '' JtyhTW1CoM+FxpZzStVaXhRJM2noru9EzdNq/yvZRN9k
'' SIG '' cO089unAMKuJol1ZKsG6xyzu3fA2uyR36HV1gC+pebTa
'' SIG '' PECpZZ9BhqoZDjWSz7jewTl030R9rcL+sFPfDYiM3UBp
'' SIG '' rvpC19xgtqjyZix8DVvB4dEznuW3tq4=
'' SIG '' End signature block
