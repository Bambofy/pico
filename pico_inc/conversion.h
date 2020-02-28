#ifndef CONVERSION_H
#define CONVERSION_H

#include "types.h"


extern "C"
{
    void _To_Char_Array(uint32_t inNumber, uintptr_t outDestinationPtrLocation, uint32_t outDestinationByteLength);
}


extern void To_Char_Array(uint32_t inNumber, char * outDestinationPtrLocation, uint32_t outDestinationByteLength);


#endif