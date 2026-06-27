#pragma once
// MESSAGE HK_DRONE_POSITION PACKING

#define MAVLINK_MSG_ID_HK_DRONE_POSITION 50100


typedef struct __mavlink_hk_drone_position_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 double latitude_deg; /*<  纬度（deg），范围 -90~+90*/
 double longitude_deg; /*<  经度（deg），范围 -180~+180*/
 double altitude_m; /*<  海拔高度（m，AMSL，上为正）*/
 float relative_altitude_m; /*<  相对起飞点高度（m，上为正）；home_valid=false 之前为 0（未定义）*/
 float fc_local_x_m; /*<  本地北向位置（m），AP 模式下恒为 0*/
 float fc_local_y_m; /*<  本地东向位置（m），AP 模式下恒为 0*/
 float fc_local_z_m; /*<  本地下向位置（m，下为正）*/
} mavlink_hk_drone_position_t;

#define MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN 48
#define MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN 48
#define MAVLINK_MSG_ID_50100_LEN 48
#define MAVLINK_MSG_ID_50100_MIN_LEN 48

#define MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC 220
#define MAVLINK_MSG_ID_50100_CRC 220



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_POSITION { \
    50100, \
    "HK_DRONE_POSITION", \
    8, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_position_t, timestamp_ms) }, \
         { "latitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_hk_drone_position_t, latitude_deg) }, \
         { "longitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_hk_drone_position_t, longitude_deg) }, \
         { "altitude_m", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_hk_drone_position_t, altitude_m) }, \
         { "relative_altitude_m", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_position_t, relative_altitude_m) }, \
         { "fc_local_x_m", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_position_t, fc_local_x_m) }, \
         { "fc_local_y_m", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_position_t, fc_local_y_m) }, \
         { "fc_local_z_m", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_position_t, fc_local_z_m) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_POSITION { \
    "HK_DRONE_POSITION", \
    8, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_position_t, timestamp_ms) }, \
         { "latitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_hk_drone_position_t, latitude_deg) }, \
         { "longitude_deg", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_hk_drone_position_t, longitude_deg) }, \
         { "altitude_m", NULL, MAVLINK_TYPE_DOUBLE, 0, 24, offsetof(mavlink_hk_drone_position_t, altitude_m) }, \
         { "relative_altitude_m", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_position_t, relative_altitude_m) }, \
         { "fc_local_x_m", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_position_t, fc_local_x_m) }, \
         { "fc_local_y_m", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_position_t, fc_local_y_m) }, \
         { "fc_local_z_m", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_position_t, fc_local_z_m) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param latitude_deg  纬度（deg），范围 -90~+90
 * @param longitude_deg  经度（deg），范围 -180~+180
 * @param altitude_m  海拔高度（m，AMSL，上为正）
 * @param relative_altitude_m  相对起飞点高度（m，上为正）；home_valid=false 之前为 0（未定义）
 * @param fc_local_x_m  本地北向位置（m），AP 模式下恒为 0
 * @param fc_local_y_m  本地东向位置（m），AP 模式下恒为 0
 * @param fc_local_z_m  本地下向位置（m，下为正）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, double latitude_deg, double longitude_deg, double altitude_m, float relative_altitude_m, float fc_local_x_m, float fc_local_y_m, float fc_local_z_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, latitude_deg);
    _mav_put_double(buf, 16, longitude_deg);
    _mav_put_double(buf, 24, altitude_m);
    _mav_put_float(buf, 32, relative_altitude_m);
    _mav_put_float(buf, 36, fc_local_x_m);
    _mav_put_float(buf, 40, fc_local_y_m);
    _mav_put_float(buf, 44, fc_local_z_m);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#else
    mavlink_hk_drone_position_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.latitude_deg = latitude_deg;
    packet.longitude_deg = longitude_deg;
    packet.altitude_m = altitude_m;
    packet.relative_altitude_m = relative_altitude_m;
    packet.fc_local_x_m = fc_local_x_m;
    packet.fc_local_y_m = fc_local_y_m;
    packet.fc_local_z_m = fc_local_z_m;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
}

