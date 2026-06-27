#pragma once
// MESSAGE HK_DRONE_HEARTBEAT PACKING

#define MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT 50104


typedef struct __mavlink_hk_drone_heartbeat_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 uint32_t fc_custom_mode; /*<  自定义模式；PX4 端未填，AP 端未传*/
 uint8_t fc_vehicle_type; /*<  MAV_TYPE 枚举*/
 uint8_t fc_autopilot; /*<  MAV_AUTOPILOT 枚举；12=PX4，3=ArduPilot*/
 uint8_t fc_base_mode; /*<  MAV_MODE_FLAG 位掩码；当前仅 armed bit (0x80)*/
 uint8_t fc_system_status; /*<  MAV_STATE 枚举*/
} mavlink_hk_drone_heartbeat_t;

#define MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN 16
#define MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN 16
#define MAVLINK_MSG_ID_50104_LEN 16
#define MAVLINK_MSG_ID_50104_MIN_LEN 16

#define MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC 98
#define MAVLINK_MSG_ID_50104_CRC 98



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_HEARTBEAT { \
    50104, \
    "HK_DRONE_HEARTBEAT", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_heartbeat_t, timestamp_ms) }, \
         { "fc_vehicle_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_hk_drone_heartbeat_t, fc_vehicle_type) }, \
         { "fc_autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_hk_drone_heartbeat_t, fc_autopilot) }, \
         { "fc_base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_hk_drone_heartbeat_t, fc_base_mode) }, \
         { "fc_custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_hk_drone_heartbeat_t, fc_custom_mode) }, \
         { "fc_system_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_hk_drone_heartbeat_t, fc_system_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_HEARTBEAT { \
    "HK_DRONE_HEARTBEAT", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_heartbeat_t, timestamp_ms) }, \
         { "fc_vehicle_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_hk_drone_heartbeat_t, fc_vehicle_type) }, \
         { "fc_autopilot", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_hk_drone_heartbeat_t, fc_autopilot) }, \
         { "fc_base_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_hk_drone_heartbeat_t, fc_base_mode) }, \
         { "fc_custom_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_hk_drone_heartbeat_t, fc_custom_mode) }, \
         { "fc_system_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_hk_drone_heartbeat_t, fc_system_status) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fc_vehicle_type  MAV_TYPE 枚举
 * @param fc_autopilot  MAV_AUTOPILOT 枚举；12=PX4，3=ArduPilot
 * @param fc_base_mode  MAV_MODE_FLAG 位掩码；当前仅 armed bit (0x80)
 * @param fc_custom_mode  自定义模式；PX4 端未填，AP 端未传
 * @param fc_system_status  MAV_STATE 枚举
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t fc_vehicle_type, uint8_t fc_autopilot, uint8_t fc_base_mode, uint32_t fc_custom_mode, uint8_t fc_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, fc_custom_mode);
    _mav_put_uint8_t(buf, 12, fc_vehicle_type);
    _mav_put_uint8_t(buf, 13, fc_autopilot);
    _mav_put_uint8_t(buf, 14, fc_base_mode);
    _mav_put_uint8_t(buf, 15, fc_system_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#else
    mavlink_hk_drone_heartbeat_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fc_custom_mode = fc_custom_mode;
    packet.fc_vehicle_type = fc_vehicle_type;
    packet.fc_autopilot = fc_autopilot;
    packet.fc_base_mode = fc_base_mode;
    packet.fc_system_status = fc_system_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
}

