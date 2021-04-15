#include "display\dataBlocks\CurrentConsumptionDataBlock.h"
#include <TFT_HX8357.h>

void CurrentConsumptionDataBlock::Init(TFT_HX8357 *display)
{
    this->display = display;
}

void CurrentConsumptionDataBlock::Draw(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color)
{
    this->display->drawRect(x, y, width, height, color);
}