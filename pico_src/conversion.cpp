#include "../pico_inc/conversion.h"

void To_Char_Array(uint32_t inNumber, char * outDestinationPtrLocation, uint32_t outDestinationByteLength)
{
    uintptr_t destPtr = reinterpret_cast<uintptr_t>(outDestinationPtrLocation);

    _To_Char_Array(inNumber, destPtr, outDestinationByteLength);
}