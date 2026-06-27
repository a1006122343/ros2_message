#pragma once
// MESSAGE HK_DRONE_ATTITUDE PACKING

#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE 50102


typedef struct __mavlink_hk_drone_attitude_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 float roll_rad; /*<  MC 视图 body→world 滚转（rad），范围 -π~+π*/
 float pitch_rad; /*<  MC 视图 body→world 俯仰（rad），范围 -π/2~+π/2*/
 float yaw_rad; /*<  MC 视图 body→world 偏航（rad），范围 -π~+π*/
 float attitude_qx; /*<  body→world 四元数 x 分量（XYZW 顺序，Hamilton 约定，NED）*/
 float attitude_qy; /*<  body→world 四元数 y 分量*/
 float attitude_qz; /*<  body→world 四元数 z 分量*/
 float attitude_qw; /*<  body→world 四元数 w 分量*/
 float angular_velocity_x_radps; /*<  机体滚转角速度（rad/s）*/
 float angular_velocity_y_radps; /*<  机体俯仰角速度（rad/s）*/
 float angular_velocity_z_radps; /*<  机体偏航角速度（rad/s）*/
} mavlink_hk_drone_attitude_t;

#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN 48
#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN 48
#define MAVLINK_MSG_ID_50102_LEN 48
#define MAVLINK_MSG_ID_50102_MIN_LEN 48

#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC 77
#define MAVLINK_MSG_ID_50102_CRC 77



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_ATTITUDE { \
    50102, \
    "HK_DRONE_ATTITUDE", \
    11, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_attitude_t, timestamp_ms) }, \
         { "roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_attitude_t, roll_rad) }, \
         { "pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_attitude_t, pitch_rad) }, \
         { "yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_attitude_t, yaw_rad) }, \
         { "attitude_qx", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_drone_attitude_t, attitude_qx) }, \
         { "attitude_qy", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_drone_attitude_t, attitude_qy) }, \
         { "attitude_qz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_hk_drone_attitude_t, attitude_qz) }, \
         { "attitude_qw", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_attitude_t, attitude_qw) }, \
         { "angular_velocity_x_radps", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_attitude_t, angular_velocity_x_radps) }, \
         { "angular_velocity_y_radps", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_attitude_t, angular_velocity_y_radps) }, \
         { "angular_velocity_z_radps", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_attitude_t, angular_velocity_z_radps) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_ATTITUDE { \
    "HK_DRONE_ATTITUDE", \
    11, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_attitude_t, timestamp_ms) }, \
         { "roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_attitude_t, roll_rad) }, \
         { "pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_attitude_t, pitch_rad) }, \
         { "yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_attitude_t, yaw_rad) }, \
         { "attitude_qx", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_drone_attitude_t, attitude_qx) }, \
         { "attitude_qy", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_drone_attitude_t, attitude_qy) }, \
         { "attitude_qz", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_hk_drone_attitude_t, attitude_qz) }, \
         { "attitude_qw", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_attitude_t, attitude_qw) }, \
         { "angular_velocity_x_radps", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_attitude_t, angular_velocity_x_radps) }, \
         { "angular_velocity_y_radps", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_attitude_t, angular_velocity_y_radps) }, \
         { "angular_velocity_z_radps", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_attitude_t, angular_velocity_z_radps) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param roll_rad  MC 视图 body→world 滚转（rad），范围 -π~+π
 * @param pitch_rad  MC 视图 body→world 俯仰（rad），范围 -π/2~+π/2
 * @param yaw_rad  MC 视图 body→world 偏航（rad），范围 -π~+π
 * @param attitude_qx  body→world 四元数 x 分量（XYZW 顺序，Hamilton 约定，NED）
 * @param attitude_qy  body→world 四元数 y 分量
 * @param attitude_qz  body→world 四元数 z 分量
 * @param attitude_qw  body→world 四元数 w 分量
 * @param angular_velocity_x_radps  机体滚转角速度（rad/s）
 * @param angular_velocity_y_radps  机体俯仰角速度（rad/s）
 * @param angular_velocity_z_radps  机体偏航角速度（rad/s）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float roll_rad, float pitch_rad, float yaw_rad, float attitude_qx, float attitude_qy, float attitude_qz, float attitude_qw, float angular_velocity_x_radps, float angular_velocity_y_radps, float angular_velocity_z_radps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, roll_rad);
    _mav_put_float(buf, 12, pitch_rad);
    _mav_put_float(buf, 16, yaw_rad);
    _mav_put_float(buf, 20, attitude_qx);
    _mav_put_float(buf, 24, attitude_qy);
    _mav_put_float(buf, 28, attitude_qz);
    _mav_put_float(buf, 32, attitude_qw);
    _mav_put_float(buf, 36, angular_velocity_x_radps);
    _mav_put_float(buf, 40, angular_velocity_y_radps);
    _mav_put_float(buf, 44, angular_velocity_z_radps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#else
    mavlink_hk_drone_attitude_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.attitude_qx = attitude_qx;
    packet.attitude_qy = attitude_qy;
    packet.attitude_qz = attitude_qz;
    packet.attitude_qw = attitude_qw;
    packet.angular_velocity_x_radps = angular_velocity_x_radps;
    packet.angular_velocity_y_radps = angular_velocity_y_radps;
    packet.angular_velocity_z_radps = angular_velocity_z_radps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_ATTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
}