/**
 * @brief Pack a hk_drone_heartbeat message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fc_vehicle_type  MAV_TYPE 枚举
 * @param fc_autopilot  MAV_AUTOPILOT 枚举；12=PX4，3=ArduPilot
 * @param fc_base_mode  MAV_MODE_FLAG 位掩码；当前仅 armed bit (0x80)
 * @param fc_custom_mode  自定义模式；PX4 端未填，AP 端未传
 * @param fc_system_status  MAV_STATE 枚举
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_heartbeat_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t fc_vehicle_type, uint8_t fc_autopilot, uint8_t fc_base_mode, uint32_t fc_custom_mode, uint8_t fc_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, fc_custom_mode);
    _mav_put_uint8_t(buf, 12, fc_vehicle_type);
    _mav_put_uint8_t(buf, 13, fc_autopilot);
    _mav_put_uint8_t(buf, 14, fc_base_mode);
    _mav_put_uint8_t(buf, 15, fc_system_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#else
    mavlink_hk_drone_heartbeat_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fc_custom_mode = fc_custom_mode;
    packet.fc_vehicle_type = fc_vehicle_type;
    packet.fc_autopilot = fc_autopilot;
    packet.fc_base_mode = fc_base_mode;
    packet.fc_system_status = fc_system_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_heartbeat message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fc_vehicle_type  MAV_TYPE 枚举
 * @param fc_autopilot  MAV_AUTOPILOT 枚举；12=PX4，3=ArduPilot
 * @param fc_base_mode  MAV_MODE_FLAG 位掩码；当前仅 armed bit (0x80)
 * @param fc_custom_mode  自定义模式；PX4 端未填，AP 端未传
 * @param fc_system_status  MAV_STATE 枚举
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_heartbeat_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint8_t fc_vehicle_type,uint8_t fc_autopilot,uint8_t fc_base_mode,uint32_t fc_custom_mode,uint8_t fc_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, fc_custom_mode);
    _mav_put_uint8_t(buf, 12, fc_vehicle_type);
    _mav_put_uint8_t(buf, 13, fc_autopilot);
    _mav_put_uint8_t(buf, 14, fc_base_mode);
    _mav_put_uint8_t(buf, 15, fc_system_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#else
    mavlink_hk_drone_heartbeat_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fc_custom_mode = fc_custom_mode;
    packet.fc_vehicle_type = fc_vehicle_type;
    packet.fc_autopilot = fc_autopilot;
    packet.fc_base_mode = fc_base_mode;
    packet.fc_system_status = fc_system_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
}

/**
 * @brief Encode a hk_drone_heartbeat struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_heartbeat_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_heartbeat_t* hk_drone_heartbeat)
{
    return mavlink_msg_hk_drone_heartbeat_pack(system_id, component_id, msg, hk_drone_heartbeat->timestamp_ms, hk_drone_heartbeat->fc_vehicle_type, hk_drone_heartbeat->fc_autopilot, hk_drone_heartbeat->fc_base_mode, hk_drone_heartbeat->fc_custom_mode, hk_drone_heartbeat->fc_system_status);
}

/**
 * @brief Encode a hk_drone_heartbeat struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_heartbeat_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_heartbeat_t* hk_drone_heartbeat)
{
    return mavlink_msg_hk_drone_heartbeat_pack_chan(system_id, component_id, chan, msg, hk_drone_heartbeat->timestamp_ms, hk_drone_heartbeat->fc_vehicle_type, hk_drone_heartbeat->fc_autopilot, hk_drone_heartbeat->fc_base_mode, hk_drone_heartbeat->fc_custom_mode, hk_drone_heartbeat->fc_system_status);
}

/**
 * @brief Encode a hk_drone_heartbeat struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_heartbeat C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_heartbeat_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_heartbeat_t* hk_drone_heartbeat)
{
    return mavlink_msg_hk_drone_heartbeat_pack_status(system_id, component_id, _status, msg,  hk_drone_heartbeat->timestamp_ms, hk_drone_heartbeat->fc_vehicle_type, hk_drone_heartbeat->fc_autopilot, hk_drone_heartbeat->fc_base_mode, hk_drone_heartbeat->fc_custom_mode, hk_drone_heartbeat->fc_system_status);
}

/**
 * @brief Send a hk_drone_heartbeat message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fc_vehicle_type  MAV_TYPE 枚举
 * @param fc_autopilot  MAV_AUTOPILOT 枚举；12=PX4，3=ArduPilot
 * @param fc_base_mode  MAV_MODE_FLAG 位掩码；当前仅 armed bit (0x80)
 * @param fc_custom_mode  自定义模式；PX4 端未填，AP 端未传
 * @param fc_system_status  MAV_STATE 枚举
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_heartbeat_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint8_t fc_vehicle_type, uint8_t fc_autopilot, uint8_t fc_base_mode, uint32_t fc_custom_mode, uint8_t fc_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, fc_custom_mode);
    _mav_put_uint8_t(buf, 12, fc_vehicle_type);
    _mav_put_uint8_t(buf, 13, fc_autopilot);
    _mav_put_uint8_t(buf, 14, fc_base_mode);
    _mav_put_uint8_t(buf, 15, fc_system_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT, buf, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
#else
    mavlink_hk_drone_heartbeat_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fc_custom_mode = fc_custom_mode;
    packet.fc_vehicle_type = fc_vehicle_type;
    packet.fc_autopilot = fc_autopilot;
    packet.fc_base_mode = fc_base_mode;
    packet.fc_system_status = fc_system_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
#endif
}

/**
 * @brief Send a hk_drone_heartbeat message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_heartbeat_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_heartbeat_t* hk_drone_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_heartbeat_send(chan, hk_drone_heartbeat->timestamp_ms, hk_drone_heartbeat->fc_vehicle_type, hk_drone_heartbeat->fc_autopilot, hk_drone_heartbeat->fc_base_mode, hk_drone_heartbeat->fc_custom_mode, hk_drone_heartbeat->fc_system_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT, (const char *)hk_drone_heartbeat, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_heartbeat_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint8_t fc_vehicle_type, uint8_t fc_autopilot, uint8_t fc_base_mode, uint32_t fc_custom_mode, uint8_t fc_system_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint32_t(buf, 8, fc_custom_mode);
    _mav_put_uint8_t(buf, 12, fc_vehicle_type);
    _mav_put_uint8_t(buf, 13, fc_autopilot);
    _mav_put_uint8_t(buf, 14, fc_base_mode);
    _mav_put_uint8_t(buf, 15, fc_system_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT, buf, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
#else
    mavlink_hk_drone_heartbeat_t *packet = (mavlink_hk_drone_heartbeat_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->fc_custom_mode = fc_custom_mode;
    packet->fc_vehicle_type = fc_vehicle_type;
    packet->fc_autopilot = fc_autopilot;
    packet->fc_base_mode = fc_base_mode;
    packet->fc_system_status = fc_system_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_HEARTBEAT UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_heartbeat message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_heartbeat_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field fc_vehicle_type from hk_drone_heartbeat message
 *
 * @return  MAV_TYPE 枚举
 */
