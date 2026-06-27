#pragma once
// MESSAGE HK_DETECTION_RESULT PACKING

#define MAVLINK_MSG_ID_HK_DETECTION_RESULT 50115


typedef struct __mavlink_hk_detection_result_t {
 uint64_t timestamp_ms; /*<  时间戳（毫秒）*/
 float confidence; /*<  置信度*/
 float track_score; /*<  跟踪分数*/
 float horizontal_angle_rad; /*<  水平视线角（rad）*/
 float vertical_angle_rad; /*<  垂直视线角（rad）*/
 float distance_m; /*<  估计目标距离（m）*/
 float camera_position[4]; /*<  相机安装参数 [x,y,z,yaw]*/
 float box[4]; /*<  目标包围框 [x1,y1,x2,y2]*/
 uint16_t error_code; /*<  错误码*/
 uint8_t status; /*<  AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING*/
 uint8_t camera_index; /*<  相机索引：0=TELEPHOTO, 1=WIDE, 2=UNKNOWN*/
 uint8_t level; /*<  消息级别*/
 uint8_t ai_running; /*<  AI 是否运行中*/
 uint8_t has_error; /*<  是否存在错误*/
 uint8_t tracked; /*<  是否已跟踪*/
} mavlink_hk_detection_result_t;

#define MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN 68
#define MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN 68
#define MAVLINK_MSG_ID_50115_LEN 68
#define MAVLINK_MSG_ID_50115_MIN_LEN 68

#define MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC 220
#define MAVLINK_MSG_ID_50115_CRC 220

#define MAVLINK_MSG_HK_DETECTION_RESULT_FIELD_CAMERA_POSITION_LEN 4
#define MAVLINK_MSG_HK_DETECTION_RESULT_FIELD_BOX_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_HK_DETECTION_RESULT { \
    50115, \
    "HK_DETECTION_RESULT", \
    15, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_detection_result_t, timestamp_ms) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_hk_detection_result_t, status) }, \
         { "camera_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_hk_detection_result_t, camera_index) }, \
         { "level", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_hk_detection_result_t, level) }, \
         { "ai_running", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_hk_detection_result_t, ai_running) }, \
         { "has_error", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_hk_detection_result_t, has_error) }, \
         { "error_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_hk_detection_result_t, error_code) }, \
         { "tracked", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_hk_detection_result_t, tracked) }, \
         { "confidence", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_detection_result_t, confidence) }, \
         { "track_score", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_detection_result_t, track_score) }, \
         { "horizontal_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_detection_result_t, horizontal_angle_rad) }, \
         { "vertical_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_detection_result_t, vertical_angle_rad) }, \
         { "distance_m", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_detection_result_t, distance_m) }, \
         { "camera_position", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_hk_detection_result_t, camera_position) }, \
         { "box", NULL, MAVLINK_TYPE_FLOAT, 4, 44, offsetof(mavlink_hk_detection_result_t, box) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_HK_DETECTION_RESULT { \
    "HK_DETECTION_RESULT", \
    15, \
    {  { "timestamp_ms", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_hk_detection_result_t, timestamp_ms) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_hk_detection_result_t, status) }, \
         { "camera_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_hk_detection_result_t, camera_index) }, \
         { "level", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_hk_detection_result_t, level) }, \
         { "ai_running", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_hk_detection_result_t, ai_running) }, \
         { "has_error", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_hk_detection_result_t, has_error) }, \
         { "error_code", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_hk_detection_result_t, error_code) }, \
         { "tracked", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_hk_detection_result_t, tracked) }, \
         { "confidence", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_hk_detection_result_t, confidence) }, \
         { "track_score", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_hk_detection_result_t, track_score) }, \
         { "horizontal_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_hk_detection_result_t, horizontal_angle_rad) }, \
         { "vertical_angle_rad", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_hk_detection_result_t, vertical_angle_rad) }, \
         { "distance_m", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_hk_detection_result_t, distance_m) }, \
         { "camera_position", NULL, MAVLINK_TYPE_FLOAT, 4, 28, offsetof(mavlink_hk_detection_result_t, camera_position) }, \
         { "box", NULL, MAVLINK_TYPE_FLOAT, 4, 44, offsetof(mavlink_hk_detection_result_t, box) }, \
         } \
}
#endif

