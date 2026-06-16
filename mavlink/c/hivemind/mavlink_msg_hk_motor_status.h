#pragma once
// MESSAGE HK_MOTOR_STATUS PACKING

#define MAVLINK_MSG_ID_HK_MOTOR_STATUS 50001


typedef struct __mavlink_hk_motor_status_t {
 uint16_t motor_rpm; /*<  转速（RPM）*/
 uint8_t motor_index; /*<  电机序号（从 0 开始）*/
 int8_t motor_temperature; /*<  电机温度（°C）*/
 uint8_t motor_thrust; /*<  推力输出百分比（%）*/
 uint8_t motor_status; /*<  0=正常, 1=故障*/
} mavlink_hk_motor_status_t;

#define MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN 6
#define MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN 6
#define MAVLINK_MSG_ID_50001_LEN 6
#define MAVLINK_MSG_ID_50001_MIN_LEN 6

#define MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC 179
#define MAVLINK_MSG_ID_50001_CRC 179



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_MOTOR_STATUS { \
    50001, \
    "HK_MOTOR_STATUS", \
    5, \
    {  { "motor_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_hk_motor_status_t, motor_index) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hk_motor_status_t, motor_rpm) }, \
         { "motor_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_hk_motor_status_t, motor_temperature) }, \
         { "motor_thrust", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_hk_motor_status_t, motor_thrust) }, \
         { "motor_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_hk_motor_status_t, motor_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_MOTOR_STATUS { \
    "HK_MOTOR_STATUS", \
    5, \
    {  { "motor_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_hk_motor_status_t, motor_index) }, \
         { "motor_rpm", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_hk_motor_status_t, motor_rpm) }, \
         { "motor_temperature", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_hk_motor_status_t, motor_temperature) }, \
         { "motor_thrust", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_hk_motor_status_t, motor_thrust) }, \
         { "motor_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_hk_motor_status_t, motor_status) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_motor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor_index  电机序号（从 0 开始）
 * @param motor_rpm  转速（RPM）
 * @param motor_temperature  电机温度（°C）
 * @param motor_thrust  推力输出百分比（%）
 * @param motor_status  0=正常, 1=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_motor_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t motor_index, uint16_t motor_rpm, int8_t motor_temperature, uint8_t motor_thrust, uint8_t motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, motor_rpm);
    _mav_put_uint8_t(buf, 2, motor_index);
    _mav_put_int8_t(buf, 3, motor_temperature);
    _mav_put_uint8_t(buf, 4, motor_thrust);
    _mav_put_uint8_t(buf, 5, motor_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#else
    mavlink_hk_motor_status_t packet;
    packet.motor_rpm = motor_rpm;
    packet.motor_index = motor_index;
    packet.motor_temperature = motor_temperature;
    packet.motor_thrust = motor_thrust;
    packet.motor_status = motor_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_MOTOR_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
}

