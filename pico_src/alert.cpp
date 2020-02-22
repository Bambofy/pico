#include "../pico_inc/alert.h"

void alert(const char * inMessage, uint32_t inLength)
{
    uintptr_t strPtr = reinterpret_cast<uintptr_t>(inMessage);

    _alert(strPtr, inLength);
}