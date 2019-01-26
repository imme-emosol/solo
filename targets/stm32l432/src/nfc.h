#ifndef _NFC_H_
#define _NFC_H_

#include <stdint.h>

void nfc_loop();
void nfc_init();

typedef struct
{
    uint8_t cclen_hi;
    uint8_t cclen_lo;
    uint8_t version;
    uint8_t MLe_hi;
    uint8_t MLe_lo;
    uint8_t MLc_hi;
    uint8_t MLc_lo;
    uint8_t tlv[8];
} __attribute__((packed)) CAPABILITY_CONTAINER;

typedef struct
{
    uint8_t cla;
    uint8_t ins;
    uint8_t p1;
    uint8_t p2;
    uint8_t lc;
} __attribute__((packed)) APDU_HEADER;

#define NFC_CMD_REQA                  0x26
#define NFC_CMD_WUPA                  0x52
#define NFC_CMD_HLTA                  0x50
#define NFC_CMD_RATS                  0xe0

#define NFC_CMD_PPSS                  0xd0
#define IS_PPSS_CMD(x)                (((x) & 0xf0) == NFC_CMD_PPSS)
#define NFC_CMD_IBLOCK                0x00
#define IS_IBLOCK(x)                  ( (((x) & 0xc0) == NFC_CMD_IBLOCK) && (((x) & 0x02) == 0x02) )
#define NFC_CMD_RBLOCK                0x80
#define NFC_CMD_RBLOCK_ACK            0x20
#define IS_RBLOCK(x)                  ( (((x) & 0xc0) == NFC_CMD_RBLOCK) && (((x) & 0x02) == 0x02) )
#define NFC_CMD_SBLOCK                0xc0
#define IS_SBLOCK(x)                  ( (((x) & 0xc0) == NFC_CMD_SBLOCK) && (((x) & 0x02) == 0x02) )

#define NFC_SBLOCK_DESELECT           0x32
#define NFC_SBLOCK_WTX                0xf2

#define APDU_FIDO_U2F_REGISTER        0x01
#define APDU_FIDO_U2F_AUTHENTICATE    0x02
#define APDU_FIDO_U2F_VERSION         0x03
#define APDU_FIDO_NFCCTAP_MSG         0x10
#define APDU_INS_SELECT               0xA4
#define APDU_INS_READ_BINARY          0xB0

#define AID_NDEF_TYPE_4               "\xD2\x76\x00\x00\x85\x01\x01"
#define AID_NDEF_MIFARE_TYPE_4        "\xD2\x76\x00\x00\x85\x01\x00"
#define AID_CAPABILITY_CONTAINER      "\xE1\x03"
#define AID_NDEF_TAG                  "\x11\x11"
#define AID_FIDO                      "\xa0\x00\x00\x06\x47\x2f\x00\x01"

typedef enum
{
    APP_NDEF_TYPE_4 = 1,
    APP_MIFARE_TYPE_4,
    APP_CAPABILITY_CONTAINER,
    APP_NDEF_TAG,
	APP_FIDO,
} APPLETS;

#define SW_SUCCESS                    0x9000
#define SW_GET_RESPONSE               0x6100  // Command successfully executed; 'XX' bytes of data are available and can be requested using GET RESPONSE.
#define SW_WRONG_LENGTH               0x6700
#define SW_COND_USE_NOT_SATISFIED     0x6985
#define SW_FILE_NOT_FOUND             0x6a82
#define SW_INS_INVALID                0x6d00  // Instruction code not supported or invalid
#define SW_INTERNAL_EXCEPTION         0x6f00

#endif
