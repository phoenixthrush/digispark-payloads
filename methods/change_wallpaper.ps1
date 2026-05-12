param(
    [string]$ImageUrl,
    [string]$FileName = "wallpaper.jpg"
)

Add-Type @"
using System.Runtime.InteropServices;

public class Wallpaper {
    [DllImport("user32.dll", SetLastError = true)]
    public static extern bool SystemParametersInfo(int action, int param, string path, int winIni);
}
"@

$homePath = [Environment]::GetFolderPath("UserProfile")
$imagePath = Join-Path $homePath $FileName

Invoke-WebRequest -Uri $ImageUrl -OutFile $imagePath

[Wallpaper]::SystemParametersInfo(20, 0, $imagePath, 3) | Out-Null