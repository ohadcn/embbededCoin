/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.8 */

#ifndef _PB_TYPES_PB_H_
#define _PB_TYPES_PB_H_
#include "pb.h"
#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _FailureType {
    FailureType_Failure_UnexpectedMessage = 1,
    FailureType_Failure_ButtonExpected = 2,
    FailureType_Failure_SyntaxError = 3,
    FailureType_Failure_ActionCancelled = 4,
    FailureType_Failure_PinExpected = 5,
    FailureType_Failure_PinCancelled = 6,
    FailureType_Failure_PinInvalid = 7,
    FailureType_Failure_InvalidSignature = 8,
    FailureType_Failure_Other = 9,
    FailureType_Failure_NotEnoughFunds = 10,
    FailureType_Failure_NotInitialized = 11,
    FailureType_Failure_FirmwareError = 99
} FailureType;

typedef enum _OutputScriptType {
    OutputScriptType_PAYTOADDRESS = 0,
    OutputScriptType_PAYTOSCRIPTHASH = 1
} OutputScriptType;

typedef enum _InputScriptType {
    InputScriptType_SPENDADDRESS = 0,
    InputScriptType_SPENDMULTISIG = 1
} InputScriptType;

typedef enum _RequestType {
    RequestType_TXINPUT = 0,
    RequestType_TXOUTPUT = 1,
    RequestType_TXMETA = 2,
    RequestType_TXFINISHED = 3
} RequestType;

typedef enum _ButtonRequestType {
    ButtonRequestType_ButtonRequest_Other = 1,
    ButtonRequestType_ButtonRequest_FeeOverThreshold = 2,
    ButtonRequestType_ButtonRequest_ConfirmOutput = 3,
    ButtonRequestType_ButtonRequest_ResetDevice = 4,
    ButtonRequestType_ButtonRequest_ConfirmWord = 5,
    ButtonRequestType_ButtonRequest_WipeDevice = 6,
    ButtonRequestType_ButtonRequest_ProtectCall = 7,
    ButtonRequestType_ButtonRequest_SignTx = 8,
    ButtonRequestType_ButtonRequest_FirmwareCheck = 9,
    ButtonRequestType_ButtonRequest_Address = 10
} ButtonRequestType;

typedef enum _PinMatrixRequestType {
    PinMatrixRequestType_PinMatrixRequestType_Current = 1,
    PinMatrixRequestType_PinMatrixRequestType_NewFirst = 2,
    PinMatrixRequestType_PinMatrixRequestType_NewSecond = 3
} PinMatrixRequestType;

/* Struct definitions */
typedef struct _CoinType {
    bool has_coin_name;
    char coin_name[17];
    bool has_coin_shortcut;
    char coin_shortcut[9];
    bool has_address_type;
    uint32_t address_type;
    bool has_maxfee_kb;
    uint64_t maxfee_kb;
} CoinType;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} HDNodeType_chain_code_t;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} HDNodeType_private_key_t;

typedef struct {
    size_t size;
    uint8_t bytes[33];
} HDNodeType_public_key_t;

typedef struct _HDNodeType {
    uint32_t depth;
    uint32_t fingerprint;
    uint32_t child_num;
    HDNodeType_chain_code_t chain_code;
    bool has_private_key;
    HDNodeType_private_key_t private_key;
    bool has_public_key;
    HDNodeType_public_key_t public_key;
} HDNodeType;

typedef struct {
    size_t size;
    uint8_t bytes[65];
} MultisigRedeemScriptType_pubkeys_t;

typedef struct {
    size_t size;
    uint8_t bytes[80];
} MultisigRedeemScriptType_signatures_t;

typedef struct _MultisigRedeemScriptType {
    size_t pubkeys_count;
    MultisigRedeemScriptType_pubkeys_t pubkeys[5];
    size_t signatures_count;
    MultisigRedeemScriptType_signatures_t signatures[4];
} MultisigRedeemScriptType;

typedef struct {
    size_t size;
    uint8_t bytes[520];
} TxOutputBinType_script_pubkey_t;

typedef struct _TxOutputBinType {
    uint64_t amount;
    TxOutputBinType_script_pubkey_t script_pubkey;
} TxOutputBinType;

typedef struct _TxOutputType {
    bool has_address;
    char address[35];
    size_t address_n_count;
    uint32_t address_n[8];
    uint64_t amount;
    OutputScriptType script_type;
} TxOutputType;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} TxRequestDetailsType_tx_hash_t;

typedef struct _TxRequestDetailsType {
    bool has_request_index;
    uint32_t request_index;
    bool has_tx_hash;
    TxRequestDetailsType_tx_hash_t tx_hash;
} TxRequestDetailsType;

typedef struct {
    size_t size;
    uint8_t bytes[80];
} TxRequestSerializedType_signature_t;

typedef struct {
    size_t size;
    uint8_t bytes[1024];
} TxRequestSerializedType_serialized_tx_t;

