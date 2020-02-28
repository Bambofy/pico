#include "../../pico_inc/defines.h"
#include "../../pico_inc/types.h"
#include "../../pico_inc/console.h"
#include "../../pico_inc/conversion.h"
#include "../../pico_inc/alert.h"
#include "../../pico_inc/textarea.h"
#include "../../pico_inc/window.h"

/////////////////////////////////
// Place your setup code here. //
/////////////////////////////////
void setup()
{
    // memory dump
    uint8_t a = 100;

    char temp[32];
    for (int i = 0; i < 100; i++)
    {
    uint8_t * ip  = reinterpret_cast<uint8_t*>(i);
    To_Char_Array(*ip, temp, 32);
    print(temp, 32);
    }

    To_Char_Array(a, temp, 32);
    print(temp, 32);

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