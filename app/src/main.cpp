#include "../../pico_inc/defines.h"
#include "../../pico_inc/types.h"
#include "../../pico_inc/console.h"
#include "../../pico_inc/alert.h"
#include "../../pico_inc/textarea.h"

// this is the C/WASM entry point.
extern "C" 
{
    export void setup(); // export this function to WASM.
}



// this is the C++ entry point.
void setup()
{
    TextArea_Init("displayTextArea", 15U, 5U, 5U);
    
    TextArea_SetCharacter("displayTextArea", 15U, 10U, 10U, 'A');

    return;
}
