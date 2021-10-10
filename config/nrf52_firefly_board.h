#ifndef NRF52_FIREFLY_BOARD_H
#define NRF52_FIREFLY_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

/* LED definitions */
#define LEDS_NUMBER         1
#define LED_1               NRF_GPIO_PIN_MAP(1,11)
#define LED_START           LED_1
#define LED_STOP            LED_1

#define LEDS_ACTIVE_STATE   1
#define LEDS_LIST           { LED_1 }

#define BSP_LED_0               LED_1


/* Button definitions */
#define BUTTONS_NUMBER 1
#define BUTTON_1       NRF_GPIO_PIN_MAP(1,10)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1 }
#define BSP_BUTTON_0   BUTTON_1


#ifdef __cplusplus
}
#endif

#endif // NRF52_FIREFLY_BOARD_H