' Windows Installer utility to list feature composition in an MSI database
' For use with Windows Scripting Host, CScript.exe or WScript.exe
' Copyright (c) Microsoft Corporation. All rights reserved.
' Demonstrates the use of adding temporary columns to a read-only database
'
Option Explicit
Public isGUI, installer, database, message, featureParam, nextSequence  'global variables accessed across functions

Const msiOpenDatabaseModeReadOnly = 0
Const msiDbNullInteger            = &h80000000
Const msiViewModifyUpdate         = 2

' Check if run from GUI script host, in order to modify display
If UCase(Mid(Wscript.FullName, Len(Wscript.Path) + 2, 1)) = "W" Then isGUI = True

' Show help if no arguments or if argument contains ?
Dim argCount:argCount = Wscript.Arguments.Count
If argCount > 0 Then If InStr(1, Wscript.Arguments(0), "?", vbTextCompare) > 0 Then argCount = 0
If argCount = 0 Then
	Wscript.Echo "Windows Installer utility to list feature composition in an installer database." &_
		vbLf & " The 1st argument is the path to an install database, relative or complete path" &_
		vbLf & " The 2nd argument is the name of the feature (the primary key of Feature table)" &_
		vbLf & " If the 2nd argument is not present, all feature names will be listed as a tree" &_
		vbLf & " If the 2nd argument is ""*"" then the composition of all features will be listed" &_
		vbLf & " Large databases or features are better displayed by using CScript than WScript" &_
		vbLf & " Note: The name of the feature, if provided,  is case-sensitive" &_
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
REM Set database = installer.OpenDatabase(databasePath, 1) : CheckError

If argCount = 1 Then  'If no feature specified, then simply list features
	ListFeatures False
	ShowOutput "Features for " & databasePath, message
ElseIf Left(Wscript.Arguments(1), 1) = "*" Then 'List all features
	ListFeatures True
Else
	QueryFeature Wscript.Arguments(1) 
End If
Wscript.Quit 0

' List all table rows referencing a given feature
Function QueryFeature(feature)
	' Get feature info and format output header
	Dim view, record, header, parent
	Set view = database.OpenView("SELECT `Feature_Parent` FROM `Feature` WHERE `Feature` = ?") : CheckError
	Set featureParam = installer.CreateRecord(1)
	featureParam.StringData(1) = feature
	view.Execute featureParam : CheckError
	Set record = view.Fetch : CheckError
	Set view = Nothing
	If record Is Nothing Then Fail "Feature not in database: " & feature
	parent = record.StringData(1)
	header = "Feature: "& feature & "  Parent: " & parent

	' List of tables with foreign keys to Feature table - with subsets of columns to display
	DoQuery "FeatureComponents","Component_"                         '
	DoQuery "Condition",        "Level,Condition"                    '
	DoQuery "Billboard",        "Billboard,Action"                   'Ordering

	QueryFeature = ShowOutput(header, message)
	message = Empty
End Function

' Query used for sorting and corresponding record field indices
const irecParent   = 1  'put first in order to use as query parameter
const irecChild    = 2  'primary key of Feature table
const irecSequence = 3  'temporary column added for sorting
const sqlSort = "SELECT `Feature_Parent`,`Feature`,`Sequence` FROM `Feature`"

' Recursive function to resolve parent feature chain, return tree level (low order 8 bits of sequence number)
Function LinkParent(childView)
	Dim view, record, level
	On Error Resume Next
	Set record = childView.Fetch
	If record Is Nothing Then Exit Function  'return Empty if no record found
	If Not record.IsNull(irecSequence) Then LinkParent = (record.IntegerData(irecSequence) And 255) + 1 : Exit Function 'Already resolved
	If record.IsNull(irecParent) Or record.StringData(irecParent) = record.StringData(irecChild) Then 'Root node
		level = 0
	Else  'child node, need to get level from parent
		Set view = database.OpenView(sqlSort & " WHERE `Feature` = ?") : CheckError
		view.Execute record : CheckError '1st param is parent feature
		level = LinkParent(view)
		If IsEmpty(level) Then Fail "Feature parent does not exist: " & record.StringData(irecParent)
	End If
	record.IntegerData(irecSequence) = nextSequence + level
	nextSequence = nextSequence + 256
	childView.Modify msiViewModifyUpdate, record : CheckError
	LinkParent = level + 1
