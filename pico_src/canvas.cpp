#include "../pico_inc/canvas.h"


void Canvas_Init(const char * inElementIdStr, uint32_t inElementIdStrLen)
{
    uintptr_t elementStrPtr = reinterpret_cast<uintptr_t>(inElementIdStr);

    _Canvas_Init(elementStrPtr, inElementIdStrLen);
}

void Canvas_FillStyle(const char * inColourStr, uint32_t inColourStrLen)
{
   uintptr_t colourStrPtr = reinterpret_cast<uintptr_t>(inColourStr);

    _Canvas_FillStyle(colourStrPtr, inColourStrLen);    
}

void Canvas_FillRect(uint32_t inXPosition, uint32_t inYPosition, uint32_t inPixelWidth, uint32_t inPixelHeight)
{
    _Canvas_FillRect(inXPosition, inYPosition, inPixelWidth, inPixelHeight);     
}

void Canvas_MoveTo(uint32_t inXPosition, uint32_t inYPosition)
{
    _Canvas_MoveTo(inXPosition, inYPosition);
}

void Canvas_LineTo(uint32_t inXPosition, uint32_t inYPosition)
{
    _Canvas_LineTo(inXPosition, inYPosition);
}

void Canvas_Stroke()
{
    _Canvas_Stroke();    
}


void Canvas_Arc(uint32_t inXPosition, uint32_t inYPosition, f32_t inRadius, f32_t inStartAngleRads, f32_t inEndAngleRads)
{
    _Canvas_Arc(inXPosition, inYPosition, inRadius, inStartAngleRads, inEndAngleRads);
}


void Canvas_Font(const char * inFontStr, uint32_t inFontStrLen)
{
    uintptr_t fontPtr = reinterpret_cast<uintptr_t>(inFontStr);

    _Canvas_Font(fontPtr, inFontStrLen);
}


void Canvas_FillText(const char * inTextStr, uint32_t inTextStrLen,  uint32_t inXPosition, uint32_t inYPosition)
{
    uintptr_t textPtr = reinterpret_cast<uintptr_t>(inTextStr);

    _Canvas_FillText(textPtr, inTextStrLen, inXPosition, inYPosition);    
}

void Canvas_StrokeText(const char * inTextStr, uint32_t inTextStrLen,  uint32_t inXPosition, uint32_t inYPosition)
{
    uintptr_t textPtr = reinterpret_cast<uintptr_t>(inTextStr);

    _Canvas_StrokeText(textPtr, inTextStrLen, inXPosition, inYPosition);   
}

void Canvas_TextAlign(const char * inAlignStr, uint32_t inAlignStrLen)
{
    uintptr_t alignPtr = reinterpret_cast<uintptr_t>(inAlignStr);

    _Canvas_TextAlign(alignPtr, inAlignStrLen);       
}


void Canvas_DrawImage(const char * inImgPathStr, uint32_t inImgPathStrLen, uint32_t inXPosition, uint32_t inYPosition, uint32_t inWidth, uint32_t inHeight)
{
    uintptr_t imgPathPtr = reinterpret_cast<uintptr_t>(inImgPathStr);

    _Canvas_DrawImage(imgPathPtr, inImgPathStrLen, inXPosition, inYPosition, inWidth, inHeight);
}