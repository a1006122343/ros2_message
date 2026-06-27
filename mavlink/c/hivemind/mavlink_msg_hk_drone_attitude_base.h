#pragma once
// MESSAGE HK_DRONE_ATTITUDE_BASE PACKING

#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE 50103


typedef struct __mavlink_hk_drone_attitude_base_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 float fw_roll_rad; /*<  FW 视图滚转（rad）*/
 float fw_pitch_rad; /*<  FW 视图俯仰（rad）*/
 float fw_yaw_rad; /*<  FW 视图偏航（rad）*/
 float camera_roll_rad; /*<  相机滚转（rad）*/
 float camera_pitch_rad; /*<  相机俯仰（rad）*/
 float camera_yaw_rad; /*<  相机偏航（rad）*/
 float angle_of_attack_rad; /*<  攻角（rad）= velocity_pitch_angle_rad - pitch_rad*/
 float sideslip_angle_rad; /*<  侧滑角（rad）= velocity_yaw_angle_rad - yaw_rad*/
 float velocity_yaw_angle_rad; /*<  世界系速度向量方向偏航角（rad，NED）*/
 float velocity_pitch_angle_rad; /*<  世界系速度向量方向俯仰角（rad，NED）*/
} mavlink_hk_drone_attitude_base_t;

#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN 48
#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN 48
#define MAVLINK_MSG_ID_50103_LEN 48
#define MAVLINK_MSG_ID_50103_MIN_LEN 48

#define MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC 215
#define MAVLINK_MSG_ID_50103_CRC 215



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_ATTITUDE_BASE { \
    50103, \
    "HK_DRONE_ATTITUDE_BASE", \
    11, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_attitude_base_t, timestamp_ms) }, \
         { "fw_roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_attitude_base_t, fw_roll_rad) }, \
         { "fw_pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_attitude_base_t, fw_pitch_rad) }, \
         { "fw_yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_attitude_base_t, fw_yaw_rad) }, \
         { "camera_roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_drone_attitude_base_t, camera_roll_rad) }, \
         { "camera_pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_drone_attitude_base_t, camera_pitch_rad) }, \
         { "camera_yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_hk_drone_attitude_base_t, camera_yaw_rad) }, \
         { "angle_of_attack_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_attitude_base_t, angle_of_attack_rad) }, \
         { "sideslip_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_attitude_base_t, sideslip_angle_rad) }, \
         { "velocity_yaw_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_attitude_base_t, velocity_yaw_angle_rad) }, \
         { "velocity_pitch_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_attitude_base_t, velocity_pitch_angle_rad) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_ATTITUDE_BASE { \
    "HK_DRONE_ATTITUDE_BASE", \
    11, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_attitude_base_t, timestamp_ms) }, \
         { "fw_roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_drone_attitude_base_t, fw_roll_rad) }, \
         { "fw_pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_drone_attitude_base_t, fw_pitch_rad) }, \
         { "fw_yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_drone_attitude_base_t, fw_yaw_rad) }, \
         { "camera_roll_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_drone_attitude_base_t, camera_roll_rad) }, \
         { "camera_pitch_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_drone_attitude_base_t, camera_pitch_rad) }, \
         { "camera_yaw_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_hk_drone_attitude_base_t, camera_yaw_rad) }, \
         { "angle_of_attack_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_hk_drone_attitude_base_t, angle_of_attack_rad) }, \
         { "sideslip_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_hk_drone_attitude_base_t, sideslip_angle_rad) }, \
         { "velocity_yaw_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_hk_drone_attitude_base_t, velocity_yaw_angle_rad) }, \
         { "velocity_pitch_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_hk_drone_attitude_base_t, velocity_pitch_angle_rad) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_attitude_base message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fw_roll_rad  FW 视图滚转（rad）
 * @param fw_pitch_rad  FW 视图俯仰（rad）
 * @param fw_yaw_rad  FW 视图偏航（rad）
 * @param camera_roll_rad  相机滚转（rad）
 * @param camera_pitch_rad  相机俯仰（rad）
 * @param camera_yaw_rad  相机偏航（rad）
 * @param angle_of_attack_rad  攻角（rad）= velocity_pitch_angle_rad - pitch_rad
 * @param sideslip_angle_rad  侧滑角（rad）= velocity_yaw_angle_rad - yaw_rad
 * @param velocity_yaw_angle_rad  世界系速度向量方向偏航角（rad，NED）
 * @param velocity_pitch_angle_rad  世界系速度向量方向俯仰角（rad，NED）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_base_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float fw_roll_rad, float fw_pitch_rad, float fw_yaw_rad, float camera_roll_rad, float camera_pitch_rad, float camera_yaw_rad, float angle_of_attack_rad, float sideslip_angle_rad, float velocity_yaw_angle_rad, float velocity_pitch_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, fw_roll_rad);
    _mav_put_float(buf, 12, fw_pitch_rad);
    _mav_put_float(buf, 16, fw_yaw_rad);
    _mav_put_float(buf, 20, camera_roll_rad);
    _mav_put_float(buf, 24, camera_pitch_rad);
    _mav_put_float(buf, 28, camera_yaw_rad);
    _mav_put_float(buf, 32, angle_of_attack_rad);
    _mav_put_float(buf, 36, sideslip_angle_rad);
    _mav_put_float(buf, 40, velocity_yaw_angle_rad);
    _mav_put_float(buf, 44, velocity_pitch_angle_rad);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#else
    mavlink_hk_drone_attitude_base_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fw_roll_rad = fw_roll_rad;
    packet.fw_pitch_rad = fw_pitch_rad;
    packet.fw_yaw_rad = fw_yaw_rad;
    packet.camera_roll_rad = camera_roll_rad;
    packet.camera_pitch_rad = camera_pitch_rad;
    packet.camera_yaw_rad = camera_yaw_rad;
    packet.angle_of_attack_rad = angle_of_attack_rad;
    packet.sideslip_angle_rad = sideslip_angle_rad;
    packet.velocity_yaw_angle_rad = velocity_yaw_angle_rad;
    packet.velocity_pitch_angle_rad = velocity_pitch_angle_rad;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
}

