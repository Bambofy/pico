#include "../pico_inc/Localstorage.h"

void LocalStorage_SetItem(const char * inKey, uint32_t inKeyLength, const char * inValue, uint32_t inValueLength)
{
    uintptr_t keyPtr = reinterpret_cast<uintptr_t>(inKey);
    uintptr_t valPtr = reinterpret_cast<uintptr_t>(inValue);

    _LocalStorage_SetItem(keyPtr, inKeyLength, valPtr, inValueLength);
}

void LocalStorage_GetItem(const char * inKey, uint32_t inKeyLength, char * outValue, uintptr_t outValueLength)
{
    uintptr_t keyPtr = reinterpret_cast<uintptr_t>(inKey);
    uintptr_t outValuePtr = reinterpret_cast<uintptr_t>(outValue);

    _LocalStorage_GetItem(keyPtr, inKeyLength, outValuePtr, outValueLength);
}

void LocalStorage_RemoveItem(const char * inKey, uint32_t inKeyLength)
{
    uintptr_t keyPtr = reinterpret_cast<uintptr_t>(inKey);

    _LocalStorage_RemoveItem(keyPtr, inKeyLength);
}

void LocalStorage_Clear()
{
    _LocalStorage_Clear();
}