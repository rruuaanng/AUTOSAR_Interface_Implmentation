#ifndef BENBEN_AUTOSAR_STD_TYPES_H
#define BENBEN_AUTOSAR_STD_TYPES_H

#include <Platform_Types.h>

// [SWS_Std_00005]
typedef uint8 Std_ReturnType;
#define E_OK                                0U
#define E_NOT_OK                            1U


// [SWS_Std_00015]
typedef struct {
    uint16 vendorID;
    uint16 moduleID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
}Std_VersionInfoType;


// [SWS_Std_00022]
typedef uint8 Std_TransformerErrorCode;


// [SWS_Std_00024]
typedef uint8 Std_TransformerClass;
#define STD_TRANSFORMER_UNSPECIFIED         0x00
#define STD_TRANSFORMER_SERIALIZER          0x01
#define STD_TRANSFORMER_SAFETY              0x02
#define STD_TRANSFORMER_SECURITY            0x03
#define STD_TRANSFORMER_CUSTOM              0xFF


// [SWS_Std_00021]
typedef struct {
    Std_TransformerErrorCode errorCode;
    Std_TransformerClass transformerClass;
}Std_TransformerError;


// [SWS_Std_00029]
typedef uint8 Std_TransformerForwardCode;
#define E_OK                                0x00
#define E_SAFETY_INVALID_REP                0x01
#define E_SAFETY_INVALID_SEQ                0x02
#define E_SAFETY_INVALID_CRC                0x03


// [SWS_Std_91001]
typedef uint8 Std_MessageTypeType;
#define STD_MESSAGETYPE_REQUEST             0x00
#define STD_MESSAGETYPE_RESPONSE            0x01


// [SWS_Std_91002] 
typedef uint8 Std_MessageResultType;
#define STD_MESSAGERESULT_OK                0x00
#define STD_MESSAGERESULT_ERROR             0x01


// [SWS_Std_91003]
typedef Std_ReturnType (*Std_ExtractProtocolHeaderFieldsType)(
    const uint8* buffer,
    uint32 bufferLength,
    Std_MessageTypeType* messageType,
    Std_MessageResultType* messageResult
);

// [SWS_Std_00007]
#define STD_LOW         0x00
#define STD_HIGH        0x01


// [SWS_Std_00013]
#define STD_ACTIVE      0x00
#define STD_IDLE        0x01


// [SWS_Std_00010]
#define STD_ON          0x00
#define STD_OFF         0x01


// [SWS_Std_00031]
#ifdef NULL
#define NULL_PTR        NULL
#else
#define NULL_PTR        ((void *)0)
#endif // NULL_PTR

#endif // BENBEN_AUTOSAR_STD_TYPES_H