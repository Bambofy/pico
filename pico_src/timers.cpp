#include "../pico_inc/timers.h"

void Timers_SetTimeout(void (*inFunctionPtr)(void), uint32_t inMilliseconds)
{
    uintptr_t funcPtr = reinterpret_cast<uintptr_t>(inFunctionPtr);

    _setTimeout(funcPtr, inMilliseconds);
}

void Timers_SetInterval(void (*inFunctionPtr)(void), uint32_t inMilliseconds)
{
    uintptr_t funcPtr = reinterpret_cast<uintptr_t>(inFunctionPtr);

    _setInterval(funcPtr, inMilliseconds);
}
