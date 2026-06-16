#pragma once
// MESSAGE HK_GCS_POSITION PACKING

#define MAVLINK_MSG_ID_HK_GCS_POSITION 70000


typedef struct __mavlink_hk_gcs_position_t {
 int32_t gcs_lat; /*<  纬度（度 × 10^7）*/
 int32_t gcs_lon; /*<  经度（度 × 10^7）*/
 int32_t gcs_alt; /*<  海拔高度（mm）*/
} mavlink_hk_gcs_position_t;

#define MAVLINK_MSG_ID_HK_GCS_POSITION_LEN 12
#define MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN 12
#define MAVLINK_MSG_ID_70000_LEN 12
#define MAVLINK_MSG_ID_70000_MIN_LEN 12

#define MAVLINK_MSG_ID_HK_GCS_POSITION_CRC 246
#define MAVLINK_MSG_ID_70000_CRC 246



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_GCS_POSITION { \
    70000, \
    "HK_GCS_POSITION", \
    3, \
    {  { "gcs_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_gcs_position_t, gcs_lat) }, \
         { "gcs_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_gcs_position_t, gcs_lon) }, \
         { "gcs_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_gcs_position_t, gcs_alt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_GCS_POSITION { \
    "HK_GCS_POSITION", \
    3, \
    {  { "gcs_lat", NULL, MAVLINK_TYPE_INT32_T, 0, 0, offsetof(mavlink_hk_gcs_position_t, gcs_lat) }, \
         { "gcs_lon", NULL, MAVLINK_TYPE_INT32_T, 0, 4, offsetof(mavlink_hk_gcs_position_t, gcs_lon) }, \
         { "gcs_alt", NULL, MAVLINK_TYPE_INT32_T, 0, 8, offsetof(mavlink_hk_gcs_position_t, gcs_alt) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_gcs_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gcs_lat  纬度（度 × 10^7）
 * @param gcs_lon  经度（度 × 10^7）
 * @param gcs_alt  海拔高度（mm）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_gcs_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int32_t gcs_lat, int32_t gcs_lon, int32_t gcs_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GCS_POSITION_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_int32_t(buf, 8, gcs_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#else
    mavlink_hk_gcs_position_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt = gcs_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_GCS_POSITION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
}

/**
 * @brief Pack a hk_gcs_position message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param gcs_lat  纬度（度 × 10^7）
 * @param gcs_lon  经度（度 × 10^7）
 * @param gcs_alt  海拔高度（mm）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_gcs_position_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               int32_t gcs_lat, int32_t gcs_lon, int32_t gcs_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GCS_POSITION_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_int32_t(buf, 8, gcs_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#else
    mavlink_hk_gcs_position_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt = gcs_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_GCS_POSITION;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#endif
}

/**
 * @brief Pack a hk_gcs_position message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gcs_lat  纬度（度 × 10^7）
 * @param gcs_lon  经度（度 × 10^7）
 * @param gcs_alt  海拔高度（mm）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_gcs_position_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int32_t gcs_lat,int32_t gcs_lon,int32_t gcs_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GCS_POSITION_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_int32_t(buf, 8, gcs_alt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#else
    mavlink_hk_gcs_position_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt = gcs_alt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_GCS_POSITION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
}

/**
 * @brief Encode a hk_gcs_position struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_gcs_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_gcs_position_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_gcs_position_t* hk_gcs_position)
{
    return mavlink_msg_hk_gcs_position_pack(system_id, component_id, msg, hk_gcs_position->gcs_lat, hk_gcs_position->gcs_lon, hk_gcs_position->gcs_alt);
}

/**
 * @brief Encode a hk_gcs_position struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_gcs_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_gcs_position_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_gcs_position_t* hk_gcs_position)
{
    return mavlink_msg_hk_gcs_position_pack_chan(system_id, component_id, chan, msg, hk_gcs_position->gcs_lat, hk_gcs_position->gcs_lon, hk_gcs_position->gcs_alt);
}

/**
 * @brief Encode a hk_gcs_position struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_gcs_position C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_gcs_position_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_gcs_position_t* hk_gcs_position)
{
    return mavlink_msg_hk_gcs_position_pack_status(system_id, component_id, _status, msg,  hk_gcs_position->gcs_lat, hk_gcs_position->gcs_lon, hk_gcs_position->gcs_alt);
}

/**
 * @brief Send a hk_gcs_position message
 * @param chan MAVLink channel to send the message
 *
 * @param gcs_lat  纬度（度 × 10^7）
 * @param gcs_lon  经度（度 × 10^7）
 * @param gcs_alt  海拔高度（mm）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_gcs_position_send(mavlink_channel_t chan, int32_t gcs_lat, int32_t gcs_lon, int32_t gcs_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GCS_POSITION_LEN];
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_int32_t(buf, 8, gcs_alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GCS_POSITION, buf, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
#else
    mavlink_hk_gcs_position_t packet;
    packet.gcs_lat = gcs_lat;
    packet.gcs_lon = gcs_lon;
    packet.gcs_alt = gcs_alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GCS_POSITION, (const char *)&packet, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
#endif
}

/**
 * @brief Send a hk_gcs_position message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_gcs_position_send_struct(mavlink_channel_t chan, const mavlink_hk_gcs_position_t* hk_gcs_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_gcs_position_send(chan, hk_gcs_position->gcs_lat, hk_gcs_position->gcs_lon, hk_gcs_position->gcs_alt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GCS_POSITION, (const char *)hk_gcs_position, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_GCS_POSITION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_gcs_position_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int32_t gcs_lat, int32_t gcs_lon, int32_t gcs_alt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int32_t(buf, 0, gcs_lat);
    _mav_put_int32_t(buf, 4, gcs_lon);
    _mav_put_int32_t(buf, 8, gcs_alt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GCS_POSITION, buf, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
#else
    mavlink_hk_gcs_position_t *packet = (mavlink_hk_gcs_position_t *)msgbuf;
    packet->gcs_lat = gcs_lat;
    packet->gcs_lon = gcs_lon;
    packet->gcs_alt = gcs_alt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GCS_POSITION, (const char *)packet, MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN, MAVLINK_MSG_ID_HK_GCS_POSITION_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_GCS_POSITION UNPACKING


/**
 * @brief Get field gcs_lat from hk_gcs_position message
 *
 * @return  纬度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_gcs_position_get_gcs_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  0);
}

/**
 * @brief Get field gcs_lon from hk_gcs_position message
 *
 * @return  经度（度 × 10^7）
 */
static inline int32_t mavlink_msg_hk_gcs_position_get_gcs_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  4);
}

/**
 * @brief Get field gcs_alt from hk_gcs_position message
 *
 * @return  海拔高度（mm）
 */
static inline int32_t mavlink_msg_hk_gcs_position_get_gcs_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  8);
}

/**
 * @brief Decode a hk_gcs_position message into a struct
 *
 * @param msg The message to decode
 * @param hk_gcs_position C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_gcs_position_decode(const mavlink_message_t* msg, mavlink_hk_gcs_position_t* hk_gcs_position)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_gcs_position->gcs_lat = mavlink_msg_hk_gcs_position_get_gcs_lat(msg);
    hk_gcs_position->gcs_lon = mavlink_msg_hk_gcs_position_get_gcs_lon(msg);
    hk_gcs_position->gcs_alt = mavlink_msg_hk_gcs_position_get_gcs_alt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_GCS_POSITION_LEN? msg->len : MAVLINK_MSG_ID_HK_GCS_POSITION_LEN;
        memset(hk_gcs_position, 0, MAVLINK_MSG_ID_HK_GCS_POSITION_LEN);
    memcpy(hk_gcs_position, _MAV_PAYLOAD(msg), len);
#endif
}