static inline uint8_t mavlink_msg_hk_drone_heartbeat_get_fc_vehicle_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field fc_autopilot from hk_drone_heartbeat message
 *
 * @return  MAV_AUTOPILOT 枚举；12=PX4，3=ArduPilot
 */
static inline uint8_t mavlink_msg_hk_drone_heartbeat_get_fc_autopilot(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field fc_base_mode from hk_drone_heartbeat message
 *
 * @return  MAV_MODE_FLAG 位掩码；当前仅 armed bit (0x80)
 */
static inline uint8_t mavlink_msg_hk_drone_heartbeat_get_fc_base_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field fc_custom_mode from hk_drone_heartbeat message
 *
 * @return  自定义模式；PX4 端未填，AP 端未传
 */
static inline uint32_t mavlink_msg_hk_drone_heartbeat_get_fc_custom_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field fc_system_status from hk_drone_heartbeat message
 *
 * @return  MAV_STATE 枚举
 */
static inline uint8_t mavlink_msg_hk_drone_heartbeat_get_fc_system_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Decode a hk_drone_heartbeat message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_heartbeat C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_heartbeat_decode(const mavlink_message_t* msg, mavlink_hk_drone_heartbeat_t* hk_drone_heartbeat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_heartbeat->timestamp_ms = mavlink_msg_hk_drone_heartbeat_get_timestamp_ms(msg);
    hk_drone_heartbeat->fc_custom_mode = mavlink_msg_hk_drone_heartbeat_get_fc_custom_mode(msg);
    hk_drone_heartbeat->fc_vehicle_type = mavlink_msg_hk_drone_heartbeat_get_fc_vehicle_type(msg);
    hk_drone_heartbeat->fc_autopilot = mavlink_msg_hk_drone_heartbeat_get_fc_autopilot(msg);
    hk_drone_heartbeat->fc_base_mode = mavlink_msg_hk_drone_heartbeat_get_fc_base_mode(msg);
    hk_drone_heartbeat->fc_system_status = mavlink_msg_hk_drone_heartbeat_get_fc_system_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN;
        memset(hk_drone_heartbeat, 0, MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_LEN);
    memcpy(hk_drone_heartbeat, _MAV_PAYLOAD(msg), len);
#endif
}
