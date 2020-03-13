#ifndef LOCAL_STORAGE_H
#define LOCAL_STORAGE_H

#include "types.h"

extern "C" {
    void _LocalStorage_SetItem(uintptr_t inKey, uint32_t inKeyLength, uintptr_t inValue, uint32_t inValueLength);
    void _LocalStorage_GetItem(uintptr_t inKey, uint32_t inKeyLength, uintptr_t outValuePtr, uintptr_t outValueLength);
    void _LocalStorage_RemoveItem(uintptr_t inKey, uint32_t inKeyLength);
    void _LocalStorage_Clear();
}

void LocalStorage_SetItem(const char * inKey, uint32_t inKeyLength, const char * inValue, uint32_t inValueLength);
void LocalStorage_GetItem(const char * inKey, uint32_t inKeyLength, char *  outValuePtr, uintptr_t outValueLength);
void LocalStorage_RemoveItem(const char * inKey, uint32_t inKeyLength);
void LocalStorage_Clear();

#endif
