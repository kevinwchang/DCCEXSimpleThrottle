#include "Arduino.h"
#include "PeripheralPins.h"

// override original PinMap_USB from Arduino_Core_STM32 variant PeripheralPins.c - don't mess up other pins by remapping to USB_NOE
#if defined(HAL_PCD_MODULE_ENABLED) || defined(HAL_HCD_MODULE_ENABLED)
const PinMap PinMap_USB[] = {
  {PA_11, USB, STM_PIN_DATA(STM_MODE_INPUT, LL_GPIO_PULL_NO, GPIO_AF_NONE)}, // USB_DM
  {PA_12, USB, STM_PIN_DATA(STM_MODE_INPUT, LL_GPIO_PULL_NO, GPIO_AF_NONE)}, // USB_DP
  {NC,    NP,  0}
};
#endif