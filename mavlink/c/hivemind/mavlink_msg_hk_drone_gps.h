#pragma once
// MESSAGE HK_DRONE_GPS PACKING

#define MAVLINK_MSG_ID_HK_DRONE_GPS 50107


typedef struct __mavlink_hk_drone_gps_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 uint64_t gps_time_utc_usec; /*<  GPS UTC 时间戳（微秒，Unix epoch）；0=无 GPS 时间*/
 float gps_hdop; /*<  水平精度因子；PX4=SensorGps.hdop，AP 模式下为 GPS_RAW_INT.eph*/
 uint8_t gps_satellites; /*<  可见卫星数*/
 uint8_t gps_fix_type; /*<  定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计*/
} mavlink_hk_drone_gps_t;

#define MAVLINK_MSG_ID_HK_DRONE_GPS_LEN 22
#define MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN 22
#define MAVLINK_MSG_ID_50107_LEN 22
#define MAVLINK_MSG_ID_50107_MIN_LEN 22

#define MAVLINK_MSG_ID_HK_DRONE_GPS_CRC 5
#define MAVLINK_MSG_ID_50107_CRC 5



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_GPS { \
    50107, \
    "HK_DRONE_GPS", \
    5, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_gps_t, timestamp_ms) }, \
         { "gps_satellites", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_hk_drone_gps_t, gps_satellites) }, \
         { "gps_hdop", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_gps_t, gps_hdop) }, \
         { "gps_fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_hk_drone_gps_t, gps_fix_type) }, \
         { "gps_time_utc_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_hk_drone_gps_t, gps_time_utc_usec) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_GPS { \
    "HK_DRONE_GPS", \
    5, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_gps_t, timestamp_ms) }, \
         { "gps_satellites", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_hk_drone_gps_t, gps_satellites) }, \
         { "gps_hdop", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_gps_t, gps_hdop) }, \
         { "gps_fix_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_hk_drone_gps_t, gps_fix_type) }, \
         { "gps_time_utc_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_hk_drone_gps_t, gps_time_utc_usec) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_gps message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param gps_satellites  可见卫星数
 * @param gps_hdop  水平精度因子；PX4=SensorGps.hdop，AP 模式下为 GPS_RAW_INT.eph
 * @param gps_fix_type  定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计
 * @param gps_time_utc_usec  GPS UTC 时间戳（微秒，Unix epoch）；0=无 GPS 时间
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_gps_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t gps_satellites, float gps_hdop, uint8_t gps_fix_type, uint64_t gps_time_utc_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_GPS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint64_t(buf, 8, gps_time_utc_usec);
    _mav_put_float(buf, 16, gps_hdop);
    _mav_put_uint8_t(buf, 20, gps_satellites);
    _mav_put_uint8_t(buf, 21, gps_fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#else
    mavlink_hk_drone_gps_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.gps_time_utc_usec = gps_time_utc_usec;
    packet.gps_hdop = gps_hdop;
    packet.gps_satellites = gps_satellites;
    packet.gps_fix_type = gps_fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_GPS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
}

