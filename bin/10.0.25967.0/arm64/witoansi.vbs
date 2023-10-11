' Utility to rewrite a Unicode text file as an ANSI text file
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
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

Dim argCount:argCount = Wscript.Arguments.Count
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If (argCount = 0) Then
	Wscript.Echo "Utility to copy Unicode text file to an ANSI text file." &_
		vbNewLine & "The 1st argument is the Unicode text file to read" &_
		vbNewLine & "The 2nd argument is the ANSI text file to write" &_
		vbNewLine & "If the 2nd argument is omitted, the Unicode file will be replaced" &_
		vbNewLine &_
		vbNewLine & "Copyright (C) Microsoft Corporation.  All rights reserved."
	Wscript.Quit 1
End If

Dim inFile, outFile, inStream, outStream, inLine, FileSys, WshShell
If argCount > 1 Then
	outFile = Wscript.Arguments(1)
	inFile  = Wscript.Arguments(0)
Else
	outFile = Wscript.Arguments(0)
	inFile  = outFile & ".tmp"
	Set WshShell = Wscript.CreateObject("Wscript.Shell")
	WshShell.Run "cmd.exe /c copy " & outFile & " " & inFile, 0, True
End If

Set FileSys = CreateObject("Scripting.FileSystemObject")
Set inStream  = FileSys.OpenTextFile(inFile, ForReading, FailIfNotExist, OpenAsDefault)
Set outStream = FileSys.CreateTextFile(outFile, OverwriteIfExist, OpenAsASCII)
Do
	inLine = inStream.ReadLine
	outStream.WriteLine inLine
Loop Until inStream.AtEndOfStream
inStream.Close
outStream.Close
If argCount = 1 Then WshShell.Run "cmd.exe /c del " & inFile, 0

'' SIG '' Begin signature block
'' SIG '' MIIROAYJKoZIhvcNAQcCoIIRKTCCESUCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' fxiWPm+QzNQ0YA7kbZExIQz83PvQ/BVLEopHuuZIjaug
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
'' SIG '' BAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQgYWMRd3MsOYp4
'' SIG '' D5y2uXlfza53MHbv8VlPA7W8iFlKFakwPAYKKwYBBAGC
'' SIG '' NwoDHDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005
'' SIG '' VnVaUnVXWmFlZjJlMjJSczU0PTBaBgorBgEEAYI3AgEM
'' SIG '' MUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkA
'' SIG '' bgBkAG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0
'' SIG '' LmNvbS93aW5kb3dzMA0GCSqGSIb3DQEBAQUABIIBAFyb
'' SIG '' FnUCz4VerzxDiVkRC5EESP8iYJUMyjK3EjmaMlOcepMS
'' SIG '' /kEMyVIIKge14Lr8ySIoPK2w5TsjeeXZKtNIQWHj417r
'' SIG '' KUHacpa8CGildD8o3MXEgbRSU0l9juHtG6RwFhSSgJG1
'' SIG '' EaP7a9ISRckzO/FwQpN9IJcouU2TZZPLhd8ehpJn/gpc
'' SIG '' 64fs2nnp3yc89hD+OX+zjNu6MjgUZByNR/YrtoVmq2DY
'' SIG '' Svp7vJ2oWpPt7GGC8qFquHD1Ctgyd70wAMvhujK3j2Rv
'' SIG '' R2Dde02lVL40PWsH6pmXH98WuuNBajebqh5/0vEaNg3V
'' SIG '' jKOWLLw4ZW6Dx0/3Vc7m3aaFyRD8vdc=
'' SIG '' End signature block
