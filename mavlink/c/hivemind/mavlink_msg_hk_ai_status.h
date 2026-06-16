#pragma once
// MESSAGE HK_AI_STATUS PACKING

#define MAVLINK_MSG_ID_HK_AI_STATUS 50000


typedef struct __mavlink_hk_ai_status_t {
 uint16_t fc_fault_code; /*<  飞行控制 AI 故障代码（正常时 0）*/
 uint16_t fc_response_time; /*<  飞行控制 AI 推理响应时间（ms）*/
 uint16_t track_fault_code; /*<  跟踪算法 AI 故障代码（正常时 0）*/
 uint16_t track_response_time; /*<  跟踪算法 AI 推理响应时间（ms）*/
 char fc_model_name[20]; /*<  飞行控制 AI 模型名称*/
 char fc_version[10]; /*<  飞行控制 AI 版本号*/
 uint8_t fc_status; /*<  飞行控制 AI 状态：0=正常, 1=故障*/
 char track_model_name[20]; /*<  跟踪算法 AI 模型名称*/
 char track_version[10]; /*<  跟踪算法 AI 版本号*/
 uint8_t track_status; /*<  跟踪算法 AI 状态：0=正常, 1=故障*/
 uint8_t gpu_usage; /*<  GPU 使用率（%）*/
 int8_t gpu_temperature; /*<  GPU 温度（°C）*/
} mavlink_hk_ai_status_t;

#define MAVLINK_MSG_ID_HK_AI_STATUS_LEN 72
#define MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN 72
#define MAVLINK_MSG_ID_50000_LEN 72
#define MAVLINK_MSG_ID_50000_MIN_LEN 72

#define MAVLINK_MSG_ID_HK_AI_STATUS_CRC 220
#define MAVLINK_MSG_ID_50000_CRC 220

