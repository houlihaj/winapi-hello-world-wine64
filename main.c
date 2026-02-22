#include <windows.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
                    PWSTR pCmdLine, int CmdShow) {
                    
    MessageBoxW(NULL, L"Hello, World!", L"Hello", MB_OK);

    return 0;
}

