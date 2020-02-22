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
    void _TextArea_Init(uintptr_t inElementName, uint32_t inNameLength, uint32_t inWidth, uint32_t inHeight);
    void _TextArea_SetCharacter(uintptr_t inElementName, uint32_t inNameLength, uint32_t inX, uint32_t inY, const char inC); // this is bound to the js
}

extern void TextArea_SetCharacter(const char* inElementName, uint32_t inNameLength, uint32_t inX, uint32_t inY, const char inC); // this is used internally.
extern void TextArea_Init(const char* inElementName, uint32_t inNameLength, uint32_t inWidth, uint32_t inHeight);

#endif
