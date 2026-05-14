If WScript.Arguments.Count = 0 Then
    WScript.Echo "No parameters provided."
Else
    For i = 0 To WScript.Arguments.Count - 1
        WScript.Echo "Arg " & i & ": " & WScript.Arguments(i)
    Next
End If