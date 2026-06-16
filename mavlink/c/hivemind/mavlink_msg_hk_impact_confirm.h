#pragma once
// MESSAGE HK_IMPACT_CONFIRM PACKING

#define MAVLINK_MSG_ID_HK_IMPACT_CONFIRM 50002


typedef struct __mavlink_hk_impact_confirm_t {
 int32_t impact_lat; /*<  撞击点纬度（度 × 10^7）*/
 int32_t impact_lon; /*<  撞击点经度（度 × 10^7）*/
 int32_t impact_alt; /*<  撞击点海拔高度（mm）*/
 int16_t target_speed; /*<  目标速度（cm/s）*/
 int16_t drone_speed; /*<  无人机速度（cm/s）*/
 uint8_t target_id; /*<  目标 ID*/
 uint8_t kill_level; /*<  0=摧毁, 1=重创, 2=轻伤*/
} mavlink_hk_impact_confirm_t;

#define MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN 18
#define MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN 18
#define MAVLINK_MSG_ID_50002_LEN 18
#define MAVLINK_MSG_ID_50002_MIN_LEN 18

#define MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC 17
#define MAVLINK_MSG_ID_50002_CRC 17



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_IMPACT_CONFIRM { \
    50002, \
    "HK_IMPACT_CONFIRM", \
    7, \
    {  { "target_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_hk_impact_confirm_t, target_id) }, \
         { "target_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_hk_impact_confirm_t, target_speed) }, \
         { "drone_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_hk_impact_confirm_t, drone_speed) }, \
         { "impact_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_impact_confirm_t, impact_lat) }, \
         { "impact_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_impact_confirm_t, impact_lon) }, \
         { "impact_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_impact_confirm_t, impact_alt) }, \
         { "kill_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_hk_impact_confirm_t, kill_level) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_IMPACT_CONFIRM { \
    "HK_IMPACT_CONFIRM", \
    7, \
    {  { "target_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_hk_impact_confirm_t, target_id) }, \
         { "target_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_hk_impact_confirm_t, target_speed) }, \
         { "drone_speed", NULL, MAVLINK_TYPE_INT16_T, 0, 14, offsetof(mavlink_hk_impact_confirm_t, drone_speed) }, \
         { "impact_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_impact_confirm_t, impact_lat) }, \
         { "impact_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_impact_confirm_t, impact_lon) }, \
         { "impact_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_impact_confirm_t, impact_alt) }, \
         { "kill_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_hk_impact_confirm_t, kill_level) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_impact_confirm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_id  目标 ID
 * @param target_speed  目标速度（cm/s）
 * @param drone_speed  无人机速度（cm/s）
 * @param impact_lat  撞击点纬度（度 × 10^7）
 * @param impact_lon  撞击点经度（度 × 10^7）
 * @param impact_alt  撞击点海拔高度（mm）
 * @param kill_level  0=摧毁, 1=重创, 2=轻伤
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_impact_confirm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_id, int16_t target_speed, int16_t drone_speed, int32_t impact_lat, int32_t impact_lon, int32_t impact_alt, uint8_t kill_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN];
    _mav_put_int32_t(buf, 0, impact_lat);
    _mav_put_int32_t(buf, 4, impact_lon);
    _mav_put_int32_t(buf, 8, impact_alt);
    _mav_put_int16_t(buf, 12, target_speed);
    _mav_put_int16_t(buf, 14, drone_speed);
    _mav_put_uint8_t(buf, 16, target_id);
    _mav_put_uint8_t(buf, 17, kill_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#else
    mavlink_hk_impact_confirm_t packet;
    packet.impact_lat = impact_lat;
    packet.impact_lon = impact_lon;
    packet.impact_alt = impact_alt;
    packet.target_speed = target_speed;
    packet.drone_speed = drone_speed;
    packet.target_id = target_id;
    packet.kill_level = kill_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_IMPACT_CONFIRM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
}

