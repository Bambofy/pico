/**
 * @file console.h
 * @author RGB
 * @brief This file is included in the main program that provides the definition for the Javscript WASM Print import.
 * @version 0.1
 * @date 2020-02-21
 * 
 */

#ifndef CONSOLE_H
#define CONSOLE_H

#include "types.h"

extern "C" {
    void _print(uintptr_t inMessage, uint32_t inLength);
    void _print_err(uintptr_t inMessage, uint32_t inLength);
}

void print(const char * inMessage, uint32_t inLength);
void print_err(const char * inMessage, uint32_t inLength);

#endif
