#pragma once
// MESSAGE HK_DRONE_FLIGHT_STATUS PACKING

#define MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS 50111


typedef struct __mavlink_hk_drone_flight_status_t {
 uint64_t timestamp_ms; /*<  ROS 时间戳（毫秒）*/
 uint8_t flight_mode; /*<  PX4 nav_state；AP 模式由 APMavlinkAdapter 翻译*/
 uint8_t is_armed; /*<  是否解锁，0=否，1=是*/
 uint8_t land_state; /*<  起落状态：0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR*/
 uint8_t need_attack; /*<  策略 need_attack_ 标志*/
 uint8_t task_finished; /*<  任务结束标志*/
 uint8_t current_task_state; /*<  任务状态：0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH, 3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY*/
 uint8_t guidance_mode; /*<  制导模式：0=TRACKING_ONLY, 1=PURE_PURSUIT, 2=PROPORTIONAL_NAVIGATION*/
} mavlink_hk_drone_flight_status_t;

#define MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN 15
#define MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN 15
#define MAVLINK_MSG_ID_50111_LEN 15
#define MAVLINK_MSG_ID_50111_MIN_LEN 15

#define MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC 175
#define MAVLINK_MSG_ID_50111_CRC 175



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DRONE_FLIGHT_STATUS { \
    50111, \
    "HK_DRONE_FLIGHT_STATUS", \
    8, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_flight_status_t, timestamp_ms) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_hk_drone_flight_status_t, flight_mode) }, \
         { "is_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_hk_drone_flight_status_t, is_armed) }, \
         { "land_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_hk_drone_flight_status_t, land_state) }, \
         { "need_attack", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_hk_drone_flight_status_t, need_attack) }, \
         { "task_finished", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_hk_drone_flight_status_t, task_finished) }, \
         { "current_task_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_hk_drone_flight_status_t, current_task_state) }, \
         { "guidance_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_hk_drone_flight_status_t, guidance_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DRONE_FLIGHT_STATUS { \
    "HK_DRONE_FLIGHT_STATUS", \
    8, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_drone_flight_status_t, timestamp_ms) }, \
         { "flight_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_hk_drone_flight_status_t, flight_mode) }, \
         { "is_armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_hk_drone_flight_status_t, is_armed) }, \
         { "land_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_hk_drone_flight_status_t, land_state) }, \
         { "need_attack", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_hk_drone_flight_status_t, need_attack) }, \
         { "task_finished", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_hk_drone_flight_status_t, task_finished) }, \
         { "current_task_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_hk_drone_flight_status_t, current_task_state) }, \
         { "guidance_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_hk_drone_flight_status_t, guidance_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_drone_flight_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param flight_mode  PX4 nav_state；AP 模式由 APMavlinkAdapter 翻译
 * @param is_armed  是否解锁，0=否，1=是
 * @param land_state  起落状态：0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR
 * @param need_attack  策略 need_attack_ 标志
 * @param task_finished  任务结束标志
 * @param current_task_state  任务状态：0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH, 3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY
 * @param guidance_mode  制导模式：0=TRACKING_ONLY, 1=PURE_PURSUIT, 2=PROPORTIONAL_NAVIGATION
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_flight_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t flight_mode, uint8_t is_armed, uint8_t land_state, uint8_t need_attack, uint8_t task_finished, uint8_t current_task_state, uint8_t guidance_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 8, flight_mode);
    _mav_put_uint8_t(buf, 9, is_armed);
    _mav_put_uint8_t(buf, 10, land_state);
    _mav_put_uint8_t(buf, 11, need_attack);
    _mav_put_uint8_t(buf, 12, task_finished);
    _mav_put_uint8_t(buf, 13, current_task_state);
    _mav_put_uint8_t(buf, 14, guidance_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#else
    mavlink_hk_drone_flight_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.flight_mode = flight_mode;
    packet.is_armed = is_armed;
    packet.land_state = land_state;
    packet.need_attack = need_attack;
    packet.task_finished = task_finished;
    packet.current_task_state = current_task_state;
    packet.guidance_mode = guidance_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
}

