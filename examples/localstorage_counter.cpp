#include "../../pico_inc/defines.h"
#include "../../pico_inc/types.h"
#include "../../pico_inc/console.h"
#include "../../pico_inc/conversion.h"
#include "../../pico_inc/alert.h"
#include "../../pico_inc/textarea.h"
#include "../../pico_inc/window.h"
#include "../../pico_inc/div.h"
#include "../../pico_inc/canvas.h"
#include "../../pico_inc/localstorage.h"
#include "../../pico_inc/sessionstorage.h"

/////////////////////////////////
// Place your setup code here. //
/////////////////////////////////
void setup()
{
    print("Testing local storage", 22U);



    // 1. get the session storage value
    char val[10U];
    LocalStorage_GetItem("VAL", 3U, val, 10U);

    print("Counter is at", 14U);
    print(val, 10);



    // 2. Get the session storage value as an integer.
    int32_t counter = Conversion_String_To_Int32(val, 10U);

    if (counter == 0 || counter == NULL)
    {
        // 2.1 if the value is null or 0, set the counter to 1.
        counter = 1U;
    }
    else
    {
        // 2.2 if the value is not 0 or null, increment the value.
        counter++;
    }

    

    // 3. Write the counter value back into local storage.

    // 3.1. Clear the val array.
    for (uint8_t i = 0U; i < 10U; i++) val[i] = '\0';

    // 3.1. Get the counter as a string.
    Conversion_Int_To_Char_Array(counter, val, 10U);

    // 3.2. Store it in the local storage.
    LocalStorage_SetItem("VAL", 3U, val, 10U);
}

///////////////////////////////////
// Place your looping code here. //
///////////////////////////////////
void loop()
{
}

///////////////////////
// DOM button events //
///////////////////////
void buttonclicked(const char * inButtonIDString, uint32_t inButtonIDStringLength)
{
}

////////////////
// key events //
////////////////
void onkeypress(const char inKeyChar)
{
}

void onkeydown(const char inKeyChar)
{
}

void onkeyup(const char inKeyChar)
{
}

void onwheel(int32_t inDeltaX, int32_t inDeltaY)
{
}