#define MAVLINK_MSG_HK_AI_STATUS_FIELD_FC_MODEL_NAME_LEN 20
#define MAVLINK_MSG_HK_AI_STATUS_FIELD_FC_VERSION_LEN 10
#define MAVLINK_MSG_HK_AI_STATUS_FIELD_TRACK_MODEL_NAME_LEN 20
#define MAVLINK_MSG_HK_AI_STATUS_FIELD_TRACK_VERSION_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_AI_STATUS { \
    50000, \
    "HK_AI_STATUS", \
    12, \
    {  { "fc_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 8, offsetof(mavlink_hk_ai_status_t, fc_model_name) }, \
         { "fc_version", NULL, MAVLINK_TYPE_CHAR, 10, 28, offsetof(mavlink_hk_ai_status_t, fc_version) }, \
         { "fc_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_hk_ai_status_t, fc_status) }, \
         { "fc_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hk_ai_status_t, fc_fault_code) }, \
         { "fc_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_hk_ai_status_t, fc_response_time) }, \
         { "track_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 39, offsetof(mavlink_hk_ai_status_t, track_model_name) }, \
         { "track_version", NULL, MAVLINK_TYPE_CHAR, 10, 59, offsetof(mavlink_hk_ai_status_t, track_version) }, \
         { "track_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_hk_ai_status_t, track_status) }, \
         { "track_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_hk_ai_status_t, track_fault_code) }, \
         { "track_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_hk_ai_status_t, track_response_time) }, \
         { "gpu_usage", NULL, MAVLINK_TYPE_UINT8_T, 0, 70, offsetof(mavlink_hk_ai_status_t, gpu_usage) }, \
         { "gpu_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 71, offsetof(mavlink_hk_ai_status_t, gpu_temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_AI_STATUS { \
    "HK_AI_STATUS", \
    12, \
    {  { "fc_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 8, offsetof(mavlink_hk_ai_status_t, fc_model_name) }, \
         { "fc_version", NULL, MAVLINK_TYPE_CHAR, 10, 28, offsetof(mavlink_hk_ai_status_t, fc_version) }, \
         { "fc_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_hk_ai_status_t, fc_status) }, \
         { "fc_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hk_ai_status_t, fc_fault_code) }, \
         { "fc_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_hk_ai_status_t, fc_response_time) }, \
         { "track_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 39, offsetof(mavlink_hk_ai_status_t, track_model_name) }, \
         { "track_version", NULL, MAVLINK_TYPE_CHAR, 10, 59, offsetof(mavlink_hk_ai_status_t, track_version) }, \
         { "track_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_hk_ai_status_t, track_status) }, \
         { "track_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_hk_ai_status_t, track_fault_code) }, \
         { "track_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_hk_ai_status_t, track_response_time) }, \
         { "gpu_usage", NULL, MAVLINK_TYPE_UINT8_T, 0, 70, offsetof(mavlink_hk_ai_status_t, gpu_usage) }, \
         { "gpu_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 71, offsetof(mavlink_hk_ai_status_t, gpu_temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_ai_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param fc_model_name  飞行控制 AI 模型名称
 * @param fc_version  飞行控制 AI 版本号
 * @param fc_status  飞行控制 AI 状态：0=正常, 1=故障
 * @param fc_fault_code  飞行控制 AI 故障代码（正常时 0）
 * @param fc_response_time  飞行控制 AI 推理响应时间（ms）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障代码（正常时 0）
 * @param track_response_time  跟踪算法 AI 推理响应时间（ms）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_ai_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *fc_model_name, const char *fc_version, uint8_t fc_status, uint16_t fc_fault_code, uint16_t fc_response_time, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time, uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, fc_fault_code);
    _mav_put_uint16_t(buf, 2, fc_response_time);
    _mav_put_uint16_t(buf, 4, track_fault_code);
    _mav_put_uint16_t(buf, 6, track_response_time);
    _mav_put_uint8_t(buf, 38, fc_status);
    _mav_put_uint8_t(buf, 69, track_status);
    _mav_put_uint8_t(buf, 70, gpu_usage);
    _mav_put_int8_t(buf, 71, gpu_temperature);
    _mav_put_char_array(buf, 8, fc_model_name, 20);
    _mav_put_char_array(buf, 28, fc_version, 10);
    _mav_put_char_array(buf, 39, track_model_name, 20);
    _mav_put_char_array(buf, 59, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#else
    mavlink_hk_ai_status_t packet;
    packet.fc_fault_code = fc_fault_code;
    packet.fc_response_time = fc_response_time;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.fc_status = fc_status;
    packet.track_status = track_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet.fc_model_name, fc_model_name, 20);
    mav_array_assign_char(packet.fc_version, fc_version, 10);
    mav_array_assign_char(packet.track_model_name, track_model_name, 20);
    mav_array_assign_char(packet.track_version, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_AI_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
}

/**
 * @brief Pack a hk_ai_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param fc_model_name  飞行控制 AI 模型名称
 * @param fc_version  飞行控制 AI 版本号
 * @param fc_status  飞行控制 AI 状态：0=正常, 1=故障
 * @param fc_fault_code  飞行控制 AI 故障代码（正常时 0）
 * @param fc_response_time  飞行控制 AI 推理响应时间（ms）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障代码（正常时 0）
 * @param track_response_time  跟踪算法 AI 推理响应时间（ms）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_ai_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *fc_model_name, const char *fc_version, uint8_t fc_status, uint16_t fc_fault_code, uint16_t fc_response_time, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time, uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, fc_fault_code);
    _mav_put_uint16_t(buf, 2, fc_response_time);
    _mav_put_uint16_t(buf, 4, track_fault_code);
    _mav_put_uint16_t(buf, 6, track_response_time);
    _mav_put_uint8_t(buf, 38, fc_status);
    _mav_put_uint8_t(buf, 69, track_status);
    _mav_put_uint8_t(buf, 70, gpu_usage);
    _mav_put_int8_t(buf, 71, gpu_temperature);
    _mav_put_char_array(buf, 8, fc_model_name, 20);
    _mav_put_char_array(buf, 28, fc_version, 10);
    _mav_put_char_array(buf, 39, track_model_name, 20);
    _mav_put_char_array(buf, 59, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#else
    mavlink_hk_ai_status_t packet;
    packet.fc_fault_code = fc_fault_code;
    packet.fc_response_time = fc_response_time;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.fc_status = fc_status;
    packet.track_status = track_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_memcpy(packet.fc_model_name, fc_model_name, sizeof(char)*20);
    mav_array_memcpy(packet.fc_version, fc_version, sizeof(char)*10);
    mav_array_memcpy(packet.track_model_name, track_model_name, sizeof(char)*20);
    mav_array_memcpy(packet.track_version, track_version, sizeof(char)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_AI_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_ai_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param fc_model_name  飞行控制 AI 模型名称
 * @param fc_version  飞行控制 AI 版本号
 * @param fc_status  飞行控制 AI 状态：0=正常, 1=故障
 * @param fc_fault_code  飞行控制 AI 故障代码（正常时 0）
 * @param fc_response_time  飞行控制 AI 推理响应时间（ms）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障代码（正常时 0）
 * @param track_response_time  跟踪算法 AI 推理响应时间（ms）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_ai_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *fc_model_name,const char *fc_version,uint8_t fc_status,uint16_t fc_fault_code,uint16_t fc_response_time,const char *track_model_name,const char *track_version,uint8_t track_status,uint16_t track_fault_code,uint16_t track_response_time,uint8_t gpu_usage,int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, fc_fault_code);
    _mav_put_uint16_t(buf, 2, fc_response_time);
    _mav_put_uint16_t(buf, 4, track_fault_code);
    _mav_put_uint16_t(buf, 6, track_response_time);
    _mav_put_uint8_t(buf, 38, fc_status);
    _mav_put_uint8_t(buf, 69, track_status);
    _mav_put_uint8_t(buf, 70, gpu_usage);
    _mav_put_int8_t(buf, 71, gpu_temperature);
    _mav_put_char_array(buf, 8, fc_model_name, 20);
    _mav_put_char_array(buf, 28, fc_version, 10);
    _mav_put_char_array(buf, 39, track_model_name, 20);
    _mav_put_char_array(buf, 59, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#else
    mavlink_hk_ai_status_t packet;
    packet.fc_fault_code = fc_fault_code;
    packet.fc_response_time = fc_response_time;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.fc_status = fc_status;
    packet.track_status = track_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet.fc_model_name, fc_model_name, 20);
    mav_array_assign_char(packet.fc_version, fc_version, 10);
    mav_array_assign_char(packet.track_model_name, track_model_name, 20);
    mav_array_assign_char(packet.track_version, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_AI_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
}

/**
 * @brief Encode a hk_ai_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_ai_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_ai_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_ai_status_t* hk_ai_status)
{
    return mavlink_msg_hk_ai_status_pack(system_id, component_id, msg, hk_ai_status->fc_model_name, hk_ai_status->fc_version, hk_ai_status->fc_status, hk_ai_status->fc_fault_code, hk_ai_status->fc_response_time, hk_ai_status->track_model_name, hk_ai_status->track_version, hk_ai_status->track_status, hk_ai_status->track_fault_code, hk_ai_status->track_response_time, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature);
}

/**
 * @brief Encode a hk_ai_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_ai_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_ai_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_ai_status_t* hk_ai_status)
{
    return mavlink_msg_hk_ai_status_pack_chan(system_id, component_id, chan, msg, hk_ai_status->fc_model_name, hk_ai_status->fc_version, hk_ai_status->fc_status, hk_ai_status->fc_fault_code, hk_ai_status->fc_response_time, hk_ai_status->track_model_name, hk_ai_status->track_version, hk_ai_status->track_status, hk_ai_status->track_fault_code, hk_ai_status->track_response_time, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature);
}

/**
 * @brief Encode a hk_ai_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_ai_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_ai_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_ai_status_t* hk_ai_status)
{
    return mavlink_msg_hk_ai_status_pack_status(system_id, component_id, _status, msg,  hk_ai_status->fc_model_name, hk_ai_status->fc_version, hk_ai_status->fc_status, hk_ai_status->fc_fault_code, hk_ai_status->fc_response_time, hk_ai_status->track_model_name, hk_ai_status->track_version, hk_ai_status->track_status, hk_ai_status->track_fault_code, hk_ai_status->track_response_time, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature);
}

/**
 * @brief Send a hk_ai_status message
 * @param chan MAVLink channel to send the message
 *
 * @param fc_model_name  飞行控制 AI 模型名称
 * @param fc_version  飞行控制 AI 版本号
 * @param fc_status  飞行控制 AI 状态：0=正常, 1=故障
 * @param fc_fault_code  飞行控制 AI 故障代码（正常时 0）
 * @param fc_response_time  飞行控制 AI 推理响应时间（ms）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障代码（正常时 0）
 * @param track_response_time  跟踪算法 AI 推理响应时间（ms）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_ai_status_send(mavlink_channel_t chan, const char *fc_model_name, const char *fc_version, uint8_t fc_status, uint16_t fc_fault_code, uint16_t fc_response_time, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time, uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, fc_fault_code);
    _mav_put_uint16_t(buf, 2, fc_response_time);
    _mav_put_uint16_t(buf, 4, track_fault_code);
    _mav_put_uint16_t(buf, 6, track_response_time);
    _mav_put_uint8_t(buf, 38, fc_status);
    _mav_put_uint8_t(buf, 69, track_status);
    _mav_put_uint8_t(buf, 70, gpu_usage);
    _mav_put_int8_t(buf, 71, gpu_temperature);
    _mav_put_char_array(buf, 8, fc_model_name, 20);
    _mav_put_char_array(buf, 28, fc_version, 10);
    _mav_put_char_array(buf, 39, track_model_name, 20);
    _mav_put_char_array(buf, 59, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, buf, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#else
    mavlink_hk_ai_status_t packet;
    packet.fc_fault_code = fc_fault_code;
    packet.fc_response_time = fc_response_time;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.fc_status = fc_status;
    packet.track_status = track_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet.fc_model_name, fc_model_name, 20);
    mav_array_assign_char(packet.fc_version, fc_version, 10);
    mav_array_assign_char(packet.track_model_name, track_model_name, 20);
    mav_array_assign_char(packet.track_version, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_ai_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_ai_status_send_struct(mavlink_channel_t chan, const mavlink_hk_ai_status_t* hk_ai_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_ai_status_send(chan, hk_ai_status->fc_model_name, hk_ai_status->fc_version, hk_ai_status->fc_status, hk_ai_status->fc_fault_code, hk_ai_status->fc_response_time, hk_ai_status->track_model_name, hk_ai_status->track_version, hk_ai_status->track_status, hk_ai_status->track_fault_code, hk_ai_status->track_response_time, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, (const char *)hk_ai_status, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_AI_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_ai_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *fc_model_name, const char *fc_version, uint8_t fc_status, uint16_t fc_fault_code, uint16_t fc_response_time, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time, uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, fc_fault_code);
    _mav_put_uint16_t(buf, 2, fc_response_time);
    _mav_put_uint16_t(buf, 4, track_fault_code);
    _mav_put_uint16_t(buf, 6, track_response_time);
    _mav_put_uint8_t(buf, 38, fc_status);
    _mav_put_uint8_t(buf, 69, track_status);
    _mav_put_uint8_t(buf, 70, gpu_usage);
    _mav_put_int8_t(buf, 71, gpu_temperature);
    _mav_put_char_array(buf, 8, fc_model_name, 20);
    _mav_put_char_array(buf, 28, fc_version, 10);
    _mav_put_char_array(buf, 39, track_model_name, 20);
    _mav_put_char_array(buf, 59, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, buf, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#else
    mavlink_hk_ai_status_t *packet = (mavlink_hk_ai_status_t *)msgbuf;
    packet->fc_fault_code = fc_fault_code;
    packet->fc_response_time = fc_response_time;
    packet->track_fault_code = track_fault_code;
    packet->track_response_time = track_response_time;
    packet->fc_status = fc_status;
    packet->track_status = track_status;
    packet->gpu_usage = gpu_usage;
    packet->gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet->fc_model_name, fc_model_name, 20);
    mav_array_assign_char(packet->fc_version, fc_version, 10);
    mav_array_assign_char(packet->track_model_name, track_model_name, 20);
    mav_array_assign_char(packet->track_version, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_AI_STATUS UNPACKING


/**
 * @brief Get field fc_model_name from hk_ai_status message
 *
 * @return  飞行控制 AI 模型名称
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_fc_model_name(const mavlink_message_t* msg, char *fc_model_name)
{
    return _MAV_RETURN_char_array(msg, fc_model_name, 20,  8);
}

/**
 * @brief Get field fc_version from hk_ai_status message
 *
 * @return  飞行控制 AI 版本号
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_fc_version(const mavlink_message_t* msg, char *fc_version)
{
    return _MAV_RETURN_char_array(msg, fc_version, 10,  28);
}

/**
 * @brief Get field fc_status from hk_ai_status message
 *
 * @return  飞行控制 AI 状态：0=正常, 1=故障
 */
static inline uint8_t mavlink_msg_hk_ai_status_get_fc_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Get field fc_fault_code from hk_ai_status message
 *
 * @return  飞行控制 AI 故障代码（正常时 0）
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_fc_fault_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field fc_response_time from hk_ai_status message
 *
 * @return  飞行控制 AI 推理响应时间（ms）
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_fc_response_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field track_model_name from hk_ai_status message
 *
 * @return  跟踪算法 AI 模型名称
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_track_model_name(const mavlink_message_t* msg, char *track_model_name)
{
    return _MAV_RETURN_char_array(msg, track_model_name, 20,  39);
}

/**
 * @brief Get field track_version from hk_ai_status message
 *
 * @return  跟踪算法 AI 版本号
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_track_version(const mavlink_message_t* msg, char *track_version)
{
    return _MAV_RETURN_char_array(msg, track_version, 10,  59);
}

/**
 * @brief Get field track_status from hk_ai_status message
 *
 * @return  跟踪算法 AI 状态：0=正常, 1=故障
 */
static inline uint8_t mavlink_msg_hk_ai_status_get_track_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  69);
}

