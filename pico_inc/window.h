#ifndef WINDOW_H
#define WINDOW_H

#include "../pico_inc/defines.h"
#include "../pico_inc/types.h"

// this is the C/WASM entry point.
extern "C" 
{
    export void setup(); // export this function to WASM.
    export void loop();

    // we are sent a char code from javascript, casting it to inKeyChar causes it to represent its
    // ascii value.
    export void onkeypress(const char inKeyChar);
    export void onkeydown(const char inKeyChar);
    export void onkeyup(const char inKeyChar);

    export void onclick(const char inKeyChar);
    export void onmousedown(const char inKeyChar);
    export void onmouseup(const char inKeyChar);
    export void onwheel(int32_t inDeltaX, int32_t inDeltaY);

    export void _buttonclicked(uintptr_t inButtonIDStrPtr, uint32_t inButtonIDStrLength);
    export void buttonclicked(const char * inButtonId, uint32_t inButtonIdLength);
}

#endif
