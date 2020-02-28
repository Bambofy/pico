#include "../pico_inc/textarea.h"

void TextArea_Init(const char * inElementId, uint32_t inNameLength, uint32_t inColumns, uint32_t inRows)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementId);

    _TextArea_Init(elementAddress, inNameLength, inColumns, inRows);
}

void TextArea_SetContent(const char* inElementName, uint32_t inNameLength, char * inContents, uint32_t inContentsLength)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementName);
    uintptr_t contentsAddress = reinterpret_cast<uintptr_t>(inContents);

    _TextArea_SetContent(elementAddress, inNameLength, contentsAddress, inContentsLength);
}

void TextArea_GetContent(const char* inElementName, uint32_t inNameLength, char * outContentsDest, uint32_t outContentsLength)
{
    uintptr_t elementAddress = reinterpret_cast<uintptr_t>(inElementName);
    uintptr_t outContentsAddress = reinterpret_cast<uintptr_t>(outContentsDest);

    _TextArea_GetContent(elementAddress, inNameLength, outContentsAddress, outContentsLength);
}