/**
 * @brief Pack a hk_drone_flight_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param flight_mode  PX4 nav_state；AP 模式由 APMavlinkAdapter 翻译
 * @param is_armed  是否解锁，0=否，1=是
 * @param land_state  起落状态：0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR
 * @param need_attack  策略 need_attack_ 标志
 * @param task_finished  任务结束标志
 * @param current_task_state  任务状态：0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH, 3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY
 * @param guidance_mode  制导模式：0=TRACKING_ONLY, 1=PURE_PURSUIT, 2=PROPORTIONAL_NAVIGATION
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_flight_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t flight_mode, uint8_t is_armed, uint8_t land_state, uint8_t need_attack, uint8_t task_finished, uint8_t current_task_state, uint8_t guidance_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 8, flight_mode);
    _mav_put_uint8_t(buf, 9, is_armed);
    _mav_put_uint8_t(buf, 10, land_state);
    _mav_put_uint8_t(buf, 11, need_attack);
    _mav_put_uint8_t(buf, 12, task_finished);
    _mav_put_uint8_t(buf, 13, current_task_state);
    _mav_put_uint8_t(buf, 14, guidance_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#else
    mavlink_hk_drone_flight_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.flight_mode = flight_mode;
    packet.is_armed = is_armed;
    packet.land_state = land_state;
    packet.need_attack = need_attack;
    packet.task_finished = task_finished;
    packet.current_task_state = current_task_state;
    packet.guidance_mode = guidance_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#endif
}

/**
 * @brief Pack a hk_drone_flight_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param flight_mode  PX4 nav_state；AP 模式由 APMavlinkAdapter 翻译
 * @param is_armed  是否解锁，0=否，1=是
 * @param land_state  起落状态：0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR
 * @param need_attack  策略 need_attack_ 标志
 * @param task_finished  任务结束标志
 * @param current_task_state  任务状态：0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH, 3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY
 * @param guidance_mode  制导模式：0=TRACKING_ONLY, 1=PURE_PURSUIT, 2=PROPORTIONAL_NAVIGATION
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_drone_flight_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint8_t flight_mode,uint8_t is_armed,uint8_t land_state,uint8_t need_attack,uint8_t task_finished,uint8_t current_task_state,uint8_t guidance_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 8, flight_mode);
    _mav_put_uint8_t(buf, 9, is_armed);
    _mav_put_uint8_t(buf, 10, land_state);
    _mav_put_uint8_t(buf, 11, need_attack);
    _mav_put_uint8_t(buf, 12, task_finished);
    _mav_put_uint8_t(buf, 13, current_task_state);
    _mav_put_uint8_t(buf, 14, guidance_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#else
    mavlink_hk_drone_flight_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.flight_mode = flight_mode;
    packet.is_armed = is_armed;
    packet.land_state = land_state;
    packet.need_attack = need_attack;
    packet.task_finished = task_finished;
    packet.current_task_state = current_task_state;
    packet.guidance_mode = guidance_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
}

/**
 * @brief Encode a hk_drone_flight_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_flight_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_flight_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_drone_flight_status_t* hk_drone_flight_status)
{
    return mavlink_msg_hk_drone_flight_status_pack(system_id, component_id, msg, hk_drone_flight_status->timestamp_ms, hk_drone_flight_status->flight_mode, hk_drone_flight_status->is_armed, hk_drone_flight_status->land_state, hk_drone_flight_status->need_attack, hk_drone_flight_status->task_finished, hk_drone_flight_status->current_task_state, hk_drone_flight_status->guidance_mode);
}

/**
 * @brief Encode a hk_drone_flight_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_flight_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_flight_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_drone_flight_status_t* hk_drone_flight_status)
{
    return mavlink_msg_hk_drone_flight_status_pack_chan(system_id, component_id, chan, msg, hk_drone_flight_status->timestamp_ms, hk_drone_flight_status->flight_mode, hk_drone_flight_status->is_armed, hk_drone_flight_status->land_state, hk_drone_flight_status->need_attack, hk_drone_flight_status->task_finished, hk_drone_flight_status->current_task_state, hk_drone_flight_status->guidance_mode);
}

/**
 * @brief Encode a hk_drone_flight_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_drone_flight_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_drone_flight_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_drone_flight_status_t* hk_drone_flight_status)
{
    return mavlink_msg_hk_drone_flight_status_pack_status(system_id, component_id, _status, msg,  hk_drone_flight_status->timestamp_ms, hk_drone_flight_status->flight_mode, hk_drone_flight_status->is_armed, hk_drone_flight_status->land_state, hk_drone_flight_status->need_attack, hk_drone_flight_status->task_finished, hk_drone_flight_status->current_task_state, hk_drone_flight_status->guidance_mode);
}

/**
 * @brief Send a hk_drone_flight_status message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  ROS 时间戳（毫秒）
 * @param flight_mode  PX4 nav_state；AP 模式由 APMavlinkAdapter 翻译
 * @param is_armed  是否解锁，0=否，1=是
 * @param land_state  起落状态：0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR
 * @param need_attack  策略 need_attack_ 标志
 * @param task_finished  任务结束标志
 * @param current_task_state  任务状态：0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH, 3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY
 * @param guidance_mode  制导模式：0=TRACKING_ONLY, 1=PURE_PURSUIT, 2=PROPORTIONAL_NAVIGATION
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_drone_flight_status_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint8_t flight_mode, uint8_t is_armed, uint8_t land_state, uint8_t need_attack, uint8_t task_finished, uint8_t current_task_state, uint8_t guidance_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 8, flight_mode);
    _mav_put_uint8_t(buf, 9, is_armed);
    _mav_put_uint8_t(buf, 10, land_state);
    _mav_put_uint8_t(buf, 11, need_attack);
    _mav_put_uint8_t(buf, 12, task_finished);
    _mav_put_uint8_t(buf, 13, current_task_state);
    _mav_put_uint8_t(buf, 14, guidance_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
#else
    mavlink_hk_drone_flight_status_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.flight_mode = flight_mode;
    packet.is_armed = is_armed;
    packet.land_state = land_state;
    packet.need_attack = need_attack;
    packet.task_finished = task_finished;
    packet.current_task_state = current_task_state;
    packet.guidance_mode = guidance_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS, (const char *)&packet, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
#endif
}

/**
 * @brief Send a hk_drone_flight_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_drone_flight_status_send_struct(mavlink_channel_t chan, const mavlink_hk_drone_flight_status_t* hk_drone_flight_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_drone_flight_status_send(chan, hk_drone_flight_status->timestamp_ms, hk_drone_flight_status->flight_mode, hk_drone_flight_status->is_armed, hk_drone_flight_status->land_state, hk_drone_flight_status->need_attack, hk_drone_flight_status->task_finished, hk_drone_flight_status->current_task_state, hk_drone_flight_status->guidance_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS, (const char *)hk_drone_flight_status, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_drone_flight_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint8_t flight_mode, uint8_t is_armed, uint8_t land_state, uint8_t need_attack, uint8_t task_finished, uint8_t current_task_state, uint8_t guidance_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_uint8_t(buf, 8, flight_mode);
    _mav_put_uint8_t(buf, 9, is_armed);
    _mav_put_uint8_t(buf, 10, land_state);
    _mav_put_uint8_t(buf, 11, need_attack);
    _mav_put_uint8_t(buf, 12, task_finished);
    _mav_put_uint8_t(buf, 13, current_task_state);
    _mav_put_uint8_t(buf, 14, guidance_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS, buf, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
#else
    mavlink_hk_drone_flight_status_t *packet = (mavlink_hk_drone_flight_status_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->flight_mode = flight_mode;
    packet->is_armed = is_armed;
    packet->land_state = land_state;
    packet->need_attack = need_attack;
    packet->task_finished = task_finished;
    packet->current_task_state = current_task_state;
    packet->guidance_mode = guidance_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS, (const char *)packet, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DRONE_FLIGHT_STATUS UNPACKING


/**
 * @brief Get field timestamp_ms from hk_drone_flight_status message
 *
 * @return  ROS 时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_drone_flight_status_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field flight_mode from hk_drone_flight_status message
 *
 * @return  PX4 nav_state；AP 模式由 APMavlinkAdapter 翻译
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_flight_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field is_armed from hk_drone_flight_status message
 *
 * @return  是否解锁，0=否，1=是
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_is_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field land_state from hk_drone_flight_status message
 *
 * @return  起落状态：0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_land_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field need_attack from hk_drone_flight_status message
 *
 * @return  策略 need_attack_ 标志
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_need_attack(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Get field task_finished from hk_drone_flight_status message
 *
 * @return  任务结束标志
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_task_finished(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field current_task_state from hk_drone_flight_status message
 *
 * @return  任务状态：0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH, 3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_current_task_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field guidance_mode from hk_drone_flight_status message
 *
 * @return  制导模式：0=TRACKING_ONLY, 1=PURE_PURSUIT, 2=PROPORTIONAL_NAVIGATION
 */
