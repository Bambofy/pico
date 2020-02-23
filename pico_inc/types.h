/**
 * @file types.h
 * @author RGB
 * @brief This file contains the common types shared between WASM/JS/C++
 * @version 0.1
 * @date 2020-02-21
 */

#ifndef TYPES_H
#define TYPES_H

// Signed
typedef signed char		    int8_t;
typedef int			        int16_t;
typedef int			        int32_t;

// Unsigned
typedef unsigned char		    uint8_t;
typedef unsigned int		    uint16_t;
typedef unsigned int		    uint32_t;

// Void *
typedef int			        intptr_t;
typedef unsigned int		uintptr_t;

// FPU
typedef float f32_t;
typedef double f64_t;

#endif //TYPES_H