/**
 * @brief Pack a hk_impact_confirm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_id  目标 ID
 * @param target_speed  目标速度（cm/s）
 * @param drone_speed  无人机速度（cm/s）
 * @param impact_lat  撞击点纬度（度 × 10^7）
 * @param impact_lon  撞击点经度（度 × 10^7）
 * @param impact_alt  撞击点海拔高度（mm）
 * @param kill_level  0=摧毁, 1=重创, 2=轻伤
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_impact_confirm_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_id, int16_t target_speed, int16_t drone_speed, int32_t impact_lat, int32_t impact_lon, int32_t impact_alt, uint8_t kill_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN];
    _mav_put_int32_t(buf, 0, impact_lat);
    _mav_put_int32_t(buf, 4, impact_lon);
    _mav_put_int32_t(buf, 8, impact_alt);
    _mav_put_int16_t(buf, 12, target_speed);
    _mav_put_int16_t(buf, 14, drone_speed);
    _mav_put_uint8_t(buf, 16, target_id);
    _mav_put_uint8_t(buf, 17, kill_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#else
    mavlink_hk_impact_confirm_t packet;
    packet.impact_lat = impact_lat;
    packet.impact_lon = impact_lon;
    packet.impact_alt = impact_alt;
    packet.target_speed = target_speed;
    packet.drone_speed = drone_speed;
    packet.target_id = target_id;
    packet.kill_level = kill_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_IMPACT_CONFIRM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#endif
}

/**
 * @brief Pack a hk_impact_confirm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_id  目标 ID
 * @param target_speed  目标速度（cm/s）
 * @param drone_speed  无人机速度（cm/s）
 * @param impact_lat  撞击点纬度（度 × 10^7）
 * @param impact_lon  撞击点经度（度 × 10^7）
 * @param impact_alt  撞击点海拔高度（mm）
 * @param kill_level  0=摧毁, 1=重创, 2=轻伤
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_impact_confirm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_id,int16_t target_speed,int16_t drone_speed,int32_t impact_lat,int32_t impact_lon,int32_t impact_alt,uint8_t kill_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN];
    _mav_put_int32_t(buf, 0, impact_lat);
    _mav_put_int32_t(buf, 4, impact_lon);
    _mav_put_int32_t(buf, 8, impact_alt);
    _mav_put_int16_t(buf, 12, target_speed);
    _mav_put_int16_t(buf, 14, drone_speed);
    _mav_put_uint8_t(buf, 16, target_id);
    _mav_put_uint8_t(buf, 17, kill_level);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#else
    mavlink_hk_impact_confirm_t packet;
    packet.impact_lat = impact_lat;
    packet.impact_lon = impact_lon;
    packet.impact_alt = impact_alt;
    packet.target_speed = target_speed;
    packet.drone_speed = drone_speed;
    packet.target_id = target_id;
    packet.kill_level = kill_level;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_IMPACT_CONFIRM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
}

/**
 * @brief Encode a hk_impact_confirm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_impact_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_impact_confirm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_impact_confirm_t* hk_impact_confirm)
{
    return mavlink_msg_hk_impact_confirm_pack(system_id, component_id, msg, hk_impact_confirm->target_id, hk_impact_confirm->target_speed, hk_impact_confirm->drone_speed, hk_impact_confirm->impact_lat, hk_impact_confirm->impact_lon, hk_impact_confirm->impact_alt, hk_impact_confirm->kill_level);
}

/**
 * @brief Encode a hk_impact_confirm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_impact_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_impact_confirm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_impact_confirm_t* hk_impact_confirm)
{
    return mavlink_msg_hk_impact_confirm_pack_chan(system_id, component_id, chan, msg, hk_impact_confirm->target_id, hk_impact_confirm->target_speed, hk_impact_confirm->drone_speed, hk_impact_confirm->impact_lat, hk_impact_confirm->impact_lon, hk_impact_confirm->impact_alt, hk_impact_confirm->kill_level);
}

/**
 * @brief Encode a hk_impact_confirm struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_impact_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_impact_confirm_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_impact_confirm_t* hk_impact_confirm)
{
    return mavlink_msg_hk_impact_confirm_pack_status(system_id, component_id, _status, msg,  hk_impact_confirm->target_id, hk_impact_confirm->target_speed, hk_impact_confirm->drone_speed, hk_impact_confirm->impact_lat, hk_impact_confirm->impact_lon, hk_impact_confirm->impact_alt, hk_impact_confirm->kill_level);
}

/**
 * @brief Send a hk_impact_confirm message
 * @param chan MAVLink channel to send the message
 *
 * @param target_id  目标 ID
 * @param target_speed  目标速度（cm/s）
 * @param drone_speed  无人机速度（cm/s）
 * @param impact_lat  撞击点纬度（度 × 10^7）
 * @param impact_lon  撞击点经度（度 × 10^7）
 * @param impact_alt  撞击点海拔高度（mm）
 * @param kill_level  0=摧毁, 1=重创, 2=轻伤
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_impact_confirm_send(mavlink_channel_t chan, uint8_t target_id, int16_t target_speed, int16_t drone_speed, int32_t impact_lat, int32_t impact_lon, int32_t impact_alt, uint8_t kill_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN];
    _mav_put_int32_t(buf, 0, impact_lat);
    _mav_put_int32_t(buf, 4, impact_lon);
    _mav_put_int32_t(buf, 8, impact_alt);
    _mav_put_int16_t(buf, 12, target_speed);
    _mav_put_int16_t(buf, 14, drone_speed);
    _mav_put_uint8_t(buf, 16, target_id);
    _mav_put_uint8_t(buf, 17, kill_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM, buf, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
#else
    mavlink_hk_impact_confirm_t packet;
    packet.impact_lat = impact_lat;
    packet.impact_lon = impact_lon;
    packet.impact_alt = impact_alt;
    packet.target_speed = target_speed;
    packet.drone_speed = drone_speed;
    packet.target_id = target_id;
    packet.kill_level = kill_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM, (const char *)&packet, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
#endif
}

/**
 * @brief Send a hk_impact_confirm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_impact_confirm_send_struct(mavlink_channel_t chan, const mavlink_hk_impact_confirm_t* hk_impact_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_impact_confirm_send(chan, hk_impact_confirm->target_id, hk_impact_confirm->target_speed, hk_impact_confirm->drone_speed, hk_impact_confirm->impact_lat, hk_impact_confirm->impact_lon, hk_impact_confirm->impact_alt, hk_impact_confirm->kill_level);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM, (const char *)hk_impact_confirm, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_impact_confirm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_id, int16_t target_speed, int16_t drone_speed, int32_t impact_lat, int32_t impact_lon, int32_t impact_alt, uint8_t kill_level)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, impact_lat);
    _mav_put_int32_t(buf, 4, impact_lon);
    _mav_put_int32_t(buf, 8, impact_alt);
    _mav_put_int16_t(buf, 12, target_speed);
    _mav_put_int16_t(buf, 14, drone_speed);
    _mav_put_uint8_t(buf, 16, target_id);
    _mav_put_uint8_t(buf, 17, kill_level);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM, buf, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
#else
    mavlink_hk_impact_confirm_t *packet = (mavlink_hk_impact_confirm_t *)msgbuf;
    packet->impact_lat = impact_lat;
    packet->impact_lon = impact_lon;
    packet->impact_alt = impact_alt;
    packet->target_speed = target_speed;
    packet->drone_speed = drone_speed;
    packet->target_id = target_id;
    packet->kill_level = kill_level;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM, (const char *)packet, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_IMPACT_CONFIRM UNPACKING


/**
 * @brief Get field target_id from hk_impact_confirm message
 *
 * @return  目标 ID
 */
