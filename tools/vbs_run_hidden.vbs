' run_hidden.vbs

If WScript.Arguments.Count = 0 Then
    WScript.Echo "Usage: run_hidden.vbs <file_path>"
    WScript.Quit 1
End If

Dim path
path = WScript.Arguments(0)

Dim shell
Set shell = CreateObject("WScript.Shell")

' 0 = hidden window
shell.Run """" & path & """", 0, False