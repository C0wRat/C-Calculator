#include "windowManager.h"



void buttonInit(HWND* buttons, HWND* parent){
    NewWindow(W_BUTTON, parent,10,40,50,20, 7, "7");
    NewWindow(W_BUTTON, parent,70,40,50,20, 8, "8");
    NewWindow(W_BUTTON, parent,130,40,50,20,9, "9");
    NewWindow(W_BUTTON, parent,190,40,50,20,BTN_DIVIDE, "/");
    NewWindow(W_BUTTON, parent,10,70,50,20,4,"4");
    NewWindow(W_BUTTON, parent, 70,70,50,20,5,"5");
    NewWindow(W_BUTTON, parent,130,70,50,20,6,"6");
    NewWindow(W_BUTTON, parent,190,70,50,20,BTN_MULTIPLY,"X");
    NewWindow(W_BUTTON, parent,10,100,50,20,1,"1");
    NewWindow(W_BUTTON, parent,70,100,50,20,2,"2");
    NewWindow(W_BUTTON, parent,130,100,50,20,3,"3");
    NewWindow(W_BUTTON, parent,190,100,50,20,BTN_MINUS, "-");
    NewWindow(W_BUTTON, parent,10,130,50,20,BTN_DOT,".");
    NewWindow(W_BUTTON, parent,70,130,50,20,0,"0");
    NewWindow(W_BUTTON, parent,130,130,50,20,BTN_CLEAR,"C");
    NewWindow(W_BUTTON, parent,190,130,50,20,BTN_ADD,"+");
    NewWindow(W_BUTTON, parent,10,160,230,20,BTN_Equals,"=");
}


HWND CreateTextBox(HWND* parent, int x, int y, int w, int h){
    HWND textBox = CreateWindow("EDIT",
                 "",
                 WS_VISIBLE | WS_CHILD | WS_BORDER,
                 x ,y, w, h,
                 parent, NULL, NULL, NULL);
    return textBox;
}

HWND CreateButton(HWND* parent, int x, int y, int w, int h, int value, char* name){
    HWND button = CreateWindow("BUTTON",
                               name,
                               WS_VISIBLE | WS_CHILD | WS_BORDER,
                               x,y,w,h,
                               parent, (HMENU)value, NULL, NULL);
    return button;
}

HWND CreateWin(){

}


HWND* NewWindow(WindowType windowType, HWND* parent, int x, int y, int w, int h, int value, char* name){
    HWND window;
    switch(windowType){
        // case W_WINDOW:
        //     window = CreateWin();
        //     break;
        case W_BUTTON:
            window = CreateButton(parent, x, y, w, h, value, name);
            break;
        case W_TEXTBOX:
            window = CreateTextBox(parent, x, y, w, h);
            break;
    }
}