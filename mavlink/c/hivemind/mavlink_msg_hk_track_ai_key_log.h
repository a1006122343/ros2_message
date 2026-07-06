#pragma once
// MESSAGE HK_TRACK_AI_KEY_LOG PACKING

#define MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG 50117


typedef struct __mavlink_hk_track_ai_key_log_t {
 uint64_t status_timestamp_ms; /*<  recognition_status 时间戳（毫秒）*/
 uint64_t detection_timestamp_ms; /*<  detection_result 时间戳（毫秒）*/
 float horizontal_angle_rad; /*<  目标水平视线角（rad），图像中心为 0，左侧为负，右侧为正*/
 float vertical_angle_rad; /*<  目标垂直视线角（rad），图像中心为 0，下方为负，上方为正*/
 uint16_t error_code; /*<  错误码，0=正常*/
 uint8_t status; /*<  跟踪算法 AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING*/
 uint8_t ai_running; /*<  识别主循环运行状态，0=停滞/异常，1=正常*/
 uint8_t has_error; /*<  错误标志，0=正常，1=存在错误*/
 uint8_t tracked; /*<  目标跟踪标志，0=未形成稳定跟踪，1=已进入跟踪链路*/
} mavlink_hk_track_ai_key_log_t;

#define MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN 30
#define MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN 30
#define MAVLINK_MSG_ID_50117_LEN 30
#define MAVLINK_MSG_ID_50117_MIN_LEN 30

#define MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC 29
#define MAVLINK_MSG_ID_50117_CRC 29



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_TRACK_AI_KEY_LOG { \
    50117, \
    "HK_TRACK_AI_KEY_LOG", \
    9, \
    {  { "status_timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_track_ai_key_log_t, status_timestamp_ms) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_hk_track_ai_key_log_t, status) }, \
         { "ai_running", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_hk_track_ai_key_log_t, ai_running) }, \
         { "has_error", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_hk_track_ai_key_log_t, has_error) }, \
         { "error_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_hk_track_ai_key_log_t, error_code) }, \
         { "detection_timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_hk_track_ai_key_log_t, detection_timestamp_ms) }, \
         { "tracked", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_hk_track_ai_key_log_t, tracked) }, \
         { "horizontal_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_track_ai_key_log_t, horizontal_angle_rad) }, \
         { "vertical_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_track_ai_key_log_t, vertical_angle_rad) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_TRACK_AI_KEY_LOG { \
    "HK_TRACK_AI_KEY_LOG", \
    9, \
    {  { "status_timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_track_ai_key_log_t, status_timestamp_ms) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_hk_track_ai_key_log_t, status) }, \
         { "ai_running", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_hk_track_ai_key_log_t, ai_running) }, \
         { "has_error", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_hk_track_ai_key_log_t, has_error) }, \
         { "error_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_hk_track_ai_key_log_t, error_code) }, \
         { "detection_timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_hk_track_ai_key_log_t, detection_timestamp_ms) }, \
         { "tracked", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_hk_track_ai_key_log_t, tracked) }, \
         { "horizontal_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_track_ai_key_log_t, horizontal_angle_rad) }, \
         { "vertical_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_track_ai_key_log_t, vertical_angle_rad) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_track_ai_key_log message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status_timestamp_ms  recognition_status 时间戳（毫秒）
 * @param status  跟踪算法 AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param ai_running  识别主循环运行状态，0=停滞/异常，1=正常
 * @param has_error  错误标志，0=正常，1=存在错误
 * @param error_code  错误码，0=正常
 * @param detection_timestamp_ms  detection_result 时间戳（毫秒）
 * @param tracked  目标跟踪标志，0=未形成稳定跟踪，1=已进入跟踪链路
 * @param horizontal_angle_rad  目标水平视线角（rad），图像中心为 0，左侧为负，右侧为正
 * @param vertical_angle_rad  目标垂直视线角（rad），图像中心为 0，下方为负，上方为正
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t status_timestamp_ms, uint8_t status, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint64_t detection_timestamp_ms, uint8_t tracked, float horizontal_angle_rad, float vertical_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN];
    _mav_put_uint64_t(buf, 0, status_timestamp_ms);
    _mav_put_uint64_t(buf, 8, detection_timestamp_ms);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_uint16_t(buf, 24, error_code);
    _mav_put_uint8_t(buf, 26, status);
    _mav_put_uint8_t(buf, 27, ai_running);
    _mav_put_uint8_t(buf, 28, has_error);
    _mav_put_uint8_t(buf, 29, tracked);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#else
    mavlink_hk_track_ai_key_log_t packet;
    packet.status_timestamp_ms = status_timestamp_ms;
    packet.detection_timestamp_ms = detection_timestamp_ms;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.error_code = error_code;
    packet.status = status;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
}

