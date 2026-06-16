#pragma once
// MESSAGE HK_LAUNCHER_DETAIL PACKING

#define MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL 60001


typedef struct __mavlink_hk_launcher_detail_t {
 uint8_t drone_index; /*<  待发射无人机序号*/
 char drone_name[20]; /*<  无人机名称/编号*/
 char drone_model[20]; /*<  无人机型号名称*/
} mavlink_hk_launcher_detail_t;

#define MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN 41
#define MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN 41
#define MAVLINK_MSG_ID_60001_LEN 41
#define MAVLINK_MSG_ID_60001_MIN_LEN 41

#define MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC 84
#define MAVLINK_MSG_ID_60001_CRC 84

#define MAVLINK_MSG_HK_LAUNCHER_DETAIL_FIELD_DRONE_NAME_LEN 20
#define MAVLINK_MSG_HK_LAUNCHER_DETAIL_FIELD_DRONE_MODEL_LEN 20

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_LAUNCHER_DETAIL { \
    60001, \
    "HK_LAUNCHER_DETAIL", \
    3, \
    {  { "drone_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hk_launcher_detail_t, drone_index) }, \
         { "drone_name", NULL, MAVLINK_TYPE_CHAR, 20, 1, offsetof(mavlink_hk_launcher_detail_t, drone_name) }, \
         { "drone_model", NULL, MAVLINK_TYPE_CHAR, 20, 21, offsetof(mavlink_hk_launcher_detail_t, drone_model) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_LAUNCHER_DETAIL { \
    "HK_LAUNCHER_DETAIL", \
    3, \
    {  { "drone_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hk_launcher_detail_t, drone_index) }, \
         { "drone_name", NULL, MAVLINK_TYPE_CHAR, 20, 1, offsetof(mavlink_hk_launcher_detail_t, drone_name) }, \
         { "drone_model", NULL, MAVLINK_TYPE_CHAR, 20, 21, offsetof(mavlink_hk_launcher_detail_t, drone_model) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_launcher_detail message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param drone_index  待发射无人机序号
 * @param drone_name  无人机名称/编号
 * @param drone_model  无人机型号名称
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t drone_index, const char *drone_name, const char *drone_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN];
    _mav_put_uint8_t(buf, 0, drone_index);
    _mav_put_char_array(buf, 1, drone_name, 20);
    _mav_put_char_array(buf, 21, drone_model, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#else
    mavlink_hk_launcher_detail_t packet;
    packet.drone_index = drone_index;
    mav_array_assign_char(packet.drone_name, drone_name, 20);
    mav_array_assign_char(packet.drone_model, drone_model, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
}

/**
 * @brief Pack a hk_launcher_detail message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param drone_index  待发射无人机序号
 * @param drone_name  无人机名称/编号
 * @param drone_model  无人机型号名称
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t drone_index, const char *drone_name, const char *drone_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN];
    _mav_put_uint8_t(buf, 0, drone_index);
    _mav_put_char_array(buf, 1, drone_name, 20);
    _mav_put_char_array(buf, 21, drone_model, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#else
    mavlink_hk_launcher_detail_t packet;
    packet.drone_index = drone_index;
    mav_array_memcpy(packet.drone_name, drone_name, sizeof(char)*20);
    mav_array_memcpy(packet.drone_model, drone_model, sizeof(char)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#endif
}

/**
 * @brief Pack a hk_launcher_detail message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param drone_index  待发射无人机序号
 * @param drone_name  无人机名称/编号
 * @param drone_model  无人机型号名称
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t drone_index,const char *drone_name,const char *drone_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN];
    _mav_put_uint8_t(buf, 0, drone_index);
    _mav_put_char_array(buf, 1, drone_name, 20);
    _mav_put_char_array(buf, 21, drone_model, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#else
    mavlink_hk_launcher_detail_t packet;
    packet.drone_index = drone_index;
    mav_array_assign_char(packet.drone_name, drone_name, 20);
    mav_array_assign_char(packet.drone_model, drone_model, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
}

/**
 * @brief Encode a hk_launcher_detail struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_launcher_detail C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_launcher_detail_t* hk_launcher_detail)
{
    return mavlink_msg_hk_launcher_detail_pack(system_id, component_id, msg, hk_launcher_detail->drone_index, hk_launcher_detail->drone_name, hk_launcher_detail->drone_model);
}

/**
 * @brief Encode a hk_launcher_detail struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_launcher_detail C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_launcher_detail_t* hk_launcher_detail)
{
    return mavlink_msg_hk_launcher_detail_pack_chan(system_id, component_id, chan, msg, hk_launcher_detail->drone_index, hk_launcher_detail->drone_name, hk_launcher_detail->drone_model);
}

/**
 * @brief Encode a hk_launcher_detail struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_launcher_detail C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_launcher_detail_t* hk_launcher_detail)
{
    return mavlink_msg_hk_launcher_detail_pack_status(system_id, component_id, _status, msg,  hk_launcher_detail->drone_index, hk_launcher_detail->drone_name, hk_launcher_detail->drone_model);
}

/**
 * @brief Send a hk_launcher_detail message
 * @param chan MAVLink channel to send the message
 *
 * @param drone_index  待发射无人机序号
 * @param drone_name  无人机名称/编号
 * @param drone_model  无人机型号名称
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_launcher_detail_send(mavlink_channel_t chan, uint8_t drone_index, const char *drone_name, const char *drone_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN];
    _mav_put_uint8_t(buf, 0, drone_index);
    _mav_put_char_array(buf, 1, drone_name, 20);
    _mav_put_char_array(buf, 21, drone_model, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL, buf, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
#else
    mavlink_hk_launcher_detail_t packet;
    packet.drone_index = drone_index;
    mav_array_assign_char(packet.drone_name, drone_name, 20);
    mav_array_assign_char(packet.drone_model, drone_model, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL, (const char *)&packet, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
#endif
}

/**
 * @brief Send a hk_launcher_detail message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_launcher_detail_send_struct(mavlink_channel_t chan, const mavlink_hk_launcher_detail_t* hk_launcher_detail)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_launcher_detail_send(chan, hk_launcher_detail->drone_index, hk_launcher_detail->drone_name, hk_launcher_detail->drone_model);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL, (const char *)hk_launcher_detail, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_launcher_detail_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t drone_index, const char *drone_name, const char *drone_model)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, drone_index);
    _mav_put_char_array(buf, 1, drone_name, 20);
    _mav_put_char_array(buf, 21, drone_model, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL, buf, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
#else
    mavlink_hk_launcher_detail_t *packet = (mavlink_hk_launcher_detail_t *)msgbuf;
    packet->drone_index = drone_index;
    mav_array_assign_char(packet->drone_name, drone_name, 20);
    mav_array_assign_char(packet->drone_model, drone_model, 20);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL, (const char *)packet, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_LAUNCHER_DETAIL UNPACKING


/**
 * @brief Get field drone_index from hk_launcher_detail message
 *
 * @return  待发射无人机序号
 */
static inline uint8_t mavlink_msg_hk_launcher_detail_get_drone_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field drone_name from hk_launcher_detail message
 *
 * @return  无人机名称/编号
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_get_drone_name(const mavlink_message_t* msg, char *drone_name)
{
    return _MAV_RETURN_char_array(msg, drone_name, 20,  1);
}

/**
 * @brief Get field drone_model from hk_launcher_detail message
 *
 * @return  无人机型号名称
 */
static inline uint16_t mavlink_msg_hk_launcher_detail_get_drone_model(const mavlink_message_t* msg, char *drone_model)
{
    return _MAV_RETURN_char_array(msg, drone_model, 20,  21);
}

/**
 * @brief Decode a hk_launcher_detail message into a struct
 *
 * @param msg The message to decode
 * @param hk_launcher_detail C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_launcher_detail_decode(const mavlink_message_t* msg, mavlink_hk_launcher_detail_t* hk_launcher_detail)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_launcher_detail->drone_index = mavlink_msg_hk_launcher_detail_get_drone_index(msg);
    mavlink_msg_hk_launcher_detail_get_drone_name(msg, hk_launcher_detail->drone_name);
    mavlink_msg_hk_launcher_detail_get_drone_model(msg, hk_launcher_detail->drone_model);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN? msg->len : MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN;
        memset(hk_launcher_detail, 0, MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_LEN);
    memcpy(hk_launcher_detail, _MAV_PAYLOAD(msg), len);
#endif
}
