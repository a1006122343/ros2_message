#pragma once
// MESSAGE HK_LAUNCHER_STATUS PACKING

#define MAVLINK_MSG_ID_HK_LAUNCHER_STATUS 60000


typedef struct __mavlink_hk_launcher_status_t {
 int32_t launcer_lat; /*<  纬度（度 × 10^7）*/
 int32_t launcer_lon; /*<  经度（度 × 10^7）*/
 int32_t launcer_alt; /*<  海拔高度（mm）*/
 uint8_t lid_status; /*<  0=已关闭, 1=已开启*/
 uint8_t lock_status; /*<  0=已锁定, 1=已解锁*/
 uint8_t box_battery; /*<  发射箱电量（%）*/
 uint8_t ready_count; /*<  待发射无人机数量*/
 uint8_t total_count; /*<  已装载无人机总数*/
} mavlink_hk_launcher_status_t;

#define MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN 17
#define MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN 17
#define MAVLINK_MSG_ID_60000_LEN 17
#define MAVLINK_MSG_ID_60000_MIN_LEN 17

#define MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC 212
#define MAVLINK_MSG_ID_60000_CRC 212



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_LAUNCHER_STATUS { \
    60000, \
    "HK_LAUNCHER_STATUS", \
    8, \
    {  { "lid_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_hk_launcher_status_t, lid_status) }, \
         { "lock_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_hk_launcher_status_t, lock_status) }, \
         { "box_battery", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_hk_launcher_status_t, box_battery) }, \
         { "ready_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_hk_launcher_status_t, ready_count) }, \
         { "total_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_hk_launcher_status_t, total_count) }, \
         { "launcer_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_launcher_status_t, launcer_lat) }, \
         { "launcer_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_launcher_status_t, launcer_lon) }, \
         { "launcer_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_launcher_status_t, launcer_alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_LAUNCHER_STATUS { \
    "HK_LAUNCHER_STATUS", \
    8, \
    {  { "lid_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_hk_launcher_status_t, lid_status) }, \
         { "lock_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_hk_launcher_status_t, lock_status) }, \
         { "box_battery", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_hk_launcher_status_t, box_battery) }, \
         { "ready_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_hk_launcher_status_t, ready_count) }, \
         { "total_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_hk_launcher_status_t, total_count) }, \
         { "launcer_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_launcher_status_t, launcer_lat) }, \
         { "launcer_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_launcher_status_t, launcer_lon) }, \
         { "launcer_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_launcher_status_t, launcer_alt) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_launcher_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lid_status  0=已关闭, 1=已开启
 * @param lock_status  0=已锁定, 1=已解锁
 * @param box_battery  发射箱电量（%）
 * @param ready_count  待发射无人机数量
 * @param total_count  已装载无人机总数
 * @param launcer_lat  纬度（度 × 10^7）
 * @param launcer_lon  经度（度 × 10^7）
 * @param launcer_alt  海拔高度（mm）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_launcher_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t lid_status, uint8_t lock_status, uint8_t box_battery, uint8_t ready_count, uint8_t total_count, int32_t launcer_lat, int32_t launcer_lon, int32_t launcer_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, launcer_lat);
    _mav_put_int32_t(buf, 4, launcer_lon);
    _mav_put_int32_t(buf, 8, launcer_alt);
    _mav_put_uint8_t(buf, 12, lid_status);
    _mav_put_uint8_t(buf, 13, lock_status);
    _mav_put_uint8_t(buf, 14, box_battery);
    _mav_put_uint8_t(buf, 15, ready_count);
    _mav_put_uint8_t(buf, 16, total_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#else
    mavlink_hk_launcher_status_t packet;
    packet.launcer_lat = launcer_lat;
    packet.launcer_lon = launcer_lon;
    packet.launcer_alt = launcer_alt;
    packet.lid_status = lid_status;
    packet.lock_status = lock_status;
    packet.box_battery = box_battery;
    packet.ready_count = ready_count;
    packet.total_count = total_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_LAUNCHER_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
}