/**
 * @brief Pack a hk_track_ai_key_log message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param status_timestamp_ms  recognition_status 时间戳（毫秒）
 * @param status  跟踪算法 AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param ai_running  识别主循环运行状态，0=停滞/异常，1=正常
 * @param has_error  错误标志，0=正常，1=存在错误
 * @param error_code  错误码，0=正常
 * @param detection_timestamp_ms  detection_result 时间戳（毫秒）
 * @param tracked  目标跟踪标志，0=未形成稳定跟踪，1=已进入跟踪链路
 * @param horizontal_angle_rad  目标水平视线角（rad），图像中心为 0，左侧为负，右侧为正
 * @param vertical_angle_rad  目标垂直视线角（rad），图像中心为 0，下方为负，上方为正
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t status_timestamp_ms, uint8_t status, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint64_t detection_timestamp_ms, uint8_t tracked, float horizontal_angle_rad, float vertical_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN];
    _mav_put_uint64_t(buf, 0, status_timestamp_ms);
    _mav_put_uint64_t(buf, 8, detection_timestamp_ms);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_uint16_t(buf, 24, error_code);
    _mav_put_uint8_t(buf, 26, status);
    _mav_put_uint8_t(buf, 27, ai_running);
    _mav_put_uint8_t(buf, 28, has_error);
    _mav_put_uint8_t(buf, 29, tracked);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#else
    mavlink_hk_track_ai_key_log_t packet;
    packet.status_timestamp_ms = status_timestamp_ms;
    packet.detection_timestamp_ms = detection_timestamp_ms;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.error_code = error_code;
    packet.status = status;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#endif
}

/**
 * @brief Pack a hk_track_ai_key_log message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status_timestamp_ms  recognition_status 时间戳（毫秒）
 * @param status  跟踪算法 AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param ai_running  识别主循环运行状态，0=停滞/异常，1=正常
 * @param has_error  错误标志，0=正常，1=存在错误
 * @param error_code  错误码，0=正常
 * @param detection_timestamp_ms  detection_result 时间戳（毫秒）
 * @param tracked  目标跟踪标志，0=未形成稳定跟踪，1=已进入跟踪链路
 * @param horizontal_angle_rad  目标水平视线角（rad），图像中心为 0，左侧为负，右侧为正
 * @param vertical_angle_rad  目标垂直视线角（rad），图像中心为 0，下方为负，上方为正
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t status_timestamp_ms,uint8_t status,uint8_t ai_running,uint8_t has_error,uint16_t error_code,uint64_t detection_timestamp_ms,uint8_t tracked,float horizontal_angle_rad,float vertical_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN];
    _mav_put_uint64_t(buf, 0, status_timestamp_ms);
    _mav_put_uint64_t(buf, 8, detection_timestamp_ms);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_uint16_t(buf, 24, error_code);
    _mav_put_uint8_t(buf, 26, status);
    _mav_put_uint8_t(buf, 27, ai_running);
    _mav_put_uint8_t(buf, 28, has_error);
    _mav_put_uint8_t(buf, 29, tracked);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#else
    mavlink_hk_track_ai_key_log_t packet;
    packet.status_timestamp_ms = status_timestamp_ms;
    packet.detection_timestamp_ms = detection_timestamp_ms;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.error_code = error_code;
    packet.status = status;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
}

/**
 * @brief Encode a hk_track_ai_key_log struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_track_ai_key_log C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_track_ai_key_log_t* hk_track_ai_key_log)
{
    return mavlink_msg_hk_track_ai_key_log_pack(system_id, component_id, msg, hk_track_ai_key_log->status_timestamp_ms, hk_track_ai_key_log->status, hk_track_ai_key_log->ai_running, hk_track_ai_key_log->has_error, hk_track_ai_key_log->error_code, hk_track_ai_key_log->detection_timestamp_ms, hk_track_ai_key_log->tracked, hk_track_ai_key_log->horizontal_angle_rad, hk_track_ai_key_log->vertical_angle_rad);
}

/**
 * @brief Encode a hk_track_ai_key_log struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_track_ai_key_log C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_track_ai_key_log_t* hk_track_ai_key_log)
{
    return mavlink_msg_hk_track_ai_key_log_pack_chan(system_id, component_id, chan, msg, hk_track_ai_key_log->status_timestamp_ms, hk_track_ai_key_log->status, hk_track_ai_key_log->ai_running, hk_track_ai_key_log->has_error, hk_track_ai_key_log->error_code, hk_track_ai_key_log->detection_timestamp_ms, hk_track_ai_key_log->tracked, hk_track_ai_key_log->horizontal_angle_rad, hk_track_ai_key_log->vertical_angle_rad);
}

/**
 * @brief Encode a hk_track_ai_key_log struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_track_ai_key_log C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_track_ai_key_log_t* hk_track_ai_key_log)
{
    return mavlink_msg_hk_track_ai_key_log_pack_status(system_id, component_id, _status, msg,  hk_track_ai_key_log->status_timestamp_ms, hk_track_ai_key_log->status, hk_track_ai_key_log->ai_running, hk_track_ai_key_log->has_error, hk_track_ai_key_log->error_code, hk_track_ai_key_log->detection_timestamp_ms, hk_track_ai_key_log->tracked, hk_track_ai_key_log->horizontal_angle_rad, hk_track_ai_key_log->vertical_angle_rad);
}

/**
 * @brief Send a hk_track_ai_key_log message
 * @param chan MAVLink channel to send the message
 *
 * @param status_timestamp_ms  recognition_status 时间戳（毫秒）
 * @param status  跟踪算法 AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param ai_running  识别主循环运行状态，0=停滞/异常，1=正常
 * @param has_error  错误标志，0=正常，1=存在错误
 * @param error_code  错误码，0=正常
 * @param detection_timestamp_ms  detection_result 时间戳（毫秒）
 * @param tracked  目标跟踪标志，0=未形成稳定跟踪，1=已进入跟踪链路
 * @param horizontal_angle_rad  目标水平视线角（rad），图像中心为 0，左侧为负，右侧为正
 * @param vertical_angle_rad  目标垂直视线角（rad），图像中心为 0，下方为负，上方为正
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_track_ai_key_log_send(mavlink_channel_t chan, uint64_t status_timestamp_ms, uint8_t status, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint64_t detection_timestamp_ms, uint8_t tracked, float horizontal_angle_rad, float vertical_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN];
    _mav_put_uint64_t(buf, 0, status_timestamp_ms);
    _mav_put_uint64_t(buf, 8, detection_timestamp_ms);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_uint16_t(buf, 24, error_code);
    _mav_put_uint8_t(buf, 26, status);
    _mav_put_uint8_t(buf, 27, ai_running);
    _mav_put_uint8_t(buf, 28, has_error);
    _mav_put_uint8_t(buf, 29, tracked);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG, buf, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
#else
    mavlink_hk_track_ai_key_log_t packet;
    packet.status_timestamp_ms = status_timestamp_ms;
    packet.detection_timestamp_ms = detection_timestamp_ms;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.error_code = error_code;
    packet.status = status;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG, (const char *)&packet, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
#endif
}

/**
 * @brief Send a hk_track_ai_key_log message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_track_ai_key_log_send_struct(mavlink_channel_t chan, const mavlink_hk_track_ai_key_log_t* hk_track_ai_key_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_track_ai_key_log_send(chan, hk_track_ai_key_log->status_timestamp_ms, hk_track_ai_key_log->status, hk_track_ai_key_log->ai_running, hk_track_ai_key_log->has_error, hk_track_ai_key_log->error_code, hk_track_ai_key_log->detection_timestamp_ms, hk_track_ai_key_log->tracked, hk_track_ai_key_log->horizontal_angle_rad, hk_track_ai_key_log->vertical_angle_rad);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG, (const char *)hk_track_ai_key_log, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_track_ai_key_log_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t status_timestamp_ms, uint8_t status, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint64_t detection_timestamp_ms, uint8_t tracked, float horizontal_angle_rad, float vertical_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, status_timestamp_ms);
    _mav_put_uint64_t(buf, 8, detection_timestamp_ms);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_uint16_t(buf, 24, error_code);
    _mav_put_uint8_t(buf, 26, status);
    _mav_put_uint8_t(buf, 27, ai_running);
    _mav_put_uint8_t(buf, 28, has_error);
    _mav_put_uint8_t(buf, 29, tracked);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG, buf, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
#else
    mavlink_hk_track_ai_key_log_t *packet = (mavlink_hk_track_ai_key_log_t *)msgbuf;
    packet->status_timestamp_ms = status_timestamp_ms;
    packet->detection_timestamp_ms = detection_timestamp_ms;
    packet->horizontal_angle_rad = horizontal_angle_rad;
    packet->vertical_angle_rad = vertical_angle_rad;
    packet->error_code = error_code;
    packet->status = status;
    packet->ai_running = ai_running;
    packet->has_error = has_error;
    packet->tracked = tracked;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG, (const char *)packet, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_TRACK_AI_KEY_LOG UNPACKING


/**
 * @brief Get field status_timestamp_ms from hk_track_ai_key_log message
 *
 * @return  recognition_status 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_track_ai_key_log_get_status_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field status from hk_track_ai_key_log message
 *
 * @return  跟踪算法 AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 */
