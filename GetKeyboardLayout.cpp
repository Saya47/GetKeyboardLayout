#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>


#pragma once
#define DllExport __declspec( dllexport )
#undef UNICODE
#define UNICODE
#define _UNICODE


HKL DllExport MyLayout() {
    LPCWSTR dll = L"User32.dll";
    HMODULE hm = LoadLibraryW(dll);
    typedef DWORD (WINAPI* PGNSI)(HWND, LPDWORD);
    PGNSI pa = (PGNSI) GetProcAddress(hm, "GetWindowThreadProcessId");
    HWND hwnd = (HWND)0000000000010010;
    DWORD thread = pa(hwnd, 0);
    HKL layout = GetKeyboardLayout(thread);
    std::cout << layout << "\n";
    // English: 0x4090409 (67699721)
    return layout;
}

int main() {

}