#pragma once
// MESSAGE HK_DRONE_VELOCITY PACKING

#define MAVLINK_MSG_ID_HK_DRONE_VELOCITY 50101


typedef struct __mavlink_hk_drone_velocity_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 float velocity_x_mps; /*<  NED 北向速度（m/s，北为正）*/
 float velocity_y_mps; /*<  NED 东向速度（m/s，东为正）*/
 float velocity_z_mps; /*<  NED 下向速度（m/s，下降为正）*/
 float horizontal_speed_mps; /*<  水平地速（m/s）*/
 float true_airspeed_mps; /*<  真空速（m/s）*/
 float acceleration_x_mps2; /*<  NED 北向加速度（m/s²）*/
 float acceleration_y_mps2; /*<  NED 东向加速度（m/s²）*/
 float acceleration_z_mps2; /*<  NED 下向加速度（m/s²，下降加速为正）*/
 float fc_local_vx_mps; /*<  本地北向速度（m/s）*/
 float fc_local_vy_mps; /*<  本地东向速度（m/s）*/
 float fc_local_vz_mps; /*<  本地下向速度（m/s）*/
} mavlink_hk_drone_velocity_t;

#define MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN 52
#define MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN 52
#define MAVLINK_MSG_ID_50101_LEN 52
#define MAVLINK_MSG_ID_50101_MIN_LEN 52

#define MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC 75
#define MAVLINK_MSG_ID_50101_CRC 75



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_VELOCITY { \
    50101, \
    "HK_DRONE_VELOCITY", \
    12, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_velocity_t, timestamp_ms) }, \
         { "velocity_x_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_velocity_t, velocity_x_mps) }, \
         { "velocity_y_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_velocity_t, velocity_y_mps) }, \
         { "velocity_z_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_velocity_t, velocity_z_mps) }, \
         { "horizontal_speed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_drone_velocity_t, horizontal_speed_mps) }, \
         { "true_airspeed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_drone_velocity_t, true_airspeed_mps) }, \
         { "acceleration_x_mps2", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_hk_drone_velocity_t, acceleration_x_mps2) }, \
         { "acceleration_y_mps2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_velocity_t, acceleration_y_mps2) }, \
         { "acceleration_z_mps2", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_velocity_t, acceleration_z_mps2) }, \
         { "fc_local_vx_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_velocity_t, fc_local_vx_mps) }, \
         { "fc_local_vy_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_velocity_t, fc_local_vy_mps) }, \
         { "fc_local_vz_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_hk_drone_velocity_t, fc_local_vz_mps) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_VELOCITY { \
    "HK_DRONE_VELOCITY", \
    12, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_velocity_t, timestamp_ms) }, \
         { "velocity_x_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_velocity_t, velocity_x_mps) }, \
         { "velocity_y_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_velocity_t, velocity_y_mps) }, \
         { "velocity_z_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_velocity_t, velocity_z_mps) }, \
         { "horizontal_speed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_drone_velocity_t, horizontal_speed_mps) }, \
         { "true_airspeed_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_drone_velocity_t, true_airspeed_mps) }, \
         { "acceleration_x_mps2", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_hk_drone_velocity_t, acceleration_x_mps2) }, \
         { "acceleration_y_mps2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_velocity_t, acceleration_y_mps2) }, \
         { "acceleration_z_mps2", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_velocity_t, acceleration_z_mps2) }, \
         { "fc_local_vx_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_velocity_t, fc_local_vx_mps) }, \
         { "fc_local_vy_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_velocity_t, fc_local_vy_mps) }, \
         { "fc_local_vz_mps", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_hk_drone_velocity_t, fc_local_vz_mps) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_velocity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param velocity_x_mps  NED 北向速度（m/s，北为正）
 * @param velocity_y_mps  NED 东向速度（m/s，东为正）
 * @param velocity_z_mps  NED 下向速度（m/s，下降为正）
 * @param horizontal_speed_mps  水平地速（m/s）
 * @param true_airspeed_mps  真空速（m/s）
 * @param acceleration_x_mps2  NED 北向加速度（m/s²）
 * @param acceleration_y_mps2  NED 东向加速度（m/s²）
 * @param acceleration_z_mps2  NED 下向加速度（m/s²，下降加速为正）
 * @param fc_local_vx_mps  本地北向速度（m/s）
 * @param fc_local_vy_mps  本地东向速度（m/s）
 * @param fc_local_vz_mps  本地下向速度（m/s）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_velocity_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float velocity_x_mps, float velocity_y_mps, float velocity_z_mps, float horizontal_speed_mps, float true_airspeed_mps, float acceleration_x_mps2, float acceleration_y_mps2, float acceleration_z_mps2, float fc_local_vx_mps, float fc_local_vy_mps, float fc_local_vz_mps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, velocity_x_mps);
    _mav_put_float(buf, 12, velocity_y_mps);
    _mav_put_float(buf, 16, velocity_z_mps);
    _mav_put_float(buf, 20, horizontal_speed_mps);
    _mav_put_float(buf, 24, true_airspeed_mps);
    _mav_put_float(buf, 28, acceleration_x_mps2);
    _mav_put_float(buf, 32, acceleration_y_mps2);
    _mav_put_float(buf, 36, acceleration_z_mps2);
    _mav_put_float(buf, 40, fc_local_vx_mps);
    _mav_put_float(buf, 44, fc_local_vy_mps);
    _mav_put_float(buf, 48, fc_local_vz_mps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#else
    mavlink_hk_drone_velocity_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.velocity_x_mps = velocity_x_mps;
    packet.velocity_y_mps = velocity_y_mps;
    packet.velocity_z_mps = velocity_z_mps;
    packet.horizontal_speed_mps = horizontal_speed_mps;
    packet.true_airspeed_mps = true_airspeed_mps;
    packet.acceleration_x_mps2 = acceleration_x_mps2;
    packet.acceleration_y_mps2 = acceleration_y_mps2;
    packet.acceleration_z_mps2 = acceleration_z_mps2;
    packet.fc_local_vx_mps = fc_local_vx_mps;
    packet.fc_local_vy_mps = fc_local_vy_mps;
    packet.fc_local_vz_mps = fc_local_vz_mps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_VELOCITY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
}