/**
 * @brief Pack a hk_drone_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param latitude_deg  纬度（deg），范围 -90~+90
 * @param longitude_deg  经度（deg），范围 -180~+180
 * @param altitude_m  海拔高度（m，AMSL，上为正）
 * @param relative_altitude_m  相对起飞点高度（m，上为正）；home_valid=false 之前为 0（未定义）
 * @param fc_local_x_m  本地北向位置（m），AP 模式下恒为 0
 * @param fc_local_y_m  本地东向位置（m），AP 模式下恒为 0
 * @param fc_local_z_m  本地下向位置（m，下为正）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_position_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, double latitude_deg, double longitude_deg, double altitude_m, float relative_altitude_m, float fc_local_x_m, float fc_local_y_m, float fc_local_z_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, latitude_deg);
    _mav_put_double(buf, 16, longitude_deg);
    _mav_put_double(buf, 24, altitude_m);
    _mav_put_float(buf, 32, relative_altitude_m);
    _mav_put_float(buf, 36, fc_local_x_m);
    _mav_put_float(buf, 40, fc_local_y_m);
    _mav_put_float(buf, 44, fc_local_z_m);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#else
    mavlink_hk_drone_position_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.latitude_deg = latitude_deg;
    packet.longitude_deg = longitude_deg;
    packet.altitude_m = altitude_m;
    packet.relative_altitude_m = relative_altitude_m;
    packet.fc_local_x_m = fc_local_x_m;
    packet.fc_local_y_m = fc_local_y_m;
    packet.fc_local_z_m = fc_local_z_m;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_POSITION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param latitude_deg  纬度（deg），范围 -90~+90
 * @param longitude_deg  经度（deg），范围 -180~+180
 * @param altitude_m  海拔高度（m，AMSL，上为正）
 * @param relative_altitude_m  相对起飞点高度（m，上为正）；home_valid=false 之前为 0（未定义）
 * @param fc_local_x_m  本地北向位置（m），AP 模式下恒为 0
 * @param fc_local_y_m  本地东向位置（m），AP 模式下恒为 0
 * @param fc_local_z_m  本地下向位置（m，下为正）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,double latitude_deg,double longitude_deg,double altitude_m,float relative_altitude_m,float fc_local_x_m,float fc_local_y_m,float fc_local_z_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, latitude_deg);
    _mav_put_double(buf, 16, longitude_deg);
    _mav_put_double(buf, 24, altitude_m);
    _mav_put_float(buf, 32, relative_altitude_m);
    _mav_put_float(buf, 36, fc_local_x_m);
    _mav_put_float(buf, 40, fc_local_y_m);
    _mav_put_float(buf, 44, fc_local_z_m);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#else
    mavlink_hk_drone_position_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.latitude_deg = latitude_deg;
    packet.longitude_deg = longitude_deg;
    packet.altitude_m = altitude_m;
    packet.relative_altitude_m = relative_altitude_m;
    packet.fc_local_x_m = fc_local_x_m;
    packet.fc_local_y_m = fc_local_y_m;
    packet.fc_local_z_m = fc_local_z_m;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
}

/**
 * @brief Encode a hk_drone_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_position_t* hk_drone_position)
{
    return mavlink_msg_hk_drone_position_pack(system_id, component_id, msg, hk_drone_position->timestamp_ms, hk_drone_position->latitude_deg, hk_drone_position->longitude_deg, hk_drone_position->altitude_m, hk_drone_position->relative_altitude_m, hk_drone_position->fc_local_x_m, hk_drone_position->fc_local_y_m, hk_drone_position->fc_local_z_m);
}

/**
 * @brief Encode a hk_drone_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_position_t* hk_drone_position)
{
    return mavlink_msg_hk_drone_position_pack_chan(system_id, component_id, chan, msg, hk_drone_position->timestamp_ms, hk_drone_position->latitude_deg, hk_drone_position->longitude_deg, hk_drone_position->altitude_m, hk_drone_position->relative_altitude_m, hk_drone_position->fc_local_x_m, hk_drone_position->fc_local_y_m, hk_drone_position->fc_local_z_m);
}

/**
 * @brief Encode a hk_drone_position struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_position_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_position_t* hk_drone_position)
{
    return mavlink_msg_hk_drone_position_pack_status(system_id, component_id, _status, msg,  hk_drone_position->timestamp_ms, hk_drone_position->latitude_deg, hk_drone_position->longitude_deg, hk_drone_position->altitude_m, hk_drone_position->relative_altitude_m, hk_drone_position->fc_local_x_m, hk_drone_position->fc_local_y_m, hk_drone_position->fc_local_z_m);
}

/**
 * @brief Send a hk_drone_position message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param latitude_deg  纬度（deg），范围 -90~+90
 * @param longitude_deg  经度（deg），范围 -180~+180
 * @param altitude_m  海拔高度（m，AMSL，上为正）
 * @param relative_altitude_m  相对起飞点高度（m，上为正）；home_valid=false 之前为 0（未定义）
 * @param fc_local_x_m  本地北向位置（m），AP 模式下恒为 0
 * @param fc_local_y_m  本地东向位置（m），AP 模式下恒为 0
 * @param fc_local_z_m  本地下向位置（m，下为正）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_position_send(mavlink_channel_t chan, uint64_t timestamp_ms, double latitude_deg, double longitude_deg, double altitude_m, float relative_altitude_m, float fc_local_x_m, float fc_local_y_m, float fc_local_z_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, latitude_deg);
    _mav_put_double(buf, 16, longitude_deg);
    _mav_put_double(buf, 24, altitude_m);
    _mav_put_float(buf, 32, relative_altitude_m);
    _mav_put_float(buf, 36, fc_local_x_m);
    _mav_put_float(buf, 40, fc_local_y_m);
    _mav_put_float(buf, 44, fc_local_z_m);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_POSITION, buf, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
#else
    mavlink_hk_drone_position_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.latitude_deg = latitude_deg;
    packet.longitude_deg = longitude_deg;
    packet.altitude_m = altitude_m;
    packet.relative_altitude_m = relative_altitude_m;
    packet.fc_local_x_m = fc_local_x_m;
    packet.fc_local_y_m = fc_local_y_m;
    packet.fc_local_z_m = fc_local_z_m;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_POSITION, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
#endif
}

/**
 * @brief Send a hk_drone_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_position_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_position_t* hk_drone_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_position_send(chan, hk_drone_position->timestamp_ms, hk_drone_position->latitude_deg, hk_drone_position->longitude_deg, hk_drone_position->altitude_m, hk_drone_position->relative_altitude_m, hk_drone_position->fc_local_x_m, hk_drone_position->fc_local_y_m, hk_drone_position->fc_local_z_m);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_POSITION, (const char *)hk_drone_position, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, double latitude_deg, double longitude_deg, double altitude_m, float relative_altitude_m, float fc_local_x_m, float fc_local_y_m, float fc_local_z_m)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_double(buf, 8, latitude_deg);
    _mav_put_double(buf, 16, longitude_deg);
    _mav_put_double(buf, 24, altitude_m);
    _mav_put_float(buf, 32, relative_altitude_m);
    _mav_put_float(buf, 36, fc_local_x_m);
    _mav_put_float(buf, 40, fc_local_y_m);
    _mav_put_float(buf, 44, fc_local_z_m);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_POSITION, buf, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
#else
    mavlink_hk_drone_position_t *packet = (mavlink_hk_drone_position_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->latitude_deg = latitude_deg;
    packet->longitude_deg = longitude_deg;
    packet->altitude_m = altitude_m;
    packet->relative_altitude_m = relative_altitude_m;
    packet->fc_local_x_m = fc_local_x_m;
    packet->fc_local_y_m = fc_local_y_m;
    packet->fc_local_z_m = fc_local_z_m;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_POSITION, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN, MAVLINK_MSG_ID_HK_DRONE_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_POSITION UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_position message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_position_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field latitude_deg from hk_drone_position message
 *
 * @return  纬度（deg），范围 -90~+90
 */
