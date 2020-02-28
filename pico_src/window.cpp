#include "../pico_inc/window.h"

void _buttonclicked(uintptr_t inButtonIDStrPtr, uint32_t inButtonIDStrLength)
{
    const char * strPtr = reinterpret_cast<const char *>(inButtonIDStrPtr);

    buttonclicked(strPtr, inButtonIDStrLength);
}