/**
 * @brief Pack a hk_launcher_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param lid_status  0=已关闭, 1=已开启
 * @param lock_status  0=已锁定, 1=已解锁
 * @param box_battery  发射箱电量（%）
 * @param ready_count  待发射无人机数量
 * @param total_count  已装载无人机总数
 * @param launcer_lat  纬度（度 × 10^7）
 * @param launcer_lon  经度（度 × 10^7）
 * @param launcer_alt  海拔高度（mm）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_launcher_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t lid_status, uint8_t lock_status, uint8_t box_battery, uint8_t ready_count, uint8_t total_count, int32_t launcer_lat, int32_t launcer_lon, int32_t launcer_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, launcer_lat);
    _mav_put_int32_t(buf, 4, launcer_lon);
    _mav_put_int32_t(buf, 8, launcer_alt);
    _mav_put_uint8_t(buf, 12, lid_status);
    _mav_put_uint8_t(buf, 13, lock_status);
    _mav_put_uint8_t(buf, 14, box_battery);
    _mav_put_uint8_t(buf, 15, ready_count);
    _mav_put_uint8_t(buf, 16, total_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#else
    mavlink_hk_launcher_status_t packet;
    packet.launcer_lat = launcer_lat;
    packet.launcer_lon = launcer_lon;
    packet.launcer_alt = launcer_alt;
    packet.lid_status = lid_status;
    packet.lock_status = lock_status;
    packet.box_battery = box_battery;
    packet.ready_count = ready_count;
    packet.total_count = total_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_LAUNCHER_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_launcher_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lid_status  0=已关闭, 1=已开启
 * @param lock_status  0=已锁定, 1=已解锁
 * @param box_battery  发射箱电量（%）
 * @param ready_count  待发射无人机数量
 * @param total_count  已装载无人机总数
 * @param launcer_lat  纬度（度 × 10^7）
 * @param launcer_lon  经度（度 × 10^7）
 * @param launcer_alt  海拔高度（mm）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_launcher_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t lid_status,uint8_t lock_status,uint8_t box_battery,uint8_t ready_count,uint8_t total_count,int32_t launcer_lat,int32_t launcer_lon,int32_t launcer_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, launcer_lat);
    _mav_put_int32_t(buf, 4, launcer_lon);
    _mav_put_int32_t(buf, 8, launcer_alt);
    _mav_put_uint8_t(buf, 12, lid_status);
    _mav_put_uint8_t(buf, 13, lock_status);
    _mav_put_uint8_t(buf, 14, box_battery);
    _mav_put_uint8_t(buf, 15, ready_count);
    _mav_put_uint8_t(buf, 16, total_count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#else
    mavlink_hk_launcher_status_t packet;
    packet.launcer_lat = launcer_lat;
    packet.launcer_lon = launcer_lon;
    packet.launcer_alt = launcer_alt;
    packet.lid_status = lid_status;
    packet.lock_status = lock_status;
    packet.box_battery = box_battery;
    packet.ready_count = ready_count;
    packet.total_count = total_count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_LAUNCHER_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
}

/**
 * @brief Encode a hk_launcher_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_launcher_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_launcher_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_launcher_status_t* hk_launcher_status)
{
    return mavlink_msg_hk_launcher_status_pack(system_id, component_id, msg, hk_launcher_status->lid_status, hk_launcher_status->lock_status, hk_launcher_status->box_battery, hk_launcher_status->ready_count, hk_launcher_status->total_count, hk_launcher_status->launcer_lat, hk_launcher_status->launcer_lon, hk_launcher_status->launcer_alt);
}

/**
 * @brief Encode a hk_launcher_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_launcher_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_launcher_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_launcher_status_t* hk_launcher_status)
{
    return mavlink_msg_hk_launcher_status_pack_chan(system_id, component_id, chan, msg, hk_launcher_status->lid_status, hk_launcher_status->lock_status, hk_launcher_status->box_battery, hk_launcher_status->ready_count, hk_launcher_status->total_count, hk_launcher_status->launcer_lat, hk_launcher_status->launcer_lon, hk_launcher_status->launcer_alt);
}

/**
 * @brief Encode a hk_launcher_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_launcher_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_launcher_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_launcher_status_t* hk_launcher_status)
{
    return mavlink_msg_hk_launcher_status_pack_status(system_id, component_id, _status, msg,  hk_launcher_status->lid_status, hk_launcher_status->lock_status, hk_launcher_status->box_battery, hk_launcher_status->ready_count, hk_launcher_status->total_count, hk_launcher_status->launcer_lat, hk_launcher_status->launcer_lon, hk_launcher_status->launcer_alt);
}

/**
 * @brief Send a hk_launcher_status message
 * @param chan MAVLink channel to send the message
 *
 * @param lid_status  0=已关闭, 1=已开启
 * @param lock_status  0=已锁定, 1=已解锁
 * @param box_battery  发射箱电量（%）
 * @param ready_count  待发射无人机数量
 * @param total_count  已装载无人机总数
 * @param launcer_lat  纬度（度 × 10^7）
 * @param launcer_lon  经度（度 × 10^7）
 * @param launcer_alt  海拔高度（mm）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_launcher_status_send(mavlink_channel_t chan, uint8_t lid_status, uint8_t lock_status, uint8_t box_battery, uint8_t ready_count, uint8_t total_count, int32_t launcer_lat, int32_t launcer_lon, int32_t launcer_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN];
    _mav_put_int32_t(buf, 0, launcer_lat);
    _mav_put_int32_t(buf, 4, launcer_lon);
    _mav_put_int32_t(buf, 8, launcer_alt);
    _mav_put_uint8_t(buf, 12, lid_status);
    _mav_put_uint8_t(buf, 13, lock_status);
    _mav_put_uint8_t(buf, 14, box_battery);
    _mav_put_uint8_t(buf, 15, ready_count);
    _mav_put_uint8_t(buf, 16, total_count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS, buf, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
#else
    mavlink_hk_launcher_status_t packet;
    packet.launcer_lat = launcer_lat;
    packet.launcer_lon = launcer_lon;
    packet.launcer_alt = launcer_alt;
    packet.lid_status = lid_status;
    packet.lock_status = lock_status;
    packet.box_battery = box_battery;
    packet.ready_count = ready_count;
    packet.total_count = total_count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_launcher_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_launcher_status_send_struct(mavlink_channel_t chan, const mavlink_hk_launcher_status_t* hk_launcher_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_launcher_status_send(chan, hk_launcher_status->lid_status, hk_launcher_status->lock_status, hk_launcher_status->box_battery, hk_launcher_status->ready_count, hk_launcher_status->total_count, hk_launcher_status->launcer_lat, hk_launcher_status->launcer_lon, hk_launcher_status->launcer_alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS, (const char *)hk_launcher_status, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_launcher_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t lid_status, uint8_t lock_status, uint8_t box_battery, uint8_t ready_count, uint8_t total_count, int32_t launcer_lat, int32_t launcer_lon, int32_t launcer_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, launcer_lat);
    _mav_put_int32_t(buf, 4, launcer_lon);
    _mav_put_int32_t(buf, 8, launcer_alt);
    _mav_put_uint8_t(buf, 12, lid_status);
    _mav_put_uint8_t(buf, 13, lock_status);
    _mav_put_uint8_t(buf, 14, box_battery);
    _mav_put_uint8_t(buf, 15, ready_count);
    _mav_put_uint8_t(buf, 16, total_count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS, buf, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
#else
    mavlink_hk_launcher_status_t *packet = (mavlink_hk_launcher_status_t *)msgbuf;
    packet->launcer_lat = launcer_lat;
    packet->launcer_lon = launcer_lon;
    packet->launcer_alt = launcer_alt;
    packet->lid_status = lid_status;
    packet->lock_status = lock_status;
    packet->box_battery = box_battery;
    packet->ready_count = ready_count;
    packet->total_count = total_count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_LAUNCHER_STATUS UNPACKING


/**
 * @brief Get field lid_status from hk_launcher_status message
 *
 * @return  0=已关闭, 1=已开启
 */
