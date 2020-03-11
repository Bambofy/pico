#ifndef CANVAS_H
#define CANVAS_H

#include "types.h"

extern "C"
{
    void _Canvas_Init(uintptr_t inElementIdStrPtr, uint32_t inElementIdStrLen);

    void _Canvas_FillStyle(uintptr_t inColourStrPtr, uint32_t inColourStrLen);
    void _Canvas_FillRect(uint32_t inXPosition, uint32_t inYPosition, uint32_t inPixelWidth, uint32_t inPixelHeight);
    void _Canvas_MoveTo(uint32_t inXPosition, uint32_t inYPosition);
    void _Canvas_LineTo(uint32_t inXPosition, uint32_t inYPosition);
    void _Canvas_Stroke();

    void _Canvas_Arc(uint32_t inXPosition, uint32_t inYPosition, f32_t nRadius, f32_t inStartAngleRads, f32_t inEndAngleRads);

    void _Canvas_Font(uintptr_t inFontStrPtr, uint32_t inFontStrLen);

    void _Canvas_FillText(uintptr_t inTextStrPtr, uint32_t inTextStrLen,  uint32_t inXPosition, uint32_t inYPosition);
    void _Canvas_StrokeText(uintptr_t inTextStrPtr, uint32_t inTextStrLen,  uint32_t inXPosition, uint32_t inYPosition);
    void _Canvas_TextAlign(uintptr_t inAlignStrPtr, uint32_t inAlignStrLen);

    void _Canvas_LoadImage(uintptr_t inImgPathStrPtr, uint32_t inImagePathStrLen);
    void _Canvas_UnloadImage(uintptr_t inImagePathStrPtr, uint32_t inImagePathStrLen);
    void _Canvas_DrawImage(uintptr_t inImgPathStrPtr, uint32_t inImgPathStrLen, uint32_t inXPosition, uint32_t inYPosition, uint32_t inWidth, uint32_t inHeight);
}


void Canvas_Init(const char * inElementIdStr, uint32_t inElementIdStrLen);

void Canvas_FillStyle(const char * inColourStr, uint32_t inColourStrLen);
void Canvas_FillRect(uint32_t inXPosition, uint32_t inYPosition, uint32_t inPixelWidth, uint32_t inPixelHeight);
void Canvas_MoveTo(uint32_t inXPosition, uint32_t inYPosition);
void Canvas_LineTo(uint32_t inXPosition, uint32_t inYPosition);
void Canvas_Stroke();

void Canvas_Arc(uint32_t inXPosition, uint32_t inYPosition, f32_t inRadius, f32_t inStartAngleRads, f32_t inEndAngleRads);

void Canvas_Font(const char * inFontStr, uint32_t inFontStrLen);

void Canvas_FillText(const char * inTextStr, uint32_t inTextStrLen,  uint32_t inXPosition, uint32_t inYPosition);
void Canvas_StrokeText(const char * inTextStr, uint32_t inTextStrLen,  uint32_t inXPosition, uint32_t inYPosition);
void Canvas_TextAlign(const char * inAlignStr, uint32_t inAlignStrLen);

void Canvas_LoadImage(const char * inImagePathStr, uint32_t inImagePathStrLen);
void Canvas_UnloadImage(const char * inImagePathStr, uint32_t inImagePathStrLen);
void Canvas_DrawImage(const char * inImgPathStr, uint32_t inImgPathStrLen, uint32_t inXPosition, uint32_t inYPosition, uint32_t inWidth, uint32_t inHeight);


#endif
