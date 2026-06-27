#pragma once
// MESSAGE HK_DRONE_AI_STATUS PACKING

#define MAVLINK_MSG_ID_HK_DRONE_AI_STATUS 50109


typedef struct __mavlink_hk_drone_ai_status_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 uint16_t ai_fault_code; /*<  故障码（正常时 0）*/
 uint16_t ai_response_time_ms; /*<  AI 决策周期（ms）*/
 char ai_model_name[20]; /*<  AI 模型名称*/
 char ai_model_version[10]; /*<  AI 版本号*/
 uint8_t ai_status; /*<  AI 状态：0=正常，1=故障*/
} mavlink_hk_drone_ai_status_t;

#define MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN 43
#define MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN 43
#define MAVLINK_MSG_ID_50109_LEN 43
#define MAVLINK_MSG_ID_50109_MIN_LEN 43

#define MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC 229
#define MAVLINK_MSG_ID_50109_CRC 229

#define MAVLINK_MSG_HK_DRONE_AI_STATUS_FIELD_AI_MODEL_NAME_LEN 20
#define MAVLINK_MSG_HK_DRONE_AI_STATUS_FIELD_AI_MODEL_VERSION_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_AI_STATUS { \
    50109, \
    "HK_DRONE_AI_STATUS", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_ai_status_t, timestamp_ms) }, \
         { "ai_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 12, offsetof(mavlink_hk_drone_ai_status_t, ai_model_name) }, \
         { "ai_model_version", NULL, MAVLINK_TYPE_CHAR, 10, 32, offsetof(mavlink_hk_drone_ai_status_t, ai_model_version) }, \
         { "ai_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_hk_drone_ai_status_t, ai_status) }, \
         { "ai_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_hk_drone_ai_status_t, ai_fault_code) }, \
         { "ai_response_time_ms", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_hk_drone_ai_status_t, ai_response_time_ms) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_AI_STATUS { \
    "HK_DRONE_AI_STATUS", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_ai_status_t, timestamp_ms) }, \
         { "ai_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 12, offsetof(mavlink_hk_drone_ai_status_t, ai_model_name) }, \
         { "ai_model_version", NULL, MAVLINK_TYPE_CHAR, 10, 32, offsetof(mavlink_hk_drone_ai_status_t, ai_model_version) }, \
         { "ai_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_hk_drone_ai_status_t, ai_status) }, \
         { "ai_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_hk_drone_ai_status_t, ai_fault_code) }, \
         { "ai_response_time_ms", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_hk_drone_ai_status_t, ai_response_time_ms) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_ai_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param ai_model_name  AI 模型名称
 * @param ai_model_version  AI 版本号
 * @param ai_status  AI 状态：0=正常，1=故障
 * @param ai_fault_code  故障码（正常时 0）
 * @param ai_response_time_ms  AI 决策周期（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, const char *ai_model_name, const char *ai_model_version, uint8_t ai_status, uint16_t ai_fault_code, uint16_t ai_response_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, ai_fault_code);
    _mav_put_uint16_t(buf, 10, ai_response_time_ms);
    _mav_put_uint8_t(buf, 42, ai_status);
    _mav_put_char_array(buf, 12, ai_model_name, 20);
    _mav_put_char_array(buf, 32, ai_model_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#else
    mavlink_hk_drone_ai_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time_ms = ai_response_time_ms;
    packet.ai_status = ai_status;
    mav_array_assign_char(packet.ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet.ai_model_version, ai_model_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_AI_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
}

/**
 * @brief Pack a hk_drone_ai_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param ai_model_name  AI 模型名称
 * @param ai_model_version  AI 版本号
 * @param ai_status  AI 状态：0=正常，1=故障
 * @param ai_fault_code  故障码（正常时 0）
 * @param ai_response_time_ms  AI 决策周期（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, const char *ai_model_name, const char *ai_model_version, uint8_t ai_status, uint16_t ai_fault_code, uint16_t ai_response_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, ai_fault_code);
    _mav_put_uint16_t(buf, 10, ai_response_time_ms);
    _mav_put_uint8_t(buf, 42, ai_status);
    _mav_put_char_array(buf, 12, ai_model_name, 20);
    _mav_put_char_array(buf, 32, ai_model_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#else
    mavlink_hk_drone_ai_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time_ms = ai_response_time_ms;
    packet.ai_status = ai_status;
    mav_array_memcpy(packet.ai_model_name, ai_model_name, sizeof(char)*20);
    mav_array_memcpy(packet.ai_model_version, ai_model_version, sizeof(char)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_AI_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_ai_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param ai_model_name  AI 模型名称
 * @param ai_model_version  AI 版本号
 * @param ai_status  AI 状态：0=正常，1=故障
 * @param ai_fault_code  故障码（正常时 0）
 * @param ai_response_time_ms  AI 决策周期（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,const char *ai_model_name,const char *ai_model_version,uint8_t ai_status,uint16_t ai_fault_code,uint16_t ai_response_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, ai_fault_code);
    _mav_put_uint16_t(buf, 10, ai_response_time_ms);
    _mav_put_uint8_t(buf, 42, ai_status);
    _mav_put_char_array(buf, 12, ai_model_name, 20);
    _mav_put_char_array(buf, 32, ai_model_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#else
    mavlink_hk_drone_ai_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time_ms = ai_response_time_ms;
    packet.ai_status = ai_status;
    mav_array_assign_char(packet.ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet.ai_model_version, ai_model_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_AI_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
}

/**
 * @brief Encode a hk_drone_ai_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_ai_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_ai_status_t* hk_drone_ai_status)
{
    return mavlink_msg_hk_drone_ai_status_pack(system_id, component_id, msg, hk_drone_ai_status->timestamp_ms, hk_drone_ai_status->ai_model_name, hk_drone_ai_status->ai_model_version, hk_drone_ai_status->ai_status, hk_drone_ai_status->ai_fault_code, hk_drone_ai_status->ai_response_time_ms);
}

/**
 * @brief Encode a hk_drone_ai_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_ai_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_ai_status_t* hk_drone_ai_status)
{
    return mavlink_msg_hk_drone_ai_status_pack_chan(system_id, component_id, chan, msg, hk_drone_ai_status->timestamp_ms, hk_drone_ai_status->ai_model_name, hk_drone_ai_status->ai_model_version, hk_drone_ai_status->ai_status, hk_drone_ai_status->ai_fault_code, hk_drone_ai_status->ai_response_time_ms);
}

/**
 * @brief Encode a hk_drone_ai_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_ai_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_ai_status_t* hk_drone_ai_status)
{
    return mavlink_msg_hk_drone_ai_status_pack_status(system_id, component_id, _status, msg,  hk_drone_ai_status->timestamp_ms, hk_drone_ai_status->ai_model_name, hk_drone_ai_status->ai_model_version, hk_drone_ai_status->ai_status, hk_drone_ai_status->ai_fault_code, hk_drone_ai_status->ai_response_time_ms);
}

/**
 * @brief Send a hk_drone_ai_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param ai_model_name  AI 模型名称
 * @param ai_model_version  AI 版本号
 * @param ai_status  AI 状态：0=正常，1=故障
 * @param ai_fault_code  故障码（正常时 0）
 * @param ai_response_time_ms  AI 决策周期（ms）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_ai_status_send(mavlink_channel_t chan, uint64_t timestamp_ms, const char *ai_model_name, const char *ai_model_version, uint8_t ai_status, uint16_t ai_fault_code, uint16_t ai_response_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, ai_fault_code);
    _mav_put_uint16_t(buf, 10, ai_response_time_ms);
    _mav_put_uint8_t(buf, 42, ai_status);
    _mav_put_char_array(buf, 12, ai_model_name, 20);
    _mav_put_char_array(buf, 32, ai_model_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
#else
    mavlink_hk_drone_ai_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.ai_fault_code = ai_fault_code;
    packet.ai_response_time_ms = ai_response_time_ms;
    packet.ai_status = ai_status;
    mav_array_assign_char(packet.ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet.ai_model_version, ai_model_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_drone_ai_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_ai_status_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_ai_status_t* hk_drone_ai_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_ai_status_send(chan, hk_drone_ai_status->timestamp_ms, hk_drone_ai_status->ai_model_name, hk_drone_ai_status->ai_model_version, hk_drone_ai_status->ai_status, hk_drone_ai_status->ai_fault_code, hk_drone_ai_status->ai_response_time_ms);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS, (const char *)hk_drone_ai_status, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_ai_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, const char *ai_model_name, const char *ai_model_version, uint8_t ai_status, uint16_t ai_fault_code, uint16_t ai_response_time_ms)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, ai_fault_code);
    _mav_put_uint16_t(buf, 10, ai_response_time_ms);
    _mav_put_uint8_t(buf, 42, ai_status);
    _mav_put_char_array(buf, 12, ai_model_name, 20);
    _mav_put_char_array(buf, 32, ai_model_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
#else
    mavlink_hk_drone_ai_status_t *packet = (mavlink_hk_drone_ai_status_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->ai_fault_code = ai_fault_code;
    packet->ai_response_time_ms = ai_response_time_ms;
    packet->ai_status = ai_status;
    mav_array_assign_char(packet->ai_model_name, ai_model_name, 20);
    mav_array_assign_char(packet->ai_model_version, ai_model_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_AI_STATUS UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_ai_status message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_ai_status_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field ai_model_name from hk_drone_ai_status message
 *
 * @return  AI 模型名称
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_get_ai_model_name(const mavlink_message_t* msg, char *ai_model_name)
{
    return _MAV_RETURN_char_array(msg, ai_model_name, 20,  12);
}

/**
 * @brief Get field ai_model_version from hk_drone_ai_status message
 *
 * @return  AI 版本号
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_get_ai_model_version(const mavlink_message_t* msg, char *ai_model_version)
{
    return _MAV_RETURN_char_array(msg, ai_model_version, 10,  32);
}

/**
 * @brief Get field ai_status from hk_drone_ai_status message
 *
 * @return  AI 状态：0=正常，1=故障
 */
static inline uint8_t mavlink_msg_hk_drone_ai_status_get_ai_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field ai_fault_code from hk_drone_ai_status message
 *
 * @return  故障码（正常时 0）
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_get_ai_fault_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field ai_response_time_ms from hk_drone_ai_status message
 *
 * @return  AI 决策周期（ms）
 */
static inline uint16_t mavlink_msg_hk_drone_ai_status_get_ai_response_time_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a hk_drone_ai_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_ai_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_ai_status_decode(const mavlink_message_t* msg, mavlink_hk_drone_ai_status_t* hk_drone_ai_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_ai_status->timestamp_ms = mavlink_msg_hk_drone_ai_status_get_timestamp_ms(msg);
    hk_drone_ai_status->ai_fault_code = mavlink_msg_hk_drone_ai_status_get_ai_fault_code(msg);
    hk_drone_ai_status->ai_response_time_ms = mavlink_msg_hk_drone_ai_status_get_ai_response_time_ms(msg);
    mavlink_msg_hk_drone_ai_status_get_ai_model_name(msg, hk_drone_ai_status->ai_model_name);
    mavlink_msg_hk_drone_ai_status_get_ai_model_version(msg, hk_drone_ai_status->ai_model_version);
    hk_drone_ai_status->ai_status = mavlink_msg_hk_drone_ai_status_get_ai_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN;
        memset(hk_drone_ai_status, 0, MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_LEN);
    memcpy(hk_drone_ai_status, _MAV_PAYLOAD(msg), len);
#endif
}
