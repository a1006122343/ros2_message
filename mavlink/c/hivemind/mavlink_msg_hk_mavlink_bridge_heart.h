#pragma once
// MESSAGE HK_MAVLINK_BRIDGE_HEART PACKING

#define MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART 50113


typedef struct __mavlink_hk_mavlink_bridge_heart_t {
 uint8_t bridge_status; /*<  mavlink_bridge 状态：0=初始化中, 1=正常运行, 2=告警, 3=故障*/
} mavlink_hk_mavlink_bridge_heart_t;

#define MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN 1
#define MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN 1
#define MAVLINK_MSG_ID_50113_LEN 1
#define MAVLINK_MSG_ID_50113_MIN_LEN 1

#define MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC 173
#define MAVLINK_MSG_ID_50113_CRC 173



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_MAVLINK_BRIDGE_HEART { \
    50113, \
    "HK_MAVLINK_BRIDGE_HEART", \
    1, \
    {  { "bridge_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hk_mavlink_bridge_heart_t, bridge_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_MAVLINK_BRIDGE_HEART { \
    "HK_MAVLINK_BRIDGE_HEART", \
    1, \
    {  { "bridge_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hk_mavlink_bridge_heart_t, bridge_status) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_mavlink_bridge_heart message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param bridge_status  mavlink_bridge 状态：0=初始化中, 1=正常运行, 2=告警, 3=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_mavlink_bridge_heart_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t bridge_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN];
    _mav_put_uint8_t(buf, 0, bridge_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#else
    mavlink_hk_mavlink_bridge_heart_t packet;
    packet.bridge_status = bridge_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
}

/**
 * @brief Pack a hk_mavlink_bridge_heart message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param bridge_status  mavlink_bridge 状态：0=初始化中, 1=正常运行, 2=告警, 3=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_mavlink_bridge_heart_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t bridge_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN];
    _mav_put_uint8_t(buf, 0, bridge_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#else
    mavlink_hk_mavlink_bridge_heart_t packet;
    packet.bridge_status = bridge_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#endif
}

/**
 * @brief Pack a hk_mavlink_bridge_heart message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bridge_status  mavlink_bridge 状态：0=初始化中, 1=正常运行, 2=告警, 3=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_mavlink_bridge_heart_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t bridge_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN];
    _mav_put_uint8_t(buf, 0, bridge_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#else
    mavlink_hk_mavlink_bridge_heart_t packet;
    packet.bridge_status = bridge_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
}

/**
 * @brief Encode a hk_mavlink_bridge_heart struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_mavlink_bridge_heart C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_mavlink_bridge_heart_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_mavlink_bridge_heart_t* hk_mavlink_bridge_heart)
{
    return mavlink_msg_hk_mavlink_bridge_heart_pack(system_id, component_id, msg, hk_mavlink_bridge_heart->bridge_status);
}

/**
 * @brief Encode a hk_mavlink_bridge_heart struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_mavlink_bridge_heart C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_mavlink_bridge_heart_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_mavlink_bridge_heart_t* hk_mavlink_bridge_heart)
{
    return mavlink_msg_hk_mavlink_bridge_heart_pack_chan(system_id, component_id, chan, msg, hk_mavlink_bridge_heart->bridge_status);
}

/**
 * @brief Encode a hk_mavlink_bridge_heart struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_mavlink_bridge_heart C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_mavlink_bridge_heart_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_mavlink_bridge_heart_t* hk_mavlink_bridge_heart)
{
    return mavlink_msg_hk_mavlink_bridge_heart_pack_status(system_id, component_id, _status, msg,  hk_mavlink_bridge_heart->bridge_status);
}

/**
 * @brief Send a hk_mavlink_bridge_heart message
 * @param chan MAVLink channel to send the message
 *
 * @param bridge_status  mavlink_bridge 状态：0=初始化中, 1=正常运行, 2=告警, 3=故障
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_mavlink_bridge_heart_send(mavlink_channel_t chan, uint8_t bridge_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN];
    _mav_put_uint8_t(buf, 0, bridge_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART, buf, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
#else
    mavlink_hk_mavlink_bridge_heart_t packet;
    packet.bridge_status = bridge_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART, (const char *)&packet, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
#endif
}

/**
 * @brief Send a hk_mavlink_bridge_heart message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_mavlink_bridge_heart_send_struct(mavlink_channel_t chan, const mavlink_hk_mavlink_bridge_heart_t* hk_mavlink_bridge_heart)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_mavlink_bridge_heart_send(chan, hk_mavlink_bridge_heart->bridge_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART, (const char *)hk_mavlink_bridge_heart, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_mavlink_bridge_heart_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t bridge_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, bridge_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART, buf, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
#else
    mavlink_hk_mavlink_bridge_heart_t *packet = (mavlink_hk_mavlink_bridge_heart_t *)msgbuf;
    packet->bridge_status = bridge_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART, (const char *)packet, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_MAVLINK_BRIDGE_HEART UNPACKING


/**
 * @brief Get field bridge_status from hk_mavlink_bridge_heart message
 *
 * @return  mavlink_bridge 状态：0=初始化中, 1=正常运行, 2=告警, 3=故障
 */
static inline uint8_t mavlink_msg_hk_mavlink_bridge_heart_get_bridge_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a hk_mavlink_bridge_heart message into a struct
 *
 * @param msg The message to decode
 * @param hk_mavlink_bridge_heart C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_mavlink_bridge_heart_decode(const mavlink_message_t* msg, mavlink_hk_mavlink_bridge_heart_t* hk_mavlink_bridge_heart)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_mavlink_bridge_heart->bridge_status = mavlink_msg_hk_mavlink_bridge_heart_get_bridge_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN? msg->len : MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN;
        memset(hk_mavlink_bridge_heart, 0, MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_LEN);
    memcpy(hk_mavlink_bridge_heart, _MAV_PAYLOAD(msg), len);
#endif
}