static inline uint8_t mavlink_msg_hk_drone_flight_status_get_guidance_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Decode a hk_drone_flight_status message into a struct
 *
 * @param msg The message to decode
 * @param hk_drone_flight_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_drone_flight_status_decode(const mavlink_message_t* msg, mavlink_hk_drone_flight_status_t* hk_drone_flight_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_drone_flight_status->timestamp_ms = mavlink_msg_hk_drone_flight_status_get_timestamp_ms(msg);
    hk_drone_flight_status->flight_mode = mavlink_msg_hk_drone_flight_status_get_flight_mode(msg);
    hk_drone_flight_status->is_armed = mavlink_msg_hk_drone_flight_status_get_is_armed(msg);
    hk_drone_flight_status->land_state = mavlink_msg_hk_drone_flight_status_get_land_state(msg);
    hk_drone_flight_status->need_attack = mavlink_msg_hk_drone_flight_status_get_need_attack(msg);
    hk_drone_flight_status->task_finished = mavlink_msg_hk_drone_flight_status_get_task_finished(msg);
    hk_drone_flight_status->current_task_state = mavlink_msg_hk_drone_flight_status_get_current_task_state(msg);
    hk_drone_flight_status->guidance_mode = mavlink_msg_hk_drone_flight_status_get_guidance_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN? msg->len : MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN;
        memset(hk_drone_flight_status, 0, MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_LEN);
    memcpy(hk_drone_flight_status, _MAV_PAYLOAD(msg), len);
#endif
}
