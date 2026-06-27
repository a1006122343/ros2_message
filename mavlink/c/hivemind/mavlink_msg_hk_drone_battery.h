#pragma once
// MESSAGE HK_DRONE_BATTERY PACKING

#define MAVLINK_MSG_ID_HK_DRONE_BATTERY 50106


typedef struct __mavlink_hk_drone_battery_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 float battery_voltage_v; /*<  电池电压（V）*/
 float battery_current_a; /*<  电池电流（A）；AP 标准规定充电为正、放电为负*/
 float battery_remaining_pct; /*<  剩余电量百分比（0~100）*/
 int32_t battery_id; /*<  电池编号，单电池为 0*/
} mavlink_hk_drone_battery_t;

#define MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN 24
#define MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN 24
#define MAVLINK_MSG_ID_50106_LEN 24
#define MAVLINK_MSG_ID_50106_MIN_LEN 24

#define MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC 218
#define MAVLINK_MSG_ID_50106_CRC 218



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_BATTERY { \
    50106, \
    "HK_DRONE_BATTERY", \
    5, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_battery_t, timestamp_ms) }, \
         { "battery_voltage_v", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_battery_t, battery_voltage_v) }, \
         { "battery_current_a", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_battery_t, battery_current_a) }, \
         { "battery_remaining_pct", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_battery_t, battery_remaining_pct) }, \
         { "battery_id", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_hk_drone_battery_t, battery_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_BATTERY { \
    "HK_DRONE_BATTERY", \
    5, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_battery_t, timestamp_ms) }, \
         { "battery_voltage_v", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_battery_t, battery_voltage_v) }, \
         { "battery_current_a", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_battery_t, battery_current_a) }, \
         { "battery_remaining_pct", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_battery_t, battery_remaining_pct) }, \
         { "battery_id", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_hk_drone_battery_t, battery_id) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param battery_voltage_v  电池电压（V）
 * @param battery_current_a  电池电流（A）；AP 标准规定充电为正、放电为负
 * @param battery_remaining_pct  剩余电量百分比（0~100）
 * @param battery_id  电池编号，单电池为 0
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_battery_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float battery_voltage_v, float battery_current_a, float battery_remaining_pct, int32_t battery_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, battery_voltage_v);
    _mav_put_float(buf, 12, battery_current_a);
    _mav_put_float(buf, 16, battery_remaining_pct);
    _mav_put_int32_t(buf, 20, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#else
    mavlink_hk_drone_battery_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.battery_remaining_pct = battery_remaining_pct;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_BATTERY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
}

