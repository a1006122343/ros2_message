#pragma once
// MESSAGE HK_DRONE_HOME_VTOL PACKING

#define MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL 50112


typedef struct __mavlink_hk_drone_home_vtol_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 double home_latitude_deg; /*<  Home 纬度（deg）*/
 double home_longitude_deg; /*<  Home 经度（deg）*/
 double home_altitude_m; /*<  Home 海拔（m）*/
 uint8_t vtol_state; /*<  VTOL 状态：0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW*/
 uint8_t home_valid; /*<  Home 是否已锁定（true 后 home_* 不再变）*/
} mavlink_hk_drone_home_vtol_t;

#define MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN 34
#define MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN 34
#define MAVLINK_MSG_ID_50112_LEN 34
#define MAVLINK_MSG_ID_50112_MIN_LEN 34

#define MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC 151
#define MAVLINK_MSG_ID_50112_CRC 151



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_HOME_VTOL { \
    50112, \
    "HK_DRONE_HOME_VTOL", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_home_vtol_t, timestamp_ms) }, \
         { "vtol_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_hk_drone_home_vtol_t, vtol_state) }, \
         { "home_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_hk_drone_home_vtol_t, home_valid) }, \
         { "home_latitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_hk_drone_home_vtol_t, home_latitude_deg) }, \
         { "home_longitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_hk_drone_home_vtol_t, home_longitude_deg) }, \
         { "home_altitude_m", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_hk_drone_home_vtol_t, home_altitude_m) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_HOME_VTOL { \
    "HK_DRONE_HOME_VTOL", \
    6, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_home_vtol_t, timestamp_ms) }, \
         { "vtol_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_hk_drone_home_vtol_t, vtol_state) }, \
         { "home_valid", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_hk_drone_home_vtol_t, home_valid) }, \
         { "home_latitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_hk_drone_home_vtol_t, home_latitude_deg) }, \
         { "home_longitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_hk_drone_home_vtol_t, home_longitude_deg) }, \
         { "home_altitude_m", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_hk_drone_home_vtol_t, home_altitude_m) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_home_vtol message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param vtol_state  VTOL 状态：0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW
 * @param home_valid  Home 是否已锁定（true 后 home_* 不再变）
 * @param home_latitude_deg  Home 纬度（deg）
 * @param home_longitude_deg  Home 经度（deg）
 * @param home_altitude_m  Home 海拔（m）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_home_vtol_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t vtol_state, uint8_t home_valid, double home_latitude_deg, double home_longitude_deg, double home_altitude_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, home_latitude_deg);
    _mav_put_double(buf, 16, home_longitude_deg);
    _mav_put_double(buf, 24, home_altitude_m);
    _mav_put_uint8_t(buf, 32, vtol_state);
    _mav_put_uint8_t(buf, 33, home_valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#else
    mavlink_hk_drone_home_vtol_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.home_latitude_deg = home_latitude_deg;
    packet.home_longitude_deg = home_longitude_deg;
    packet.home_altitude_m = home_altitude_m;
    packet.vtol_state = vtol_state;
    packet.home_valid = home_valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
}