static inline uint8_t mavlink_msg_hk_launcher_status_get_lid_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field lock_status from hk_launcher_status message
 *
 * @return  0=已锁定, 1=已解锁
 */
static inline uint8_t mavlink_msg_hk_launcher_status_get_lock_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field box_battery from hk_launcher_status message
 *
 * @return  发射箱电量（%）
 */
static inline uint8_t mavlink_msg_hk_launcher_status_get_box_battery(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field ready_count from hk_launcher_status message
 *
 * @return  待发射无人机数量
 */
static inline uint8_t mavlink_msg_hk_launcher_status_get_ready_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field total_count from hk_launcher_status message
 *
 * @return  已装载无人机总数
 */
static inline uint8_t mavlink_msg_hk_launcher_status_get_total_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field launcer_lat from hk_launcher_status message
 *
 * @return  纬度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_launcher_status_get_launcer_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field launcer_lon from hk_launcher_status message
 *
 * @return  经度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_launcher_status_get_launcer_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field launcer_alt from hk_launcher_status message
 *
 * @return  海拔高度（mm）
 */
static inline int32_t mavlink_msg_hk_launcher_status_get_launcer_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a hk_launcher_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_launcher_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_launcher_status_decode(const mavlink_message_t* msg, mavlink_hk_launcher_status_t* hk_launcher_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_launcher_status->launcer_lat = mavlink_msg_hk_launcher_status_get_launcer_lat(msg);
    hk_launcher_status->launcer_lon = mavlink_msg_hk_launcher_status_get_launcer_lon(msg);
    hk_launcher_status->launcer_alt = mavlink_msg_hk_launcher_status_get_launcer_alt(msg);
    hk_launcher_status->lid_status = mavlink_msg_hk_launcher_status_get_lid_status(msg);
    hk_launcher_status->lock_status = mavlink_msg_hk_launcher_status_get_lock_status(msg);
    hk_launcher_status->box_battery = mavlink_msg_hk_launcher_status_get_box_battery(msg);
    hk_launcher_status->ready_count = mavlink_msg_hk_launcher_status_get_ready_count(msg);
    hk_launcher_status->total_count = mavlink_msg_hk_launcher_status_get_total_count(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN;
        memset(hk_launcher_status, 0, MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_LEN);
    memcpy(hk_launcher_status, _MAV_PAYLOAD(msg), len);
#endif
}