/**
 * @brief Get field track_fault_code from hk_ai_status message
 *
 * @return  跟踪算法 AI 故障代码（正常时 0）
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_track_fault_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field track_response_time from hk_ai_status message
 *
 * @return  跟踪算法 AI 推理响应时间（ms）
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_track_response_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field gpu_usage from hk_ai_status message
 *
 * @return  GPU 使用率（%）
 */
static inline uint8_t mavlink_msg_hk_ai_status_get_gpu_usage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  70);
}

/**
 * @brief Get field gpu_temperature from hk_ai_status message
 *
 * @return  GPU 温度（°C）
 */
static inline int8_t mavlink_msg_hk_ai_status_get_gpu_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  71);
}

/**
 * @brief Decode a hk_ai_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_ai_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_ai_status_decode(const mavlink_message_t* msg, mavlink_hk_ai_status_t* hk_ai_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_ai_status->fc_fault_code = mavlink_msg_hk_ai_status_get_fc_fault_code(msg);
    hk_ai_status->fc_response_time = mavlink_msg_hk_ai_status_get_fc_response_time(msg);
    hk_ai_status->track_fault_code = mavlink_msg_hk_ai_status_get_track_fault_code(msg);
    hk_ai_status->track_response_time = mavlink_msg_hk_ai_status_get_track_response_time(msg);
    mavlink_msg_hk_ai_status_get_fc_model_name(msg, hk_ai_status->fc_model_name);
    mavlink_msg_hk_ai_status_get_fc_version(msg, hk_ai_status->fc_version);
    hk_ai_status->fc_status = mavlink_msg_hk_ai_status_get_fc_status(msg);
    mavlink_msg_hk_ai_status_get_track_model_name(msg, hk_ai_status->track_model_name);
    mavlink_msg_hk_ai_status_get_track_version(msg, hk_ai_status->track_version);
    hk_ai_status->track_status = mavlink_msg_hk_ai_status_get_track_status(msg);
    hk_ai_status->gpu_usage = mavlink_msg_hk_ai_status_get_gpu_usage(msg);
    hk_ai_status->gpu_temperature = mavlink_msg_hk_ai_status_get_gpu_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_AI_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_AI_STATUS_LEN;
        memset(hk_ai_status, 0, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
    memcpy(hk_ai_status, _MAV_PAYLOAD(msg), len);
#endif
}
