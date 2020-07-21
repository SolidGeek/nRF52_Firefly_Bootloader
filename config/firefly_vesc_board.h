#ifndef FIREFLY_RECEIVER_BOARD_H
#define FIREFLY_RECEIVER_BOARD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// --- Board defintions for Firefly nRF52480 receiver ---

/* LED definitions */
#define LEDS_NUMBER             2

#define LED_1                   NRF_GPIO_PIN_MAP(1,10)
#define LED_2                   NRF_GPIO_PIN_MAP(1,11)
#define LED_START               LED_1
#define LED_STOP                LED_2

#define LEDS_ACTIVE_STATE       1
#define LEDS_LIST               { LED_1, LED_2 }

#define BSP_LED_0               LED_1
#define BSP_LED_1               LED_2
#define LEDS_INV_MASK           LEDS_MASK

/* Button definitions */
#define BUTTONS_NUMBER          0

#define BUTTONS_ACTIVE_STATE    0
#define BUTTON_PULL             NRF_GPIO_PIN_PULLUP

/* DFU reset pin
   Self reset pin used for DFU upgrade over USB UART 
   DFU is configured to be enabled by reset
   */
#define BSP_SELF_PINRESET_PIN   NRF_GPIO_PIN_MAP(0,24) // Connect this pin to RST


#ifdef __cplusplus
}
#endif

#endif // FIREFLY_RECEIVER_BOARD_H