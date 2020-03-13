#include "../pico_inc/conversion.h"

void Conversion_Uint_To_Char_Array(uint32_t inNumber, char * outDestinationPtrLocation, uint32_t outDestinationByteLength)
{
    uintptr_t destPtr = reinterpret_cast<uintptr_t>(outDestinationPtrLocation);

    _Conversion_Uint_To_Char_Array(inNumber, destPtr, outDestinationByteLength);
}

void Conversion_Int_To_Char_Array(int32_t inNumber, char * outDestinationPtrLocation, uint32_t outDestinationByteLength)
{
    uintptr_t destPtr = reinterpret_cast<uintptr_t>(outDestinationPtrLocation);

    _Conversion_Int_To_Char_Array(inNumber, destPtr, outDestinationByteLength);
}


int32_t Conversion_String_To_Int32(char * inCharArray, uint32_t inCharArrayPtrLength)
{
    uintptr_t inCharArrayPtr = reinterpret_cast<uintptr_t>(inCharArray);

    return _Conversion_String_To_Int32(inCharArrayPtr, inCharArrayPtrLength);
}