/**
 * @brief Pack a hk_drone_home_vtol message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param vtol_state  VTOL 状态：0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW
 * @param home_valid  Home 是否已锁定（true 后 home_* 不再变）
 * @param home_latitude_deg  Home 纬度（deg）
 * @param home_longitude_deg  Home 经度（deg）
 * @param home_altitude_m  Home 海拔（m）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_home_vtol_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t vtol_state, uint8_t home_valid, double home_latitude_deg, double home_longitude_deg, double home_altitude_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, home_latitude_deg);
    _mav_put_double(buf, 16, home_longitude_deg);
    _mav_put_double(buf, 24, home_altitude_m);
    _mav_put_uint8_t(buf, 32, vtol_state);
    _mav_put_uint8_t(buf, 33, home_valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#else
    mavlink_hk_drone_home_vtol_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.home_latitude_deg = home_latitude_deg;
    packet.home_longitude_deg = home_longitude_deg;
    packet.home_altitude_m = home_altitude_m;
    packet.vtol_state = vtol_state;
    packet.home_valid = home_valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_home_vtol message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param vtol_state  VTOL 状态：0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW
 * @param home_valid  Home 是否已锁定（true 后 home_* 不再变）
 * @param home_latitude_deg  Home 纬度（deg）
 * @param home_longitude_deg  Home 经度（deg）
 * @param home_altitude_m  Home 海拔（m）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_home_vtol_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint8_t vtol_state,uint8_t home_valid,double home_latitude_deg,double home_longitude_deg,double home_altitude_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, home_latitude_deg);
    _mav_put_double(buf, 16, home_longitude_deg);
    _mav_put_double(buf, 24, home_altitude_m);
    _mav_put_uint8_t(buf, 32, vtol_state);
    _mav_put_uint8_t(buf, 33, home_valid);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#else
    mavlink_hk_drone_home_vtol_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.home_latitude_deg = home_latitude_deg;
    packet.home_longitude_deg = home_longitude_deg;
    packet.home_altitude_m = home_altitude_m;
    packet.vtol_state = vtol_state;
    packet.home_valid = home_valid;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
}

/**
 * @brief Encode a hk_drone_home_vtol struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_home_vtol C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_home_vtol_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_home_vtol_t* hk_drone_home_vtol)
{
    return mavlink_msg_hk_drone_home_vtol_pack(system_id, component_id, msg, hk_drone_home_vtol->timestamp_ms, hk_drone_home_vtol->vtol_state, hk_drone_home_vtol->home_valid, hk_drone_home_vtol->home_latitude_deg, hk_drone_home_vtol->home_longitude_deg, hk_drone_home_vtol->home_altitude_m);
}

/**
 * @brief Encode a hk_drone_home_vtol struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_home_vtol C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_home_vtol_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_home_vtol_t* hk_drone_home_vtol)
{
    return mavlink_msg_hk_drone_home_vtol_pack_chan(system_id, component_id, chan, msg, hk_drone_home_vtol->timestamp_ms, hk_drone_home_vtol->vtol_state, hk_drone_home_vtol->home_valid, hk_drone_home_vtol->home_latitude_deg, hk_drone_home_vtol->home_longitude_deg, hk_drone_home_vtol->home_altitude_m);
}

/**
 * @brief Encode a hk_drone_home_vtol struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_home_vtol C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_home_vtol_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_home_vtol_t* hk_drone_home_vtol)
{
    return mavlink_msg_hk_drone_home_vtol_pack_status(system_id, component_id, _status, msg,  hk_drone_home_vtol->timestamp_ms, hk_drone_home_vtol->vtol_state, hk_drone_home_vtol->home_valid, hk_drone_home_vtol->home_latitude_deg, hk_drone_home_vtol->home_longitude_deg, hk_drone_home_vtol->home_altitude_m);
}

/**
 * @brief Send a hk_drone_home_vtol message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param vtol_state  VTOL 状态：0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW
 * @param home_valid  Home 是否已锁定（true 后 home_* 不再变）
 * @param home_latitude_deg  Home 纬度（deg）
 * @param home_longitude_deg  Home 经度（deg）
 * @param home_altitude_m  Home 海拔（m）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_home_vtol_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint8_t vtol_state, uint8_t home_valid, double home_latitude_deg, double home_longitude_deg, double home_altitude_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, home_latitude_deg);
    _mav_put_double(buf, 16, home_longitude_deg);
    _mav_put_double(buf, 24, home_altitude_m);
    _mav_put_uint8_t(buf, 32, vtol_state);
    _mav_put_uint8_t(buf, 33, home_valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL, buf, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
#else
    mavlink_hk_drone_home_vtol_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.home_latitude_deg = home_latitude_deg;
    packet.home_longitude_deg = home_longitude_deg;
    packet.home_altitude_m = home_altitude_m;
    packet.vtol_state = vtol_state;
    packet.home_valid = home_valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
#endif
}

/**
 * @brief Send a hk_drone_home_vtol message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_home_vtol_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_home_vtol_t* hk_drone_home_vtol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_home_vtol_send(chan, hk_drone_home_vtol->timestamp_ms, hk_drone_home_vtol->vtol_state, hk_drone_home_vtol->home_valid, hk_drone_home_vtol->home_latitude_deg, hk_drone_home_vtol->home_longitude_deg, hk_drone_home_vtol->home_altitude_m);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL, (const char *)hk_drone_home_vtol, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_home_vtol_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint8_t vtol_state, uint8_t home_valid, double home_latitude_deg, double home_longitude_deg, double home_altitude_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, home_latitude_deg);
    _mav_put_double(buf, 16, home_longitude_deg);
    _mav_put_double(buf, 24, home_altitude_m);
    _mav_put_uint8_t(buf, 32, vtol_state);
    _mav_put_uint8_t(buf, 33, home_valid);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL, buf, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
#else
    mavlink_hk_drone_home_vtol_t *packet = (mavlink_hk_drone_home_vtol_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->home_latitude_deg = home_latitude_deg;
    packet->home_longitude_deg = home_longitude_deg;
    packet->home_altitude_m = home_altitude_m;
    packet->vtol_state = vtol_state;
    packet->home_valid = home_valid;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_HOME_VTOL UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_home_vtol message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_home_vtol_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field vtol_state from hk_drone_home_vtol message
 *
 * @return  VTOL 状态：0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW
 */
static inline uint8_t mavlink_msg_hk_drone_home_vtol_get_vtol_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field home_valid from hk_drone_home_vtol message
 *
 * @return  Home 是否已锁定（true 后 home_* 不再变）
 */
static inline uint8_t mavlink_msg_hk_drone_home_vtol_get_home_valid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field home_latitude_deg from hk_drone_home_vtol message
 *
 * @return  Home 纬度（deg）
 */
static inline double mavlink_msg_hk_drone_home_vtol_get_home_latitude_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field home_longitude_deg from hk_drone_home_vtol message
 *
 * @return  Home 经度（deg）
 */
static inline double mavlink_msg_hk_drone_home_vtol_get_home_longitude_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field home_altitude_m from hk_drone_home_vtol message
 *
 * @return  Home 海拔（m）
 */
static inline double mavlink_msg_hk_drone_home_vtol_get_home_altitude_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Decode a hk_drone_home_vtol message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_home_vtol C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_home_vtol_decode(const mavlink_message_t* msg, mavlink_hk_drone_home_vtol_t* hk_drone_home_vtol)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_home_vtol->timestamp_ms = mavlink_msg_hk_drone_home_vtol_get_timestamp_ms(msg);
    hk_drone_home_vtol->home_latitude_deg = mavlink_msg_hk_drone_home_vtol_get_home_latitude_deg(msg);
    hk_drone_home_vtol->home_longitude_deg = mavlink_msg_hk_drone_home_vtol_get_home_longitude_deg(msg);
    hk_drone_home_vtol->home_altitude_m = mavlink_msg_hk_drone_home_vtol_get_home_altitude_m(msg);
    hk_drone_home_vtol->vtol_state = mavlink_msg_hk_drone_home_vtol_get_vtol_state(msg);
    hk_drone_home_vtol->home_valid = mavlink_msg_hk_drone_home_vtol_get_home_valid(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN;
        memset(hk_drone_home_vtol, 0, MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_LEN);
    memcpy(hk_drone_home_vtol, _MAV_PAYLOAD(msg), len);
#endif
}
