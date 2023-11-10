#pragma once
#include <libm/syncedList/syncedList_window.h>
#include <libm/images/bitmapImage.h>

namespace Taskbar
{
    extern SyncedList<Window*>* taskWindowList;
    extern Window* activeTabWindow;
    extern bool MButtonSelected;

    void InitTaskbar(ImageStuff::BitmapImage* MButton, ImageStuff::BitmapImage* mButtonS);

    void RenderTaskbar();
}

