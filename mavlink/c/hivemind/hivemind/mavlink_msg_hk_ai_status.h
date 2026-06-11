#pragma once
// MESSAGE HK_AI_STATUS PACKING

#define MAVLINK_MSG_ID_HK_AI_STATUS 50000


typedef struct __mavlink_hk_ai_status_t {
 uint16_t ai_fault_code; /*<  故障代码（正常时 0）*/
 uint16_t ai_response_time; /*<  推理响应时间（ms）*/
 char ai_model_name[20]; /*<  AI 模型名称*/
 char ai_version[10]; /*<  模型版本号*/
 uint8_t ai_status; /*<  0=正常, 1=故障*/
 uint8_t gpu_usage; /*<  GPU 使用率（%）*/
 int8_t gpu_temperature; /*<  GPU 温度（°C）*/
} mavlink_hk_ai_status_t;

#define MAVLINK_MSG_ID_HK_AI_STATUS_LEN 37
#define MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN 37
#define MAVLINK_MSG_ID_50000_LEN 37
#define MAVLINK_MSG_ID_50000_MIN_LEN 37

#define MAVLINK_MSG_ID_HK_AI_STATUS_CRC 217
#define MAVLINK_MSG_ID_50000_CRC 217

#define MAVLINK_MSG_HK_AI_STATUS_FIELD_AI_MODEL_NAME_LEN 20
#define MAVLINK_MSG_HK_AI_STATUS_FIELD_AI_VERSION_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_AI_STATUS { \
    50000, \
    "HK_AI_STATUS", \
    7, \
    {  { "ai_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 4, offsetof(mavlink_hk_ai_status_t, ai_model_name) }, \
         { "ai_version", NULL, MAVLINK_TYPE_CHAR, 10, 24, offsetof(mavlink_hk_ai_status_t, ai_version) }, \
         { "ai_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_hk_ai_status_t, ai_status) }, \
         { "ai_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hk_ai_status_t, ai_fault_code) }, \
         { "gpu_usage", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_hk_ai_status_t, gpu_usage) }, \
         { "gpu_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_hk_ai_status_t, gpu_temperature) }, \
         { "ai_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_hk_ai_status_t, ai_response_time) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_AI_STATUS { \
    "HK_AI_STATUS", \
    7, \
    {  { "ai_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 4, offsetof(mavlink_hk_ai_status_t, ai_model_name) }, \
         { "ai_version", NULL, MAVLINK_TYPE_CHAR, 10, 24, offsetof(mavlink_hk_ai_status_t, ai_version) }, \
         { "ai_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_hk_ai_status_t, ai_status) }, \
         { "ai_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hk_ai_status_t, ai_fault_code) }, \
         { "gpu_usage", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_hk_ai_status_t, gpu_usage) }, \
         { "gpu_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 36, offsetof(mavlink_hk_ai_status_t, gpu_temperature) }, \
         { "ai_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_hk_ai_status_t, ai_response_time) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_ai_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ai_model_name  AI 模型名称
 * @param ai_version  模型版本号
 * @param ai_status  0=正常, 1=故障
 * @param ai_fault_code  故障代码（正常时 0）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @param ai_response_time  推理响应时间（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_ai_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *ai_model_name, const char *ai_version, uint8_t ai_status, uint16_t ai_fault_code, uint8_t gpu_usage, int8_t gpu_temperature, uint16_t ai_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, ai_fault_code);
    _mav_put_uint16_t(buf, 2, ai_response_time);
    _mav_put_uint8_t(buf, 34, ai_status);
    _mav_put_uint8_t(buf, 35, gpu_usage);
    _mav_put_int8_t(buf, 36, gpu_temperature);
    _mav_put_char_array(buf, 4, ai_model_name, 20);
    _mav_put_char_array(buf, 24, ai_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#else
    mavlink_hk_ai_status_t packet;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time = ai_response_time;
    packet.ai_status = ai_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet.ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet.ai_version, ai_version, 10);
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
 * @param ai_model_name  AI 模型名称
 * @param ai_version  模型版本号
 * @param ai_status  0=正常, 1=故障
 * @param ai_fault_code  故障代码（正常时 0）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @param ai_response_time  推理响应时间（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_ai_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *ai_model_name, const char *ai_version, uint8_t ai_status, uint16_t ai_fault_code, uint8_t gpu_usage, int8_t gpu_temperature, uint16_t ai_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, ai_fault_code);
    _mav_put_uint16_t(buf, 2, ai_response_time);
    _mav_put_uint8_t(buf, 34, ai_status);
    _mav_put_uint8_t(buf, 35, gpu_usage);
    _mav_put_int8_t(buf, 36, gpu_temperature);
    _mav_put_char_array(buf, 4, ai_model_name, 20);
    _mav_put_char_array(buf, 24, ai_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#else
    mavlink_hk_ai_status_t packet;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time = ai_response_time;
    packet.ai_status = ai_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_memcpy(packet.ai_model_name, ai_model_name, sizeof(char)*20);
    mav_array_memcpy(packet.ai_version, ai_version, sizeof(char)*10);
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
 * @param ai_model_name  AI 模型名称
 * @param ai_version  模型版本号
 * @param ai_status  0=正常, 1=故障
 * @param ai_fault_code  故障代码（正常时 0）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @param ai_response_time  推理响应时间（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_ai_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *ai_model_name,const char *ai_version,uint8_t ai_status,uint16_t ai_fault_code,uint8_t gpu_usage,int8_t gpu_temperature,uint16_t ai_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, ai_fault_code);
    _mav_put_uint16_t(buf, 2, ai_response_time);
    _mav_put_uint8_t(buf, 34, ai_status);
    _mav_put_uint8_t(buf, 35, gpu_usage);
    _mav_put_int8_t(buf, 36, gpu_temperature);
    _mav_put_char_array(buf, 4, ai_model_name, 20);
    _mav_put_char_array(buf, 24, ai_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
#else
    mavlink_hk_ai_status_t packet;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time = ai_response_time;
    packet.ai_status = ai_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet.ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet.ai_version, ai_version, 10);
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
    return mavlink_msg_hk_ai_status_pack(system_id, component_id, msg, hk_ai_status->ai_model_name, hk_ai_status->ai_version, hk_ai_status->ai_status, hk_ai_status->ai_fault_code, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature, hk_ai_status->ai_response_time);
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
    return mavlink_msg_hk_ai_status_pack_chan(system_id, component_id, chan, msg, hk_ai_status->ai_model_name, hk_ai_status->ai_version, hk_ai_status->ai_status, hk_ai_status->ai_fault_code, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature, hk_ai_status->ai_response_time);
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
    return mavlink_msg_hk_ai_status_pack_status(system_id, component_id, _status, msg,  hk_ai_status->ai_model_name, hk_ai_status->ai_version, hk_ai_status->ai_status, hk_ai_status->ai_fault_code, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature, hk_ai_status->ai_response_time);
}

