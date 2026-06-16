#pragma once
// MESSAGE HK_TARGET_SITUATION PACKING

#define MAVLINK_MSG_ID_HK_TARGET_SITUATION 50003


typedef struct __mavlink_hk_target_situation_t {
 int32_t target_lat; /*<  目标纬度（度 × 10^7）*/
 int32_t target_lon; /*<  目标经度（度 × 10^7）*/
 int32_t target_alt; /*<  目标海拔高度（mm）*/
 int32_t speed_north; /*<  北向速度（cm/s）*/
 int32_t speed_east; /*<  东向速度（cm/s）*/
 int32_t speed_down; /*<  地向速度（cm/s）*/
 int16_t lat_std; /*<  纬度标准差（0.01°）*/
 int16_t lon_std; /*<  经度标准差（0.01°）*/
 int16_t alt_std; /*<  高度标准差（0.1 m）*/
 int16_t ned_speed_north_std; /*<  北向速度标准差（cm/s）*/
 int16_t ned_speed_east_std; /*<  东向速度标准差（cm/s）*/
 int16_t ned_speed_down_std; /*<  地向速度标准差（cm/s）*/
 uint8_t target_sysid; /*<  目标无人机系统 ID（消息接收方）*/
 uint8_t validity_mask; /*<  字段有效性掩码（bit0=位置, bit1=位置标准差, bit2=速度, bit3=速度标准差）*/
} mavlink_hk_target_situation_t;

#define MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN 38
#define MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN 38
#define MAVLINK_MSG_ID_50003_LEN 38
#define MAVLINK_MSG_ID_50003_MIN_LEN 38

