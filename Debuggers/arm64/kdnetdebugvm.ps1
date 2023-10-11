#
# Argument initialization
#

$nextarg = "none"
$DebugPort = "unassigned"
$targetcomputer = "."
$VMName = ""
$VMGuid = ""
$AutoAssign = "false"
$DebugOff = "false"

function funHelp()
{
$helpText=@"

DESCRIPTION:
NAME: kdnetdebugvm.ps1
Displays (and optionally sets) the port used to network debug a VM.

PARAMETERS: 
-computerName Specifies the name of the computer on which to run the script
-help         Displays help
-vmname       (optional) Name of the VM of interest
-vmguid       (optional) GUID of the VM of interest
-port         (optional) Network port to use for debugging
-debugoff
-autoassign

Either vmname or vmguid must be specified to identify the VM, but not both.
Note that vmname may not uniquely identify the VM, but vmguid does.

SYNTAX:
kdnetdebugvm.ps1 [-computerName targetcomputer] [-vmname NameOfVM] [-vmguid GuidOfVM] [-port PortNumber]

"@
$helpText
exit
}


foreach ($argument in $args)
{
    # parse commands with no following arguments
    switch ($argument)
    {
        "?"     {funHelp}
        "help"  {funHelp}
        "-help" {funHelp}
        "/?"    {funHelp}
        "-?"    {funHelp}
        "autoassign"    {$AutoAssign = "true"}
        "-autoassign"   {$AutoAssign = "true"}
        "/autoassign"   {$AutoAssign = "true"}
        "debugoff"        {$DebugOff = "true"}
        "-debugoff"       {$DebugOff = "true"}
        "/debugoff"       {$DebugOff = "true"}
        default {}
    }

    # parse values that followed a switch

    switch ($nextarg)
    {
        "vmname"        {$VMName = $argument}
        "-vmname"       {$VMName = $argument}
        "/vmname"       {$VMName = $argument}
        "vmguid"        {$VMGuid = $argument}
        "-vmguid"       {$VMGuid = $argument}
        "/vmguid"       {$VMGuid = $argument}
        "port"          {$DebugPort = $argument}
        "-port"         {$DebugPort = $argument}
        "/port"         {$DebugPort = $argument}
        "computername"  {$targetcomputer = $argument}
        "-computername" {$targetcomputer = $argument}
        "/computername" {$targetcomputer = $argument}
        default         {}
    }

    $nextarg = $argument
}

if (($VMName -eq "") -and ($VMGuid -eq ""))
{
    funHelp
}

if (($VMName -ne "") -and ($VMGuid -ne ""))
{
    funHelp
}

$ns = "root\virtualization\v2"
$VMWPName = "$env:windir\system32\vmwp.exe"

#Get a VMManagementService object
$VMManagementService = gwmi -class "Msvm_VirtualSystemManagementService" -namespace $ns -computername $targetcomputer

#Get the VM object that we want to modify
if ($VMName -ne "")
{
    $VM = Get-VM -computername $targetcomputer -VMName $VMName
}

if ($VMGuid -ne "")
{
    $VM = Get-VM -computername $targetcomputer -Id $VMGuid
}

#Get the VirtualSystemGlobalSettingData of the VM we want to modify
$VMSystemGlobalSettingData = gwmi -namespace $ns -computername $targetcomputer -class Msvm_VirtualSystemSettingData | ? { $_.ConfigurationID -eq $VM.Id }

# Set a new debugport
if ($DebugPort -ne "unassigned")
{
    #Change the ElementName property
    $VMSystemGlobalSettingData.DebugPort = $DebugPort
    $VMSystemGlobalSettingData.DebugPortEnabled = 1

    $VMManagementService.ModifySystemSettings($VMSystemGlobalSettingData.GetText(1))
    $FWRuleName = "SynthDebugInboundRule-$DebugPort"
    New-NetFirewallRule -DisplayName $FWRuleName -Program $VMWPName -Protocol UDP -Action Allow -Direction Inbound -LocalPort $DebugPort
}

# Enable auto assigned debug ports
if ($AutoAssign -ne "false")
{
    #Change the ElementName property
    $VMSystemGlobalSettingData.DebugPortEnabled = 2
    $VMManagementService.ModifySystemSettings($VMSystemGlobalSettingData.GetText(1))
    Write-Host -Foreground Yellow "Firewall Ports for autoassign mode can be opened only after the VM is started."
}