/**
 * @brief Pack a hk_drone_gps message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param gps_satellites  可见卫星数
 * @param gps_hdop  水平精度因子；PX4=SensorGps.hdop，AP 模式下为 GPS_RAW_INT.eph
 * @param gps_fix_type  定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计
 * @param gps_time_utc_usec  GPS UTC 时间戳（微秒，Unix epoch）；0=无 GPS 时间
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_gps_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t gps_satellites, float gps_hdop, uint8_t gps_fix_type, uint64_t gps_time_utc_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_GPS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint64_t(buf, 8, gps_time_utc_usec);
    _mav_put_float(buf, 16, gps_hdop);
    _mav_put_uint8_t(buf, 20, gps_satellites);
    _mav_put_uint8_t(buf, 21, gps_fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#else
    mavlink_hk_drone_gps_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.gps_time_utc_usec = gps_time_utc_usec;
    packet.gps_hdop = gps_hdop;
    packet.gps_satellites = gps_satellites;
    packet.gps_fix_type = gps_fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_GPS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_gps message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param gps_satellites  可见卫星数
 * @param gps_hdop  水平精度因子；PX4=SensorGps.hdop，AP 模式下为 GPS_RAW_INT.eph
 * @param gps_fix_type  定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计
 * @param gps_time_utc_usec  GPS UTC 时间戳（微秒，Unix epoch）；0=无 GPS 时间
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_gps_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint8_t gps_satellites,float gps_hdop,uint8_t gps_fix_type,uint64_t gps_time_utc_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_GPS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint64_t(buf, 8, gps_time_utc_usec);
    _mav_put_float(buf, 16, gps_hdop);
    _mav_put_uint8_t(buf, 20, gps_satellites);
    _mav_put_uint8_t(buf, 21, gps_fix_type);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#else
    mavlink_hk_drone_gps_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.gps_time_utc_usec = gps_time_utc_usec;
    packet.gps_hdop = gps_hdop;
    packet.gps_satellites = gps_satellites;
    packet.gps_fix_type = gps_fix_type;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_GPS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
}

/**
 * @brief Encode a hk_drone_gps struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_gps_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_gps_t* hk_drone_gps)
{
    return mavlink_msg_hk_drone_gps_pack(system_id, component_id, msg, hk_drone_gps->timestamp_ms, hk_drone_gps->gps_satellites, hk_drone_gps->gps_hdop, hk_drone_gps->gps_fix_type, hk_drone_gps->gps_time_utc_usec);
}

/**
 * @brief Encode a hk_drone_gps struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_gps_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_gps_t* hk_drone_gps)
{
    return mavlink_msg_hk_drone_gps_pack_chan(system_id, component_id, chan, msg, hk_drone_gps->timestamp_ms, hk_drone_gps->gps_satellites, hk_drone_gps->gps_hdop, hk_drone_gps->gps_fix_type, hk_drone_gps->gps_time_utc_usec);
}

/**
 * @brief Encode a hk_drone_gps struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_gps C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_gps_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_gps_t* hk_drone_gps)
{
    return mavlink_msg_hk_drone_gps_pack_status(system_id, component_id, _status, msg,  hk_drone_gps->timestamp_ms, hk_drone_gps->gps_satellites, hk_drone_gps->gps_hdop, hk_drone_gps->gps_fix_type, hk_drone_gps->gps_time_utc_usec);
}

/**
 * @brief Send a hk_drone_gps message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param gps_satellites  可见卫星数
 * @param gps_hdop  水平精度因子；PX4=SensorGps.hdop，AP 模式下为 GPS_RAW_INT.eph
 * @param gps_fix_type  定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计
 * @param gps_time_utc_usec  GPS UTC 时间戳（微秒，Unix epoch）；0=无 GPS 时间
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_gps_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint8_t gps_satellites, float gps_hdop, uint8_t gps_fix_type, uint64_t gps_time_utc_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_GPS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint64_t(buf, 8, gps_time_utc_usec);
    _mav_put_float(buf, 16, gps_hdop);
    _mav_put_uint8_t(buf, 20, gps_satellites);
    _mav_put_uint8_t(buf, 21, gps_fix_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_GPS, buf, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
#else
    mavlink_hk_drone_gps_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.gps_time_utc_usec = gps_time_utc_usec;
    packet.gps_hdop = gps_hdop;
    packet.gps_satellites = gps_satellites;
    packet.gps_fix_type = gps_fix_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_GPS, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
#endif
}

/**
 * @brief Send a hk_drone_gps message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_gps_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_gps_t* hk_drone_gps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_gps_send(chan, hk_drone_gps->timestamp_ms, hk_drone_gps->gps_satellites, hk_drone_gps->gps_hdop, hk_drone_gps->gps_fix_type, hk_drone_gps->gps_time_utc_usec);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_GPS, (const char *)hk_drone_gps, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_GPS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_gps_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint8_t gps_satellites, float gps_hdop, uint8_t gps_fix_type, uint64_t gps_time_utc_usec)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint64_t(buf, 8, gps_time_utc_usec);
    _mav_put_float(buf, 16, gps_hdop);
    _mav_put_uint8_t(buf, 20, gps_satellites);
    _mav_put_uint8_t(buf, 21, gps_fix_type);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_GPS, buf, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
#else
    mavlink_hk_drone_gps_t *packet = (mavlink_hk_drone_gps_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->gps_time_utc_usec = gps_time_utc_usec;
    packet->gps_hdop = gps_hdop;
    packet->gps_satellites = gps_satellites;
    packet->gps_fix_type = gps_fix_type;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_GPS, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN, MAVLINK_MSG_ID_HK_DRONE_GPS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_GPS UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_gps message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_gps_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field gps_satellites from hk_drone_gps message
 *
 * @return  可见卫星数
 */
static inline uint8_t mavlink_msg_hk_drone_gps_get_gps_satellites(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field gps_hdop from hk_drone_gps message
 *
 * @return  水平精度因子；PX4=SensorGps.hdop，AP 模式下为 GPS_RAW_INT.eph
 */
static inline float mavlink_msg_hk_drone_gps_get_gps_hdop(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field gps_fix_type from hk_drone_gps message
 *
 * @return  定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计
 */
static inline uint8_t mavlink_msg_hk_drone_gps_get_gps_fix_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field gps_time_utc_usec from hk_drone_gps message
 *
 * @return  GPS UTC 时间戳（微秒，Unix epoch）；0=无 GPS 时间
 */
static inline uint64_t mavlink_msg_hk_drone_gps_get_gps_time_utc_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Decode a hk_drone_gps message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_gps C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_gps_decode(const mavlink_message_t* msg, mavlink_hk_drone_gps_t* hk_drone_gps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_gps->timestamp_ms = mavlink_msg_hk_drone_gps_get_timestamp_ms(msg);
    hk_drone_gps->gps_time_utc_usec = mavlink_msg_hk_drone_gps_get_gps_time_utc_usec(msg);
    hk_drone_gps->gps_hdop = mavlink_msg_hk_drone_gps_get_gps_hdop(msg);
    hk_drone_gps->gps_satellites = mavlink_msg_hk_drone_gps_get_gps_satellites(msg);
    hk_drone_gps->gps_fix_type = mavlink_msg_hk_drone_gps_get_gps_fix_type(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_GPS_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_GPS_LEN;
        memset(hk_drone_gps, 0, MAVLINK_MSG_ID_HK_DRONE_GPS_LEN);
    memcpy(hk_drone_gps, _MAV_PAYLOAD(msg), len);
#endif
}