/**
 * @brief Pack a hk_detection_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  时间戳（毫秒）
 * @param status  AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param camera_index  相机索引：0=TELEPHOTO, 1=WIDE, 2=UNKNOWN
 * @param level  消息级别
 * @param ai_running  AI 是否运行中
 * @param has_error  是否存在错误
 * @param error_code  错误码
 * @param tracked  是否已跟踪
 * @param confidence  置信度
 * @param track_score  跟踪分数
 * @param horizontal_angle_rad  水平视线角（rad）
 * @param vertical_angle_rad  垂直视线角（rad）
 * @param distance_m  估计目标距离（m）
 * @param camera_position  相机安装参数 [x,y,z,yaw]
 * @param box  目标包围框 [x1,y1,x2,y2]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_detection_result_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t status, uint8_t camera_index, uint8_t level, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint8_t tracked, float confidence, float track_score, float horizontal_angle_rad, float vertical_angle_rad, float distance_m, const float *camera_position, const float *box)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, track_score);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_float(buf, 24, distance_m);
    _mav_put_uint16_t(buf, 60, error_code);
    _mav_put_uint8_t(buf, 62, status);
    _mav_put_uint8_t(buf, 63, camera_index);
    _mav_put_uint8_t(buf, 64, level);
    _mav_put_uint8_t(buf, 65, ai_running);
    _mav_put_uint8_t(buf, 66, has_error);
    _mav_put_uint8_t(buf, 67, tracked);
    _mav_put_float_array(buf, 28, camera_position, 4);
    _mav_put_float_array(buf, 44, box, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#else
    mavlink_hk_detection_result_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.confidence = confidence;
    packet.track_score = track_score;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.distance_m = distance_m;
    packet.error_code = error_code;
    packet.status = status;
    packet.camera_index = camera_index;
    packet.level = level;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;
    mav_array_assign_float(packet.camera_position, camera_position, 4);
    mav_array_assign_float(packet.box, box, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DETECTION_RESULT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
}

/**
 * @brief Pack a hk_detection_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp_ms  时间戳（毫秒）
 * @param status  AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param camera_index  相机索引：0=TELEPHOTO, 1=WIDE, 2=UNKNOWN
 * @param level  消息级别
 * @param ai_running  AI 是否运行中
 * @param has_error  是否存在错误
 * @param error_code  错误码
 * @param tracked  是否已跟踪
 * @param confidence  置信度
 * @param track_score  跟踪分数
 * @param horizontal_angle_rad  水平视线角（rad）
 * @param vertical_angle_rad  垂直视线角（rad）
 * @param distance_m  估计目标距离（m）
 * @param camera_position  相机安装参数 [x,y,z,yaw]
 * @param box  目标包围框 [x1,y1,x2,y2]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_detection_result_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp_ms, uint8_t status, uint8_t camera_index, uint8_t level, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint8_t tracked, float confidence, float track_score, float horizontal_angle_rad, float vertical_angle_rad, float distance_m, const float *camera_position, const float *box)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, track_score);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_float(buf, 24, distance_m);
    _mav_put_uint16_t(buf, 60, error_code);
    _mav_put_uint8_t(buf, 62, status);
    _mav_put_uint8_t(buf, 63, camera_index);
    _mav_put_uint8_t(buf, 64, level);
    _mav_put_uint8_t(buf, 65, ai_running);
    _mav_put_uint8_t(buf, 66, has_error);
    _mav_put_uint8_t(buf, 67, tracked);
    _mav_put_float_array(buf, 28, camera_position, 4);
    _mav_put_float_array(buf, 44, box, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#else
    mavlink_hk_detection_result_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.confidence = confidence;
    packet.track_score = track_score;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.distance_m = distance_m;
    packet.error_code = error_code;
    packet.status = status;
    packet.camera_index = camera_index;
    packet.level = level;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;
    mav_array_memcpy(packet.camera_position, camera_position, sizeof(float)*4);
    mav_array_memcpy(packet.box, box, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DETECTION_RESULT;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#endif
}

/**
 * @brief Pack a hk_detection_result message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp_ms  时间戳（毫秒）
 * @param status  AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param camera_index  相机索引：0=TELEPHOTO, 1=WIDE, 2=UNKNOWN
 * @param level  消息级别
 * @param ai_running  AI 是否运行中
 * @param has_error  是否存在错误
 * @param error_code  错误码
 * @param tracked  是否已跟踪
 * @param confidence  置信度
 * @param track_score  跟踪分数
 * @param horizontal_angle_rad  水平视线角（rad）
 * @param vertical_angle_rad  垂直视线角（rad）
 * @param distance_m  估计目标距离（m）
 * @param camera_position  相机安装参数 [x,y,z,yaw]
 * @param box  目标包围框 [x1,y1,x2,y2]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_hk_detection_result_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp_ms,uint8_t status,uint8_t camera_index,uint8_t level,uint8_t ai_running,uint8_t has_error,uint16_t error_code,uint8_t tracked,float confidence,float track_score,float horizontal_angle_rad,float vertical_angle_rad,float distance_m,const float *camera_position,const float *box)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, track_score);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_float(buf, 24, distance_m);
    _mav_put_uint16_t(buf, 60, error_code);
    _mav_put_uint8_t(buf, 62, status);
    _mav_put_uint8_t(buf, 63, camera_index);
    _mav_put_uint8_t(buf, 64, level);
    _mav_put_uint8_t(buf, 65, ai_running);
    _mav_put_uint8_t(buf, 66, has_error);
    _mav_put_uint8_t(buf, 67, tracked);
    _mav_put_float_array(buf, 28, camera_position, 4);
    _mav_put_float_array(buf, 44, box, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#else
    mavlink_hk_detection_result_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.confidence = confidence;
    packet.track_score = track_score;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.distance_m = distance_m;
    packet.error_code = error_code;
    packet.status = status;
    packet.camera_index = camera_index;
    packet.level = level;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;
    mav_array_assign_float(packet.camera_position, camera_position, 4);
    mav_array_assign_float(packet.box, box, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_HK_DETECTION_RESULT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
}

/**
 * @brief Encode a hk_detection_result struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param hk_detection_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_detection_result_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_hk_detection_result_t* hk_detection_result)
{
    return mavlink_msg_hk_detection_result_pack(system_id, component_id, msg, hk_detection_result->timestamp_ms, hk_detection_result->status, hk_detection_result->camera_index, hk_detection_result->level, hk_detection_result->ai_running, hk_detection_result->has_error, hk_detection_result->error_code, hk_detection_result->tracked, hk_detection_result->confidence, hk_detection_result->track_score, hk_detection_result->horizontal_angle_rad, hk_detection_result->vertical_angle_rad, hk_detection_result->distance_m, hk_detection_result->camera_position, hk_detection_result->box);
}

/**
 * @brief Encode a hk_detection_result struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param hk_detection_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_detection_result_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_hk_detection_result_t* hk_detection_result)
{
    return mavlink_msg_hk_detection_result_pack_chan(system_id, component_id, chan, msg, hk_detection_result->timestamp_ms, hk_detection_result->status, hk_detection_result->camera_index, hk_detection_result->level, hk_detection_result->ai_running, hk_detection_result->has_error, hk_detection_result->error_code, hk_detection_result->tracked, hk_detection_result->confidence, hk_detection_result->track_score, hk_detection_result->horizontal_angle_rad, hk_detection_result->vertical_angle_rad, hk_detection_result->distance_m, hk_detection_result->camera_position, hk_detection_result->box);
}

/**
 * @brief Encode a hk_detection_result struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param hk_detection_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_hk_detection_result_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_hk_detection_result_t* hk_detection_result)
{
    return mavlink_msg_hk_detection_result_pack_status(system_id, component_id, _status, msg,  hk_detection_result->timestamp_ms, hk_detection_result->status, hk_detection_result->camera_index, hk_detection_result->level, hk_detection_result->ai_running, hk_detection_result->has_error, hk_detection_result->error_code, hk_detection_result->tracked, hk_detection_result->confidence, hk_detection_result->track_score, hk_detection_result->horizontal_angle_rad, hk_detection_result->vertical_angle_rad, hk_detection_result->distance_m, hk_detection_result->camera_position, hk_detection_result->box);
}

/**
 * @brief Send a hk_detection_result message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp_ms  时间戳（毫秒）
 * @param status  AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 * @param camera_index  相机索引：0=TELEPHOTO, 1=WIDE, 2=UNKNOWN
 * @param level  消息级别
 * @param ai_running  AI 是否运行中
 * @param has_error  是否存在错误
 * @param error_code  错误码
 * @param tracked  是否已跟踪
 * @param confidence  置信度
 * @param track_score  跟踪分数
 * @param horizontal_angle_rad  水平视线角（rad）
 * @param vertical_angle_rad  垂直视线角（rad）
 * @param distance_m  估计目标距离（m）
 * @param camera_position  相机安装参数 [x,y,z,yaw]
 * @param box  目标包围框 [x1,y1,x2,y2]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_hk_detection_result_send(mavlink_channel_t chan, uint64_t timestamp_ms, uint8_t status, uint8_t camera_index, uint8_t level, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint8_t tracked, float confidence, float track_score, float horizontal_angle_rad, float vertical_angle_rad, float distance_m, const float *camera_position, const float *box)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, track_score);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_float(buf, 24, distance_m);
    _mav_put_uint16_t(buf, 60, error_code);
    _mav_put_uint8_t(buf, 62, status);
    _mav_put_uint8_t(buf, 63, camera_index);
    _mav_put_uint8_t(buf, 64, level);
    _mav_put_uint8_t(buf, 65, ai_running);
    _mav_put_uint8_t(buf, 66, has_error);
    _mav_put_uint8_t(buf, 67, tracked);
    _mav_put_float_array(buf, 28, camera_position, 4);
    _mav_put_float_array(buf, 44, box, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DETECTION_RESULT, buf, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
#else
    mavlink_hk_detection_result_t packet;
    packet.timestamp_ms = timestamp_ms;
    packet.confidence = confidence;
    packet.track_score = track_score;
    packet.horizontal_angle_rad = horizontal_angle_rad;
    packet.vertical_angle_rad = vertical_angle_rad;
    packet.distance_m = distance_m;
    packet.error_code = error_code;
    packet.status = status;
    packet.camera_index = camera_index;
    packet.level = level;
    packet.ai_running = ai_running;
    packet.has_error = has_error;
    packet.tracked = tracked;
    mav_array_assign_float(packet.camera_position, camera_position, 4);
    mav_array_assign_float(packet.box, box, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DETECTION_RESULT, (const char *)&packet, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
#endif
}

/**
 * @brief Send a hk_detection_result message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_hk_detection_result_send_struct(mavlink_channel_t chan, const mavlink_hk_detection_result_t* hk_detection_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_hk_detection_result_send(chan, hk_detection_result->timestamp_ms, hk_detection_result->status, hk_detection_result->camera_index, hk_detection_result->level, hk_detection_result->ai_running, hk_detection_result->has_error, hk_detection_result->error_code, hk_detection_result->tracked, hk_detection_result->confidence, hk_detection_result->track_score, hk_detection_result->horizontal_angle_rad, hk_detection_result->vertical_angle_rad, hk_detection_result->distance_m, hk_detection_result->camera_position, hk_detection_result->box);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DETECTION_RESULT, (const char *)hk_detection_result, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
#endif
}

#if MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_hk_detection_result_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp_ms, uint8_t status, uint8_t camera_index, uint8_t level, uint8_t ai_running, uint8_t has_error, uint16_t error_code, uint8_t tracked, float confidence, float track_score, float horizontal_angle_rad, float vertical_angle_rad, float distance_m, const float *camera_position, const float *box)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp_ms);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, track_score);
    _mav_put_float(buf, 16, horizontal_angle_rad);
    _mav_put_float(buf, 20, vertical_angle_rad);
    _mav_put_float(buf, 24, distance_m);
    _mav_put_uint16_t(buf, 60, error_code);
    _mav_put_uint8_t(buf, 62, status);
    _mav_put_uint8_t(buf, 63, camera_index);
    _mav_put_uint8_t(buf, 64, level);
    _mav_put_uint8_t(buf, 65, ai_running);
    _mav_put_uint8_t(buf, 66, has_error);
    _mav_put_uint8_t(buf, 67, tracked);
    _mav_put_float_array(buf, 28, camera_position, 4);
    _mav_put_float_array(buf, 44, box, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DETECTION_RESULT, buf, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
#else
    mavlink_hk_detection_result_t *packet = (mavlink_hk_detection_result_t *)msgbuf;
    packet->timestamp_ms = timestamp_ms;
    packet->confidence = confidence;
    packet->track_score = track_score;
    packet->horizontal_angle_rad = horizontal_angle_rad;
    packet->vertical_angle_rad = vertical_angle_rad;
    packet->distance_m = distance_m;
    packet->error_code = error_code;
    packet->status = status;
    packet->camera_index = camera_index;
    packet->level = level;
    packet->ai_running = ai_running;
    packet->has_error = has_error;
    packet->tracked = tracked;
    mav_array_assign_float(packet->camera_position, camera_position, 4);
    mav_array_assign_float(packet->box, box, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_HK_DETECTION_RESULT, (const char *)packet, MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN, MAVLINK_MSG_ID_HK_DETECTION_RESULT_CRC);
#endif
}
#endif

#endif

// MESSAGE HK_DETECTION_RESULT UNPACKING


/**
 * @brief Get field timestamp_ms from hk_detection_result message
 *
 * @return  时间戳（毫秒）
 */