typedef struct _TxRequestSerializedType {
    bool has_signature_index;
    uint32_t signature_index;
    bool has_signature;
    TxRequestSerializedType_signature_t signature;
    bool has_serialized_tx;
    TxRequestSerializedType_serialized_tx_t serialized_tx;
} TxRequestSerializedType;

typedef struct {
    size_t size;
    uint8_t bytes[32];
} TxInputType_prev_hash_t;

typedef struct {
    size_t size;
    uint8_t bytes[520];
} TxInputType_script_sig_t;

typedef struct _TxInputType {
    size_t address_n_count;
    uint32_t address_n[8];
    TxInputType_prev_hash_t prev_hash;
    uint32_t prev_index;
    bool has_script_sig;
    TxInputType_script_sig_t script_sig;
    bool has_sequence;
    uint32_t sequence;
    bool has_script_type;
    InputScriptType script_type;
    bool has_multisig;
    MultisigRedeemScriptType multisig;
} TxInputType;

typedef struct _TransactionType {
    bool has_version;
    uint32_t version;
    size_t inputs_count;
    TxInputType inputs[1];
    size_t bin_outputs_count;
    TxOutputBinType bin_outputs[1];
    bool has_lock_time;
    uint32_t lock_time;
    size_t outputs_count;
    TxOutputType outputs[1];
    bool has_inputs_cnt;
    uint32_t inputs_cnt;
    bool has_outputs_cnt;
    uint32_t outputs_cnt;
} TransactionType;


typedef struct _TxRequest {
    bool has_request_type;
    RequestType request_type;
    bool has_details;
    TxRequestDetailsType details;
    bool has_serialized;
    TxRequestSerializedType serialized;
} TxRequest;

/* Extensions */
extern const pb_extension_type_t wire_in;
extern const pb_extension_type_t wire_out;
extern const pb_extension_type_t wire_debug_in;
extern const pb_extension_type_t wire_debug_out;

/* Default values for struct fields */
extern const uint32_t TxInputType_sequence_default;
extern const InputScriptType TxInputType_script_type_default;

/* Field tags (for use in manual encoding/decoding) */
#define CoinType_coin_name_tag                   1
#define CoinType_coin_shortcut_tag               2
#define CoinType_address_type_tag                3
#define CoinType_maxfee_kb_tag                   4
#define HDNodeType_depth_tag                     1
#define HDNodeType_fingerprint_tag               2
#define HDNodeType_child_num_tag                 3
#define HDNodeType_chain_code_tag                4
#define HDNodeType_private_key_tag               5
#define HDNodeType_public_key_tag                6
#define MultisigRedeemScriptType_pubkeys_tag     1
#define MultisigRedeemScriptType_signatures_tag  2
#define TxOutputBinType_amount_tag               1
#define TxOutputBinType_script_pubkey_tag        2
#define TxOutputType_address_tag                 1
#define TxOutputType_address_n_tag               2
#define TxOutputType_amount_tag                  3
#define TxOutputType_script_type_tag             4
#define TxRequestDetailsType_request_index_tag   1
#define TxRequestDetailsType_tx_hash_tag         2
#define TxRequestSerializedType_signature_index_tag 1
#define TxRequestSerializedType_signature_tag    2
#define TxRequestSerializedType_serialized_tx_tag 3
#define TxInputType_address_n_tag                1
#define TxInputType_prev_hash_tag                2
#define TxInputType_prev_index_tag               3
#define TxInputType_script_sig_tag               4
#define TxInputType_sequence_tag                 5
#define TxInputType_script_type_tag              6
#define TxInputType_multisig_tag                 7
#define TransactionType_version_tag              1
#define TransactionType_inputs_tag               2
#define TransactionType_bin_outputs_tag          3
#define TransactionType_outputs_tag              5
#define TransactionType_lock_time_tag            4
#define TransactionType_inputs_cnt_tag           6
#define TransactionType_outputs_cnt_tag          7
#define wire_in_tag                              50002
#define wire_out_tag                             50003
#define wire_debug_in_tag                        50004
#define wire_debug_out_tag                       50005

/* Struct field encoding specification for nanopb */
extern const pb_field_t HDNodeType_fields[7];
extern const pb_field_t CoinType_fields[5];
extern const pb_field_t MultisigRedeemScriptType_fields[3];
extern const pb_field_t TxInputType_fields[8];
extern const pb_field_t TxOutputType_fields[5];
extern const pb_field_t TxOutputBinType_fields[3];
extern const pb_field_t TransactionType_fields[8];
extern const pb_field_t TxRequestDetailsType_fields[3];
extern const pb_field_t TxRequestSerializedType_fields[4];

/* Maximum encoded size of messages (where known) */
#define HDNodeType_size                          121
#define CoinType_size                            47
#define MultisigRedeemScriptType_size            663
#define TxInputType_size                         1289
#define TxOutputType_size                        102
#define TxOutputBinType_size                     534
#define TransactionType_size                     1957
#define TxRequestDetailsType_size                40
#define TxRequestSerializedType_size             1115

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