static inline uint8_t mavlink_msg_hk_impact_confirm_get_target_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field target_speed from hk_impact_confirm message
 *
 * @return  目标速度（cm/s）
 */
static inline int16_t mavlink_msg_hk_impact_confirm_get_target_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field drone_speed from hk_impact_confirm message
 *
 * @return  无人机速度（cm/s）
 */
static inline int16_t mavlink_msg_hk_impact_confirm_get_drone_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  14);
}

/**
 * @brief Get field impact_lat from hk_impact_confirm message
 *
 * @return  撞击点纬度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_impact_confirm_get_impact_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field impact_lon from hk_impact_confirm message
 *
 * @return  撞击点经度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_impact_confirm_get_impact_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field impact_alt from hk_impact_confirm message
 *
 * @return  撞击点海拔高度（mm）
 */
static inline int32_t mavlink_msg_hk_impact_confirm_get_impact_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field kill_level from hk_impact_confirm message
 *
 * @return  0=摧毁, 1=重创, 2=轻伤
 */
static inline uint8_t mavlink_msg_hk_impact_confirm_get_kill_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Decode a hk_impact_confirm message into a struct
 *
 * @param msg The message to decode
 * @param hk_impact_confirm C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_impact_confirm_decode(const mavlink_message_t* msg, mavlink_hk_impact_confirm_t* hk_impact_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_impact_confirm->impact_lat = mavlink_msg_hk_impact_confirm_get_impact_lat(msg);
    hk_impact_confirm->impact_lon = mavlink_msg_hk_impact_confirm_get_impact_lon(msg);
    hk_impact_confirm->impact_alt = mavlink_msg_hk_impact_confirm_get_impact_alt(msg);
    hk_impact_confirm->target_speed = mavlink_msg_hk_impact_confirm_get_target_speed(msg);
    hk_impact_confirm->drone_speed = mavlink_msg_hk_impact_confirm_get_drone_speed(msg);
    hk_impact_confirm->target_id = mavlink_msg_hk_impact_confirm_get_target_id(msg);
    hk_impact_confirm->kill_level = mavlink_msg_hk_impact_confirm_get_kill_level(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN? msg->len : MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN;
        memset(hk_impact_confirm, 0, MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_LEN);
    memcpy(hk_impact_confirm, _MAV_PAYLOAD(msg), len);
#endif
}
