#pragma once
// MESSAGE HK_DRONE_MOTOR_STATUS PACKING

#define MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS 50110


typedef struct __mavlink_hk_drone_motor_status_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 int32_t motor_rpm[12]; /*<  电机转速（RPM），-1 表示无数据*/
 float motor_thrust_pct[12]; /*<  电机推力百分比（0~100），NaN 表示无数据*/
 uint8_t motor_count; /*<  实际有数据的电机数（不是 12）*/
 int8_t motor_temperature[12]; /*<  电机温度（°C），-128 表示无数据*/
 uint8_t motor_status[12]; /*<  电机状态，0=正常, 1=故障*/
} mavlink_hk_drone_motor_status_t;

#define MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN 129
#define MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN 129
#define MAVLINK_MSG_ID_50110_LEN 129
#define MAVLINK_MSG_ID_50110_MIN_LEN 129

#define MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC 153
#define MAVLINK_MSG_ID_50110_CRC 153

#define MAVLINK_MSG_HK_DRONE_MOTOR_STATUS_FIELD_MOTOR_RPM_LEN 12
#define MAVLINK_MSG_HK_DRONE_MOTOR_STATUS_FIELD_MOTOR_THRUST_PCT_LEN 12
#define MAVLINK_MSG_HK_DRONE_MOTOR_STATUS_FIELD_MOTOR_TEMPERATURE_LEN 12
#define MAVLINK_MSG_HK_DRONE_MOTOR_STATUS_FIELD_MOTOR_STATUS_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_MOTOR_STATUS { \
    50110, \
    "HK_DRONE_MOTOR_STATUS", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_motor_status_t, timestamp_ms) }, \
         { "motor_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_hk_drone_motor_status_t, motor_count) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_INT32_T, 12, 8, offsetof(mavlink_hk_drone_motor_status_t, motor_rpm) }, \
         { "motor_temperature", NULL, MAVLINK_TYPE_INT8_T, 12, 105, offsetof(mavlink_hk_drone_motor_status_t, motor_temperature) }, \
         { "motor_thrust_pct", NULL, MAVLINK_TYPE_FLOAT, 12, 56, offsetof(mavlink_hk_drone_motor_status_t, motor_thrust_pct) }, \
         { "motor_status", NULL, MAVLINK_TYPE_UINT8_T, 12, 117, offsetof(mavlink_hk_drone_motor_status_t, motor_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_MOTOR_STATUS { \
    "HK_DRONE_MOTOR_STATUS", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_motor_status_t, timestamp_ms) }, \
         { "motor_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_hk_drone_motor_status_t, motor_count) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_INT32_T, 12, 8, offsetof(mavlink_hk_drone_motor_status_t, motor_rpm) }, \
         { "motor_temperature", NULL, MAVLINK_TYPE_INT8_T, 12, 105, offsetof(mavlink_hk_drone_motor_status_t, motor_temperature) }, \
         { "motor_thrust_pct", NULL, MAVLINK_TYPE_FLOAT, 12, 56, offsetof(mavlink_hk_drone_motor_status_t, motor_thrust_pct) }, \
         { "motor_status", NULL, MAVLINK_TYPE_UINT8_T, 12, 117, offsetof(mavlink_hk_drone_motor_status_t, motor_status) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_motor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param motor_count  实际有数据的电机数（不是 12）
 * @param motor_rpm  电机转速（RPM），-1 表示无数据
 * @param motor_temperature  电机温度（°C），-128 表示无数据
 * @param motor_thrust_pct  电机推力百分比（0~100），NaN 表示无数据
 * @param motor_status  电机状态，0=正常, 1=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t motor_count, const int32_t *motor_rpm, const int8_t *motor_temperature, const float *motor_thrust_pct, const uint8_t *motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 104, motor_count);
    _mav_put_int32_t_array(buf, 8, motor_rpm, 12);
    _mav_put_float_array(buf, 56, motor_thrust_pct, 12);
    _mav_put_int8_t_array(buf, 105, motor_temperature, 12);
    _mav_put_uint8_t_array(buf, 117, motor_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#else
    mavlink_hk_drone_motor_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.motor_count = motor_count;
    mav_array_assign_int32_t(packet.motor_rpm, motor_rpm, 12);
    mav_array_assign_float(packet.motor_thrust_pct, motor_thrust_pct, 12);
    mav_array_assign_int8_t(packet.motor_temperature, motor_temperature, 12);
    mav_array_assign_uint8_t(packet.motor_status, motor_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
}

/**
 * @brief Pack a hk_drone_motor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param motor_count  实际有数据的电机数（不是 12）
 * @param motor_rpm  电机转速（RPM），-1 表示无数据
 * @param motor_temperature  电机温度（°C），-128 表示无数据
 * @param motor_thrust_pct  电机推力百分比（0~100），NaN 表示无数据
 * @param motor_status  电机状态，0=正常, 1=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t motor_count, const int32_t *motor_rpm, const int8_t *motor_temperature, const float *motor_thrust_pct, const uint8_t *motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 104, motor_count);
    _mav_put_int32_t_array(buf, 8, motor_rpm, 12);
    _mav_put_float_array(buf, 56, motor_thrust_pct, 12);
    _mav_put_int8_t_array(buf, 105, motor_temperature, 12);
    _mav_put_uint8_t_array(buf, 117, motor_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#else
    mavlink_hk_drone_motor_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.motor_count = motor_count;
    mav_array_memcpy(packet.motor_rpm, motor_rpm, sizeof(int32_t)*12);
    mav_array_memcpy(packet.motor_thrust_pct, motor_thrust_pct, sizeof(float)*12);
    mav_array_memcpy(packet.motor_temperature, motor_temperature, sizeof(int8_t)*12);
    mav_array_memcpy(packet.motor_status, motor_status, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_motor_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param motor_count  实际有数据的电机数（不是 12）
 * @param motor_rpm  电机转速（RPM），-1 表示无数据
 * @param motor_temperature  电机温度（°C），-128 表示无数据
 * @param motor_thrust_pct  电机推力百分比（0~100），NaN 表示无数据
 * @param motor_status  电机状态，0=正常, 1=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint8_t motor_count,const int32_t *motor_rpm,const int8_t *motor_temperature,const float *motor_thrust_pct,const uint8_t *motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 104, motor_count);
    _mav_put_int32_t_array(buf, 8, motor_rpm, 12);
    _mav_put_float_array(buf, 56, motor_thrust_pct, 12);
    _mav_put_int8_t_array(buf, 105, motor_temperature, 12);
    _mav_put_uint8_t_array(buf, 117, motor_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#else
    mavlink_hk_drone_motor_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.motor_count = motor_count;
    mav_array_assign_int32_t(packet.motor_rpm, motor_rpm, 12);
    mav_array_assign_float(packet.motor_thrust_pct, motor_thrust_pct, 12);
    mav_array_assign_int8_t(packet.motor_temperature, motor_temperature, 12);
    mav_array_assign_uint8_t(packet.motor_status, motor_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
}

/**
 * @brief Encode a hk_drone_motor_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_motor_status_t* hk_drone_motor_status)
{
    return mavlink_msg_hk_drone_motor_status_pack(system_id, component_id, msg, hk_drone_motor_status->timestamp_ms, hk_drone_motor_status->motor_count, hk_drone_motor_status->motor_rpm, hk_drone_motor_status->motor_temperature, hk_drone_motor_status->motor_thrust_pct, hk_drone_motor_status->motor_status);
}

/**
 * @brief Encode a hk_drone_motor_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_motor_status_t* hk_drone_motor_status)
{
    return mavlink_msg_hk_drone_motor_status_pack_chan(system_id, component_id, chan, msg, hk_drone_motor_status->timestamp_ms, hk_drone_motor_status->motor_count, hk_drone_motor_status->motor_rpm, hk_drone_motor_status->motor_temperature, hk_drone_motor_status->motor_thrust_pct, hk_drone_motor_status->motor_status);
}

/**
 * @brief Encode a hk_drone_motor_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_motor_status_t* hk_drone_motor_status)
{
    return mavlink_msg_hk_drone_motor_status_pack_status(system_id, component_id, _status, msg,  hk_drone_motor_status->timestamp_ms, hk_drone_motor_status->motor_count, hk_drone_motor_status->motor_rpm, hk_drone_motor_status->motor_temperature, hk_drone_motor_status->motor_thrust_pct, hk_drone_motor_status->motor_status);
}

/**
 * @brief Send a hk_drone_motor_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param motor_count  实际有数据的电机数（不是 12）
 * @param motor_rpm  电机转速（RPM），-1 表示无数据
 * @param motor_temperature  电机温度（°C），-128 表示无数据
 * @param motor_thrust_pct  电机推力百分比（0~100），NaN 表示无数据
 * @param motor_status  电机状态，0=正常, 1=故障
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_motor_status_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint8_t motor_count, const int32_t *motor_rpm, const int8_t *motor_temperature, const float *motor_thrust_pct, const uint8_t *motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 104, motor_count);
    _mav_put_int32_t_array(buf, 8, motor_rpm, 12);
    _mav_put_float_array(buf, 56, motor_thrust_pct, 12);
    _mav_put_int8_t_array(buf, 105, motor_temperature, 12);
    _mav_put_uint8_t_array(buf, 117, motor_status, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
#else
    mavlink_hk_drone_motor_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.motor_count = motor_count;
    mav_array_assign_int32_t(packet.motor_rpm, motor_rpm, 12);
    mav_array_assign_float(packet.motor_thrust_pct, motor_thrust_pct, 12);
    mav_array_assign_int8_t(packet.motor_temperature, motor_temperature, 12);
    mav_array_assign_uint8_t(packet.motor_status, motor_status, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_drone_motor_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_motor_status_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_motor_status_t* hk_drone_motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_motor_status_send(chan, hk_drone_motor_status->timestamp_ms, hk_drone_motor_status->motor_count, hk_drone_motor_status->motor_rpm, hk_drone_motor_status->motor_temperature, hk_drone_motor_status->motor_thrust_pct, hk_drone_motor_status->motor_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS, (const char *)hk_drone_motor_status, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_motor_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint8_t motor_count, const int32_t *motor_rpm, const int8_t *motor_temperature, const float *motor_thrust_pct, const uint8_t *motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 104, motor_count);
    _mav_put_int32_t_array(buf, 8, motor_rpm, 12);
    _mav_put_float_array(buf, 56, motor_thrust_pct, 12);
    _mav_put_int8_t_array(buf, 105, motor_temperature, 12);
    _mav_put_uint8_t_array(buf, 117, motor_status, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
#else
    mavlink_hk_drone_motor_status_t *packet = (mavlink_hk_drone_motor_status_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->motor_count = motor_count;
    mav_array_assign_int32_t(packet->motor_rpm, motor_rpm, 12);
    mav_array_assign_float(packet->motor_thrust_pct, motor_thrust_pct, 12);
    mav_array_assign_int8_t(packet->motor_temperature, motor_temperature, 12);
    mav_array_assign_uint8_t(packet->motor_status, motor_status, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_MOTOR_STATUS UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_motor_status message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_motor_status_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field motor_count from hk_drone_motor_status message
 *
 * @return  实际有数据的电机数（不是 12）
 */
static inline uint8_t mavlink_msg_hk_drone_motor_status_get_motor_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  104);
}

