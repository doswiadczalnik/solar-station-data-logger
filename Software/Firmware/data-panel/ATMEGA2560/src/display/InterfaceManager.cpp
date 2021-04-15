#include "display\InterfaceManager.h"
#include <TFT_HX8357.h>
#include "declarations.h"

InterfaceManager::InterfaceManager(TFT_HX8357 *display)
{
    this->display = display;
    this->pictureBlock = PictureBlock(display);
}

void InterfaceManager :: Init()
{
    this->display->init();
    this->display->setRotation(SCREEN_ORIENTATION_USB_RIGHT);
    this->display->fillScreen(TFT_BLACK);
    
    pictureBlock.Init();
    currentProductionDataBlock.Init(display);
    currentConsumptionDataBlock.Init(display);
    currentChargingDataBlock.Init(display);
}

void InterfaceManager::DrawInterface()
{
}