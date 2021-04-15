#ifndef CurrentChargingDataBlock_h
#define CurrentChargingDataBlock_h

#include <TFT_HX8357.h>

class CurrentChargingDataBlock
{
    public:
        void Init(TFT_HX8357 *display);
        void Draw(int16_t x, int16_t y, int16_t width, int16_t height, uint16_t color);

    private:
        TFT_HX8357 *display;
};

#endif