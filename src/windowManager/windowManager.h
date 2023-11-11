#include <windows.h>

#ifndef WINDOW_MANAGER_H
#define WINDOW_MANAGER_H

typedef enum{
    BTN_DOT=10, // Note: we start from 10 as the actual keys 0-9 are already being used.
    BTN_CLEAR,
    BTN_DIVIDE,
    BTN_MULTIPLY,
    BTN_MINUS,
    BTN_ADD,
    BTN_Equals
} btn;

typedef enum{
    W_WINDOW,
    W_BUTTON,
    W_TEXTBOX,
}WindowType;


void buttonInit(HWND* buttons, HWND* parent);
HWND* NewWindow(WindowType windowType, HWND* parent, int x, int y, int w, int h, int value, char* name);


#endif /*WINDOW_MANGER_H*/