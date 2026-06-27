#pragma once
// MESSAGE HK_DRONE_HEADING PACKING

#define MAVLINK_MSG_ID_HK_DRONE_HEADING 50105


typedef struct __mavlink_hk_drone_heading_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 float heading_deg; /*<  罗盘航向 0~360°，0=正北、顺时针*/
} mavlink_hk_drone_heading_t;

#define MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN 12
#define MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN 12
#define MAVLINK_MSG_ID_50105_LEN 12
#define MAVLINK_MSG_ID_50105_MIN_LEN 12

#define MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC 71
#define MAVLINK_MSG_ID_50105_CRC 71



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_HEADING { \
    50105, \
    "HK_DRONE_HEADING", \
    2, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_heading_t, timestamp_ms) }, \
         { "heading_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_heading_t, heading_deg) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_HEADING { \
    "HK_DRONE_HEADING", \
    2, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_heading_t, timestamp_ms) }, \
         { "heading_deg", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_heading_t, heading_deg) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_heading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param heading_deg  罗盘航向 0~360°，0=正北、顺时针
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_heading_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float heading_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, heading_deg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#else
    mavlink_hk_drone_heading_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.heading_deg = heading_deg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HEADING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
}

/**
 * @brief Pack a hk_drone_heading message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param heading_deg  罗盘航向 0~360°，0=正北、顺时针
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_heading_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float heading_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, heading_deg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#else
    mavlink_hk_drone_heading_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.heading_deg = heading_deg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HEADING;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_heading message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param heading_deg  罗盘航向 0~360°，0=正北、顺时针
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_heading_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,float heading_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, heading_deg);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#else
    mavlink_hk_drone_heading_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.heading_deg = heading_deg;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HEADING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
}

/**
 * @brief Encode a hk_drone_heading struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_heading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_heading_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_heading_t* hk_drone_heading)
{
    return mavlink_msg_hk_drone_heading_pack(system_id, component_id, msg, hk_drone_heading->timestamp_ms, hk_drone_heading->heading_deg);
}

/**
 * @brief Encode a hk_drone_heading struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_heading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_heading_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_heading_t* hk_drone_heading)
{
    return mavlink_msg_hk_drone_heading_pack_chan(system_id, component_id, chan, msg, hk_drone_heading->timestamp_ms, hk_drone_heading->heading_deg);
}

/**
 * @brief Encode a hk_drone_heading struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_heading C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_heading_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_heading_t* hk_drone_heading)
{
    return mavlink_msg_hk_drone_heading_pack_status(system_id, component_id, _status, msg,  hk_drone_heading->timestamp_ms, hk_drone_heading->heading_deg);
}

/**
 * @brief Send a hk_drone_heading message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param heading_deg  罗盘航向 0~360°，0=正北、顺时针
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_heading_send(mavlink_channel_t chan, uint64_t timestamp_ms, float heading_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, heading_deg);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEADING, buf, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
#else
    mavlink_hk_drone_heading_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.heading_deg = heading_deg;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEADING, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
#endif
}

/**
 * @brief Send a hk_drone_heading message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_heading_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_heading_t* hk_drone_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_heading_send(chan, hk_drone_heading->timestamp_ms, hk_drone_heading->heading_deg);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEADING, (const char *)hk_drone_heading, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_heading_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, float heading_deg)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, heading_deg);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEADING, buf, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
#else
    mavlink_hk_drone_heading_t *packet = (mavlink_hk_drone_heading_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->heading_deg = heading_deg;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEADING, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN, MAVLINK_MSG_ID_HK_DRONE_HEADING_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_HEADING UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_heading message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_heading_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field heading_deg from hk_drone_heading message
 *
 * @return  罗盘航向 0~360°，0=正北、顺时针
 */
static inline float mavlink_msg_hk_drone_heading_get_heading_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a hk_drone_heading message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_heading C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_heading_decode(const mavlink_message_t* msg, mavlink_hk_drone_heading_t* hk_drone_heading)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_heading->timestamp_ms = mavlink_msg_hk_drone_heading_get_timestamp_ms(msg);
    hk_drone_heading->heading_deg = mavlink_msg_hk_drone_heading_get_heading_deg(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN;
        memset(hk_drone_heading, 0, MAVLINK_MSG_ID_HK_DRONE_HEADING_LEN);
    memcpy(hk_drone_heading, _MAV_PAYLOAD(msg), len);
#endif
}