/**
 * @brief Pack a hk_motor_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param motor_index  电机序号（从 0 开始）
 * @param motor_rpm  转速（RPM）
 * @param motor_temperature  电机温度（°C）
 * @param motor_thrust  推力输出百分比（%）
 * @param motor_status  0=正常, 1=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_motor_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t motor_index, uint16_t motor_rpm, int8_t motor_temperature, uint8_t motor_thrust, uint8_t motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, motor_rpm);
    _mav_put_uint8_t(buf, 2, motor_index);
    _mav_put_int8_t(buf, 3, motor_temperature);
    _mav_put_uint8_t(buf, 4, motor_thrust);
    _mav_put_uint8_t(buf, 5, motor_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#else
    mavlink_hk_motor_status_t packet;
    packet.motor_rpm = motor_rpm;
    packet.motor_index = motor_index;
    packet.motor_temperature = motor_temperature;
    packet.motor_thrust = motor_thrust;
    packet.motor_status = motor_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_MOTOR_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_motor_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param motor_index  电机序号（从 0 开始）
 * @param motor_rpm  转速（RPM）
 * @param motor_temperature  电机温度（°C）
 * @param motor_thrust  推力输出百分比（%）
 * @param motor_status  0=正常, 1=故障
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_motor_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t motor_index,uint16_t motor_rpm,int8_t motor_temperature,uint8_t motor_thrust,uint8_t motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, motor_rpm);
    _mav_put_uint8_t(buf, 2, motor_index);
    _mav_put_int8_t(buf, 3, motor_temperature);
    _mav_put_uint8_t(buf, 4, motor_thrust);
    _mav_put_uint8_t(buf, 5, motor_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#else
    mavlink_hk_motor_status_t packet;
    packet.motor_rpm = motor_rpm;
    packet.motor_index = motor_index;
    packet.motor_temperature = motor_temperature;
    packet.motor_thrust = motor_thrust;
    packet.motor_status = motor_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_MOTOR_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
}

/**
 * @brief Encode a hk_motor_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_motor_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_motor_status_t* hk_motor_status)
{
    return mavlink_msg_hk_motor_status_pack(system_id, component_id, msg, hk_motor_status->motor_index, hk_motor_status->motor_rpm, hk_motor_status->motor_temperature, hk_motor_status->motor_thrust, hk_motor_status->motor_status);
}

/**
 * @brief Encode a hk_motor_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_motor_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_motor_status_t* hk_motor_status)
{
    return mavlink_msg_hk_motor_status_pack_chan(system_id, component_id, chan, msg, hk_motor_status->motor_index, hk_motor_status->motor_rpm, hk_motor_status->motor_temperature, hk_motor_status->motor_thrust, hk_motor_status->motor_status);
}

/**
 * @brief Encode a hk_motor_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_motor_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_motor_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_motor_status_t* hk_motor_status)
{
    return mavlink_msg_hk_motor_status_pack_status(system_id, component_id, _status, msg,  hk_motor_status->motor_index, hk_motor_status->motor_rpm, hk_motor_status->motor_temperature, hk_motor_status->motor_thrust, hk_motor_status->motor_status);
}

/**
 * @brief Send a hk_motor_status message
 * @param chan MAVLink channel to send the message
 *
 * @param motor_index  电机序号（从 0 开始）
 * @param motor_rpm  转速（RPM）
 * @param motor_temperature  电机温度（°C）
 * @param motor_thrust  推力输出百分比（%）
 * @param motor_status  0=正常, 1=故障
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_motor_status_send(mavlink_channel_t chan, uint8_t motor_index, uint16_t motor_rpm, int8_t motor_temperature, uint8_t motor_thrust, uint8_t motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN];
    _mav_put_uint16_t(buf, 0, motor_rpm);
    _mav_put_uint8_t(buf, 2, motor_index);
    _mav_put_int8_t(buf, 3, motor_temperature);
    _mav_put_uint8_t(buf, 4, motor_thrust);
    _mav_put_uint8_t(buf, 5, motor_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MOTOR_STATUS, buf, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
#else
    mavlink_hk_motor_status_t packet;
    packet.motor_rpm = motor_rpm;
    packet.motor_index = motor_index;
    packet.motor_temperature = motor_temperature;
    packet.motor_thrust = motor_thrust;
    packet.motor_status = motor_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MOTOR_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_motor_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_motor_status_send_struct(mavlink_channel_t chan, const mavlink_hk_motor_status_t* hk_motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_motor_status_send(chan, hk_motor_status->motor_index, hk_motor_status->motor_rpm, hk_motor_status->motor_temperature, hk_motor_status->motor_thrust, hk_motor_status->motor_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MOTOR_STATUS, (const char *)hk_motor_status, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_motor_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t motor_index, uint16_t motor_rpm, int8_t motor_temperature, uint8_t motor_thrust, uint8_t motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, motor_rpm);
    _mav_put_uint8_t(buf, 2, motor_index);
    _mav_put_int8_t(buf, 3, motor_temperature);
    _mav_put_uint8_t(buf, 4, motor_thrust);
    _mav_put_uint8_t(buf, 5, motor_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MOTOR_STATUS, buf, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
#else
    mavlink_hk_motor_status_t *packet = (mavlink_hk_motor_status_t *)msgbuf;
    packet->motor_rpm = motor_rpm;
    packet->motor_index = motor_index;
    packet->motor_temperature = motor_temperature;
    packet->motor_thrust = motor_thrust;
    packet->motor_status = motor_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_MOTOR_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN, MAVLINK_MSG_ID_HK_MOTOR_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_MOTOR_STATUS UNPACKING


/**
 * @brief Get field motor_index from hk_motor_status message
 *
 * @return  电机序号（从 0 开始）
 */
static inline uint8_t mavlink_msg_hk_motor_status_get_motor_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field motor_rpm from hk_motor_status message
 *
 * @return  转速（RPM）
 */
static inline uint16_t mavlink_msg_hk_motor_status_get_motor_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field motor_temperature from hk_motor_status message
 *
 * @return  电机温度（°C）
 */
static inline int8_t mavlink_msg_hk_motor_status_get_motor_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Get field motor_thrust from hk_motor_status message
 *
 * @return  推力输出百分比（%）
 */
static inline uint8_t mavlink_msg_hk_motor_status_get_motor_thrust(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field motor_status from hk_motor_status message
 *
 * @return  0=正常, 1=故障
 */
static inline uint8_t mavlink_msg_hk_motor_status_get_motor_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a hk_motor_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_motor_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_motor_status_decode(const mavlink_message_t* msg, mavlink_hk_motor_status_t* hk_motor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_motor_status->motor_rpm = mavlink_msg_hk_motor_status_get_motor_rpm(msg);
    hk_motor_status->motor_index = mavlink_msg_hk_motor_status_get_motor_index(msg);
    hk_motor_status->motor_temperature = mavlink_msg_hk_motor_status_get_motor_temperature(msg);
    hk_motor_status->motor_thrust = mavlink_msg_hk_motor_status_get_motor_thrust(msg);
    hk_motor_status->motor_status = mavlink_msg_hk_motor_status_get_motor_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN;
        memset(hk_motor_status, 0, MAVLINK_MSG_ID_HK_MOTOR_STATUS_LEN);
    memcpy(hk_motor_status, _MAV_PAYLOAD(msg), len);
#endif
}