/**
 * @brief Pack a hk_drone_velocity message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param velocity_x_mps  NED 北向速度（m/s，北为正）
 * @param velocity_y_mps  NED 东向速度（m/s，东为正）
 * @param velocity_z_mps  NED 下向速度（m/s，下降为正）
 * @param horizontal_speed_mps  水平地速（m/s）
 * @param true_airspeed_mps  真空速（m/s）
 * @param acceleration_x_mps2  NED 北向加速度（m/s²）
 * @param acceleration_y_mps2  NED 东向加速度（m/s²）
 * @param acceleration_z_mps2  NED 下向加速度（m/s²，下降加速为正）
 * @param fc_local_vx_mps  本地北向速度（m/s）
 * @param fc_local_vy_mps  本地东向速度（m/s）
 * @param fc_local_vz_mps  本地下向速度（m/s）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_velocity_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float velocity_x_mps, float velocity_y_mps, float velocity_z_mps, float horizontal_speed_mps, float true_airspeed_mps, float acceleration_x_mps2, float acceleration_y_mps2, float acceleration_z_mps2, float fc_local_vx_mps, float fc_local_vy_mps, float fc_local_vz_mps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, velocity_x_mps);
    _mav_put_float(buf, 12, velocity_y_mps);
    _mav_put_float(buf, 16, velocity_z_mps);
    _mav_put_float(buf, 20, horizontal_speed_mps);
    _mav_put_float(buf, 24, true_airspeed_mps);
    _mav_put_float(buf, 28, acceleration_x_mps2);
    _mav_put_float(buf, 32, acceleration_y_mps2);
    _mav_put_float(buf, 36, acceleration_z_mps2);
    _mav_put_float(buf, 40, fc_local_vx_mps);
    _mav_put_float(buf, 44, fc_local_vy_mps);
    _mav_put_float(buf, 48, fc_local_vz_mps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#else
    mavlink_hk_drone_velocity_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.velocity_x_mps = velocity_x_mps;
    packet.velocity_y_mps = velocity_y_mps;
    packet.velocity_z_mps = velocity_z_mps;
    packet.horizontal_speed_mps = horizontal_speed_mps;
    packet.true_airspeed_mps = true_airspeed_mps;
    packet.acceleration_x_mps2 = acceleration_x_mps2;
    packet.acceleration_y_mps2 = acceleration_y_mps2;
    packet.acceleration_z_mps2 = acceleration_z_mps2;
    packet.fc_local_vx_mps = fc_local_vx_mps;
    packet.fc_local_vy_mps = fc_local_vy_mps;
    packet.fc_local_vz_mps = fc_local_vz_mps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_VELOCITY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_velocity message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param velocity_x_mps  NED 北向速度（m/s，北为正）
 * @param velocity_y_mps  NED 东向速度（m/s，东为正）
 * @param velocity_z_mps  NED 下向速度（m/s，下降为正）
 * @param horizontal_speed_mps  水平地速（m/s）
 * @param true_airspeed_mps  真空速（m/s）
 * @param acceleration_x_mps2  NED 北向加速度（m/s²）
 * @param acceleration_y_mps2  NED 东向加速度（m/s²）
 * @param acceleration_z_mps2  NED 下向加速度（m/s²，下降加速为正）
 * @param fc_local_vx_mps  本地北向速度（m/s）
 * @param fc_local_vy_mps  本地东向速度（m/s）
 * @param fc_local_vz_mps  本地下向速度（m/s）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_velocity_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,float velocity_x_mps,float velocity_y_mps,float velocity_z_mps,float horizontal_speed_mps,float true_airspeed_mps,float acceleration_x_mps2,float acceleration_y_mps2,float acceleration_z_mps2,float fc_local_vx_mps,float fc_local_vy_mps,float fc_local_vz_mps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, velocity_x_mps);
    _mav_put_float(buf, 12, velocity_y_mps);
    _mav_put_float(buf, 16, velocity_z_mps);
    _mav_put_float(buf, 20, horizontal_speed_mps);
    _mav_put_float(buf, 24, true_airspeed_mps);
    _mav_put_float(buf, 28, acceleration_x_mps2);
    _mav_put_float(buf, 32, acceleration_y_mps2);
    _mav_put_float(buf, 36, acceleration_z_mps2);
    _mav_put_float(buf, 40, fc_local_vx_mps);
    _mav_put_float(buf, 44, fc_local_vy_mps);
    _mav_put_float(buf, 48, fc_local_vz_mps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#else
    mavlink_hk_drone_velocity_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.velocity_x_mps = velocity_x_mps;
    packet.velocity_y_mps = velocity_y_mps;
    packet.velocity_z_mps = velocity_z_mps;
    packet.horizontal_speed_mps = horizontal_speed_mps;
    packet.true_airspeed_mps = true_airspeed_mps;
    packet.acceleration_x_mps2 = acceleration_x_mps2;
    packet.acceleration_y_mps2 = acceleration_y_mps2;
    packet.acceleration_z_mps2 = acceleration_z_mps2;
    packet.fc_local_vx_mps = fc_local_vx_mps;
    packet.fc_local_vy_mps = fc_local_vy_mps;
    packet.fc_local_vz_mps = fc_local_vz_mps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_VELOCITY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
}

/**
 * @brief Encode a hk_drone_velocity struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_velocity_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_velocity_t* hk_drone_velocity)
{
    return mavlink_msg_hk_drone_velocity_pack(system_id, component_id, msg, hk_drone_velocity->timestamp_ms, hk_drone_velocity->velocity_x_mps, hk_drone_velocity->velocity_y_mps, hk_drone_velocity->velocity_z_mps, hk_drone_velocity->horizontal_speed_mps, hk_drone_velocity->true_airspeed_mps, hk_drone_velocity->acceleration_x_mps2, hk_drone_velocity->acceleration_y_mps2, hk_drone_velocity->acceleration_z_mps2, hk_drone_velocity->fc_local_vx_mps, hk_drone_velocity->fc_local_vy_mps, hk_drone_velocity->fc_local_vz_mps);
}

/**
 * @brief Encode a hk_drone_velocity struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_velocity_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_velocity_t* hk_drone_velocity)
{
    return mavlink_msg_hk_drone_velocity_pack_chan(system_id, component_id, chan, msg, hk_drone_velocity->timestamp_ms, hk_drone_velocity->velocity_x_mps, hk_drone_velocity->velocity_y_mps, hk_drone_velocity->velocity_z_mps, hk_drone_velocity->horizontal_speed_mps, hk_drone_velocity->true_airspeed_mps, hk_drone_velocity->acceleration_x_mps2, hk_drone_velocity->acceleration_y_mps2, hk_drone_velocity->acceleration_z_mps2, hk_drone_velocity->fc_local_vx_mps, hk_drone_velocity->fc_local_vy_mps, hk_drone_velocity->fc_local_vz_mps);
}

/**
 * @brief Encode a hk_drone_velocity struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_velocity C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_velocity_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_velocity_t* hk_drone_velocity)
{
    return mavlink_msg_hk_drone_velocity_pack_status(system_id, component_id, _status, msg,  hk_drone_velocity->timestamp_ms, hk_drone_velocity->velocity_x_mps, hk_drone_velocity->velocity_y_mps, hk_drone_velocity->velocity_z_mps, hk_drone_velocity->horizontal_speed_mps, hk_drone_velocity->true_airspeed_mps, hk_drone_velocity->acceleration_x_mps2, hk_drone_velocity->acceleration_y_mps2, hk_drone_velocity->acceleration_z_mps2, hk_drone_velocity->fc_local_vx_mps, hk_drone_velocity->fc_local_vy_mps, hk_drone_velocity->fc_local_vz_mps);
}

/**
 * @brief Send a hk_drone_velocity message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param velocity_x_mps  NED 北向速度（m/s，北为正）
 * @param velocity_y_mps  NED 东向速度（m/s，东为正）
 * @param velocity_z_mps  NED 下向速度（m/s，下降为正）
 * @param horizontal_speed_mps  水平地速（m/s）
 * @param true_airspeed_mps  真空速（m/s）
 * @param acceleration_x_mps2  NED 北向加速度（m/s²）
 * @param acceleration_y_mps2  NED 东向加速度（m/s²）
 * @param acceleration_z_mps2  NED 下向加速度（m/s²，下降加速为正）
 * @param fc_local_vx_mps  本地北向速度（m/s）
 * @param fc_local_vy_mps  本地东向速度（m/s）
 * @param fc_local_vz_mps  本地下向速度（m/s）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_velocity_send(mavlink_channel_t chan, uint64_t timestamp_ms, float velocity_x_mps, float velocity_y_mps, float velocity_z_mps, float horizontal_speed_mps, float true_airspeed_mps, float acceleration_x_mps2, float acceleration_y_mps2, float acceleration_z_mps2, float fc_local_vx_mps, float fc_local_vy_mps, float fc_local_vz_mps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, velocity_x_mps);
    _mav_put_float(buf, 12, velocity_y_mps);
    _mav_put_float(buf, 16, velocity_z_mps);
    _mav_put_float(buf, 20, horizontal_speed_mps);
    _mav_put_float(buf, 24, true_airspeed_mps);
    _mav_put_float(buf, 28, acceleration_x_mps2);
    _mav_put_float(buf, 32, acceleration_y_mps2);
    _mav_put_float(buf, 36, acceleration_z_mps2);
    _mav_put_float(buf, 40, fc_local_vx_mps);
    _mav_put_float(buf, 44, fc_local_vy_mps);
    _mav_put_float(buf, 48, fc_local_vz_mps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_VELOCITY, buf, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
#else
    mavlink_hk_drone_velocity_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.velocity_x_mps = velocity_x_mps;
    packet.velocity_y_mps = velocity_y_mps;
    packet.velocity_z_mps = velocity_z_mps;
    packet.horizontal_speed_mps = horizontal_speed_mps;
    packet.true_airspeed_mps = true_airspeed_mps;
    packet.acceleration_x_mps2 = acceleration_x_mps2;
    packet.acceleration_y_mps2 = acceleration_y_mps2;
    packet.acceleration_z_mps2 = acceleration_z_mps2;
    packet.fc_local_vx_mps = fc_local_vx_mps;
    packet.fc_local_vy_mps = fc_local_vy_mps;
    packet.fc_local_vz_mps = fc_local_vz_mps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_VELOCITY, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
#endif
}

/**
 * @brief Send a hk_drone_velocity message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_velocity_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_velocity_t* hk_drone_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_velocity_send(chan, hk_drone_velocity->timestamp_ms, hk_drone_velocity->velocity_x_mps, hk_drone_velocity->velocity_y_mps, hk_drone_velocity->velocity_z_mps, hk_drone_velocity->horizontal_speed_mps, hk_drone_velocity->true_airspeed_mps, hk_drone_velocity->acceleration_x_mps2, hk_drone_velocity->acceleration_y_mps2, hk_drone_velocity->acceleration_z_mps2, hk_drone_velocity->fc_local_vx_mps, hk_drone_velocity->fc_local_vy_mps, hk_drone_velocity->fc_local_vz_mps);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_VELOCITY, (const char *)hk_drone_velocity, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_velocity_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, float velocity_x_mps, float velocity_y_mps, float velocity_z_mps, float horizontal_speed_mps, float true_airspeed_mps, float acceleration_x_mps2, float acceleration_y_mps2, float acceleration_z_mps2, float fc_local_vx_mps, float fc_local_vy_mps, float fc_local_vz_mps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, velocity_x_mps);
    _mav_put_float(buf, 12, velocity_y_mps);
    _mav_put_float(buf, 16, velocity_z_mps);
    _mav_put_float(buf, 20, horizontal_speed_mps);
    _mav_put_float(buf, 24, true_airspeed_mps);
    _mav_put_float(buf, 28, acceleration_x_mps2);
    _mav_put_float(buf, 32, acceleration_y_mps2);
    _mav_put_float(buf, 36, acceleration_z_mps2);
    _mav_put_float(buf, 40, fc_local_vx_mps);
    _mav_put_float(buf, 44, fc_local_vy_mps);
    _mav_put_float(buf, 48, fc_local_vz_mps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_VELOCITY, buf, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
#else
    mavlink_hk_drone_velocity_t *packet = (mavlink_hk_drone_velocity_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->velocity_x_mps = velocity_x_mps;
    packet->velocity_y_mps = velocity_y_mps;
    packet->velocity_z_mps = velocity_z_mps;
    packet->horizontal_speed_mps = horizontal_speed_mps;
    packet->true_airspeed_mps = true_airspeed_mps;
    packet->acceleration_x_mps2 = acceleration_x_mps2;
    packet->acceleration_y_mps2 = acceleration_y_mps2;
    packet->acceleration_z_mps2 = acceleration_z_mps2;
    packet->fc_local_vx_mps = fc_local_vx_mps;
    packet->fc_local_vy_mps = fc_local_vy_mps;
    packet->fc_local_vz_mps = fc_local_vz_mps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_VELOCITY, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_VELOCITY UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_velocity message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_velocity_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field velocity_x_mps from hk_drone_velocity message
 *
 * @return  NED 北向速度（m/s，北为正）
 */
