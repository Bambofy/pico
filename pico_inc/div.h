#ifndef DIV_H
#define DIV_H

#include "types.h"

extern "C"
{
    void _Div_GetContent(uintptr_t inElementID, uint32_t inIDLength, uintptr_t outContentsDestination, uint32_t outContentsBytesCount);
    void _Div_SetContent(uintptr_t inElementID, uint32_t inIDLength, uintptr_t inContents, uint32_t inContentsLength);
}

extern void Div_GetContent(const char* inElementID, uint32_t inIDLength, char * outContentsDestination, uint32_t outContentsBytesCount);
extern void Div_SetContent(const char* inElementID, uint32_t inIDLength, char * inContents, uint32_t inContentsLength);

#endif
