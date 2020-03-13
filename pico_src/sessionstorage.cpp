#include "../pico_inc/sessionstorage.h"

void SessionStorage_SetItem(const char * inKey, uint32_t inKeyLength, const char * inValue, uint32_t inValueLength)
{
    uintptr_t keyPtr = reinterpret_cast<uintptr_t>(inKey);
    uintptr_t valPtr = reinterpret_cast<uintptr_t>(inValue);

    _SessionStorage_SetItem(keyPtr, inKeyLength, valPtr, inValueLength);
}

void SessionStorage_GetItem(const char * inKey, uint32_t inKeyLength, char * outValue, uintptr_t outValueLength)
{
    uintptr_t keyPtr = reinterpret_cast<uintptr_t>(inKey);
    uintptr_t outValuePtr = reinterpret_cast<uintptr_t>(outValue);

    _SessionStorage_GetItem(keyPtr, inKeyLength, outValuePtr, outValueLength);
}

void SessionStorage_RemoveItem(const char * inKey, uint32_t inKeyLength)
{
    uintptr_t keyPtr = reinterpret_cast<uintptr_t>(inKey);

    _SessionStorage_RemoveItem(keyPtr, inKeyLength);
}

void SessionStorage_Clear()
{
    _SessionStorage_Clear();
}