/**
 * @brief Pack a hk_drone_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param roll_rad  MC 视图 body→world 滚转（rad），范围 -π~+π
 * @param pitch_rad  MC 视图 body→world 俯仰（rad），范围 -π/2~+π/2
 * @param yaw_rad  MC 视图 body→world 偏航（rad），范围 -π~+π
 * @param attitude_qx  body→world 四元数 x 分量（XYZW 顺序，Hamilton 约定，NED）
 * @param attitude_qy  body→world 四元数 y 分量
 * @param attitude_qz  body→world 四元数 z 分量
 * @param attitude_qw  body→world 四元数 w 分量
 * @param angular_velocity_x_radps  机体滚转角速度（rad/s）
 * @param angular_velocity_y_radps  机体俯仰角速度（rad/s）
 * @param angular_velocity_z_radps  机体偏航角速度（rad/s）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float roll_rad, float pitch_rad, float yaw_rad, float attitude_qx, float attitude_qy, float attitude_qz, float attitude_qw, float angular_velocity_x_radps, float angular_velocity_y_radps, float angular_velocity_z_radps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, roll_rad);
    _mav_put_float(buf, 12, pitch_rad);
    _mav_put_float(buf, 16, yaw_rad);
    _mav_put_float(buf, 20, attitude_qx);
    _mav_put_float(buf, 24, attitude_qy);
    _mav_put_float(buf, 28, attitude_qz);
    _mav_put_float(buf, 32, attitude_qw);
    _mav_put_float(buf, 36, angular_velocity_x_radps);
    _mav_put_float(buf, 40, angular_velocity_y_radps);
    _mav_put_float(buf, 44, angular_velocity_z_radps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#else
    mavlink_hk_drone_attitude_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.attitude_qx = attitude_qx;
    packet.attitude_qy = attitude_qy;
    packet.attitude_qz = attitude_qz;
    packet.attitude_qw = attitude_qw;
    packet.angular_velocity_x_radps = angular_velocity_x_radps;
    packet.angular_velocity_y_radps = angular_velocity_y_radps;
    packet.angular_velocity_z_radps = angular_velocity_z_radps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_ATTITUDE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_attitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param roll_rad  MC 视图 body→world 滚转（rad），范围 -π~+π
 * @param pitch_rad  MC 视图 body→world 俯仰（rad），范围 -π/2~+π/2
 * @param yaw_rad  MC 视图 body→world 偏航（rad），范围 -π~+π
 * @param attitude_qx  body→world 四元数 x 分量（XYZW 顺序，Hamilton 约定，NED）
 * @param attitude_qy  body→world 四元数 y 分量
 * @param attitude_qz  body→world 四元数 z 分量
 * @param attitude_qw  body→world 四元数 w 分量
 * @param angular_velocity_x_radps  机体滚转角速度（rad/s）
 * @param angular_velocity_y_radps  机体俯仰角速度（rad/s）
 * @param angular_velocity_z_radps  机体偏航角速度（rad/s）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,float roll_rad,float pitch_rad,float yaw_rad,float attitude_qx,float attitude_qy,float attitude_qz,float attitude_qw,float angular_velocity_x_radps,float angular_velocity_y_radps,float angular_velocity_z_radps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, roll_rad);
    _mav_put_float(buf, 12, pitch_rad);
    _mav_put_float(buf, 16, yaw_rad);
    _mav_put_float(buf, 20, attitude_qx);
    _mav_put_float(buf, 24, attitude_qy);
    _mav_put_float(buf, 28, attitude_qz);
    _mav_put_float(buf, 32, attitude_qw);
    _mav_put_float(buf, 36, angular_velocity_x_radps);
    _mav_put_float(buf, 40, angular_velocity_y_radps);
    _mav_put_float(buf, 44, angular_velocity_z_radps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#else
    mavlink_hk_drone_attitude_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.attitude_qx = attitude_qx;
    packet.attitude_qy = attitude_qy;
    packet.attitude_qz = attitude_qz;
    packet.attitude_qw = attitude_qw;
    packet.angular_velocity_x_radps = angular_velocity_x_radps;
    packet.angular_velocity_y_radps = angular_velocity_y_radps;
    packet.angular_velocity_z_radps = angular_velocity_z_radps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_ATTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
}

/**
 * @brief Encode a hk_drone_attitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_attitude_t* hk_drone_attitude)
{
    return mavlink_msg_hk_drone_attitude_pack(system_id, component_id, msg, hk_drone_attitude->timestamp_ms, hk_drone_attitude->roll_rad, hk_drone_attitude->pitch_rad, hk_drone_attitude->yaw_rad, hk_drone_attitude->attitude_qx, hk_drone_attitude->attitude_qy, hk_drone_attitude->attitude_qz, hk_drone_attitude->attitude_qw, hk_drone_attitude->angular_velocity_x_radps, hk_drone_attitude->angular_velocity_y_radps, hk_drone_attitude->angular_velocity_z_radps);
}

/**
 * @brief Encode a hk_drone_attitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_attitude_t* hk_drone_attitude)
{
    return mavlink_msg_hk_drone_attitude_pack_chan(system_id, component_id, chan, msg, hk_drone_attitude->timestamp_ms, hk_drone_attitude->roll_rad, hk_drone_attitude->pitch_rad, hk_drone_attitude->yaw_rad, hk_drone_attitude->attitude_qx, hk_drone_attitude->attitude_qy, hk_drone_attitude->attitude_qz, hk_drone_attitude->attitude_qw, hk_drone_attitude->angular_velocity_x_radps, hk_drone_attitude->angular_velocity_y_radps, hk_drone_attitude->angular_velocity_z_radps);
}

/**
 * @brief Encode a hk_drone_attitude struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_attitude_t* hk_drone_attitude)
{
    return mavlink_msg_hk_drone_attitude_pack_status(system_id, component_id, _status, msg,  hk_drone_attitude->timestamp_ms, hk_drone_attitude->roll_rad, hk_drone_attitude->pitch_rad, hk_drone_attitude->yaw_rad, hk_drone_attitude->attitude_qx, hk_drone_attitude->attitude_qy, hk_drone_attitude->attitude_qz, hk_drone_attitude->attitude_qw, hk_drone_attitude->angular_velocity_x_radps, hk_drone_attitude->angular_velocity_y_radps, hk_drone_attitude->angular_velocity_z_radps);
}

/**
 * @brief Send a hk_drone_attitude message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param roll_rad  MC 视图 body→world 滚转（rad），范围 -π~+π
 * @param pitch_rad  MC 视图 body→world 俯仰（rad），范围 -π/2~+π/2
 * @param yaw_rad  MC 视图 body→world 偏航（rad），范围 -π~+π
 * @param attitude_qx  body→world 四元数 x 分量（XYZW 顺序，Hamilton 约定，NED）
 * @param attitude_qy  body→world 四元数 y 分量
 * @param attitude_qz  body→world 四元数 z 分量
 * @param attitude_qw  body→world 四元数 w 分量
 * @param angular_velocity_x_radps  机体滚转角速度（rad/s）
 * @param angular_velocity_y_radps  机体俯仰角速度（rad/s）
 * @param angular_velocity_z_radps  机体偏航角速度（rad/s）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_attitude_send(mavlink_channel_t chan, uint64_t timestamp_ms, float roll_rad, float pitch_rad, float yaw_rad, float attitude_qx, float attitude_qy, float attitude_qz, float attitude_qw, float angular_velocity_x_radps, float angular_velocity_y_radps, float angular_velocity_z_radps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, roll_rad);
    _mav_put_float(buf, 12, pitch_rad);
    _mav_put_float(buf, 16, yaw_rad);
    _mav_put_float(buf, 20, attitude_qx);
    _mav_put_float(buf, 24, attitude_qy);
    _mav_put_float(buf, 28, attitude_qz);
    _mav_put_float(buf, 32, attitude_qw);
    _mav_put_float(buf, 36, angular_velocity_x_radps);
    _mav_put_float(buf, 40, angular_velocity_y_radps);
    _mav_put_float(buf, 44, angular_velocity_z_radps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE, buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
#else
    mavlink_hk_drone_attitude_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.roll_rad = roll_rad;
    packet.pitch_rad = pitch_rad;
    packet.yaw_rad = yaw_rad;
    packet.attitude_qx = attitude_qx;
    packet.attitude_qy = attitude_qy;
    packet.attitude_qz = attitude_qz;
    packet.attitude_qw = attitude_qw;
    packet.angular_velocity_x_radps = angular_velocity_x_radps;
    packet.angular_velocity_y_radps = angular_velocity_y_radps;
    packet.angular_velocity_z_radps = angular_velocity_z_radps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
#endif
}

/**
 * @brief Send a hk_drone_attitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_attitude_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_attitude_t* hk_drone_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_attitude_send(chan, hk_drone_attitude->timestamp_ms, hk_drone_attitude->roll_rad, hk_drone_attitude->pitch_rad, hk_drone_attitude->yaw_rad, hk_drone_attitude->attitude_qx, hk_drone_attitude->attitude_qy, hk_drone_attitude->attitude_qz, hk_drone_attitude->attitude_qw, hk_drone_attitude->angular_velocity_x_radps, hk_drone_attitude->angular_velocity_y_radps, hk_drone_attitude->angular_velocity_z_radps);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE, (const char *)hk_drone_attitude, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_attitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, float roll_rad, float pitch_rad, float yaw_rad, float attitude_qx, float attitude_qy, float attitude_qz, float attitude_qw, float angular_velocity_x_radps, float angular_velocity_y_radps, float angular_velocity_z_radps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, roll_rad);
    _mav_put_float(buf, 12, pitch_rad);
    _mav_put_float(buf, 16, yaw_rad);
    _mav_put_float(buf, 20, attitude_qx);
    _mav_put_float(buf, 24, attitude_qy);
    _mav_put_float(buf, 28, attitude_qz);
    _mav_put_float(buf, 32, attitude_qw);
    _mav_put_float(buf, 36, angular_velocity_x_radps);
    _mav_put_float(buf, 40, angular_velocity_y_radps);
    _mav_put_float(buf, 44, angular_velocity_z_radps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE, buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
#else
    mavlink_hk_drone_attitude_t *packet = (mavlink_hk_drone_attitude_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->roll_rad = roll_rad;
    packet->pitch_rad = pitch_rad;
    packet->yaw_rad = yaw_rad;
    packet->attitude_qx = attitude_qx;
    packet->attitude_qy = attitude_qy;
    packet->attitude_qz = attitude_qz;
    packet->attitude_qw = attitude_qw;
    packet->angular_velocity_x_radps = angular_velocity_x_radps;
    packet->angular_velocity_y_radps = angular_velocity_y_radps;
    packet->angular_velocity_z_radps = angular_velocity_z_radps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_ATTITUDE UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_attitude message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_attitude_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field roll_rad from hk_drone_attitude message
 *
 * @return  MC 视图 body→world 滚转（rad），范围 -π~+π
 */