static inline uint64_t mavlink_msg_hk_detection_result_get_timestamp_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field status from hk_detection_result message
 *
 * @return  AI 状态：0=INIT, 1=DETECTING, 2=RECOGNIZED, 3=TRACKING
 */
static inline uint8_t mavlink_msg_hk_detection_result_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  62);
}

/**
 * @brief Get field camera_index from hk_detection_result message
 *
 * @return  相机索引：0=TELEPHOTO, 1=WIDE, 2=UNKNOWN
 */
static inline uint8_t mavlink_msg_hk_detection_result_get_camera_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  63);
}

/**
 * @brief Get field level from hk_detection_result message
 *
 * @return  消息级别
 */
static inline uint8_t mavlink_msg_hk_detection_result_get_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field ai_running from hk_detection_result message
 *
 * @return  AI 是否运行中
 */
static inline uint8_t mavlink_msg_hk_detection_result_get_ai_running(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  65);
}

/**
 * @brief Get field has_error from hk_detection_result message
 *
 * @return  是否存在错误
 */
static inline uint8_t mavlink_msg_hk_detection_result_get_has_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field error_code from hk_detection_result message
 *
 * @return  错误码
 */
static inline uint16_t mavlink_msg_hk_detection_result_get_error_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  60);
}

/**
 * @brief Get field tracked from hk_detection_result message
 *
 * @return  是否已跟踪
 */
