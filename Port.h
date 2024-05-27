#ifndef BENBEN_AUTOSAR_PORT_H
#define BENBEN_AUTOSAR_PORT_H

#include <autosar/Std_Types.h>
#include <autosar/cfg.h>


// [SWS_Port_00051] Definiton of development errors in module Port
#define PORT_E_PARAM_PIN                        0x0A
#define PORT_E_DIRECTION_UNCHANGEABLE           0x0B
#define PORT_E_INIT_FAILED                      0x0C
#define PORT_E_PARAM_INVALID_MODE               0x0D
#define PORT_E_MODE_UNCHANGEABLE                0x0E
#define PORT_E_UNINIT                           0x0F
#define PORT_E_PARAM_POINTER                    0x10


// [SWS_Port_00228] Definition of datatype Port_ConfigType
typedef struct {
    char name[32];
    void *info;
}Port_ConfigType;


// [SWS_Port_00229] Definition of datatype Port_PinType
#if PORT_PORTPIN_SIZE == 0U
typedef uint8 Port_PinType;
#elif PORT_PORTPIN_SIZE == 1U
typedef uint16_t Port_PinType;
#elif PORT_PORTPIN_SIZE == 2U
typedef uint32_t Port_PinType;
#else   
typedef uint32_t Port_PinType;  /* default 32bit */
#endif // Port_PinType


// [SWS_Port_00230] Definition of datatype Port_PinDirectionType
typedef enum {
    PORT_PIN_IN = 0x00, /* sets port pin as input */
    PORT_PIN_OUT = 0x01 /* sets port pin as output */
}Port_PinDirectionType;


// [SWS_Port_00231] Definition of datatype Port_PinModeType
#if PORT_PINMODE_SIZE == 0U
typedef uint8 Port_PinModeType;
#elif PORT_PINMODE_SIZE == 1U
typedef uint16_t Port_PinModeType;
#elif PORT_PINMODE_SIZE == 2U
typedef uint32_t Port_PinModeType;
#else
typedef uint32_t Port_PinModeType; /* default 32bit */
#endif // Port_PinType


// [SWS_Port_00140] Definition of API function Port_Init
// Service ID:              0x00
// Sync/Async:              Synchronous
void Port_Init(
    const Port_ConfigType *ConfigPtr
);


// [SWS_Port_00141] Definition of API function Port_SetPinDirection
// Service ID:              0x01
// Sync/Async:              Synchronous
void Port_SetPinDirection(
    Port_PinType Pin,
    Port_PinDirectionType Direction
);


// [SWS_Port_00142] Definition of API function Port_RefreshPortDirection
// Service ID:              0x02
// Sync/Async:              Synchronous
void Port_RefreshPortDirection(
    void
);


// [SWS_Port_00143] Definition of API function Port_GetVersionInfo
// Service ID:              0x03
// Sync/Async:              Synchronous
void Port_GetVersionInfo(
    Std_VersionInfoType *versioninfo
);


// [SWS_Port_00145] Definition of API function Port_SetPinMode
// Service ID:              0x04
// Sync/Async:              Synchronous
void Port_SetPinMode(
    Port_PinType Pin,
    Port_PinModeType Mode
);

#endif // BENBEN_AUTOSAR_PORT_H