#include "../../pico_inc/defines.h"
#include "../../pico_inc/types.h"
#include "../../pico_inc/console.h"
#include "../../pico_inc/conversion.h"
#include "../../pico_inc/alert.h"
#include "../../pico_inc/textarea.h"
#include "../../pico_inc/window.h"
#include "../../pico_inc/div.h"

/////////////////////////////////
// Place your setup code here. //
/////////////////////////////////
void setup()
{

}

///////////////////////
// DOM button events //
///////////////////////
void buttonclicked(const char * inButtonIDString, uint32_t inButtonIDStringLength)
{
    char titleContent[32U];

    Div_GetContent("titleDiv", 8U, titleContent, 32U);

    Div_SetContent("titleDiv", 8U, "TEST", 4U);
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