static inline float mavlink_msg_hk_drone_velocity_get_velocity_x_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field velocity_y_mps from hk_drone_velocity message
 *
 * @return  NED 东向速度（m/s，东为正）
 */
static inline float mavlink_msg_hk_drone_velocity_get_velocity_y_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field velocity_z_mps from hk_drone_velocity message
 *
 * @return  NED 下向速度（m/s，下降为正）
 */
static inline float mavlink_msg_hk_drone_velocity_get_velocity_z_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field horizontal_speed_mps from hk_drone_velocity message
 *
 * @return  水平地速（m/s）
 */
static inline float mavlink_msg_hk_drone_velocity_get_horizontal_speed_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field true_airspeed_mps from hk_drone_velocity message
 *
 * @return  真空速（m/s）
 */
static inline float mavlink_msg_hk_drone_velocity_get_true_airspeed_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field acceleration_x_mps2 from hk_drone_velocity message
 *
 * @return  NED 北向加速度（m/s²）
 */
static inline float mavlink_msg_hk_drone_velocity_get_acceleration_x_mps2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field acceleration_y_mps2 from hk_drone_velocity message
 *
 * @return  NED 东向加速度（m/s²）
 */
static inline float mavlink_msg_hk_drone_velocity_get_acceleration_y_mps2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field acceleration_z_mps2 from hk_drone_velocity message
 *
 * @return  NED 下向加速度（m/s²，下降加速为正）
 */