static inline uint8_t mavlink_msg_hk_detection_result_get_tracked(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Get field confidence from hk_detection_result message
 *
 * @return  置信度
 */
static inline float mavlink_msg_hk_detection_result_get_confidence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field track_score from hk_detection_result message
 *
 * @return  跟踪分数
 */
static inline float mavlink_msg_hk_detection_result_get_track_score(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field horizontal_angle_rad from hk_detection_result message
 *
 * @return  水平视线角（rad）
 */
static inline float mavlink_msg_hk_detection_result_get_horizontal_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vertical_angle_rad from hk_detection_result message
 *
 * @return  垂直视线角（rad）
 */
static inline float mavlink_msg_hk_detection_result_get_vertical_angle_rad(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field distance_m from hk_detection_result message
 *
 * @return  估计目标距离（m）
 */
static inline float mavlink_msg_hk_detection_result_get_distance_m(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field camera_position from hk_detection_result message
 *
 * @return  相机安装参数 [x,y,z,yaw]
 */
static inline uint16_t mavlink_msg_hk_detection_result_get_camera_position(const mavlink_message_t* msg, float *camera_position)
{
    return _MAV_RETURN_float_array(msg, camera_position, 4,  28);
}

/**
 * @brief Get field box from hk_detection_result message
 *
 * @return  目标包围框 [x1,y1,x2,y2]
 */
static inline uint16_t mavlink_msg_hk_detection_result_get_box(const mavlink_message_t* msg, float *box)
{
    return _MAV_RETURN_float_array(msg, box, 4,  44);
}

/**
 * @brief Decode a hk_detection_result message into a struct
 *
 * @param msg The message to decode
 * @param hk_detection_result C-struct to decode the message contents into
 */
static inline void mavlink_msg_hk_detection_result_decode(const mavlink_message_t* msg, mavlink_hk_detection_result_t* hk_detection_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    hk_detection_result->timestamp_ms = mavlink_msg_hk_detection_result_get_timestamp_ms(msg);
    hk_detection_result->confidence = mavlink_msg_hk_detection_result_get_confidence(msg);
    hk_detection_result->track_score = mavlink_msg_hk_detection_result_get_track_score(msg);
    hk_detection_result->horizontal_angle_rad = mavlink_msg_hk_detection_result_get_horizontal_angle_rad(msg);
    hk_detection_result->vertical_angle_rad = mavlink_msg_hk_detection_result_get_vertical_angle_rad(msg);
    hk_detection_result->distance_m = mavlink_msg_hk_detection_result_get_distance_m(msg);
    mavlink_msg_hk_detection_result_get_camera_position(msg, hk_detection_result->camera_position);
    mavlink_msg_hk_detection_result_get_box(msg, hk_detection_result->box);
    hk_detection_result->error_code = mavlink_msg_hk_detection_result_get_error_code(msg);
    hk_detection_result->status = mavlink_msg_hk_detection_result_get_status(msg);
    hk_detection_result->camera_index = mavlink_msg_hk_detection_result_get_camera_index(msg);
    hk_detection_result->level = mavlink_msg_hk_detection_result_get_level(msg);
    hk_detection_result->ai_running = mavlink_msg_hk_detection_result_get_ai_running(msg);
    hk_detection_result->has_error = mavlink_msg_hk_detection_result_get_has_error(msg);
    hk_detection_result->tracked = mavlink_msg_hk_detection_result_get_tracked(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN? msg->len : MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN;
        memset(hk_detection_result, 0, MAVLINK_MSG_ID_HK_DETECTION_RESULT_LEN);
    memcpy(hk_detection_result, _MAV_PAYLOAD(msg), len);
#endif
}