End Function

' List all features in database, sorted hierarchically
Sub ListFeatures(queryAll)
	Dim viewSchema, view, record, feature, level
	On Error Resume Next
	Set viewSchema = database.OpenView("ALTER TABLE Feature ADD Sequence LONG TEMPORARY") : CheckError
	viewSchema.Execute : CheckError  'Add ordering column, keep view open to hold temp columns
	Set view = database.OpenView(sqlSort) : CheckError
	view.Execute : CheckError
	nextSequence = 0
	While LinkParent(view) : Wend  'Loop to link rows hierachically
	Set view = database.OpenView("SELECT `Feature`,`Title`, `Sequence` FROM `Feature` ORDER BY Sequence") : CheckError
	view.Execute : CheckError
	Do
		Set record = view.Fetch : CheckError
		If record Is Nothing Then Exit Do
		feature = record.StringData(1)
		level = record.IntegerData(3) And 255
		If queryAll Then
			If QueryFeature(feature) = vbCancel Then Exit Sub
		Else
			If Not IsEmpty(message) Then message = message & vbLf
			message = message & Space(level * 2) & feature & "  (" & record.StringData(2) & ")"
		End If
	Loop
End Sub

' Perform a join to query table rows linked to a given feature, delimiting and qualifying names to prevent conflicts
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
	query = "SELECT `" & columnList & "` FROM `" & tableList & "` WHERE `Feature_` = ?" & query
	If database.TablePersistent(table) <> 1 Then Exit Sub
	Set view = database.OpenView(query) : CheckError
	view.Execute featureParam : CheckError
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
'' SIG '' MIIROAYJKoZIhvcNAQcCoIIRKTCCESUCAQExDzANBglg
'' SIG '' hkgBZQMEAgEFADB3BgorBgEEAYI3AgEEoGkwZzAyBgor
'' SIG '' BgEEAYI3AgEeMCQCAQEEEE7wKRaZJ7VNj+Ws4Q8X66sC
'' SIG '' AQACAQACAQACAQACAQAwMTANBglghkgBZQMEAgEFAAQg
'' SIG '' o40u8w/79QYYEVTk+LHUW40T5s95rhdh/xj2PF/Wgf2g
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
'' SIG '' BAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQgZi2jXnHmXUs+
'' SIG '' wBApyuT8W3+JK0Ql3la+1qnCnmPAE0QwPAYKKwYBBAGC
'' SIG '' NwoDHDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005
'' SIG '' VnVaUnVXWmFlZjJlMjJSczU0PTBaBgorBgEEAYI3AgEM
'' SIG '' MUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABXAGkA
'' SIG '' bgBkAG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0
'' SIG '' LmNvbS93aW5kb3dzMA0GCSqGSIb3DQEBAQUABIIBABBi
'' SIG '' 2qHjaHcPcACVaicoBZqjF7QZbpGy9eyUzgKdgTCjv1bt
'' SIG '' yzJ3Gf+B99Z+gyVHqBJXT3znaUuZkmBAU7PhoqjvDXSd
'' SIG '' N0i9dwXhRPARTVCa/Xvuo6r8T7Zv4dsIGAm0FmcCciRf
'' SIG '' ywlML1k14TL1JfqAUbnQzC+mHwONVduYUN64cyuo+qlU
'' SIG '' bDPqAWEMh61Jueb55dAbTx4VJrxvVfRnRfGmfh2vMD54
'' SIG '' SSj0VP5fB1T2kWgn4+df0Hz2bmxCF+9GdtkAFpy4lk9W
'' SIG '' urljWLTDlwdNbVPBYy/oneVuBNdfkQkYZ85N6l8eJmxp
'' SIG '' aU09cev+NUIKWP/gWL/o9AnfrtvlcqQ=
'' SIG '' End signature block