static inline float mavlink_msg_hk_drone_attitude_get_roll_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch_rad from hk_drone_attitude message
 *
 * @return  MC 视图 body→world 俯仰（rad），范围 -π/2~+π/2
 */
static inline float mavlink_msg_hk_drone_attitude_get_pitch_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw_rad from hk_drone_attitude message
 *
 * @return  MC 视图 body→world 偏航（rad），范围 -π~+π
 */
static inline float mavlink_msg_hk_drone_attitude_get_yaw_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field attitude_qx from hk_drone_attitude message
 *
 * @return  body→world 四元数 x 分量（XYZW 顺序，Hamilton 约定，NED）
 */
static inline float mavlink_msg_hk_drone_attitude_get_attitude_qx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field attitude_qy from hk_drone_attitude message
 *
 * @return  body→world 四元数 y 分量
 */
static inline float mavlink_msg_hk_drone_attitude_get_attitude_qy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field attitude_qz from hk_drone_attitude message
 *
 * @return  body→world 四元数 z 分量
 */
static inline float mavlink_msg_hk_drone_attitude_get_attitude_qz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field attitude_qw from hk_drone_attitude message
 *
 * @return  body→world 四元数 w 分量
 */
static inline float mavlink_msg_hk_drone_attitude_get_attitude_qw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field angular_velocity_x_radps from hk_drone_attitude message
 *
 * @return  机体滚转角速度（rad/s）
 */
