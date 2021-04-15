#ifndef InterfaceManager_h
#define InterfaceManager_h

#include "datablocks\CurrentProductionDataBlock.h"
#include "datablocks\CurrentConsumptionDataBlock.h"
#include "dataBlocks\CurrentChargingDataBlock.h"
#include "dataBlocks\PictureBlock.h"
#include <TFT_HX8357.h>

class InterfaceManager
{
public:
    InterfaceManager(TFT_HX8357 *display);
    void Init();
    void DrawInterface();

private:
    TFT_HX8357 *display;
    CurrentProductionDataBlock currentProductionDataBlock;
    CurrentConsumptionDataBlock currentConsumptionDataBlock;
    CurrentChargingDataBlock currentChargingDataBlock;
    PictureBlock pictureBlock = NULL;
};

#endif