#define MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC 72
#define MAVLINK_MSG_ID_50003_CRC 72



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_TARGET_SITUATION { \
    50003, \
    "HK_TARGET_SITUATION", \
    14, \
    {  { "target_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_hk_target_situation_t, target_sysid) }, \
         { "target_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_target_situation_t, target_lat) }, \
         { "target_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_target_situation_t, target_lon) }, \
         { "target_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_target_situation_t, target_alt) }, \
         { "speed_north", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_hk_target_situation_t, speed_north) }, \
         { "speed_east", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_hk_target_situation_t, speed_east) }, \
         { "speed_down", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_hk_target_situation_t, speed_down) }, \
         { "lat_std", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_hk_target_situation_t, lat_std) }, \
         { "lon_std", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_hk_target_situation_t, lon_std) }, \
         { "alt_std", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_hk_target_situation_t, alt_std) }, \
         { "ned_speed_north_std", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_hk_target_situation_t, ned_speed_north_std) }, \
         { "ned_speed_east_std", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_hk_target_situation_t, ned_speed_east_std) }, \
         { "ned_speed_down_std", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_hk_target_situation_t, ned_speed_down_std) }, \
         { "validity_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_hk_target_situation_t, validity_mask) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_TARGET_SITUATION { \
    "HK_TARGET_SITUATION", \
    14, \
    {  { "target_sysid", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_hk_target_situation_t, target_sysid) }, \
         { "target_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_target_situation_t, target_lat) }, \
         { "target_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_target_situation_t, target_lon) }, \
         { "target_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_target_situation_t, target_alt) }, \
         { "speed_north", NULL, MAVLINK_TYPE_INT32_T, 0, 12, offsetof(mavlink_hk_target_situation_t, speed_north) }, \
         { "speed_east", NULL, MAVLINK_TYPE_INT32_T, 0, 16, offsetof(mavlink_hk_target_situation_t, speed_east) }, \
         { "speed_down", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_hk_target_situation_t, speed_down) }, \
         { "lat_std", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_hk_target_situation_t, lat_std) }, \
         { "lon_std", NULL, MAVLINK_TYPE_INT16_T, 0, 26, offsetof(mavlink_hk_target_situation_t, lon_std) }, \
         { "alt_std", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_hk_target_situation_t, alt_std) }, \
         { "ned_speed_north_std", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_hk_target_situation_t, ned_speed_north_std) }, \
         { "ned_speed_east_std", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_hk_target_situation_t, ned_speed_east_std) }, \
         { "ned_speed_down_std", NULL, MAVLINK_TYPE_INT16_T, 0, 34, offsetof(mavlink_hk_target_situation_t, ned_speed_down_std) }, \
         { "validity_mask", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_hk_target_situation_t, validity_mask) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_target_situation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_sysid  目标无人机系统 ID（消息接收方）
 * @param target_lat  目标纬度（度 × 10^7）
 * @param target_lon  目标经度（度 × 10^7）
 * @param target_alt  目标海拔高度（mm）
 * @param speed_north  北向速度（cm/s）
 * @param speed_east  东向速度（cm/s）
 * @param speed_down  地向速度（cm/s）
 * @param lat_std  纬度标准差（0.01°）
 * @param lon_std  经度标准差（0.01°）
 * @param alt_std  高度标准差（0.1 m）
 * @param ned_speed_north_std  北向速度标准差（cm/s）
 * @param ned_speed_east_std  东向速度标准差（cm/s）
 * @param ned_speed_down_std  地向速度标准差（cm/s）
 * @param validity_mask  字段有效性掩码（bit0=位置, bit1=位置标准差, bit2=速度, bit3=速度标准差）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_target_situation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_sysid, int32_t target_lat, int32_t target_lon, int32_t target_alt, int32_t speed_north, int32_t speed_east, int32_t speed_down, int16_t lat_std, int16_t lon_std, int16_t alt_std, int16_t ned_speed_north_std, int16_t ned_speed_east_std, int16_t ned_speed_down_std, uint8_t validity_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);
    _mav_put_int32_t(buf, 8, target_alt);
    _mav_put_int32_t(buf, 12, speed_north);
    _mav_put_int32_t(buf, 16, speed_east);
    _mav_put_int32_t(buf, 20, speed_down);
    _mav_put_int16_t(buf, 24, lat_std);
    _mav_put_int16_t(buf, 26, lon_std);
    _mav_put_int16_t(buf, 28, alt_std);
    _mav_put_int16_t(buf, 30, ned_speed_north_std);
    _mav_put_int16_t(buf, 32, ned_speed_east_std);
    _mav_put_int16_t(buf, 34, ned_speed_down_std);
    _mav_put_uint8_t(buf, 36, target_sysid);
    _mav_put_uint8_t(buf, 37, validity_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#else
    mavlink_hk_target_situation_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_alt = target_alt;
    packet.speed_north = speed_north;
    packet.speed_east = speed_east;
    packet.speed_down = speed_down;
    packet.lat_std = lat_std;
    packet.lon_std = lon_std;
    packet.alt_std = alt_std;
    packet.ned_speed_north_std = ned_speed_north_std;
    packet.ned_speed_east_std = ned_speed_east_std;
    packet.ned_speed_down_std = ned_speed_down_std;
    packet.target_sysid = target_sysid;
    packet.validity_mask = validity_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_TARGET_SITUATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
}