static inline double mavlink_msg_hk_drone_position_get_latitude_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field longitude_deg from hk_drone_position message
 *
 * @return  经度（deg），范围 -180~+180
 */
static inline double mavlink_msg_hk_drone_position_get_longitude_deg(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field altitude_m from hk_drone_position message
 *
 * @return  海拔高度（m，AMSL，上为正）
 */
static inline double mavlink_msg_hk_drone_position_get_altitude_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  24);
}

/**
 * @brief Get field relative_altitude_m from hk_drone_position message
 *
 * @return  相对起飞点高度（m，上为正）；home_valid=false 之前为 0（未定义）
 */
static inline float mavlink_msg_hk_drone_position_get_relative_altitude_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field fc_local_x_m from hk_drone_position message
 *
 * @return  本地北向位置（m），AP 模式下恒为 0
 */
static inline float mavlink_msg_hk_drone_position_get_fc_local_x_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field fc_local_y_m from hk_drone_position message
 *
 * @return  本地东向位置（m），AP 模式下恒为 0
 */
static inline float mavlink_msg_hk_drone_position_get_fc_local_y_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field fc_local_z_m from hk_drone_position message
 *
 * @return  本地下向位置（m，下为正）
 */
static inline float mavlink_msg_hk_drone_position_get_fc_local_z_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a hk_drone_position message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_position_decode(const mavlink_message_t* msg, mavlink_hk_drone_position_t* hk_drone_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_position->timestamp_ms = mavlink_msg_hk_drone_position_get_timestamp_ms(msg);
    hk_drone_position->latitude_deg = mavlink_msg_hk_drone_position_get_latitude_deg(msg);
    hk_drone_position->longitude_deg = mavlink_msg_hk_drone_position_get_longitude_deg(msg);
    hk_drone_position->altitude_m = mavlink_msg_hk_drone_position_get_altitude_m(msg);
    hk_drone_position->relative_altitude_m = mavlink_msg_hk_drone_position_get_relative_altitude_m(msg);
    hk_drone_position->fc_local_x_m = mavlink_msg_hk_drone_position_get_fc_local_x_m(msg);
    hk_drone_position->fc_local_y_m = mavlink_msg_hk_drone_position_get_fc_local_y_m(msg);
    hk_drone_position->fc_local_z_m = mavlink_msg_hk_drone_position_get_fc_local_z_m(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN;
        memset(hk_drone_position, 0, MAVLINK_MSG_ID_HK_DRONE_POSITION_LEN);
    memcpy(hk_drone_position, _MAV_PAYLOAD(msg), len);
#endif
}