/**
 * @brief Pack a hk_drone_battery message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param battery_voltage_v  电池电压（V）
 * @param battery_current_a  电池电流（A）；AP 标准规定充电为正、放电为负
 * @param battery_remaining_pct  剩余电量百分比（0~100）
 * @param battery_id  电池编号，单电池为 0
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_battery_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float battery_voltage_v, float battery_current_a, float battery_remaining_pct, int32_t battery_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, battery_voltage_v);
    _mav_put_float(buf, 12, battery_current_a);
    _mav_put_float(buf, 16, battery_remaining_pct);
    _mav_put_int32_t(buf, 20, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#else
    mavlink_hk_drone_battery_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.battery_remaining_pct = battery_remaining_pct;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_BATTERY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_battery message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param battery_voltage_v  电池电压（V）
 * @param battery_current_a  电池电流（A）；AP 标准规定充电为正、放电为负
 * @param battery_remaining_pct  剩余电量百分比（0~100）
 * @param battery_id  电池编号，单电池为 0
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_battery_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,float battery_voltage_v,float battery_current_a,float battery_remaining_pct,int32_t battery_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, battery_voltage_v);
    _mav_put_float(buf, 12, battery_current_a);
    _mav_put_float(buf, 16, battery_remaining_pct);
    _mav_put_int32_t(buf, 20, battery_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#else
    mavlink_hk_drone_battery_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.battery_remaining_pct = battery_remaining_pct;
    packet.battery_id = battery_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_BATTERY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
}

/**
 * @brief Encode a hk_drone_battery struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_battery_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_battery_t* hk_drone_battery)
{
    return mavlink_msg_hk_drone_battery_pack(system_id, component_id, msg, hk_drone_battery->timestamp_ms, hk_drone_battery->battery_voltage_v, hk_drone_battery->battery_current_a, hk_drone_battery->battery_remaining_pct, hk_drone_battery->battery_id);
}

/**
 * @brief Encode a hk_drone_battery struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_battery_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_battery_t* hk_drone_battery)
{
    return mavlink_msg_hk_drone_battery_pack_chan(system_id, component_id, chan, msg, hk_drone_battery->timestamp_ms, hk_drone_battery->battery_voltage_v, hk_drone_battery->battery_current_a, hk_drone_battery->battery_remaining_pct, hk_drone_battery->battery_id);
}

/**
 * @brief Encode a hk_drone_battery struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_battery C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_battery_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_battery_t* hk_drone_battery)
{
    return mavlink_msg_hk_drone_battery_pack_status(system_id, component_id, _status, msg,  hk_drone_battery->timestamp_ms, hk_drone_battery->battery_voltage_v, hk_drone_battery->battery_current_a, hk_drone_battery->battery_remaining_pct, hk_drone_battery->battery_id);
}

/**
 * @brief Send a hk_drone_battery message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param battery_voltage_v  电池电压（V）
 * @param battery_current_a  电池电流（A）；AP 标准规定充电为正、放电为负
 * @param battery_remaining_pct  剩余电量百分比（0~100）
 * @param battery_id  电池编号，单电池为 0
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_battery_send(mavlink_channel_t chan, uint64_t timestamp_ms, float battery_voltage_v, float battery_current_a, float battery_remaining_pct, int32_t battery_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, battery_voltage_v);
    _mav_put_float(buf, 12, battery_current_a);
    _mav_put_float(buf, 16, battery_remaining_pct);
    _mav_put_int32_t(buf, 20, battery_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_BATTERY, buf, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
#else
    mavlink_hk_drone_battery_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.battery_voltage_v = battery_voltage_v;
    packet.battery_current_a = battery_current_a;
    packet.battery_remaining_pct = battery_remaining_pct;
    packet.battery_id = battery_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_BATTERY, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
#endif
}

/**
 * @brief Send a hk_drone_battery message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_battery_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_battery_t* hk_drone_battery)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_battery_send(chan, hk_drone_battery->timestamp_ms, hk_drone_battery->battery_voltage_v, hk_drone_battery->battery_current_a, hk_drone_battery->battery_remaining_pct, hk_drone_battery->battery_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_BATTERY, (const char *)hk_drone_battery, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_battery_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, float battery_voltage_v, float battery_current_a, float battery_remaining_pct, int32_t battery_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, battery_voltage_v);
    _mav_put_float(buf, 12, battery_current_a);
    _mav_put_float(buf, 16, battery_remaining_pct);
    _mav_put_int32_t(buf, 20, battery_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_BATTERY, buf, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
#else
    mavlink_hk_drone_battery_t *packet = (mavlink_hk_drone_battery_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->battery_voltage_v = battery_voltage_v;
    packet->battery_current_a = battery_current_a;
    packet->battery_remaining_pct = battery_remaining_pct;
    packet->battery_id = battery_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_BATTERY, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN, MAVLINK_MSG_ID_HK_DRONE_BATTERY_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_BATTERY UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_battery message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_battery_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field battery_voltage_v from hk_drone_battery message
 *
 * @return  电池电压（V）
 */
static inline float mavlink_msg_hk_drone_battery_get_battery_voltage_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field battery_current_a from hk_drone_battery message
 *
 * @return  电池电流（A）；AP 标准规定充电为正、放电为负
 */
static inline float mavlink_msg_hk_drone_battery_get_battery_current_a(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field battery_remaining_pct from hk_drone_battery message
 *
 * @return  剩余电量百分比（0~100）
 */
static inline float mavlink_msg_hk_drone_battery_get_battery_remaining_pct(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field battery_id from hk_drone_battery message
 *
 * @return  电池编号，单电池为 0
 */
static inline int32_t mavlink_msg_hk_drone_battery_get_battery_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Decode a hk_drone_battery message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_battery C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_battery_decode(const mavlink_message_t* msg, mavlink_hk_drone_battery_t* hk_drone_battery)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_battery->timestamp_ms = mavlink_msg_hk_drone_battery_get_timestamp_ms(msg);
    hk_drone_battery->battery_voltage_v = mavlink_msg_hk_drone_battery_get_battery_voltage_v(msg);
    hk_drone_battery->battery_current_a = mavlink_msg_hk_drone_battery_get_battery_current_a(msg);
    hk_drone_battery->battery_remaining_pct = mavlink_msg_hk_drone_battery_get_battery_remaining_pct(msg);
    hk_drone_battery->battery_id = mavlink_msg_hk_drone_battery_get_battery_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN;
        memset(hk_drone_battery, 0, MAVLINK_MSG_ID_HK_DRONE_BATTERY_LEN);
    memcpy(hk_drone_battery, _MAV_PAYLOAD(msg), len);
#endif
}
