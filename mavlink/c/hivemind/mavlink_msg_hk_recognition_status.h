#pragma once
// MESSAGE HK_RECOGNITION_STATUS PACKING

#define MAVLINK_MSG_ID_HK_RECOGNITION_STATUS 50116


typedef struct __mavlink_hk_recognition_status_t {
 uint64_t timestamp_ms; /*<  时间戳（毫秒）*/
 uint16_t track_fault_code; /*<  跟踪算法 AI 故障码（正常时 0）*/
 uint16_t track_response_time; /*<  跟踪算法 AI 响应时间（ms）*/
 char track_model_name[20]; /*<  跟踪算法 AI 模型名称*/
 char track_version[10]; /*<  跟踪算法 AI 版本号*/
 uint8_t track_status; /*<  跟踪算法 AI 状态：0=正常, 1=故障*/
} mavlink_hk_recognition_status_t;

#define MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN 43
#define MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN 43
#define MAVLINK_MSG_ID_50116_LEN 43
#define MAVLINK_MSG_ID_50116_MIN_LEN 43

#define MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC 123
#define MAVLINK_MSG_ID_50116_CRC 123

#define MAVLINK_MSG_HK_RECOGNITION_STATUS_FIELD_TRACK_MODEL_NAME_LEN 20
#define MAVLINK_MSG_HK_RECOGNITION_STATUS_FIELD_TRACK_VERSION_LEN 10

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_RECOGNITION_STATUS { \
    50116, \
    "HK_RECOGNITION_STATUS", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_recognition_status_t, timestamp_ms) }, \
         { "track_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 12, offsetof(mavlink_hk_recognition_status_t, track_model_name) }, \
         { "track_version", NULL, MAVLINK_TYPE_CHAR, 10, 32, offsetof(mavlink_hk_recognition_status_t, track_version) }, \
         { "track_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_hk_recognition_status_t, track_status) }, \
         { "track_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_hk_recognition_status_t, track_fault_code) }, \
         { "track_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_hk_recognition_status_t, track_response_time) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_RECOGNITION_STATUS { \
    "HK_RECOGNITION_STATUS", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_recognition_status_t, timestamp_ms) }, \
         { "track_model_name", NULL, MAVLINK_TYPE_CHAR, 20, 12, offsetof(mavlink_hk_recognition_status_t, track_model_name) }, \
         { "track_version", NULL, MAVLINK_TYPE_CHAR, 10, 32, offsetof(mavlink_hk_recognition_status_t, track_version) }, \
         { "track_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_hk_recognition_status_t, track_status) }, \
         { "track_fault_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_hk_recognition_status_t, track_fault_code) }, \
         { "track_response_time", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_hk_recognition_status_t, track_response_time) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_recognition_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  时间戳（毫秒）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障码（正常时 0）
 * @param track_response_time  跟踪算法 AI 响应时间（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_recognition_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, track_fault_code);
    _mav_put_uint16_t(buf, 10, track_response_time);
    _mav_put_uint8_t(buf, 42, track_status);
    _mav_put_char_array(buf, 12, track_model_name, 20);
    _mav_put_char_array(buf, 32, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#else
    mavlink_hk_recognition_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.track_status = track_status;
    mav_array_assign_char(packet.track_model_name, track_model_name, 20);
    mav_array_assign_char(packet.track_version, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_RECOGNITION_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
}

/**
 * @brief Pack a hk_recognition_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  时间戳（毫秒）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障码（正常时 0）
 * @param track_response_time  跟踪算法 AI 响应时间（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_recognition_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, track_fault_code);
    _mav_put_uint16_t(buf, 10, track_response_time);
    _mav_put_uint8_t(buf, 42, track_status);
    _mav_put_char_array(buf, 12, track_model_name, 20);
    _mav_put_char_array(buf, 32, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#else
    mavlink_hk_recognition_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.track_status = track_status;
    mav_array_memcpy(packet.track_model_name, track_model_name, sizeof(char)*20);
    mav_array_memcpy(packet.track_version, track_version, sizeof(char)*10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_RECOGNITION_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_recognition_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  时间戳（毫秒）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障码（正常时 0）
 * @param track_response_time  跟踪算法 AI 响应时间（ms）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_recognition_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,const char *track_model_name,const char *track_version,uint8_t track_status,uint16_t track_fault_code,uint16_t track_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, track_fault_code);
    _mav_put_uint16_t(buf, 10, track_response_time);
    _mav_put_uint8_t(buf, 42, track_status);
    _mav_put_char_array(buf, 12, track_model_name, 20);
    _mav_put_char_array(buf, 32, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#else
    mavlink_hk_recognition_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.track_status = track_status;
    mav_array_assign_char(packet.track_model_name, track_model_name, 20);
    mav_array_assign_char(packet.track_version, track_version, 10);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_RECOGNITION_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
}

/**
 * @brief Encode a hk_recognition_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_recognition_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_recognition_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_recognition_status_t* hk_recognition_status)
{
    return mavlink_msg_hk_recognition_status_pack(system_id, component_id, msg, hk_recognition_status->timestamp_ms, hk_recognition_status->track_model_name, hk_recognition_status->track_version, hk_recognition_status->track_status, hk_recognition_status->track_fault_code, hk_recognition_status->track_response_time);
}

/**
 * @brief Encode a hk_recognition_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_recognition_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_recognition_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_recognition_status_t* hk_recognition_status)
{
    return mavlink_msg_hk_recognition_status_pack_chan(system_id, component_id, chan, msg, hk_recognition_status->timestamp_ms, hk_recognition_status->track_model_name, hk_recognition_status->track_version, hk_recognition_status->track_status, hk_recognition_status->track_fault_code, hk_recognition_status->track_response_time);
}

/**
 * @brief Encode a hk_recognition_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_recognition_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_recognition_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_recognition_status_t* hk_recognition_status)
{
    return mavlink_msg_hk_recognition_status_pack_status(system_id, component_id, _status, msg,  hk_recognition_status->timestamp_ms, hk_recognition_status->track_model_name, hk_recognition_status->track_version, hk_recognition_status->track_status, hk_recognition_status->track_fault_code, hk_recognition_status->track_response_time);
}

/**
 * @brief Send a hk_recognition_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  时间戳（毫秒）
 * @param track_model_name  跟踪算法 AI 模型名称
 * @param track_version  跟踪算法 AI 版本号
 * @param track_status  跟踪算法 AI 状态：0=正常, 1=故障
 * @param track_fault_code  跟踪算法 AI 故障码（正常时 0）
 * @param track_response_time  跟踪算法 AI 响应时间（ms）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_recognition_status_send(mavlink_channel_t chan, uint64_t timestamp_ms, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, track_fault_code);
    _mav_put_uint16_t(buf, 10, track_response_time);
    _mav_put_uint8_t(buf, 42, track_status);
    _mav_put_char_array(buf, 12, track_model_name, 20);
    _mav_put_char_array(buf, 32, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS, buf, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
#else
    mavlink_hk_recognition_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.track_fault_code = track_fault_code;
    packet.track_response_time = track_response_time;
    packet.track_status = track_status;
    mav_array_assign_char(packet.track_model_name, track_model_name, 20);
    mav_array_assign_char(packet.track_version, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_recognition_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_recognition_status_send_struct(mavlink_channel_t chan, const mavlink_hk_recognition_status_t* hk_recognition_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_recognition_status_send(chan, hk_recognition_status->timestamp_ms, hk_recognition_status->track_model_name, hk_recognition_status->track_version, hk_recognition_status->track_status, hk_recognition_status->track_fault_code, hk_recognition_status->track_response_time);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS, (const char *)hk_recognition_status, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_recognition_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, const char *track_model_name, const char *track_version, uint8_t track_status, uint16_t track_fault_code, uint16_t track_response_time)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint16_t(buf, 8, track_fault_code);
    _mav_put_uint16_t(buf, 10, track_response_time);
    _mav_put_uint8_t(buf, 42, track_status);
    _mav_put_char_array(buf, 12, track_model_name, 20);
    _mav_put_char_array(buf, 32, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS, buf, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
#else
    mavlink_hk_recognition_status_t *packet = (mavlink_hk_recognition_status_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->track_fault_code = track_fault_code;
    packet->track_response_time = track_response_time;
    packet->track_status = track_status;
    mav_array_assign_char(packet->track_model_name, track_model_name, 20);
    mav_array_assign_char(packet->track_version, track_version, 10);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_RECOGNITION_STATUS UNPACKING


/**
 * @brief Get field timestamp_ms from hk_recognition_status message
 *
 * @return  时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_recognition_status_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field track_model_name from hk_recognition_status message
 *
 * @return  跟踪算法 AI 模型名称
 */
static inline uint16_t mavlink_msg_hk_recognition_status_get_track_model_name(const mavlink_message_t* msg, char *track_model_name)
{
    return _MAV_RETURN_char_array(msg, track_model_name, 20,  12);
}

/**
 * @brief Get field track_version from hk_recognition_status message
 *
 * @return  跟踪算法 AI 版本号
 */
static inline uint16_t mavlink_msg_hk_recognition_status_get_track_version(const mavlink_message_t* msg, char *track_version)
{
    return _MAV_RETURN_char_array(msg, track_version, 10,  32);
}

/**
 * @brief Get field track_status from hk_recognition_status message
 *
 * @return  跟踪算法 AI 状态：0=正常, 1=故障
 */
static inline uint8_t mavlink_msg_hk_recognition_status_get_track_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field track_fault_code from hk_recognition_status message
 *
 * @return  跟踪算法 AI 故障码（正常时 0）
 */
static inline uint16_t mavlink_msg_hk_recognition_status_get_track_fault_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field track_response_time from hk_recognition_status message
 *
 * @return  跟踪算法 AI 响应时间（ms）
 */
static inline uint16_t mavlink_msg_hk_recognition_status_get_track_response_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Decode a hk_recognition_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_recognition_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_recognition_status_decode(const mavlink_message_t* msg, mavlink_hk_recognition_status_t* hk_recognition_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_recognition_status->timestamp_ms = mavlink_msg_hk_recognition_status_get_timestamp_ms(msg);
    hk_recognition_status->track_fault_code = mavlink_msg_hk_recognition_status_get_track_fault_code(msg);
    hk_recognition_status->track_response_time = mavlink_msg_hk_recognition_status_get_track_response_time(msg);
    mavlink_msg_hk_recognition_status_get_track_model_name(msg, hk_recognition_status->track_model_name);
    mavlink_msg_hk_recognition_status_get_track_version(msg, hk_recognition_status->track_version);
    hk_recognition_status->track_status = mavlink_msg_hk_recognition_status_get_track_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN;
        memset(hk_recognition_status, 0, MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_LEN);
    memcpy(hk_recognition_status, _MAV_PAYLOAD(msg), len);
#endif
}
