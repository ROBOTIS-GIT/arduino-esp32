#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(esp32_adc2gpio[(p)]):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t LED_BUILTIN = 13;
#define BUILTIN_LED  LED_BUILTIN // backward compatibility

static const uint8_t BUTTON_BUILTIN = 14;
#define BUILTIN_BUTTON  BUTTON_BUILTIN

// static const uint8_t TX = 1;
// static const uint8_t RX = 3;
#define TX 1
#define RX 3

// static const uint8_t TX1 = 19;
// static const uint8_t RX1 = 18;
#define TX1 19
#define RX1 18

// static const uint8_t TX2 = 17; // DXL_TX
// static const uint8_t RX2 = 16; // DXL_RX
// static const uint8_t DXL_DIR = 15;
#define TX2 17
#define RX2 16
#define DXL_DIR 15

#define DEFAULT_DXL_SERIAL Serial2
#define DEFAULT_DXL_PIN    DXL_DIR

#endif /* Pins_Arduino_h */
