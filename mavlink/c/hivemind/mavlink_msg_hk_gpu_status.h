#pragma once
// MESSAGE HK_GPU_STATUS PACKING

#define MAVLINK_MSG_ID_HK_GPU_STATUS 50114


typedef struct __mavlink_hk_gpu_status_t {
 uint8_t gpu_usage; /*<  GPU 使用率（%）*/
 int8_t gpu_temperature; /*<  GPU 温度（°C）*/
} mavlink_hk_gpu_status_t;

#define MAVLINK_MSG_ID_HK_GPU_STATUS_LEN 2
#define MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN 2
#define MAVLINK_MSG_ID_50114_LEN 2
#define MAVLINK_MSG_ID_50114_MIN_LEN 2

#define MAVLINK_MSG_ID_HK_GPU_STATUS_CRC 90
#define MAVLINK_MSG_ID_50114_CRC 90



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_GPU_STATUS { \
    50114, \
    "HK_GPU_STATUS", \
    2, \
    {  { "gpu_usage", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hk_gpu_status_t, gpu_usage) }, \
         { "gpu_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_hk_gpu_status_t, gpu_temperature) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_GPU_STATUS { \
    "HK_GPU_STATUS", \
    2, \
    {  { "gpu_usage", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_hk_gpu_status_t, gpu_usage) }, \
         { "gpu_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_hk_gpu_status_t, gpu_temperature) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_gpu_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_gpu_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GPU_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, gpu_usage);
    _mav_put_int8_t(buf, 1, gpu_temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#else
    mavlink_hk_gpu_status_t packet;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_GPU_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
}

/**
 * @brief Pack a hk_gpu_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_gpu_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GPU_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, gpu_usage);
    _mav_put_int8_t(buf, 1, gpu_temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#else
    mavlink_hk_gpu_status_t packet;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_GPU_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_gpu_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_gpu_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t gpu_usage,int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GPU_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, gpu_usage);
    _mav_put_int8_t(buf, 1, gpu_temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#else
    mavlink_hk_gpu_status_t packet;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_GPU_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
}

/**
 * @brief Encode a hk_gpu_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_gpu_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_gpu_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_gpu_status_t* hk_gpu_status)
{
    return mavlink_msg_hk_gpu_status_pack(system_id, component_id, msg, hk_gpu_status->gpu_usage, hk_gpu_status->gpu_temperature);
}

/**
 * @brief Encode a hk_gpu_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_gpu_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_gpu_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_gpu_status_t* hk_gpu_status)
{
    return mavlink_msg_hk_gpu_status_pack_chan(system_id, component_id, chan, msg, hk_gpu_status->gpu_usage, hk_gpu_status->gpu_temperature);
}

/**
 * @brief Encode a hk_gpu_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_gpu_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_gpu_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_gpu_status_t* hk_gpu_status)
{
    return mavlink_msg_hk_gpu_status_pack_status(system_id, component_id, _status, msg,  hk_gpu_status->gpu_usage, hk_gpu_status->gpu_temperature);
}

/**
 * @brief Send a hk_gpu_status message
 * @param chan MAVLink channel to send the message
 *
 * @param gpu_usage  GPU 使用率（%）
 * @param gpu_temperature  GPU 温度（°C）
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_gpu_status_send(mavlink_channel_t chan, uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_GPU_STATUS_LEN];
    _mav_put_uint8_t(buf, 0, gpu_usage);
    _mav_put_int8_t(buf, 1, gpu_temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GPU_STATUS, buf, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
#else
    mavlink_hk_gpu_status_t packet;
    packet.gpu_usage = gpu_usage;
    packet.gpu_temperature = gpu_temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GPU_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_gpu_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_gpu_status_send_struct(mavlink_channel_t chan, const mavlink_hk_gpu_status_t* hk_gpu_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_gpu_status_send(chan, hk_gpu_status->gpu_usage, hk_gpu_status->gpu_temperature);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GPU_STATUS, (const char *)hk_gpu_status, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_GPU_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_gpu_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t gpu_usage, int8_t gpu_temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, gpu_usage);
    _mav_put_int8_t(buf, 1, gpu_temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GPU_STATUS, buf, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
#else
    mavlink_hk_gpu_status_t *packet = (mavlink_hk_gpu_status_t *)msgbuf;
    packet->gpu_usage = gpu_usage;
    packet->gpu_temperature = gpu_temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_GPU_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN, MAVLINK_MSG_ID_HK_GPU_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_GPU_STATUS UNPACKING


/**
 * @brief Get field gpu_usage from hk_gpu_status message
 *
 * @return  GPU 使用率（%）
 */
static inline uint8_t mavlink_msg_hk_gpu_status_get_gpu_usage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field gpu_temperature from hk_gpu_status message
 *
 * @return  GPU 温度（°C）
 */
static inline int8_t mavlink_msg_hk_gpu_status_get_gpu_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Decode a hk_gpu_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_gpu_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_gpu_status_decode(const mavlink_message_t* msg, mavlink_hk_gpu_status_t* hk_gpu_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_gpu_status->gpu_usage = mavlink_msg_hk_gpu_status_get_gpu_usage(msg);
    hk_gpu_status->gpu_temperature = mavlink_msg_hk_gpu_status_get_gpu_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_GPU_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_GPU_STATUS_LEN;
        memset(hk_gpu_status, 0, MAVLINK_MSG_ID_HK_GPU_STATUS_LEN);
    memcpy(hk_gpu_status, _MAV_PAYLOAD(msg), len);
#endif
}
