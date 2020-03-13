#ifndef SESSION_STORAGE_H
#define SESSION_STORAGE_H

#include "types.h"

extern "C" {
    void _SessionStorage_SetItem(uintptr_t inKey, uint32_t inKeyLength, uintptr_t inValue, uint32_t inValueLength);
    void _SessionStorage_GetItem(uintptr_t inKey, uint32_t inKeyLength, uintptr_t outValuePtr, uintptr_t outValueLength);
    void _SessionStorage_RemoveItem(uintptr_t inKey, uint32_t inKeyLength);
    void _SessionStorage_Clear();
}

void SessionStorage_SetItem(const char * inKey, uint32_t inKeyLength, const char * inValue, uint32_t inValueLength);
void SessionStorage_GetItem(const char * inKey, uint32_t inKeyLength, char *  outValuePtr, uintptr_t outValueLength);
void SessionStorage_RemoveItem(const char * inKey, uint32_t inKeyLength);
void SessionStorage_Clear();

#endif
