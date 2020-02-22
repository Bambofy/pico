#include "../pico_inc/console.h"


void print(const char * inStr, uint32_t inStrLen)
{
    uintptr_t strAddress = reinterpret_cast<uintptr_t>(inStr);

    _print(strAddress, inStrLen);
}

void print_err(const char * inStr, uint32_t inStrLen)
{
    uintptr_t strAddress = reinterpret_cast<uintptr_t>(inStr);

    _print_err(strAddress, inStrLen);
}