/**
 * @brief Pack a hk_target_situation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_sysid  目标无人机系统 ID（消息接收方）
 * @param target_lat  目标纬度（度 × 10^7）
 * @param target_lon  目标经度（度 × 10^7）
 * @param target_alt  目标海拔高度（mm）
 * @param speed_north  北向速度（cm/s）
 * @param speed_east  东向速度（cm/s）
 * @param speed_down  地向速度（cm/s）
 * @param lat_std  纬度标准差（0.01°）
 * @param lon_std  经度标准差（0.01°）
 * @param alt_std  高度标准差（0.1 m）
 * @param ned_speed_north_std  北向速度标准差（cm/s）
 * @param ned_speed_east_std  东向速度标准差（cm/s）
 * @param ned_speed_down_std  地向速度标准差（cm/s）
 * @param validity_mask  字段有效性掩码（bit0=位置, bit1=位置标准差, bit2=速度, bit3=速度标准差）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_target_situation_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t target_sysid, int32_t target_lat, int32_t target_lon, int32_t target_alt, int32_t speed_north, int32_t speed_east, int32_t speed_down, int16_t lat_std, int16_t lon_std, int16_t alt_std, int16_t ned_speed_north_std, int16_t ned_speed_east_std, int16_t ned_speed_down_std, uint8_t validity_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);
    _mav_put_int32_t(buf, 8, target_alt);
    _mav_put_int32_t(buf, 12, speed_north);
    _mav_put_int32_t(buf, 16, speed_east);
    _mav_put_int32_t(buf, 20, speed_down);
    _mav_put_int16_t(buf, 24, lat_std);
    _mav_put_int16_t(buf, 26, lon_std);
    _mav_put_int16_t(buf, 28, alt_std);
    _mav_put_int16_t(buf, 30, ned_speed_north_std);
    _mav_put_int16_t(buf, 32, ned_speed_east_std);
    _mav_put_int16_t(buf, 34, ned_speed_down_std);
    _mav_put_uint8_t(buf, 36, target_sysid);
    _mav_put_uint8_t(buf, 37, validity_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#else
    mavlink_hk_target_situation_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_alt = target_alt;
    packet.speed_north = speed_north;
    packet.speed_east = speed_east;
    packet.speed_down = speed_down;
    packet.lat_std = lat_std;
    packet.lon_std = lon_std;
    packet.alt_std = alt_std;
    packet.ned_speed_north_std = ned_speed_north_std;
    packet.ned_speed_east_std = ned_speed_east_std;
    packet.ned_speed_down_std = ned_speed_down_std;
    packet.target_sysid = target_sysid;
    packet.validity_mask = validity_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_TARGET_SITUATION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#endif
}

/**
 * @brief Pack a hk_target_situation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_sysid  目标无人机系统 ID（消息接收方）
 * @param target_lat  目标纬度（度 × 10^7）
 * @param target_lon  目标经度（度 × 10^7）
 * @param target_alt  目标海拔高度（mm）
 * @param speed_north  北向速度（cm/s）
 * @param speed_east  东向速度（cm/s）
 * @param speed_down  地向速度（cm/s）
 * @param lat_std  纬度标准差（0.01°）
 * @param lon_std  经度标准差（0.01°）
 * @param alt_std  高度标准差（0.1 m）
 * @param ned_speed_north_std  北向速度标准差（cm/s）
 * @param ned_speed_east_std  东向速度标准差（cm/s）
 * @param ned_speed_down_std  地向速度标准差（cm/s）
 * @param validity_mask  字段有效性掩码（bit0=位置, bit1=位置标准差, bit2=速度, bit3=速度标准差）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_target_situation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_sysid,int32_t target_lat,int32_t target_lon,int32_t target_alt,int32_t speed_north,int32_t speed_east,int32_t speed_down,int16_t lat_std,int16_t lon_std,int16_t alt_std,int16_t ned_speed_north_std,int16_t ned_speed_east_std,int16_t ned_speed_down_std,uint8_t validity_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);
    _mav_put_int32_t(buf, 8, target_alt);
    _mav_put_int32_t(buf, 12, speed_north);
    _mav_put_int32_t(buf, 16, speed_east);
    _mav_put_int32_t(buf, 20, speed_down);
    _mav_put_int16_t(buf, 24, lat_std);
    _mav_put_int16_t(buf, 26, lon_std);
    _mav_put_int16_t(buf, 28, alt_std);
    _mav_put_int16_t(buf, 30, ned_speed_north_std);
    _mav_put_int16_t(buf, 32, ned_speed_east_std);
    _mav_put_int16_t(buf, 34, ned_speed_down_std);
    _mav_put_uint8_t(buf, 36, target_sysid);
    _mav_put_uint8_t(buf, 37, validity_mask);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#else
    mavlink_hk_target_situation_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_alt = target_alt;
    packet.speed_north = speed_north;
    packet.speed_east = speed_east;
    packet.speed_down = speed_down;
    packet.lat_std = lat_std;
    packet.lon_std = lon_std;
    packet.alt_std = alt_std;
    packet.ned_speed_north_std = ned_speed_north_std;
    packet.ned_speed_east_std = ned_speed_east_std;
    packet.ned_speed_down_std = ned_speed_down_std;
    packet.target_sysid = target_sysid;
    packet.validity_mask = validity_mask;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_TARGET_SITUATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
}

/**
 * @brief Encode a hk_target_situation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_target_situation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_target_situation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_target_situation_t* hk_target_situation)
{
    return mavlink_msg_hk_target_situation_pack(system_id, component_id, msg, hk_target_situation->target_sysid, hk_target_situation->target_lat, hk_target_situation->target_lon, hk_target_situation->target_alt, hk_target_situation->speed_north, hk_target_situation->speed_east, hk_target_situation->speed_down, hk_target_situation->lat_std, hk_target_situation->lon_std, hk_target_situation->alt_std, hk_target_situation->ned_speed_north_std, hk_target_situation->ned_speed_east_std, hk_target_situation->ned_speed_down_std, hk_target_situation->validity_mask);
}

/**
 * @brief Encode a hk_target_situation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_target_situation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_target_situation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_target_situation_t* hk_target_situation)
{
    return mavlink_msg_hk_target_situation_pack_chan(system_id, component_id, chan, msg, hk_target_situation->target_sysid, hk_target_situation->target_lat, hk_target_situation->target_lon, hk_target_situation->target_alt, hk_target_situation->speed_north, hk_target_situation->speed_east, hk_target_situation->speed_down, hk_target_situation->lat_std, hk_target_situation->lon_std, hk_target_situation->alt_std, hk_target_situation->ned_speed_north_std, hk_target_situation->ned_speed_east_std, hk_target_situation->ned_speed_down_std, hk_target_situation->validity_mask);
}

/**
 * @brief Encode a hk_target_situation struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_target_situation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_target_situation_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_target_situation_t* hk_target_situation)
{
    return mavlink_msg_hk_target_situation_pack_status(system_id, component_id, _status, msg,  hk_target_situation->target_sysid, hk_target_situation->target_lat, hk_target_situation->target_lon, hk_target_situation->target_alt, hk_target_situation->speed_north, hk_target_situation->speed_east, hk_target_situation->speed_down, hk_target_situation->lat_std, hk_target_situation->lon_std, hk_target_situation->alt_std, hk_target_situation->ned_speed_north_std, hk_target_situation->ned_speed_east_std, hk_target_situation->ned_speed_down_std, hk_target_situation->validity_mask);
}

/**
 * @brief Send a hk_target_situation message
 * @param chan MAVLink channel to send the message
 *
 * @param target_sysid  目标无人机系统 ID（消息接收方）
 * @param target_lat  目标纬度（度 × 10^7）
 * @param target_lon  目标经度（度 × 10^7）
 * @param target_alt  目标海拔高度（mm）
 * @param speed_north  北向速度（cm/s）
 * @param speed_east  东向速度（cm/s）
 * @param speed_down  地向速度（cm/s）
 * @param lat_std  纬度标准差（0.01°）
 * @param lon_std  经度标准差（0.01°）
 * @param alt_std  高度标准差（0.1 m）
 * @param ned_speed_north_std  北向速度标准差（cm/s）
 * @param ned_speed_east_std  东向速度标准差（cm/s）
 * @param ned_speed_down_std  地向速度标准差（cm/s）
 * @param validity_mask  字段有效性掩码（bit0=位置, bit1=位置标准差, bit2=速度, bit3=速度标准差）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_target_situation_send(mavlink_channel_t chan, uint8_t target_sysid, int32_t target_lat, int32_t target_lon, int32_t target_alt, int32_t speed_north, int32_t speed_east, int32_t speed_down, int16_t lat_std, int16_t lon_std, int16_t alt_std, int16_t ned_speed_north_std, int16_t ned_speed_east_std, int16_t ned_speed_down_std, uint8_t validity_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN];
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);
    _mav_put_int32_t(buf, 8, target_alt);
    _mav_put_int32_t(buf, 12, speed_north);
    _mav_put_int32_t(buf, 16, speed_east);
    _mav_put_int32_t(buf, 20, speed_down);
    _mav_put_int16_t(buf, 24, lat_std);
    _mav_put_int16_t(buf, 26, lon_std);
    _mav_put_int16_t(buf, 28, alt_std);
    _mav_put_int16_t(buf, 30, ned_speed_north_std);
    _mav_put_int16_t(buf, 32, ned_speed_east_std);
    _mav_put_int16_t(buf, 34, ned_speed_down_std);
    _mav_put_uint8_t(buf, 36, target_sysid);
    _mav_put_uint8_t(buf, 37, validity_mask);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TARGET_SITUATION, buf, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
#else
    mavlink_hk_target_situation_t packet;
    packet.target_lat = target_lat;
    packet.target_lon = target_lon;
    packet.target_alt = target_alt;
    packet.speed_north = speed_north;
    packet.speed_east = speed_east;
    packet.speed_down = speed_down;
    packet.lat_std = lat_std;
    packet.lon_std = lon_std;
    packet.alt_std = alt_std;
    packet.ned_speed_north_std = ned_speed_north_std;
    packet.ned_speed_east_std = ned_speed_east_std;
    packet.ned_speed_down_std = ned_speed_down_std;
    packet.target_sysid = target_sysid;
    packet.validity_mask = validity_mask;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TARGET_SITUATION, (const char *)&packet, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
#endif
}

/**
 * @brief Send a hk_target_situation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_target_situation_send_struct(mavlink_channel_t chan, const mavlink_hk_target_situation_t* hk_target_situation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_target_situation_send(chan, hk_target_situation->target_sysid, hk_target_situation->target_lat, hk_target_situation->target_lon, hk_target_situation->target_alt, hk_target_situation->speed_north, hk_target_situation->speed_east, hk_target_situation->speed_down, hk_target_situation->lat_std, hk_target_situation->lon_std, hk_target_situation->alt_std, hk_target_situation->ned_speed_north_std, hk_target_situation->ned_speed_east_std, hk_target_situation->ned_speed_down_std, hk_target_situation->validity_mask);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TARGET_SITUATION, (const char *)hk_target_situation, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_target_situation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_sysid, int32_t target_lat, int32_t target_lon, int32_t target_alt, int32_t speed_north, int32_t speed_east, int32_t speed_down, int16_t lat_std, int16_t lon_std, int16_t alt_std, int16_t ned_speed_north_std, int16_t ned_speed_east_std, int16_t ned_speed_down_std, uint8_t validity_mask)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, target_lat);
    _mav_put_int32_t(buf, 4, target_lon);
    _mav_put_int32_t(buf, 8, target_alt);
    _mav_put_int32_t(buf, 12, speed_north);
    _mav_put_int32_t(buf, 16, speed_east);
    _mav_put_int32_t(buf, 20, speed_down);
    _mav_put_int16_t(buf, 24, lat_std);
    _mav_put_int16_t(buf, 26, lon_std);
    _mav_put_int16_t(buf, 28, alt_std);
    _mav_put_int16_t(buf, 30, ned_speed_north_std);
    _mav_put_int16_t(buf, 32, ned_speed_east_std);
    _mav_put_int16_t(buf, 34, ned_speed_down_std);
    _mav_put_uint8_t(buf, 36, target_sysid);
    _mav_put_uint8_t(buf, 37, validity_mask);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TARGET_SITUATION, buf, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
#else
    mavlink_hk_target_situation_t *packet = (mavlink_hk_target_situation_t *)msgbuf;
    packet->target_lat = target_lat;
    packet->target_lon = target_lon;
    packet->target_alt = target_alt;
    packet->speed_north = speed_north;
    packet->speed_east = speed_east;
    packet->speed_down = speed_down;
    packet->lat_std = lat_std;
    packet->lon_std = lon_std;
    packet->alt_std = alt_std;
    packet->ned_speed_north_std = ned_speed_north_std;
    packet->ned_speed_east_std = ned_speed_east_std;
    packet->ned_speed_down_std = ned_speed_down_std;
    packet->target_sysid = target_sysid;
    packet->validity_mask = validity_mask;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_TARGET_SITUATION, (const char *)packet, MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN, MAVLINK_MSG_ID_HK_TARGET_SITUATION_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_TARGET_SITUATION UNPACKING


/**
 * @brief Get field target_sysid from hk_target_situation message
 *
 * @return  目标无人机系统 ID（消息接收方）
 */
