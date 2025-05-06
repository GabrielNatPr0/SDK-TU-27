#include <xtl.h>
#include <xhttp.h>
#include <xkelib.h>
#include <xauth.h>
#include "HvPeekPoke.h"

#include "globals.h" 
#include "Tools.h"
#include "GTAVMenu.h"
#include "Input.h"
#include "GTAVNatives.h"
#include "DataManager.h"
#include "ServerCommunicator.h"
#include "MenuSecurity.h"
#include "EncryptedDWORD.h"
#include "base64.h"
#include "natives.h"
#include "types.h"
#include <cfloat>
#include <string>

void WelcomeMsg_Dev()
{
    Sleep(1500);
    XNotifyUI(L"Bem-vindo ao Menu Simplificado!");
    Sleep(10);
    
    PXOVERLAPPED over = new XOVERLAPPED();
    PMESSAGEBOX_RESULT result = new MESSAGEBOX_RESULT();
    
    LPCWSTR text[] = {
        L"Menu Simplificado GTA V",
        L"Controles:",
        L"- DPAD_LEFT + X: Abrir/Fechar Menu",
        L"- Cima/Baixo: Navegar",
        L"- A: Selecionar"
    };

    while(XShowMessageBoxUI(0, 
        L"[Menu Simplificado]",
        L"\nBem-vindo ao Menu!\n",
        5, text, NULL, XMB_NOICON, result, over) == ERROR_ACCESS_DENIED)
    {
        Sleep(10);
    }
    
    while(!XHasOverlappedIoCompleted(over))
    {
        Sleep(10);
    }
}

void WelcomeMsg_Rel()
{
Sleep(1500);
XNotifyUI(L"Welcome!");
Sleep(10);
PXOVERLAPPED over = new XOVERLAPPED();
PMESSAGEBOX_RESULT result = new MESSAGEBOX_RESULT();

while(!XHasOverlappedIoCompleted(over))
Sleep(10);
}