static inline float mavlink_msg_hk_drone_attitude_get_angular_velocity_x_radps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field angular_velocity_y_radps from hk_drone_attitude message
 *
 * @return  机体俯仰角速度（rad/s）
 */
static inline float mavlink_msg_hk_drone_attitude_get_angular_velocity_y_radps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field angular_velocity_z_radps from hk_drone_attitude message
 *
 * @return  机体偏航角速度（rad/s）
 */
static inline float mavlink_msg_hk_drone_attitude_get_angular_velocity_z_radps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a hk_drone_attitude message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_attitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_attitude_decode(const mavlink_message_t* msg, mavlink_hk_drone_attitude_t* hk_drone_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_attitude->timestamp_ms = mavlink_msg_hk_drone_attitude_get_timestamp_ms(msg);
    hk_drone_attitude->roll_rad = mavlink_msg_hk_drone_attitude_get_roll_rad(msg);
    hk_drone_attitude->pitch_rad = mavlink_msg_hk_drone_attitude_get_pitch_rad(msg);
    hk_drone_attitude->yaw_rad = mavlink_msg_hk_drone_attitude_get_yaw_rad(msg);
    hk_drone_attitude->attitude_qx = mavlink_msg_hk_drone_attitude_get_attitude_qx(msg);
    hk_drone_attitude->attitude_qy = mavlink_msg_hk_drone_attitude_get_attitude_qy(msg);
    hk_drone_attitude->attitude_qz = mavlink_msg_hk_drone_attitude_get_attitude_qz(msg);
    hk_drone_attitude->attitude_qw = mavlink_msg_hk_drone_attitude_get_attitude_qw(msg);
    hk_drone_attitude->angular_velocity_x_radps = mavlink_msg_hk_drone_attitude_get_angular_velocity_x_radps(msg);
    hk_drone_attitude->angular_velocity_y_radps = mavlink_msg_hk_drone_attitude_get_angular_velocity_y_radps(msg);
    hk_drone_attitude->angular_velocity_z_radps = mavlink_msg_hk_drone_attitude_get_angular_velocity_z_radps(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN;
        memset(hk_drone_attitude, 0, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_LEN);
    memcpy(hk_drone_attitude, _MAV_PAYLOAD(msg), len);
#endif
}