/**
 * @brief Pack a hk_drone_attitude_base message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fw_roll_rad  FW 视图滚转（rad）
 * @param fw_pitch_rad  FW 视图俯仰（rad）
 * @param fw_yaw_rad  FW 视图偏航（rad）
 * @param camera_roll_rad  相机滚转（rad）
 * @param camera_pitch_rad  相机俯仰（rad）
 * @param camera_yaw_rad  相机偏航（rad）
 * @param angle_of_attack_rad  攻角（rad）= velocity_pitch_angle_rad - pitch_rad
 * @param sideslip_angle_rad  侧滑角（rad）= velocity_yaw_angle_rad - yaw_rad
 * @param velocity_yaw_angle_rad  世界系速度向量方向偏航角（rad，NED）
 * @param velocity_pitch_angle_rad  世界系速度向量方向俯仰角（rad，NED）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_base_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, float fw_roll_rad, float fw_pitch_rad, float fw_yaw_rad, float camera_roll_rad, float camera_pitch_rad, float camera_yaw_rad, float angle_of_attack_rad, float sideslip_angle_rad, float velocity_yaw_angle_rad, float velocity_pitch_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, fw_roll_rad);
    _mav_put_float(buf, 12, fw_pitch_rad);
    _mav_put_float(buf, 16, fw_yaw_rad);
    _mav_put_float(buf, 20, camera_roll_rad);
    _mav_put_float(buf, 24, camera_pitch_rad);
    _mav_put_float(buf, 28, camera_yaw_rad);
    _mav_put_float(buf, 32, angle_of_attack_rad);
    _mav_put_float(buf, 36, sideslip_angle_rad);
    _mav_put_float(buf, 40, velocity_yaw_angle_rad);
    _mav_put_float(buf, 44, velocity_pitch_angle_rad);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#else
    mavlink_hk_drone_attitude_base_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fw_roll_rad = fw_roll_rad;
    packet.fw_pitch_rad = fw_pitch_rad;
    packet.fw_yaw_rad = fw_yaw_rad;
    packet.camera_roll_rad = camera_roll_rad;
    packet.camera_pitch_rad = camera_pitch_rad;
    packet.camera_yaw_rad = camera_yaw_rad;
    packet.angle_of_attack_rad = angle_of_attack_rad;
    packet.sideslip_angle_rad = sideslip_angle_rad;
    packet.velocity_yaw_angle_rad = velocity_yaw_angle_rad;
    packet.velocity_pitch_angle_rad = velocity_pitch_angle_rad;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_attitude_base message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fw_roll_rad  FW 视图滚转（rad）
 * @param fw_pitch_rad  FW 视图俯仰（rad）
 * @param fw_yaw_rad  FW 视图偏航（rad）
 * @param camera_roll_rad  相机滚转（rad）
 * @param camera_pitch_rad  相机俯仰（rad）
 * @param camera_yaw_rad  相机偏航（rad）
 * @param angle_of_attack_rad  攻角（rad）= velocity_pitch_angle_rad - pitch_rad
 * @param sideslip_angle_rad  侧滑角（rad）= velocity_yaw_angle_rad - yaw_rad
 * @param velocity_yaw_angle_rad  世界系速度向量方向偏航角（rad，NED）
 * @param velocity_pitch_angle_rad  世界系速度向量方向俯仰角（rad，NED）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_base_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,float fw_roll_rad,float fw_pitch_rad,float fw_yaw_rad,float camera_roll_rad,float camera_pitch_rad,float camera_yaw_rad,float angle_of_attack_rad,float sideslip_angle_rad,float velocity_yaw_angle_rad,float velocity_pitch_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, fw_roll_rad);
    _mav_put_float(buf, 12, fw_pitch_rad);
    _mav_put_float(buf, 16, fw_yaw_rad);
    _mav_put_float(buf, 20, camera_roll_rad);
    _mav_put_float(buf, 24, camera_pitch_rad);
    _mav_put_float(buf, 28, camera_yaw_rad);
    _mav_put_float(buf, 32, angle_of_attack_rad);
    _mav_put_float(buf, 36, sideslip_angle_rad);
    _mav_put_float(buf, 40, velocity_yaw_angle_rad);
    _mav_put_float(buf, 44, velocity_pitch_angle_rad);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#else
    mavlink_hk_drone_attitude_base_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fw_roll_rad = fw_roll_rad;
    packet.fw_pitch_rad = fw_pitch_rad;
    packet.fw_yaw_rad = fw_yaw_rad;
    packet.camera_roll_rad = camera_roll_rad;
    packet.camera_pitch_rad = camera_pitch_rad;
    packet.camera_yaw_rad = camera_yaw_rad;
    packet.angle_of_attack_rad = angle_of_attack_rad;
    packet.sideslip_angle_rad = sideslip_angle_rad;
    packet.velocity_yaw_angle_rad = velocity_yaw_angle_rad;
    packet.velocity_pitch_angle_rad = velocity_pitch_angle_rad;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
}

/**
 * @brief Encode a hk_drone_attitude_base struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_attitude_base C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_base_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_attitude_base_t* hk_drone_attitude_base)
{
    return mavlink_msg_hk_drone_attitude_base_pack(system_id, component_id, msg, hk_drone_attitude_base->timestamp_ms, hk_drone_attitude_base->fw_roll_rad, hk_drone_attitude_base->fw_pitch_rad, hk_drone_attitude_base->fw_yaw_rad, hk_drone_attitude_base->camera_roll_rad, hk_drone_attitude_base->camera_pitch_rad, hk_drone_attitude_base->camera_yaw_rad, hk_drone_attitude_base->angle_of_attack_rad, hk_drone_attitude_base->sideslip_angle_rad, hk_drone_attitude_base->velocity_yaw_angle_rad, hk_drone_attitude_base->velocity_pitch_angle_rad);
}

/**
 * @brief Encode a hk_drone_attitude_base struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_attitude_base C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_base_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_attitude_base_t* hk_drone_attitude_base)
{
    return mavlink_msg_hk_drone_attitude_base_pack_chan(system_id, component_id, chan, msg, hk_drone_attitude_base->timestamp_ms, hk_drone_attitude_base->fw_roll_rad, hk_drone_attitude_base->fw_pitch_rad, hk_drone_attitude_base->fw_yaw_rad, hk_drone_attitude_base->camera_roll_rad, hk_drone_attitude_base->camera_pitch_rad, hk_drone_attitude_base->camera_yaw_rad, hk_drone_attitude_base->angle_of_attack_rad, hk_drone_attitude_base->sideslip_angle_rad, hk_drone_attitude_base->velocity_yaw_angle_rad, hk_drone_attitude_base->velocity_pitch_angle_rad);
}

/**
 * @brief Encode a hk_drone_attitude_base struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_attitude_base C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_attitude_base_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_attitude_base_t* hk_drone_attitude_base)
{
    return mavlink_msg_hk_drone_attitude_base_pack_status(system_id, component_id, _status, msg,  hk_drone_attitude_base->timestamp_ms, hk_drone_attitude_base->fw_roll_rad, hk_drone_attitude_base->fw_pitch_rad, hk_drone_attitude_base->fw_yaw_rad, hk_drone_attitude_base->camera_roll_rad, hk_drone_attitude_base->camera_pitch_rad, hk_drone_attitude_base->camera_yaw_rad, hk_drone_attitude_base->angle_of_attack_rad, hk_drone_attitude_base->sideslip_angle_rad, hk_drone_attitude_base->velocity_yaw_angle_rad, hk_drone_attitude_base->velocity_pitch_angle_rad);
}

/**
 * @brief Send a hk_drone_attitude_base message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param fw_roll_rad  FW 视图滚转（rad）
 * @param fw_pitch_rad  FW 视图俯仰（rad）
 * @param fw_yaw_rad  FW 视图偏航（rad）
 * @param camera_roll_rad  相机滚转（rad）
 * @param camera_pitch_rad  相机俯仰（rad）
 * @param camera_yaw_rad  相机偏航（rad）
 * @param angle_of_attack_rad  攻角（rad）= velocity_pitch_angle_rad - pitch_rad
 * @param sideslip_angle_rad  侧滑角（rad）= velocity_yaw_angle_rad - yaw_rad
 * @param velocity_yaw_angle_rad  世界系速度向量方向偏航角（rad，NED）
 * @param velocity_pitch_angle_rad  世界系速度向量方向俯仰角（rad，NED）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_attitude_base_send(mavlink_channel_t chan, uint64_t timestamp_ms, float fw_roll_rad, float fw_pitch_rad, float fw_yaw_rad, float camera_roll_rad, float camera_pitch_rad, float camera_yaw_rad, float angle_of_attack_rad, float sideslip_angle_rad, float velocity_yaw_angle_rad, float velocity_pitch_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, fw_roll_rad);
    _mav_put_float(buf, 12, fw_pitch_rad);
    _mav_put_float(buf, 16, fw_yaw_rad);
    _mav_put_float(buf, 20, camera_roll_rad);
    _mav_put_float(buf, 24, camera_pitch_rad);
    _mav_put_float(buf, 28, camera_yaw_rad);
    _mav_put_float(buf, 32, angle_of_attack_rad);
    _mav_put_float(buf, 36, sideslip_angle_rad);
    _mav_put_float(buf, 40, velocity_yaw_angle_rad);
    _mav_put_float(buf, 44, velocity_pitch_angle_rad);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE, buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
#else
    mavlink_hk_drone_attitude_base_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.fw_roll_rad = fw_roll_rad;
    packet.fw_pitch_rad = fw_pitch_rad;
    packet.fw_yaw_rad = fw_yaw_rad;
    packet.camera_roll_rad = camera_roll_rad;
    packet.camera_pitch_rad = camera_pitch_rad;
    packet.camera_yaw_rad = camera_yaw_rad;
    packet.angle_of_attack_rad = angle_of_attack_rad;
    packet.sideslip_angle_rad = sideslip_angle_rad;
    packet.velocity_yaw_angle_rad = velocity_yaw_angle_rad;
    packet.velocity_pitch_angle_rad = velocity_pitch_angle_rad;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
#endif
}

/**
 * @brief Send a hk_drone_attitude_base message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_attitude_base_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_attitude_base_t* hk_drone_attitude_base)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_attitude_base_send(chan, hk_drone_attitude_base->timestamp_ms, hk_drone_attitude_base->fw_roll_rad, hk_drone_attitude_base->fw_pitch_rad, hk_drone_attitude_base->fw_yaw_rad, hk_drone_attitude_base->camera_roll_rad, hk_drone_attitude_base->camera_pitch_rad, hk_drone_attitude_base->camera_yaw_rad, hk_drone_attitude_base->angle_of_attack_rad, hk_drone_attitude_base->sideslip_angle_rad, hk_drone_attitude_base->velocity_yaw_angle_rad, hk_drone_attitude_base->velocity_pitch_angle_rad);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE, (const char *)hk_drone_attitude_base, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_attitude_base_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, float fw_roll_rad, float fw_pitch_rad, float fw_yaw_rad, float camera_roll_rad, float camera_pitch_rad, float camera_yaw_rad, float angle_of_attack_rad, float sideslip_angle_rad, float velocity_yaw_angle_rad, float velocity_pitch_angle_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, fw_roll_rad);
    _mav_put_float(buf, 12, fw_pitch_rad);
    _mav_put_float(buf, 16, fw_yaw_rad);
    _mav_put_float(buf, 20, camera_roll_rad);
    _mav_put_float(buf, 24, camera_pitch_rad);
    _mav_put_float(buf, 28, camera_yaw_rad);
    _mav_put_float(buf, 32, angle_of_attack_rad);
    _mav_put_float(buf, 36, sideslip_angle_rad);
    _mav_put_float(buf, 40, velocity_yaw_angle_rad);
    _mav_put_float(buf, 44, velocity_pitch_angle_rad);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE, buf, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
#else
    mavlink_hk_drone_attitude_base_t *packet = (mavlink_hk_drone_attitude_base_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->fw_roll_rad = fw_roll_rad;
    packet->fw_pitch_rad = fw_pitch_rad;
    packet->fw_yaw_rad = fw_yaw_rad;
    packet->camera_roll_rad = camera_roll_rad;
    packet->camera_pitch_rad = camera_pitch_rad;
    packet->camera_yaw_rad = camera_yaw_rad;
    packet->angle_of_attack_rad = angle_of_attack_rad;
    packet->sideslip_angle_rad = sideslip_angle_rad;
    packet->velocity_yaw_angle_rad = velocity_yaw_angle_rad;
    packet->velocity_pitch_angle_rad = velocity_pitch_angle_rad;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_ATTITUDE_BASE UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_attitude_base message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_attitude_base_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field fw_roll_rad from hk_drone_attitude_base message
 *
 * @return  FW 视图滚转（rad）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_fw_roll_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field fw_pitch_rad from hk_drone_attitude_base message
 *
 * @return  FW 视图俯仰（rad）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_fw_pitch_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field fw_yaw_rad from hk_drone_attitude_base message
 *
 * @return  FW 视图偏航（rad）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_fw_yaw_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field camera_roll_rad from hk_drone_attitude_base message
 *
 * @return  相机滚转（rad）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_camera_roll_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field camera_pitch_rad from hk_drone_attitude_base message
 *
 * @return  相机俯仰（rad）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_camera_pitch_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field camera_yaw_rad from hk_drone_attitude_base message
 *
 * @return  相机偏航（rad）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_camera_yaw_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field angle_of_attack_rad from hk_drone_attitude_base message
 *
 * @return  攻角（rad）= velocity_pitch_angle_rad - pitch_rad
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_angle_of_attack_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field sideslip_angle_rad from hk_drone_attitude_base message
 *
 * @return  侧滑角（rad）= velocity_yaw_angle_rad - yaw_rad
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_sideslip_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field velocity_yaw_angle_rad from hk_drone_attitude_base message
 *
 * @return  世界系速度向量方向偏航角（rad，NED）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_velocity_yaw_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field velocity_pitch_angle_rad from hk_drone_attitude_base message
 *
 * @return  世界系速度向量方向俯仰角（rad，NED）
 */
