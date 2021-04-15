#include <TFT_HX8357.h>
#include "display\InterfaceManager.h"

TFT_HX8357 tft = TFT_HX8357();       // Invoke custom library

InterfaceManager interfaceManager = InterfaceManager(&tft);

void setup()
{
  interfaceManager.Init();

  interfaceManager.DrawInterface();
}

void loop()
{
}