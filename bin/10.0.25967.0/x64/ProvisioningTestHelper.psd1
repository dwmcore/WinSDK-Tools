# Copyright (C) Microsoft Corporation. All rights reserved.
#
# Module manifest for module 'ProvisioningTestModule'
#

@{

# Version number of this module.
ModuleVersion = '1.0'

# ID used to uniquely identify this module
GUID = '05218365-87aa-4f63-80d3-2f5af78231a0'

# Author of this module
Author = 'Microsoft'

# Company or vendor of this module
CompanyName = 'Microsoft Corporation'

# Copyright statement for this module
Copyright = 'Copyright (C) Microsoft Corporation. All rights reserved.'

# Modules to import as nested modules of the module specified in RootModule/ModuleToProcess
NestedModules = @('ProvisioningTestHelper.dll')

# Functions to export from this module
FunctionsToExport = @('Install-TestEVCert', 'ConvertTo-SignedXml', 'Test-SignedXml', 'Install-RootCertFromFile')

}



# SIG # Begin signature block
# MIIRLwYJKoZIhvcNAQcCoIIRIDCCERwCAQExDzANBglghkgBZQMEAgEFADB5Bgor
# BgEEAYI3AgEEoGswaTA0BgorBgEEAYI3AgEeMCYCAwEAAAQQH8w7YFlLCE63JNLG
# KX7zUQIBAAIBAAIBAAIBAAIBADAxMA0GCWCGSAFlAwQCAQUABCBdRENz7HwBWl79
# TY9Bi7C9LuskbStNom+zvJCohxQKEKCCDb0wggYdMIIEBaADAgECAhMzAAAGor1n
# vEhjoq6dAAAAAAaiMA0GCSqGSIb3DQEBCwUAMH0xCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xJzAlBgNVBAMTHk1pY3Jvc29mdCBEZXZlbG9wbWVu
# dCBQQ0EgMjAxNDAeFw0yMzA3MTMyMjM2NDBaFw0yNDA5MTUyMjM2NDBaMHQxCzAJ
# BgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25k
# MR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xHjAcBgNVBAMTFU1pY3Jv
# c29mdCBDb3Jwb3JhdGlvbjCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEB
# AK/rDLV9GY0gf6Yu1rxMPj4t1vEtQYRtaZOmNcU+0yx2VWzX2BfMtmzcZTSTiZQO
# 8kPthiv7l/s3IGNUlBbgFngee5AXOj6EpZkBMag9vGi2wA3GMA0VVYkb/fOWNHQj
# EIJ9RidcmpXF5qeXRc1VviHZdDKy0LSJnE24pOnXOLUeUg28YL3vCAReLJLlGQQq
# 4EWBxmPK/XfxgFzgt0HI7yMRrKxQLo9Z+DE7X5DVDBxZlx4tDo2tsYXT+ceuVWCL
# YO5CpaaVr9+/HyL1BV6w7IidIJritXwHcIIS1wv101k+4MFZMNTtZC5Blzgp5AuE
# RJ08xofSscw24pEuMe4vFHECAwEAAaOCAZ0wggGZMDcGA1UdJQQwMC4GCisGAQQB
# gjcKAw0GCisGAQQBgjcKAxsGCisGAQQBgjc9BgEGCCsGAQUFBwMDMB0GA1UdDgQW
# BBQ+Ly6sozwl1bcXwk/svkt0wEBgHjBFBgNVHREEPjA8pDowODEeMBwGA1UECxMV
# TWljcm9zb2Z0IENvcnBvcmF0aW9uMRYwFAYDVQQFEw0yMzExMDUrNTAxMTIwMB8G
# A1UdIwQYMBaAFITdEDZ7C9IIoyZWnyKVJUGFLAnAMF0GA1UdHwRWMFQwUqBQoE6G
# TGh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2lvcHMvY3JsL01pY3Jvc29mdCUy
# MERldmVsb3BtZW50JTIwUENBJTIwMjAxNC5jcmwwagYIKwYBBQUHAQEEXjBcMFoG
# CCsGAQUFBzAChk5odHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NlcnRz
# L01pY3Jvc29mdCUyMERldmVsb3BtZW50JTIwUENBJTIwMjAxNC5jcnQwDAYDVR0T
# AQH/BAIwADANBgkqhkiG9w0BAQsFAAOCAgEAcYoBUO/kml1pq/QU1XY7lMvbN7/u
# iwf7cKnrvHJL9N8V8+Tc8WjtGtdFL2s2mhqzRhkvChGBElE4I2JUuPKnNyTftM7B
# u6GuDcya7P1nQH0jFSR/uXu4piKgHE0e2rC22FX/d6CgcXbP66w2WJmSanl7vU6I
# HMWMoRUvame5XyxS5TeMBoyKJPnTzbKStMekmglBxfoZVuCQVN4xz20rwX+I1pDF
# 9XT+XKx9qH6Fg7cZSexF1dxH9mkXY3E+4AZC7B01mz4vU0V2iTjEJugMfyvQ65b0
# bPfJ2H72bmQDTIL8eAd93GVfqhSbhCRIaVahkdk7qY7a9WD1t808QuwMqu4WlhLP
# 7UQCZNoLD9cIEDhfQOA7azR6XjvFGgxmgcoB7yitqI7jyyvK8gmc/ubKXJAItzmK
# w+JcmA5YujE6AUXHHcL6g+P6oVqfe9lZvXenPXElS8yHdoTI+VH5Da5CNQKCvLmY
# ySpM1BVBL4l/TQkMejl21cFB/s0Rfg569bdrsEEFAt9m8AdyoUO4jSmvFHqM6Gw7
# 5RPtGSMUYxBQJNb4j92wHcfFL1fD9b8nU61+Omp/nnr9YTCKISXWjz7M2bDUyVK7
# 4jM1EsdK/N3TY0ZUszNEItTN64YHQlvMPvhGk4PvkXzyvrR/TWsrsG81U82J4X4W
# JaejgcBzhnPNBY0wggeYMIIFgKADAgECAhMzAAAAA8b5tMOuvllLAAAAAAADMA0G
# CSqGSIb3DQEBCwUAMIGUMQswCQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3Rv
# bjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0
# aW9uMT4wPAYDVQQDEzVNaWNyb3NvZnQgRGV2ZWxvcG1lbnQgUm9vdCBDZXJ0aWZp
# Y2F0ZSBBdXRob3JpdHkgMjAxNDAeFw0xNDA1MjgxNzMzMzNaFw0yOTA1MjgxNzQz
# MzNaMH0xCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQH
# EwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xJzAlBgNV
# BAMTHk1pY3Jvc29mdCBEZXZlbG9wbWVudCBQQ0EgMjAxNDCCAiIwDQYJKoZIhvcN
# AQEBBQADggIPADCCAgoCggIBAMtTDEH5TUQkyNplTmZsxYKVcHIz87cuhq4WQbzc
# 1Lhp+xLAlL6vlMJ/dpw801TUtYjtj7EMG1FKj+qQ46xO99/SEnuOf3LQNTys6Oln
# zOkyMjHoQ1/fFJpAjxgLmQcTO3GSmx0Z+ZuV9081YThWMrLtZIQY+lqFsZK/AbjG
# lpMEOqjq7ILqzR6CwuYA5Jk9iaXdcSCeiN1eTa1tzwnzqKYTbwwD4QwumLTCowec
# Gm9f03YvvpnulcawlF+xuKZLky8C8cwjwkOWOKW/m3wtbBw1R7iAPOf6nwyc799e
# jM90Cwwzl3/qBNXFM9MPnrCQJdq6/WieybQBbqnvYzMw6QjI65PPW5m/ocpUOsCK
# HZNsitC8L8ci/kDjRHaa0pTfF2VLeyaAztlHM031ZuT8xs1yrH7xcJKDPnIhkMDs
# jf9ZsVuzMlCUxcFse2pWyPkQfEsanmEsoiHuX5ykZOwy0rR7mohCqSxWLheW/pMr
# RAxenyPOAvY7iZjAQfxB1/oofUQB8pGy0bpintgFYwZWpsIYAWb9vUQrTVnC8Jss
# EHQ0byChKj1YzlzwUeEloem/szVxyQ1lxWx1AbfD/LOWk8LYr01ZKv3Mz6bzw7WW
# knqrtEquOKICPeaRkN2j7KklyQjBUbGpIFyMajqR5wkSf87KeM8oQ6p0C1yeEXD/
# xFk1AgMBAAGjggH3MIIB8zAQBgkrBgEEAYI3FQEEAwIBADAdBgNVHQ4EFgQUhN0Q
# NnsL0gijJlafIpUlQYUsCcAwZAYDVR0gBF0wWzAGBgRVHSAAMFEGDCsGAQQBgjdM
# g30BATBBMD8GCCsGAQUFBwIBFjNodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtp
# b3BzL0RvY3MvUmVwb3NpdG9yeS5odG0wGQYJKwYBBAGCNxQCBAweCgBTAHUAYgBD
# AEEwCwYDVR0PBAQDAgGGMA8GA1UdEwEB/wQFMAMBAf8wHwYDVR0jBBgwFoAUhXAA
# n3dZHoysPJ93JigZzJrBjzIweAYDVR0fBHEwbzBtoGugaYZnaHR0cDovL3d3dy5t
# aWNyb3NvZnQuY29tL3BraW9wcy9jcmwvTWljcm9zb2Z0JTIwRGV2ZWxvcG1lbnQl
# MjBSb290JTIwQ2VydGlmaWNhdGUlMjBBdXRob3JpdHklMjAyMDE0LmNybDCBhQYI
# KwYBBQUHAQEEeTB3MHUGCCsGAQUFBzAChmlodHRwOi8vd3d3Lm1pY3Jvc29mdC5j
# b20vcGtpb3BzL2NlcnRzL01pY3Jvc29mdCUyMERldmVsb3BtZW50JTIwUm9vdCUy
# MENlcnRpZmljYXRlJTIwQXV0aG9yaXR5JTIwMjAxNC5jcnQwDQYJKoZIhvcNAQEL
# BQADggIBAE7qHQz+04LRdV/wMN93jayDVrA0zb6nB/N0rO48Sl0f2r0q9mj7KjdD
# lwl5LAG9odSadTiUl2LI63O8iZRDyyi0S1W58VbVJOLLp/BGQNb+MP4pMlPtOSED
# czCVLWqxhwPfUXzxRhP59QVE3Q+SYzpxzM+gVfFtLZUh4HZUZJXZZo9/ayXFioYZ
# cTTFUyL23FWb2rrmpfL39ix2RtJh3kja43AeVeAxjFv0s8Id+v9+sY213v6U/QFK
# y/ofTA20WnIigrYrI1MKnS7fVT38GLMyW06xrwC/mviRVi5xTkRSxzV503VKuESl
# pflnRM8nMNx4T34J1aFRwGs/iuNZC3HvypI1ndEqt4x1IEOSdC4S3056e1mmDGWH
# yptpU3UirNn22Q85vsaTSeFt2GNy5YZcKcfV26X5XpM5sMWEyXHiFVSmzIqpHkYk
# TeQ8n8EF34w0M24FwaFA2agLlUlzDANPzMN8UiPepDbFzYI9y/jwEnzYHC1dt7oF
# fsAOGZ9Se1M/Bpq9lCdiT1UDluKJr/PMZ5UwLRq0ALtVx2+LkH1NTyxCUIRjPit2
# wwT3VuDgMXZQ5QIMAKoOT/SkKR8SlmKoZNzxww4m12Ljxq2kaABnMEEBFx/fYWSL
# gx03uoLxaJ20aZ+tgtzbE1LWTFULDM3z1blZxvdxi33/cV492d4AMYICyDCCAsQC
# AQEwgZQwfTELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNV
# BAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEnMCUG
# A1UEAxMeTWljcm9zb2Z0IERldmVsb3BtZW50IFBDQSAyMDE0AhMzAAAGor1nvEhj
# oq6dAAAAAAaiMA0GCWCGSAFlAwQCAQUAoIIBBDAZBgkqhkiG9w0BCQMxDAYKKwYB
# BAGCNwIBBDAcBgorBgEEAYI3AgELMQ4wDAYKKwYBBAGCNwIBFTAvBgkqhkiG9w0B
# CQQxIgQgGJGcBzIxmDl83WR5AW7ibdwlL2NyI7Ndau2erNk0JuUwPAYKKwYBBAGC
# NwoDHDEuDCxzUFk3eFBCN2hUNWc1SEhyWXQ4ckRMU005VnVaUnVXWmFlZjJlMjJS
# czU0PTBaBgorBgEEAYI3AgEMMUwwSqAkgCIATQBpAGMAcgBvAHMAbwBmAHQAIABX
# AGkAbgBkAG8AdwBzoSKAIGh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS93aW5kb3dz
# MA0GCSqGSIb3DQEBAQUABIIBABtGh0fuMuKGiJBMxv6efK2xQyKS1EFW8IpzemVJ
# i0aKnZQQe5V1t1e2BCIuU9lO8gBHMFwomG5o/7fh8KtQKqc9lWBxdoulkm5Wa5BU
# grZb2NYdUDB9vODo29Ipaw7EwKf+Vsl/BcQC2dglOVitAxGpF12AIAgCDVz+DpEb
# 4BJCsQf60x7gt5khQJiw88S7fHws8nxkFjCubXLLJLIL4np73U+xd8Eb+7eHQ83M
# IBAUGxcSuPEGkDYmUwtZyBhr9SbyT4db28rYb1c3bQUMJNHZCYYBVHkaBQp1C/MI
# PJ9z1IsQUOeC4Ugzj16p9pJhl0wxoiy+mlOee8GrUJRjlH0=
# SIG # End signature block
