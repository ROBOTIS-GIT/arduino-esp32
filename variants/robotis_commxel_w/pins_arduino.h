#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 1
#define NUM_DIGITAL_PINS        2
#define NUM_ANALOG_INPUTS       0

#define analogInputToDigitalPin(p)  (((p)<1)?(esp32_adc2gpio[(p)]):-1)
#define digitalPinToInterrupt(p)    (((p)<1)?(p):-1)
#define digitalPinHasPWM(p)         (p < 1)

static const uint8_t LED_BUILTIN = 13;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility

static const uint8_t BUTTON_BUILTIN = 14;
#define BUILTIN_BUTTON  BUTTON_BUILTIN

static const uint8_t DXL_TX = 17;
static const uint8_t DXL_RX = 16;
static const uint8_t DXL_DIR = 15;

static const uint8_t TX = 19;
static const uint8_t RX = 18;


#endif /* Pins_Arduino_h */