static inline uint8_t mavlink_msg_hk_track_ai_key_log_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field ai_running from hk_track_ai_key_log message
 *
 * @return  识别主循环运行状态，0=停滞/异常，1=正常
 */
static inline uint8_t mavlink_msg_hk_track_ai_key_log_get_ai_running(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Get field has_error from hk_track_ai_key_log message
 *
 * @return  错误标志，0=正常，1=存在错误
 */
static inline uint8_t mavlink_msg_hk_track_ai_key_log_get_has_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field error_code from hk_track_ai_key_log message
 *
 * @return  错误码，0=正常
 */
static inline uint16_t mavlink_msg_hk_track_ai_key_log_get_error_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field detection_timestamp_ms from hk_track_ai_key_log message
 *
 * @return  detection_result 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_track_ai_key_log_get_detection_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field tracked from hk_track_ai_key_log message
 *
 * @return  目标跟踪标志，0=未形成稳定跟踪，1=已进入跟踪链路
 */
static inline uint8_t mavlink_msg_hk_track_ai_key_log_get_tracked(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field horizontal_angle_rad from hk_track_ai_key_log message
 *
 * @return  目标水平视线角（rad），图像中心为 0，左侧为负，右侧为正
 */
static inline float mavlink_msg_hk_track_ai_key_log_get_horizontal_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vertical_angle_rad from hk_track_ai_key_log message
 *
 * @return  目标垂直视线角（rad），图像中心为 0，下方为负，上方为正
 */
static inline float mavlink_msg_hk_track_ai_key_log_get_vertical_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a hk_track_ai_key_log message into a struct
 *
 * @param msg The message to decode
 * @param hk_track_ai_key_log C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_track_ai_key_log_decode(const mavlink_message_t* msg, mavlink_hk_track_ai_key_log_t* hk_track_ai_key_log)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_track_ai_key_log->status_timestamp_ms = mavlink_msg_hk_track_ai_key_log_get_status_timestamp_ms(msg);
    hk_track_ai_key_log->detection_timestamp_ms = mavlink_msg_hk_track_ai_key_log_get_detection_timestamp_ms(msg);
    hk_track_ai_key_log->horizontal_angle_rad = mavlink_msg_hk_track_ai_key_log_get_horizontal_angle_rad(msg);
    hk_track_ai_key_log->vertical_angle_rad = mavlink_msg_hk_track_ai_key_log_get_vertical_angle_rad(msg);
    hk_track_ai_key_log->error_code = mavlink_msg_hk_track_ai_key_log_get_error_code(msg);
    hk_track_ai_key_log->status = mavlink_msg_hk_track_ai_key_log_get_status(msg);
    hk_track_ai_key_log->ai_running = mavlink_msg_hk_track_ai_key_log_get_ai_running(msg);
    hk_track_ai_key_log->has_error = mavlink_msg_hk_track_ai_key_log_get_has_error(msg);
    hk_track_ai_key_log->tracked = mavlink_msg_hk_track_ai_key_log_get_tracked(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN? msg->len : MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN;
        memset(hk_track_ai_key_log, 0, MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_LEN);
    memcpy(hk_track_ai_key_log, _MAV_PAYLOAD(msg), len);
#endif
}
