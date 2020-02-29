#ifndef TIMERS_H
#define TIMERS_H

#include "types.h"

extern "C"
{
    void _setTimeout(uintptr_t inFunctionPtr, uint32_t inMilliseconds);
    void _setInterval(uintptr_t inFunctionPtr, uint32_t inMilliseconds);
}

void Timers_SetTimeout(void * inFunctionPtr, uint32_t inMilliseconds);
void Timers_SetInterval(void * inFunctionPtr, uint32_t inMilliseconds);

#endif