static inline float mavlink_msg_hk_drone_velocity_get_acceleration_z_mps2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field fc_local_vx_mps from hk_drone_velocity message
 *
 * @return  本地北向速度（m/s）
 */
static inline float mavlink_msg_hk_drone_velocity_get_fc_local_vx_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field fc_local_vy_mps from hk_drone_velocity message
 *
 * @return  本地东向速度（m/s）
 */
static inline float mavlink_msg_hk_drone_velocity_get_fc_local_vy_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field fc_local_vz_mps from hk_drone_velocity message
 *
 * @return  本地下向速度（m/s）
 */
static inline float mavlink_msg_hk_drone_velocity_get_fc_local_vz_mps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Decode a hk_drone_velocity message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_velocity C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_velocity_decode(const mavlink_message_t* msg, mavlink_hk_drone_velocity_t* hk_drone_velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_velocity->timestamp_ms = mavlink_msg_hk_drone_velocity_get_timestamp_ms(msg);
    hk_drone_velocity->velocity_x_mps = mavlink_msg_hk_drone_velocity_get_velocity_x_mps(msg);
    hk_drone_velocity->velocity_y_mps = mavlink_msg_hk_drone_velocity_get_velocity_y_mps(msg);
    hk_drone_velocity->velocity_z_mps = mavlink_msg_hk_drone_velocity_get_velocity_z_mps(msg);
    hk_drone_velocity->horizontal_speed_mps = mavlink_msg_hk_drone_velocity_get_horizontal_speed_mps(msg);
    hk_drone_velocity->true_airspeed_mps = mavlink_msg_hk_drone_velocity_get_true_airspeed_mps(msg);
    hk_drone_velocity->acceleration_x_mps2 = mavlink_msg_hk_drone_velocity_get_acceleration_x_mps2(msg);
    hk_drone_velocity->acceleration_y_mps2 = mavlink_msg_hk_drone_velocity_get_acceleration_y_mps2(msg);
    hk_drone_velocity->acceleration_z_mps2 = mavlink_msg_hk_drone_velocity_get_acceleration_z_mps2(msg);
    hk_drone_velocity->fc_local_vx_mps = mavlink_msg_hk_drone_velocity_get_fc_local_vx_mps(msg);
    hk_drone_velocity->fc_local_vy_mps = mavlink_msg_hk_drone_velocity_get_fc_local_vy_mps(msg);
    hk_drone_velocity->fc_local_vz_mps = mavlink_msg_hk_drone_velocity_get_fc_local_vz_mps(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN;
        memset(hk_drone_velocity, 0, MAVLINK_MSG_ID_HK_DRONE_VELOCITY_LEN);
    memcpy(hk_drone_velocity, _MAV_PAYLOAD(msg), len);
#endif
}
