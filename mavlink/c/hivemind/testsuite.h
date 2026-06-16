/** @file
 *    @brief MAVLink comm protocol testsuite generated from hivemind.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef HIVEMIND_TESTSUITE_H
#define HIVEMIND_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_hivemind(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_hivemind(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_hk_ai_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_AI_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_ai_status_t packet_in = {
        17235,17339,17443,17547,"IJKLMNOPQRSTUVWXYZA","CDEFGHIJK",247,"NOPQRSTUVWXYZABCDEF","HIJKLMNOP",20,87,154
    };
    mavlink_hk_ai_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.fc_fault_code = packet_in.fc_fault_code;
        packet1.fc_response_time = packet_in.fc_response_time;
        packet1.track_fault_code = packet_in.track_fault_code;
        packet1.track_response_time = packet_in.track_response_time;
        packet1.fc_status = packet_in.fc_status;
        packet1.track_status = packet_in.track_status;
        packet1.gpu_usage = packet_in.gpu_usage;
        packet1.gpu_temperature = packet_in.gpu_temperature;
        
        mav_array_memcpy(packet1.fc_model_name, packet_in.fc_model_name, sizeof(char)*20);
        mav_array_memcpy(packet1.fc_version, packet_in.fc_version, sizeof(char)*10);
        mav_array_memcpy(packet1.track_model_name, packet_in.track_model_name, sizeof(char)*20);
        mav_array_memcpy(packet1.track_version, packet_in.track_version, sizeof(char)*10);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_AI_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_ai_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_ai_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_ai_status_pack(system_id, component_id, &msg , packet1.fc_model_name , packet1.fc_version , packet1.fc_status , packet1.fc_fault_code , packet1.fc_response_time , packet1.track_model_name , packet1.track_version , packet1.track_status , packet1.track_fault_code , packet1.track_response_time , packet1.gpu_usage , packet1.gpu_temperature );
    mavlink_msg_hk_ai_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_ai_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.fc_model_name , packet1.fc_version , packet1.fc_status , packet1.fc_fault_code , packet1.fc_response_time , packet1.track_model_name , packet1.track_version , packet1.track_status , packet1.track_fault_code , packet1.track_response_time , packet1.gpu_usage , packet1.gpu_temperature );
    mavlink_msg_hk_ai_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_ai_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_ai_status_send(MAVLINK_COMM_1 , packet1.fc_model_name , packet1.fc_version , packet1.fc_status , packet1.fc_fault_code , packet1.fc_response_time , packet1.track_model_name , packet1.track_version , packet1.track_status , packet1.track_fault_code , packet1.track_response_time , packet1.gpu_usage , packet1.gpu_temperature );
    mavlink_msg_hk_ai_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_AI_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_AI_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_motor_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_MOTOR_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_motor_status_t packet_in = {
        17235,139,206,17,84
    };
    mavlink_hk_motor_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.motor_rpm = packet_in.motor_rpm;
        packet1.motor_index = packet_in.motor_index;
        packet1.motor_temperature = packet_in.motor_temperature;
        packet1.motor_thrust = packet_in.motor_thrust;
        packet1.motor_status = packet_in.motor_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_MOTOR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_motor_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_motor_status_pack(system_id, component_id, &msg , packet1.motor_index , packet1.motor_rpm , packet1.motor_temperature , packet1.motor_thrust , packet1.motor_status );
    mavlink_msg_hk_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_motor_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.motor_index , packet1.motor_rpm , packet1.motor_temperature , packet1.motor_thrust , packet1.motor_status );
    mavlink_msg_hk_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_motor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_motor_status_send(MAVLINK_COMM_1 , packet1.motor_index , packet1.motor_rpm , packet1.motor_temperature , packet1.motor_thrust , packet1.motor_status );
    mavlink_msg_hk_motor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_MOTOR_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_MOTOR_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_impact_confirm(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_IMPACT_CONFIRM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_impact_confirm_t packet_in = {
        963497464,963497672,963497880,17859,17963,53,120
    };
    mavlink_hk_impact_confirm_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.impact_lat = packet_in.impact_lat;
        packet1.impact_lon = packet_in.impact_lon;
        packet1.impact_alt = packet_in.impact_alt;
        packet1.target_speed = packet_in.target_speed;
        packet1.drone_speed = packet_in.drone_speed;
        packet1.target_id = packet_in.target_id;
        packet1.kill_level = packet_in.kill_level;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_IMPACT_CONFIRM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_impact_confirm_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_impact_confirm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_impact_confirm_pack(system_id, component_id, &msg , packet1.target_id , packet1.target_speed , packet1.drone_speed , packet1.impact_lat , packet1.impact_lon , packet1.impact_alt , packet1.kill_level );
    mavlink_msg_hk_impact_confirm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_impact_confirm_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_id , packet1.target_speed , packet1.drone_speed , packet1.impact_lat , packet1.impact_lon , packet1.impact_alt , packet1.kill_level );
    mavlink_msg_hk_impact_confirm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_impact_confirm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_impact_confirm_send(MAVLINK_COMM_1 , packet1.target_id , packet1.target_speed , packet1.drone_speed , packet1.impact_lat , packet1.impact_lon , packet1.impact_alt , packet1.kill_level );
    mavlink_msg_hk_impact_confirm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_IMPACT_CONFIRM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_IMPACT_CONFIRM) != NULL);
#endif
}

static void mavlink_test_hk_target_situation(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_TARGET_SITUATION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_target_situation_t packet_in = {
        963497464,963497672,963497880,963498088,963498296,963498504,18483,18587,18691,18795,18899,19003,113,180
    };
    mavlink_hk_target_situation_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_lat = packet_in.target_lat;
        packet1.target_lon = packet_in.target_lon;
        packet1.target_alt = packet_in.target_alt;
        packet1.speed_north = packet_in.speed_north;
        packet1.speed_east = packet_in.speed_east;
        packet1.speed_down = packet_in.speed_down;
        packet1.lat_std = packet_in.lat_std;
        packet1.lon_std = packet_in.lon_std;
        packet1.alt_std = packet_in.alt_std;
        packet1.ned_speed_north_std = packet_in.ned_speed_north_std;
        packet1.ned_speed_east_std = packet_in.ned_speed_east_std;
        packet1.ned_speed_down_std = packet_in.ned_speed_down_std;
        packet1.target_sysid = packet_in.target_sysid;
        packet1.validity_mask = packet_in.validity_mask;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_TARGET_SITUATION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_target_situation_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_target_situation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_target_situation_pack(system_id, component_id, &msg , packet1.target_sysid , packet1.target_lat , packet1.target_lon , packet1.target_alt , packet1.speed_north , packet1.speed_east , packet1.speed_down , packet1.lat_std , packet1.lon_std , packet1.alt_std , packet1.ned_speed_north_std , packet1.ned_speed_east_std , packet1.ned_speed_down_std , packet1.validity_mask );
    mavlink_msg_hk_target_situation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_target_situation_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_sysid , packet1.target_lat , packet1.target_lon , packet1.target_alt , packet1.speed_north , packet1.speed_east , packet1.speed_down , packet1.lat_std , packet1.lon_std , packet1.alt_std , packet1.ned_speed_north_std , packet1.ned_speed_east_std , packet1.ned_speed_down_std , packet1.validity_mask );
    mavlink_msg_hk_target_situation_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_target_situation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_target_situation_send(MAVLINK_COMM_1 , packet1.target_sysid , packet1.target_lat , packet1.target_lon , packet1.target_alt , packet1.speed_north , packet1.speed_east , packet1.speed_down , packet1.lat_std , packet1.lon_std , packet1.alt_std , packet1.ned_speed_north_std , packet1.ned_speed_east_std , packet1.ned_speed_down_std , packet1.validity_mask );
    mavlink_msg_hk_target_situation_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_TARGET_SITUATION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_TARGET_SITUATION) != NULL);
#endif
}

static void mavlink_test_hk_launcher_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_LAUNCHER_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_launcher_status_t packet_in = {
        963497464,963497672,963497880,41,108,175,242,53
    };
    mavlink_hk_launcher_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.launcer_lat = packet_in.launcer_lat;
        packet1.launcer_lon = packet_in.launcer_lon;
        packet1.launcer_alt = packet_in.launcer_alt;
        packet1.lid_status = packet_in.lid_status;
        packet1.lock_status = packet_in.lock_status;
        packet1.box_battery = packet_in.box_battery;
        packet1.ready_count = packet_in.ready_count;
        packet1.total_count = packet_in.total_count;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_LAUNCHER_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_launcher_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_status_pack(system_id, component_id, &msg , packet1.lid_status , packet1.lock_status , packet1.box_battery , packet1.ready_count , packet1.total_count , packet1.launcer_lat , packet1.launcer_lon , packet1.launcer_alt );
    mavlink_msg_hk_launcher_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.lid_status , packet1.lock_status , packet1.box_battery , packet1.ready_count , packet1.total_count , packet1.launcer_lat , packet1.launcer_lon , packet1.launcer_alt );
    mavlink_msg_hk_launcher_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_launcher_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_status_send(MAVLINK_COMM_1 , packet1.lid_status , packet1.lock_status , packet1.box_battery , packet1.ready_count , packet1.total_count , packet1.launcer_lat , packet1.launcer_lon , packet1.launcer_alt );
    mavlink_msg_hk_launcher_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_LAUNCHER_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_LAUNCHER_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_launcher_detail(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_launcher_detail_t packet_in = {
        5,"BCDEFGHIJKLMNOPQRST","VWXYZABCDEFGHIJKLMN"
    };
    mavlink_hk_launcher_detail_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.drone_index = packet_in.drone_index;
        
        mav_array_memcpy(packet1.drone_name, packet_in.drone_name, sizeof(char)*20);
        mav_array_memcpy(packet1.drone_model, packet_in.drone_model, sizeof(char)*20);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_detail_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_launcher_detail_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_detail_pack(system_id, component_id, &msg , packet1.drone_index , packet1.drone_name , packet1.drone_model );
    mavlink_msg_hk_launcher_detail_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_detail_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.drone_index , packet1.drone_name , packet1.drone_model );
    mavlink_msg_hk_launcher_detail_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_launcher_detail_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_launcher_detail_send(MAVLINK_COMM_1 , packet1.drone_index , packet1.drone_name , packet1.drone_model );
    mavlink_msg_hk_launcher_detail_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_LAUNCHER_DETAIL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_LAUNCHER_DETAIL) != NULL);
#endif
}

static void mavlink_test_hk_gcs_position(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_GCS_POSITION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_gcs_position_t packet_in = {
        963497464,963497672,963497880
    };
    mavlink_hk_gcs_position_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gcs_lat = packet_in.gcs_lat;
        packet1.gcs_lon = packet_in.gcs_lon;
        packet1.gcs_alt = packet_in.gcs_alt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_GCS_POSITION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gcs_position_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_gcs_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gcs_position_pack(system_id, component_id, &msg , packet1.gcs_lat , packet1.gcs_lon , packet1.gcs_alt );
    mavlink_msg_hk_gcs_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gcs_position_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gcs_lat , packet1.gcs_lon , packet1.gcs_alt );
    mavlink_msg_hk_gcs_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_gcs_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gcs_position_send(MAVLINK_COMM_1 , packet1.gcs_lat , packet1.gcs_lon , packet1.gcs_alt );
    mavlink_msg_hk_gcs_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_GCS_POSITION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_GCS_POSITION) != NULL);
#endif
}

static void mavlink_test_hivemind(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_hk_ai_status(system_id, component_id, last_msg);
    mavlink_test_hk_motor_status(system_id, component_id, last_msg);
    mavlink_test_hk_impact_confirm(system_id, component_id, last_msg);
    mavlink_test_hk_target_situation(system_id, component_id, last_msg);
    mavlink_test_hk_launcher_status(system_id, component_id, last_msg);
    mavlink_test_hk_launcher_detail(system_id, component_id, last_msg);
    mavlink_test_hk_gcs_position(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // HIVEMIND_TESTSUITE_H
