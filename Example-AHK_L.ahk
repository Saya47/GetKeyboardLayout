#SingleInstance, force
#NoEnv
SetWorkingDir %A_ScriptDir%


DllLocation := "GetKeyboardLayout.dll"
TempFile := A_Temp . "\TempKeyboardLayout.txt"


CurrentKeyboardLayoutID(){
	global DllLocation, TempFile
	RunWait, cmd.exe /c rundll32.exe %DllLocation%`, MyLayout | more > %TempFile%,,hide
	FileRead, InputLocaleID, %TempFile%
	InputLocaleID := Format("{:d}", "0x" . InputLocaleID)
	return InputLocaleID
}


#Space::
    MsgBox, % CurrentKeyboardLayoutID()
return