static inline float mavlink_msg_hk_drone_attitude_base_get_velocity_pitch_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Decode a hk_drone_attitude_base message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_attitude_base C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_attitude_base_decode(const mavlink_message_t* msg, mavlink_hk_drone_attitude_base_t* hk_drone_attitude_base)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_attitude_base->timestamp_ms = mavlink_msg_hk_drone_attitude_base_get_timestamp_ms(msg);
    hk_drone_attitude_base->fw_roll_rad = mavlink_msg_hk_drone_attitude_base_get_fw_roll_rad(msg);
    hk_drone_attitude_base->fw_pitch_rad = mavlink_msg_hk_drone_attitude_base_get_fw_pitch_rad(msg);
    hk_drone_attitude_base->fw_yaw_rad = mavlink_msg_hk_drone_attitude_base_get_fw_yaw_rad(msg);
    hk_drone_attitude_base->camera_roll_rad = mavlink_msg_hk_drone_attitude_base_get_camera_roll_rad(msg);
    hk_drone_attitude_base->camera_pitch_rad = mavlink_msg_hk_drone_attitude_base_get_camera_pitch_rad(msg);
    hk_drone_attitude_base->camera_yaw_rad = mavlink_msg_hk_drone_attitude_base_get_camera_yaw_rad(msg);
    hk_drone_attitude_base->angle_of_attack_rad = mavlink_msg_hk_drone_attitude_base_get_angle_of_attack_rad(msg);
    hk_drone_attitude_base->sideslip_angle_rad = mavlink_msg_hk_drone_attitude_base_get_sideslip_angle_rad(msg);
    hk_drone_attitude_base->velocity_yaw_angle_rad = mavlink_msg_hk_drone_attitude_base_get_velocity_yaw_angle_rad(msg);
    hk_drone_attitude_base->velocity_pitch_angle_rad = mavlink_msg_hk_drone_attitude_base_get_velocity_pitch_angle_rad(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN;
        memset(hk_drone_attitude_base, 0, MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_LEN);
    memcpy(hk_drone_attitude_base, _MAV_PAYLOAD(msg), len);
#endif
}
