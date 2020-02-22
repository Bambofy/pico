#include "../pico_inc/textarea.h"

void TextArea_SetCharacter(const char * inElementId, uint32_t inNameLength,  uint32_t inX, uint32_t inY, const char inChar)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementId);

    _TextArea_SetCharacter(elementAddress, inNameLength, inX, inY, inChar);
}

void TextArea_Init(const char * inElementId, uint32_t inNameLength, uint32_t inWidth, uint32_t inHeight)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementId);

    _TextArea_Init(elementAddress, inNameLength, inWidth, inHeight);
}