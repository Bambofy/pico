#include "../../pico_inc/defines.h"
#include "../../pico_inc/types.h"
#include "../../pico_inc/console.h"
#include "../../pico_inc/alert.h"
#include "../../pico_inc/textarea.h"
#include "../../pico_inc/window.h"

/////////////////////////////////
// Place your setup code here. //
/////////////////////////////////
void setup()
{
/*
    Console example
    ----------------
    print("test", 4U);
    print_err("test", 4U);
*/

/*
    Alert example
    -------------
    alert("test", 4U);
*/

/*
    TextArea example
    -----------------
    // Initialize the textarea element which has this id to 5 rows, 5, columns.
    TextArea_Init("displayTextArea", 15U, 5U, 5U);

    // Set the text area element to have this content.
    TextArea_SetContent("displayTextArea", 15U, "test", 4U);

    // Create memory space for the content of the text area.
    const uint32_t maxContentLength = 100U;
    char textAreaContents[maxContentLength];

    // Retrieve the text area contents and put it into the memory defined above.
    TextArea_GetContent("displayTextArea", 15U, textAreaContents, maxContentLength);

    // Print the contents of the text area.
    print(textAreaContents, maxContentLength);
*/

    return;
}

////////////////
// key events //
////////////////
/*
    Print key pressed example
    -------------------------
void keypress(const char inKeyChar)
{
    print(&inKeyChar, 1U);
}
*/