/**
 * @brief Send a hk_ai_status message
 * @param chan MAVLink channel to send the message
 *
 * @param ai_model_name  AI 模型名称
 * @param ai_version  模型版本号
 * @param ai_status  0=正常, 1=故障
 * @param ai_fault_code  故障代码（正常时 0）
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @param ai_response_time  推理响应时间（ms）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_ai_status_send(mavlink_channel_t chan, const char *ai_model_name, const char *ai_version, uint8_t ai_status, uint16_t ai_fault_code, uint8_t gpu_usage, int8_t gpu_temperature, uint16_t ai_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_AI_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, ai_fault_code);
    _mav_put_uint16_t(buf, 2, ai_response_time);
    _mav_put_uint8_t(buf, 34, ai_status);
    _mav_put_uint8_t(buf, 35, gpu_usage);
    _mav_put_int8_t(buf, 36, gpu_temperature);
    _mav_put_char_array(buf, 4, ai_model_name, 20);
    _mav_put_char_array(buf, 24, ai_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, buf, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#else
    mavlink_hk_ai_status_t packet;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time = ai_response_time;
    packet.ai_status = ai_status;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet.ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet.ai_version, ai_version, 10);
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
    mavlink_msg_hk_ai_status_send(chan, hk_ai_status->ai_model_name, hk_ai_status->ai_version, hk_ai_status->ai_status, hk_ai_status->ai_fault_code, hk_ai_status->gpu_usage, hk_ai_status->gpu_temperature, hk_ai_status->ai_response_time);
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
static inline void mavlink_msg_hk_ai_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *ai_model_name, const char *ai_version, uint8_t ai_status, uint16_t ai_fault_code, uint8_t gpu_usage, int8_t gpu_temperature, uint16_t ai_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, ai_fault_code);
    _mav_put_uint16_t(buf, 2, ai_response_time);
    _mav_put_uint8_t(buf, 34, ai_status);
    _mav_put_uint8_t(buf, 35, gpu_usage);
    _mav_put_int8_t(buf, 36, gpu_temperature);
    _mav_put_char_array(buf, 4, ai_model_name, 20);
    _mav_put_char_array(buf, 24, ai_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, buf, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#else
    mavlink_hk_ai_status_t *packet = (mavlink_hk_ai_status_t *)msgbuf;
    packet->ai_fault_code = ai_fault_code;
    packet->ai_response_time = ai_response_time;
    packet->ai_status = ai_status;
    packet->gpu_usage = gpu_usage;
    packet->gpu_temperature = gpu_temperature;
    mav_array_assign_char(packet->ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet->ai_version, ai_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_AI_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_AI_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_AI_STATUS UNPACKING


/**
 * @brief Get field ai_model_name from hk_ai_status message
 *
 * @return  AI 模型名称
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_ai_model_name(const mavlink_message_t* msg, char *ai_model_name)
{
    return _MAV_RETURN_char_array(msg, ai_model_name, 20,  4);
}

/**
 * @brief Get field ai_version from hk_ai_status message
 *
 * @return  模型版本号
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_ai_version(const mavlink_message_t* msg, char *ai_version)
{
    return _MAV_RETURN_char_array(msg, ai_version, 10,  24);
}

/**
 * @brief Get field ai_status from hk_ai_status message
 *
 * @return  0=正常, 1=故障
 */
