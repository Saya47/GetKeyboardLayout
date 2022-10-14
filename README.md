# GetKeyboardLayout
A small DLL to be used on scripts (such as AHK) to correctly get the current keyboard layout.

Using DLL calls on AHK usually returns wrong results for getting the current keyboard layout identifier. So I created this dll which can be called with RunDll32.exe and used on AHK scripts, there's an example AHK file on here: https://github.com/Saya47/GetKeyboardLayout/blob/main/Example-AHK_L.ahk
