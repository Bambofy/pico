#include "../../pico_inc/defines.h"
#include "../../pico_inc/types.h"
#include "../../pico_inc/console.h"
#include "../../pico_inc/conversion.h"
#include "../../pico_inc/alert.h"
#include "../../pico_inc/textarea.h"
#include "../../pico_inc/window.h"
#include "../../pico_inc/div.h"
#include "../../pico_inc/canvas.h"

/////////////////////////////////
// Place your setup code here. //
/////////////////////////////////
void setup()
{
    Canvas_Init("mycanvas", 8U);

    Canvas_LoadImage("app/assets/test.png", 20U);
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
    Canvas_DrawImage("app/assets/test.png", 20U, 0U, 0U, 100U, 100U);
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