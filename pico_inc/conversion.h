#ifndef CONVERSION_H
#define CONVERSION_H

#include "types.h"


extern "C"
{
    void _Conversion_Uint_To_Char_Array(uint32_t inNumber, uintptr_t outDestinationPtrLocation, uint32_t outDestinationByteLength);
    void _Conversion_Int_To_Char_Array(int32_t inNumber, uintptr_t outDestinationPtrLocation, uint32_t outDestinationByteLength);
    int32_t _Conversion_String_To_Int32(uintptr_t inCharArrayPtr, uint32_t inCharArrayLength);
}


extern void Conversion_Uint_To_Char_Array(uint32_t inNumber, char * outDestinationPtrLocation, uint32_t outDestinationByteLength);
extern void Conversion_Int_To_Char_Array(int32_t inNumber, char * outDestinationPtrLocation, uint32_t outDestinationByteLength);
extern int32_t Conversion_String_To_Int32(char * inCharArray, uint32_t inCharArrayPtrLength);

#endif