/**
 * @brief Get field motor_rpm from hk_drone_motor_status message
 *
 * @return  电机转速（RPM），-1 表示无数据
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_get_motor_rpm(const mavlink_message_t* msg, int32_t *motor_rpm)
{
    return _MAV_RETURN_int32_t_array(msg, motor_rpm, 12,  8);
}

/**
 * @brief Get field motor_temperature from hk_drone_motor_status message
 *
 * @return  电机温度（°C），-128 表示无数据
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_get_motor_temperature(const mavlink_message_t* msg, int8_t *motor_temperature)
{
    return _MAV_RETURN_int8_t_array(msg, motor_temperature, 12,  105);
}

/**
 * @brief Get field motor_thrust_pct from hk_drone_motor_status message
 *
 * @return  电机推力百分比（0~100），NaN 表示无数据
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_get_motor_thrust_pct(const mavlink_message_t* msg, float *motor_thrust_pct)
{
    return _MAV_RETURN_float_array(msg, motor_thrust_pct, 12,  56);
}

/**
 * @brief Get field motor_status from hk_drone_motor_status message
 *
 * @return  电机状态，0=正常, 1=故障
 */
static inline uint16_t mavlink_msg_hk_drone_motor_status_get_motor_status(const mavlink_message_t* msg, uint8_t *motor_status)
{
    return _MAV_RETURN_uint8_t_array(msg, motor_status, 12,  117);
}

/**
 * @brief Decode a hk_drone_motor_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_motor_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_motor_status_decode(const mavlink_message_t* msg, mavlink_hk_drone_motor_status_t* hk_drone_motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_motor_status->timestamp_ms = mavlink_msg_hk_drone_motor_status_get_timestamp_ms(msg);
    mavlink_msg_hk_drone_motor_status_get_motor_rpm(msg, hk_drone_motor_status->motor_rpm);
    mavlink_msg_hk_drone_motor_status_get_motor_thrust_pct(msg, hk_drone_motor_status->motor_thrust_pct);
    hk_drone_motor_status->motor_count = mavlink_msg_hk_drone_motor_status_get_motor_count(msg);
    mavlink_msg_hk_drone_motor_status_get_motor_temperature(msg, hk_drone_motor_status->motor_temperature);
    mavlink_msg_hk_drone_motor_status_get_motor_status(msg, hk_drone_motor_status->motor_status);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN;
        memset(hk_drone_motor_status, 0, MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_LEN);
    memcpy(hk_drone_motor_status, _MAV_PAYLOAD(msg), len);
#endif
}