static inline uint8_t mavlink_msg_hk_ai_status_get_ai_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field ai_fault_code from hk_ai_status message
 *
 * @return  故障代码（正常时 0）
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_ai_fault_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field gpu_usage from hk_ai_status message
 *
 * @return  GPU 使用率（%）
 */
static inline uint8_t mavlink_msg_hk_ai_status_get_gpu_usage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field gpu_temperature from hk_ai_status message
 *
 * @return  GPU 温度（°C）
 */
static inline int8_t mavlink_msg_hk_ai_status_get_gpu_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  36);
}

/**
 * @brief Get field ai_response_time from hk_ai_status message
 *
 * @return  推理响应时间（ms）
 */
static inline uint16_t mavlink_msg_hk_ai_status_get_ai_response_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
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
    hk_ai_status->ai_fault_code = mavlink_msg_hk_ai_status_get_ai_fault_code(msg);
    hk_ai_status->ai_response_time = mavlink_msg_hk_ai_status_get_ai_response_time(msg);
    mavlink_msg_hk_ai_status_get_ai_model_name(msg, hk_ai_status->ai_model_name);
    mavlink_msg_hk_ai_status_get_ai_version(msg, hk_ai_status->ai_version);
    hk_ai_status->ai_status = mavlink_msg_hk_ai_status_get_ai_status(msg);
    hk_ai_status->gpu_usage = mavlink_msg_hk_ai_status_get_gpu_usage(msg);
    hk_ai_status->gpu_temperature = mavlink_msg_hk_ai_status_get_gpu_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_AI_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_AI_STATUS_LEN;
        memset(hk_ai_status, 0, MAVLINK_MSG_ID_HK_AI_STATUS_LEN);
    memcpy(hk_ai_status, _MAV_PAYLOAD(msg), len);
#endif
}