# Turn off debugging
if ($DebugOff -ne "false")
{
    $DebugPort = $VMSystemGlobalSettingData.DebugPort
    #Change the ElementName property
    $VMSystemGlobalSettingData.DebugPortEnabled = 0
    $VMSystemGlobalSettingData.DebugPort = 0
    $VMManagementService.ModifySystemSettings($VMSystemGlobalSettingData.GetText(1))
    # May throw an exception if the rule did not exist already.
    # If two rules exist with the same name, both will be deleted.
    if ($DebugPort -ne 0)
    {
        $FWRuleName = "SynthDebugInboundRule-$DebugPort"
        Remove-NetFirewallRule -DisplayName $FWRuleName
    }
}

$VMSystemGlobalSettingData

exit

# SIG # Begin signature block
# MIIROgYJKoZIhvcNAQcCoIIRKzCCEScCAQExDzANBglghkgBZQMEAgEFADB5Bgor
# BgEEAYI3AgEEoGswaTA0BgorBgEEAYI3AgEeMCYCAwEAAAQQH8w7YFlLCE63JNLG
# KX7zUQIBAAIBAAIBAAIBAAIBADAxMA0GCWCGSAFlAwQCAQUABCDbHDLYuqp9Du8W
# ZSYoLwjEyhkYywkzwemxEtpUqBqajKCCDcgwggYoMIIEEKADAgECAhMzAAAGsbpo
# aGHdP9LhAAAAAAaxMA0GCSqGSIb3DQEBCwUAMH0xCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xJzAlBgNVBAMTHk1pY3Jvc29mdCBEZXZlbG9wbWVu
# dCBQQ0EgMjAxNDAeFw0yMzA3MTMyMjM3MjBaFw0yNDA5MTUyMjM3MjBaMH8xCzAJ
# BgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25k
# MR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xKTAnBgNVBAMTIE1pY3Jv
# c29mdCBXaW5kb3dzIEtpdHMgUHVibGlzaGVyMIIBIjANBgkqhkiG9w0BAQEFAAOC
# AQ8AMIIBCgKCAQEAkFw3546fnAbt4Bji2em0A71hxNIg/b9BSiiCjtj/D8eAGVVm
# L41blm9pCPSFRmKEYSdRYPh++GnY+kEut7gt3AyMnuCc0LBreO07v5tmLptyFJqP
# NlVnFcuzqWDYbg1iuT8Ob14cAFKt4zV3iu3tFzLdQjOpdMeBr/aj3S1ZHXv0mCkH
# EyO78X+ULEkkD3v1JnKsxPe5L25tYiGwUsoF+6u3htv4CEd6lM3H4gJPY76brPyO
# S0gJzlnRnl/Hnvn3mmVLNxrrubnp8ouOltULXiTF4TvHAv285mWrjEYWFYAfC2AK
# uRFOkycgaYIveT/m2RYTRRB2zWdz6c+rI2F9awIDAQABo4IBnTCCAZkwNwYDVR0l
# BDAwLgYKKwYBBAGCNwoDDQYKKwYBBAGCNwoDFAYKKwYBBAGCNwoDGwYIKwYBBQUH
# AwMwHQYDVR0OBBYEFASQQxF55qJB3LXaWumuRf1KXZc9MEUGA1UdEQQ+MDykOjA4
# MR4wHAYDVQQLExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xFjAUBgNVBAUTDTIzMTEz
# OSs1MDExMjMwHwYDVR0jBBgwFoAUhN0QNnsL0gijJlafIpUlQYUsCcAwXQYDVR0f
# BFYwVDBSoFCgToZMaHR0cDovL3d3dy5taWNyb3NvZnQuY29tL3BraW9wcy9jcmwv
# TWljcm9zb2Z0JTIwRGV2ZWxvcG1lbnQlMjBQQ0ElMjAyMDE0LmNybDBqBggrBgEF
# BQcBAQReMFwwWgYIKwYBBQUHMAKGTmh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9w
# a2lvcHMvY2VydHMvTWljcm9zb2Z0JTIwRGV2ZWxvcG1lbnQlMjBQQ0ElMjAyMDE0
# LmNydDAMBgNVHRMBAf8EAjAAMA0GCSqGSIb3DQEBCwUAA4ICAQBp/FfkowfxNyNX
# nb4GFJFlkb5mT/9o8i14NvmaEelRUQPxO8PkExeC0AN1ZMxNgsQXuoJHXaFtXYGZ
# caxdOMkLWm5nnZRORDw4s6JJV3IzKaxtyN4y+MQUxCTyB+H+FrjzlxcziR3uXduA
# sqapW8jw0SmzR3HYrYjmf3eZ8IHryKUhd3zETYto0PAp3+YsYPvHQEmlnCGI4HCM
# gr4Kmu6oYIweqnkLaBeUyGNKjNcNueFW8PWwcGrBaaMlGKpxtzbEN27Oj7+UF+Pe
# kl5Ks9xVAFCVTJpHSRfM64YCitfUw3KUg0a1koRBPY/Sr6gFuQw2ojyLPlXKO+fd
# +GS+1hPMU5NlndO0GpJLvLsWT1gANWmWjgZkbAcFWzwZCfa3WA2KIzHgzXsHC35k
# Errzy2cT/IUtAmT0hcQojTVnn6X4Mb4me8CzO98LmxOrzXsBn2vMmk0EWfE920jL
# A2UjAEwCyE8bPIqRWm9GFkiXeBvnH3n0OUff6gQ7qlW8G2xXtmBDjRcGFN7sQBvY
# dv/tMBThwmyAkkcl1g7hwbsRT9BWG5Ni8k3kUpJZ3tvbCYkMAVoFnS0c7Vcz/zV8
# z9smwykDWOrIWKA3rNlLZcAGp3nNv8IOhSbl7AbDl3RaGMwxoBXrgkliH9ZMl9Ci
# Fp4mfukha8EAJnnwZhgBH7bE9DSGfjCCB5gwggWAoAMCAQICEzMAAAADxvm0w66+
# WUsAAAAAAAMwDQYJKoZIhvcNAQELBQAwgZQxCzAJBgNVBAYTAlVTMRMwEQYDVQQI
# EwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3Nv
# ZnQgQ29ycG9yYXRpb24xPjA8BgNVBAMTNU1pY3Jvc29mdCBEZXZlbG9wbWVudCBS
# b290IENlcnRpZmljYXRlIEF1dGhvcml0eSAyMDE0MB4XDTE0MDUyODE3MzMzM1oX
# DTI5MDUyODE3NDMzM1owfTELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0
# b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3Jh
# dGlvbjEnMCUGA1UEAxMeTWljcm9zb2Z0IERldmVsb3BtZW50IFBDQSAyMDE0MIIC
# IjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAy1MMQflNRCTI2mVOZmzFgpVw
# cjPzty6GrhZBvNzUuGn7EsCUvq+Uwn92nDzTVNS1iO2PsQwbUUqP6pDjrE7339IS
# e45/ctA1PKzo6WfM6TIyMehDX98UmkCPGAuZBxM7cZKbHRn5m5X3TzVhOFYysu1k
# hBj6WoWxkr8BuMaWkwQ6qOrsgurNHoLC5gDkmT2Jpd1xIJ6I3V5NrW3PCfOophNv
# DAPhDC6YtMKjB5wab1/Tdi++me6VxrCUX7G4pkuTLwLxzCPCQ5Y4pb+bfC1sHDVH
# uIA85/qfDJzv316Mz3QLDDOXf+oE1cUz0w+esJAl2rr9aJ7JtAFuqe9jMzDpCMjr
# k89bmb+hylQ6wIodk2yK0LwvxyL+QONEdprSlN8XZUt7JoDO2UczTfVm5PzGzXKs
# fvFwkoM+ciGQwOyN/1mxW7MyUJTFwWx7albI+RB8SxqeYSyiIe5fnKRk7DLStHua
# iEKpLFYuF5b+kytEDF6fI84C9juJmMBB/EHX+ih9RAHykbLRumKe2AVjBlamwhgB
# Zv29RCtNWcLwmywQdDRvIKEqPVjOXPBR4SWh6b+zNXHJDWXFbHUBt8P8s5aTwtiv
# TVkq/czPpvPDtZaSequ0Sq44ogI95pGQ3aPsqSXJCMFRsakgXIxqOpHnCRJ/zsp4
# zyhDqnQLXJ4RcP/EWTUCAwEAAaOCAfcwggHzMBAGCSsGAQQBgjcVAQQDAgEAMB0G
# A1UdDgQWBBSE3RA2ewvSCKMmVp8ilSVBhSwJwDBkBgNVHSAEXTBbMAYGBFUdIAAw
# UQYMKwYBBAGCN0yDfQEBMEEwPwYIKwYBBQUHAgEWM2h0dHA6Ly93d3cubWljcm9z
# b2Z0LmNvbS9wa2lvcHMvRG9jcy9SZXBvc2l0b3J5Lmh0bTAZBgkrBgEEAYI3FAIE
# DB4KAFMAdQBiAEMAQTALBgNVHQ8EBAMCAYYwDwYDVR0TAQH/BAUwAwEB/zAfBgNV
# HSMEGDAWgBSFcACfd1kejKw8n3cmKBnMmsGPMjB4BgNVHR8EcTBvMG2ga6Bphmdo
# dHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NybC9NaWNyb3NvZnQlMjBE
# ZXZlbG9wbWVudCUyMFJvb3QlMjBDZXJ0aWZpY2F0ZSUyMEF1dGhvcml0eSUyMDIw
# MTQuY3JsMIGFBggrBgEFBQcBAQR5MHcwdQYIKwYBBQUHMAKGaWh0dHA6Ly93d3cu
# bWljcm9zb2Z0LmNvbS9wa2lvcHMvY2VydHMvTWljcm9zb2Z0JTIwRGV2ZWxvcG1l
# bnQlMjBSb290JTIwQ2VydGlmaWNhdGUlMjBBdXRob3JpdHklMjAyMDE0LmNydDAN
# BgkqhkiG9w0BAQsFAAOCAgEATuodDP7TgtF1X/Aw33eNrINWsDTNvqcH83Ss7jxK
# XR/avSr2aPsqN0OXCXksAb2h1Jp1OJSXYsjrc7yJlEPLKLRLVbnxVtUk4sun8EZA
# 1v4w/ikyU+05IQNzMJUtarGHA99RfPFGE/n1BUTdD5JjOnHMz6BV8W0tlSHgdlRk
# ldlmj39rJcWKhhlxNMVTIvbcVZvauual8vf2LHZG0mHeSNrjcB5V4DGMW/Szwh36
# /36xjbXe/pT9AUrL+h9MDbRaciKCtisjUwqdLt9VPfwYszJbTrGvAL+a+JFWLnFO
# RFLHNXnTdUq4RKWl+WdEzycw3HhPfgnVoVHAaz+K41kLce/KkjWd0Sq3jHUgQ5J0
# LhLfTnp7WaYMZYfKm2lTdSKs2fbZDzm+xpNJ4W3YY3Llhlwpx9XbpflekzmwxYTJ
# ceIVVKbMiqkeRiRN5DyfwQXfjDQzbgXBoUDZqAuVSXMMA0/Mw3xSI96kNsXNgj3L
# +PASfNgcLV23ugV+wA4Zn1J7Uz8Gmr2UJ2JPVQOW4omv88xnlTAtGrQAu1XHb4uQ
# fU1PLEJQhGM+K3bDBPdW4OAxdlDlAgwAqg5P9KQpHxKWYqhk3PHDDibXYuPGraRo
# AGcwQQEXH99hZIuDHTe6gvFonbRpn62C3NsTUtZMVQsMzfPVuVnG93GLff9xXj3Z
# 3gAxggLIMIICxAIBATCBlDB9MQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGlu
# Z3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBv
# cmF0aW9uMScwJQYDVQQDEx5NaWNyb3NvZnQgRGV2ZWxvcG1lbnQgUENBIDIwMTQC
# EzMAAAaxumhoYd0/0uEAAAAABrEwDQYJYIZIAWUDBAIBBQCgggEEMBkGCSqGSIb3
# DQEJAzEMBgorBgEEAYI3AgEEMBwGCisGAQQBgjcCAQsxDjAMBgorBgEEAYI3AgEV
# MC8GCSqGSIb3DQEJBDEiBCD12p2EXg5HuAOMXy8l2stP0pmptaSGI99pdu8uRzlU
# uDA8BgorBgEEAYI3CgMcMS4MLHNQWTd4UEI3aFQ1ZzVISHJZdDhyRExTTTlWdVpS
# dVdaYWVmMmUyMlJzNTQ9MFoGCisGAQQBgjcCAQwxTDBKoCSAIgBNAGkAYwByAG8A
# cwBvAGYAdAAgAFcAaQBuAGQAbwB3AHOhIoAgaHR0cDovL3d3dy5taWNyb3NvZnQu
# Y29tL3dpbmRvd3MwDQYJKoZIhvcNAQEBBQAEggEAXv5wVEVNcWbdLng3uaz9vDsC
# jW3xSpPmy6zHQiZaz5OEOjg6c9sIlivteR+kpQ+oBq2dd/MBQVmPz3ONq0PMJelj
# jGGUBF/3kV1As5eUx5DDGRVMzhHDCHJqBeCOYMfgvhRDJhFWdSOrLOeo4EikPqJQ
# RSDH2OLrUqZ2dypM7xbMSKl45gNW/nafYEGgjZZhNARe8kqnb9cePe2rDn4GEPcC
# VavBva4Q7dY3WtX/3GfNRnvUMdqwfVrlwCYc87fMPrLsEfS7pazoQuzyS5zW+8G8
# hV+mqk6EK02A537zm7aNL+LQ7bYrQLCZeWN9qxaACLOmx+A5pmGJOaojiKMntw==
# SIG # End signature block