static inline uint8_t mavlink_msg_hk_target_situation_get_target_sysid(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field target_lat from hk_target_situation message
 *
 * @return  目标纬度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_target_situation_get_target_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field target_lon from hk_target_situation message
 *
 * @return  目标经度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_target_situation_get_target_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field target_alt from hk_target_situation message
 *
 * @return  目标海拔高度（mm）
 */
static inline int32_t mavlink_msg_hk_target_situation_get_target_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Get field speed_north from hk_target_situation message
 *
 * @return  北向速度（cm/s）
 */
static inline int32_t mavlink_msg_hk_target_situation_get_speed_north(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  12);
}

/**
 * @brief Get field speed_east from hk_target_situation message
 *
 * @return  东向速度（cm/s）
 */
static inline int32_t mavlink_msg_hk_target_situation_get_speed_east(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  16);
}

/**
 * @brief Get field speed_down from hk_target_situation message
 *
 * @return  地向速度（cm/s）
 */
static inline int32_t mavlink_msg_hk_target_situation_get_speed_down(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field lat_std from hk_target_situation message
 *
 * @return  纬度标准差（0.01°）
 */
static inline int16_t mavlink_msg_hk_target_situation_get_lat_std(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field lon_std from hk_target_situation message
 *
 * @return  经度标准差（0.01°）
 */
static inline int16_t mavlink_msg_hk_target_situation_get_lon_std(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  26);
}

/**
 * @brief Get field alt_std from hk_target_situation message
 *
 * @return  高度标准差（0.1 m）
 */
static inline int16_t mavlink_msg_hk_target_situation_get_alt_std(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field ned_speed_north_std from hk_target_situation message
 *
 * @return  北向速度标准差（cm/s）
 */
static inline int16_t mavlink_msg_hk_target_situation_get_ned_speed_north_std(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field ned_speed_east_std from hk_target_situation message
 *
 * @return  东向速度标准差（cm/s）
 */
static inline int16_t mavlink_msg_hk_target_situation_get_ned_speed_east_std(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field ned_speed_down_std from hk_target_situation message
 *
 * @return  地向速度标准差（cm/s）
 */
static inline int16_t mavlink_msg_hk_target_situation_get_ned_speed_down_std(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  34);
}

/**
 * @brief Get field validity_mask from hk_target_situation message
 *
 * @return  字段有效性掩码（bit0=位置, bit1=位置标准差, bit2=速度, bit3=速度标准差）
 */
static inline uint8_t mavlink_msg_hk_target_situation_get_validity_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Decode a hk_target_situation message into a struct
 *
 * @param msg The message to decode
 * @param hk_target_situation C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_target_situation_decode(const mavlink_message_t* msg, mavlink_hk_target_situation_t* hk_target_situation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_target_situation->target_lat = mavlink_msg_hk_target_situation_get_target_lat(msg);
    hk_target_situation->target_lon = mavlink_msg_hk_target_situation_get_target_lon(msg);
    hk_target_situation->target_alt = mavlink_msg_hk_target_situation_get_target_alt(msg);
    hk_target_situation->speed_north = mavlink_msg_hk_target_situation_get_speed_north(msg);
    hk_target_situation->speed_east = mavlink_msg_hk_target_situation_get_speed_east(msg);
    hk_target_situation->speed_down = mavlink_msg_hk_target_situation_get_speed_down(msg);
    hk_target_situation->lat_std = mavlink_msg_hk_target_situation_get_lat_std(msg);
    hk_target_situation->lon_std = mavlink_msg_hk_target_situation_get_lon_std(msg);
    hk_target_situation->alt_std = mavlink_msg_hk_target_situation_get_alt_std(msg);
    hk_target_situation->ned_speed_north_std = mavlink_msg_hk_target_situation_get_ned_speed_north_std(msg);
    hk_target_situation->ned_speed_east_std = mavlink_msg_hk_target_situation_get_ned_speed_east_std(msg);
    hk_target_situation->ned_speed_down_std = mavlink_msg_hk_target_situation_get_ned_speed_down_std(msg);
    hk_target_situation->target_sysid = mavlink_msg_hk_target_situation_get_target_sysid(msg);
    hk_target_situation->validity_mask = mavlink_msg_hk_target_situation_get_validity_mask(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN? msg->len : MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN;
        memset(hk_target_situation, 0, MAVLINK_MSG_ID_HK_TARGET_SITUATION_LEN);
    memcpy(hk_target_situation, _MAV_PAYLOAD(msg), len);
#endif
}
