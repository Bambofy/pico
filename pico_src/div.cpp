#include "../pico_inc/div.h"

void Div_GetContent(const char* inElementName, uint32_t inNameLength, char * inContents, uint32_t inContentsLength)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementName);
    uintptr_t contentsAddress = reinterpret_cast<uintptr_t>(inContents);

    _Div_GetContent(elementAddress, inNameLength, contentsAddress, inContentsLength);
}

void Div_SetContent(const char* inElementName, uint32_t inNameLength, char * outContentsDest, uint32_t outContentsLength)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementName);
    uintptr_t outContentsAddress = reinterpret_cast<uintptr_t>(outContentsDest);

    _Div_SetContent(elementAddress, inNameLength, outContentsAddress, outContentsLength);
}