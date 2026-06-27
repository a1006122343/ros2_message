#pragma once
// MESSAGE HK_DRONE_SYSTEM_STATUS PACKING

#define MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS 50108


typedef struct __mavlink_hk_drone_system_status_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 uint32_t sensors_present; /*<  传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）*/
 uint32_t sensors_health; /*<  传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）*/
 float fc_load_pct; /*<  飞控 CPU 负载百分比（0~100）*/
} mavlink_hk_drone_system_status_t;

#define MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN 20
#define MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN 20
#define MAVLINK_MSG_ID_50108_LEN 20
#define MAVLINK_MSG_ID_50108_MIN_LEN 20

#define MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC 89
#define MAVLINK_MSG_ID_50108_CRC 89



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_SYSTEM_STATUS { \
    50108, \
    "HK_DRONE_SYSTEM_STATUS", \
    4, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_system_status_t, timestamp_ms) }, \
         { "sensors_present", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_hk_drone_system_status_t, sensors_present) }, \
         { "sensors_health", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_hk_drone_system_status_t, sensors_health) }, \
         { "fc_load_pct", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_system_status_t, fc_load_pct) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_SYSTEM_STATUS { \
    "HK_DRONE_SYSTEM_STATUS", \
    4, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_system_status_t, timestamp_ms) }, \
         { "sensors_present", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_hk_drone_system_status_t, sensors_present) }, \
         { "sensors_health", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_hk_drone_system_status_t, sensors_health) }, \
         { "fc_load_pct", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_system_status_t, fc_load_pct) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_system_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param sensors_present  传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param sensors_health  传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param fc_load_pct  飞控 CPU 负载百分比（0~100）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_system_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint32_t sensors_present, uint32_t sensors_health, float fc_load_pct)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, sensors_present);
    _mav_put_uint32_t(buf, 12, sensors_health);
    _mav_put_float(buf, 16, fc_load_pct);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#else
    mavlink_hk_drone_system_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.sensors_present = sensors_present;
    packet.sensors_health = sensors_health;
    packet.fc_load_pct = fc_load_pct;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
}

/**
 * @brief Pack a hk_drone_system_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param sensors_present  传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param sensors_health  传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param fc_load_pct  飞控 CPU 负载百分比（0~100）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_system_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint32_t sensors_present, uint32_t sensors_health, float fc_load_pct)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, sensors_present);
    _mav_put_uint32_t(buf, 12, sensors_health);
    _mav_put_float(buf, 16, fc_load_pct);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#else
    mavlink_hk_drone_system_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.sensors_present = sensors_present;
    packet.sensors_health = sensors_health;
    packet.fc_load_pct = fc_load_pct;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_system_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param sensors_present  传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param sensors_health  传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param fc_load_pct  飞控 CPU 负载百分比（0~100）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_system_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint32_t sensors_present,uint32_t sensors_health,float fc_load_pct)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, sensors_present);
    _mav_put_uint32_t(buf, 12, sensors_health);
    _mav_put_float(buf, 16, fc_load_pct);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#else
    mavlink_hk_drone_system_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.sensors_present = sensors_present;
    packet.sensors_health = sensors_health;
    packet.fc_load_pct = fc_load_pct;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
}

/**
 * @brief Encode a hk_drone_system_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_system_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_system_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_system_status_t* hk_drone_system_status)
{
    return mavlink_msg_hk_drone_system_status_pack(system_id, component_id, msg, hk_drone_system_status->timestamp_ms, hk_drone_system_status->sensors_present, hk_drone_system_status->sensors_health, hk_drone_system_status->fc_load_pct);
}

/**
 * @brief Encode a hk_drone_system_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_system_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_system_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_system_status_t* hk_drone_system_status)
{
    return mavlink_msg_hk_drone_system_status_pack_chan(system_id, component_id, chan, msg, hk_drone_system_status->timestamp_ms, hk_drone_system_status->sensors_present, hk_drone_system_status->sensors_health, hk_drone_system_status->fc_load_pct);
}

/**
 * @brief Encode a hk_drone_system_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_system_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_system_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_system_status_t* hk_drone_system_status)
{
    return mavlink_msg_hk_drone_system_status_pack_status(system_id, component_id, _status, msg,  hk_drone_system_status->timestamp_ms, hk_drone_system_status->sensors_present, hk_drone_system_status->sensors_health, hk_drone_system_status->fc_load_pct);
}

/**
 * @brief Send a hk_drone_system_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param sensors_present  传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param sensors_health  传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）
 * @param fc_load_pct  飞控 CPU 负载百分比（0~100）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_system_status_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint32_t sensors_present, uint32_t sensors_health, float fc_load_pct)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, sensors_present);
    _mav_put_uint32_t(buf, 12, sensors_health);
    _mav_put_float(buf, 16, fc_load_pct);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
#else
    mavlink_hk_drone_system_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.sensors_present = sensors_present;
    packet.sensors_health = sensors_health;
    packet.fc_load_pct = fc_load_pct;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_drone_system_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_system_status_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_system_status_t* hk_drone_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_system_status_send(chan, hk_drone_system_status->timestamp_ms, hk_drone_system_status->sensors_present, hk_drone_system_status->sensors_health, hk_drone_system_status->fc_load_pct);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS, (const char *)hk_drone_system_status, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_system_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint32_t sensors_present, uint32_t sensors_health, float fc_load_pct)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, sensors_present);
    _mav_put_uint32_t(buf, 12, sensors_health);
    _mav_put_float(buf, 16, fc_load_pct);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
#else
    mavlink_hk_drone_system_status_t *packet = (mavlink_hk_drone_system_status_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->sensors_present = sensors_present;
    packet->sensors_health = sensors_health;
    packet->fc_load_pct = fc_load_pct;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_SYSTEM_STATUS UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_system_status message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_system_status_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sensors_present from hk_drone_system_status message
 *
 * @return  传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）
 */
static inline uint32_t mavlink_msg_hk_drone_system_status_get_sensors_present(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field sensors_health from hk_drone_system_status message
 *
 * @return  传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）
 */
static inline uint32_t mavlink_msg_hk_drone_system_status_get_sensors_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field fc_load_pct from hk_drone_system_status message
 *
 * @return  飞控 CPU 负载百分比（0~100）
 */
static inline float mavlink_msg_hk_drone_system_status_get_fc_load_pct(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a hk_drone_system_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_system_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_system_status_decode(const mavlink_message_t* msg, mavlink_hk_drone_system_status_t* hk_drone_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_system_status->timestamp_ms = mavlink_msg_hk_drone_system_status_get_timestamp_ms(msg);
    hk_drone_system_status->sensors_present = mavlink_msg_hk_drone_system_status_get_sensors_present(msg);
    hk_drone_system_status->sensors_health = mavlink_msg_hk_drone_system_status_get_sensors_health(msg);
    hk_drone_system_status->fc_load_pct = mavlink_msg_hk_drone_system_status_get_fc_load_pct(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN;
        memset(hk_drone_system_status, 0, MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_LEN);
    memcpy(hk_drone_system_status, _MAV_PAYLOAD(msg), len);
#endif
}
