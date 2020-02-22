/**
 * @file textarea.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-02-21
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef TEXTAREA_H
#define TEXTAREA_H

#include "types.h"

extern "C"
{
    void _TextArea_Init(uintptr_t inElementName, uint32_t inNameLength, uint32_t inColumns, uint32_t inRows);
    void _TextArea_GetContent(uintptr_t inElementName, uint32_t inNameLength, uintptr_t outContentsDestination, uint32_t outContentsBytesCount);
    void _TextArea_SetContent(uintptr_t inElementName, uint32_t inNameLength, uintptr_t inContents, uint32_t inContentsLength);
}

extern void TextArea_Init(const char* inElementName, uint32_t inNameLength, uint32_t inColumns, uint32_t inRows);
extern void TextArea_GetContent(const char* inElementName, uint32_t inNameLength, char * outContentsDestination, uint32_t outContentsBytesCount);
extern void TextArea_SetContent(const char* inElementName, uint32_t inNameLength, const char * inContents, uint32_t inContentsLength);

#endif
