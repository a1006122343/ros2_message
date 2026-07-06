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

static void mavlink_test_hk_drone_position(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_POSITION >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_position_t packet_in = {
        93372036854775807ULL,179.0,235.0,291.0,241.0,269.0,297.0,325.0
    };
    mavlink_hk_drone_position_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.latitude_deg = packet_in.latitude_deg;
        packet1.longitude_deg = packet_in.longitude_deg;
        packet1.altitude_m = packet_in.altitude_m;
        packet1.relative_altitude_m = packet_in.relative_altitude_m;
        packet1.fc_local_x_m = packet_in.fc_local_x_m;
        packet1.fc_local_y_m = packet_in.fc_local_y_m;
        packet1.fc_local_z_m = packet_in.fc_local_z_m;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_POSITION_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_position_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_position_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.latitude_deg , packet1.longitude_deg , packet1.altitude_m , packet1.relative_altitude_m , packet1.fc_local_x_m , packet1.fc_local_y_m , packet1.fc_local_z_m );
    mavlink_msg_hk_drone_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_position_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.latitude_deg , packet1.longitude_deg , packet1.altitude_m , packet1.relative_altitude_m , packet1.fc_local_x_m , packet1.fc_local_y_m , packet1.fc_local_z_m );
    mavlink_msg_hk_drone_position_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_position_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.latitude_deg , packet1.longitude_deg , packet1.altitude_m , packet1.relative_altitude_m , packet1.fc_local_x_m , packet1.fc_local_y_m , packet1.fc_local_z_m );
    mavlink_msg_hk_drone_position_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_POSITION") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_POSITION) != NULL);
#endif
}

static void mavlink_test_hk_drone_velocity(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_VELOCITY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_velocity_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0
    };
    mavlink_hk_drone_velocity_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.velocity_x_mps = packet_in.velocity_x_mps;
        packet1.velocity_y_mps = packet_in.velocity_y_mps;
        packet1.velocity_z_mps = packet_in.velocity_z_mps;
        packet1.horizontal_speed_mps = packet_in.horizontal_speed_mps;
        packet1.true_airspeed_mps = packet_in.true_airspeed_mps;
        packet1.acceleration_x_mps2 = packet_in.acceleration_x_mps2;
        packet1.acceleration_y_mps2 = packet_in.acceleration_y_mps2;
        packet1.acceleration_z_mps2 = packet_in.acceleration_z_mps2;
        packet1.fc_local_vx_mps = packet_in.fc_local_vx_mps;
        packet1.fc_local_vy_mps = packet_in.fc_local_vy_mps;
        packet1.fc_local_vz_mps = packet_in.fc_local_vz_mps;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_VELOCITY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_velocity_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_velocity_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_velocity_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.velocity_x_mps , packet1.velocity_y_mps , packet1.velocity_z_mps , packet1.horizontal_speed_mps , packet1.true_airspeed_mps , packet1.acceleration_x_mps2 , packet1.acceleration_y_mps2 , packet1.acceleration_z_mps2 , packet1.fc_local_vx_mps , packet1.fc_local_vy_mps , packet1.fc_local_vz_mps );
    mavlink_msg_hk_drone_velocity_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_velocity_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.velocity_x_mps , packet1.velocity_y_mps , packet1.velocity_z_mps , packet1.horizontal_speed_mps , packet1.true_airspeed_mps , packet1.acceleration_x_mps2 , packet1.acceleration_y_mps2 , packet1.acceleration_z_mps2 , packet1.fc_local_vx_mps , packet1.fc_local_vy_mps , packet1.fc_local_vz_mps );
    mavlink_msg_hk_drone_velocity_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_velocity_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_velocity_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.velocity_x_mps , packet1.velocity_y_mps , packet1.velocity_z_mps , packet1.horizontal_speed_mps , packet1.true_airspeed_mps , packet1.acceleration_x_mps2 , packet1.acceleration_y_mps2 , packet1.acceleration_z_mps2 , packet1.fc_local_vx_mps , packet1.fc_local_vy_mps , packet1.fc_local_vz_mps );
    mavlink_msg_hk_drone_velocity_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_VELOCITY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_VELOCITY) != NULL);
#endif
}

static void mavlink_test_hk_drone_attitude(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_ATTITUDE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_attitude_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0
    };
    mavlink_hk_drone_attitude_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.roll_rad = packet_in.roll_rad;
        packet1.pitch_rad = packet_in.pitch_rad;
        packet1.yaw_rad = packet_in.yaw_rad;
        packet1.attitude_qx = packet_in.attitude_qx;
        packet1.attitude_qy = packet_in.attitude_qy;
        packet1.attitude_qz = packet_in.attitude_qz;
        packet1.attitude_qw = packet_in.attitude_qw;
        packet1.angular_velocity_x_radps = packet_in.angular_velocity_x_radps;
        packet1.angular_velocity_y_radps = packet_in.angular_velocity_y_radps;
        packet1.angular_velocity_z_radps = packet_in.angular_velocity_z_radps;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_attitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.roll_rad , packet1.pitch_rad , packet1.yaw_rad , packet1.attitude_qx , packet1.attitude_qy , packet1.attitude_qz , packet1.attitude_qw , packet1.angular_velocity_x_radps , packet1.angular_velocity_y_radps , packet1.angular_velocity_z_radps );
    mavlink_msg_hk_drone_attitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.roll_rad , packet1.pitch_rad , packet1.yaw_rad , packet1.attitude_qx , packet1.attitude_qy , packet1.attitude_qz , packet1.attitude_qw , packet1.angular_velocity_x_radps , packet1.angular_velocity_y_radps , packet1.angular_velocity_z_radps );
    mavlink_msg_hk_drone_attitude_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_attitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.roll_rad , packet1.pitch_rad , packet1.yaw_rad , packet1.attitude_qx , packet1.attitude_qy , packet1.attitude_qz , packet1.attitude_qw , packet1.angular_velocity_x_radps , packet1.angular_velocity_y_radps , packet1.angular_velocity_z_radps );
    mavlink_msg_hk_drone_attitude_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_ATTITUDE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_ATTITUDE) != NULL);
#endif
}

static void mavlink_test_hk_drone_attitude_base(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_attitude_base_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0
    };
    mavlink_hk_drone_attitude_base_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.fw_roll_rad = packet_in.fw_roll_rad;
        packet1.fw_pitch_rad = packet_in.fw_pitch_rad;
        packet1.fw_yaw_rad = packet_in.fw_yaw_rad;
        packet1.camera_roll_rad = packet_in.camera_roll_rad;
        packet1.camera_pitch_rad = packet_in.camera_pitch_rad;
        packet1.camera_yaw_rad = packet_in.camera_yaw_rad;
        packet1.angle_of_attack_rad = packet_in.angle_of_attack_rad;
        packet1.sideslip_angle_rad = packet_in.sideslip_angle_rad;
        packet1.velocity_yaw_angle_rad = packet_in.velocity_yaw_angle_rad;
        packet1.velocity_pitch_angle_rad = packet_in.velocity_pitch_angle_rad;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_base_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_attitude_base_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_base_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.fw_roll_rad , packet1.fw_pitch_rad , packet1.fw_yaw_rad , packet1.camera_roll_rad , packet1.camera_pitch_rad , packet1.camera_yaw_rad , packet1.angle_of_attack_rad , packet1.sideslip_angle_rad , packet1.velocity_yaw_angle_rad , packet1.velocity_pitch_angle_rad );
    mavlink_msg_hk_drone_attitude_base_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_base_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.fw_roll_rad , packet1.fw_pitch_rad , packet1.fw_yaw_rad , packet1.camera_roll_rad , packet1.camera_pitch_rad , packet1.camera_yaw_rad , packet1.angle_of_attack_rad , packet1.sideslip_angle_rad , packet1.velocity_yaw_angle_rad , packet1.velocity_pitch_angle_rad );
    mavlink_msg_hk_drone_attitude_base_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_attitude_base_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_attitude_base_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.fw_roll_rad , packet1.fw_pitch_rad , packet1.fw_yaw_rad , packet1.camera_roll_rad , packet1.camera_pitch_rad , packet1.camera_yaw_rad , packet1.angle_of_attack_rad , packet1.sideslip_angle_rad , packet1.velocity_yaw_angle_rad , packet1.velocity_pitch_angle_rad );
    mavlink_msg_hk_drone_attitude_base_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_ATTITUDE_BASE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_ATTITUDE_BASE) != NULL);
#endif
}

static void mavlink_test_hk_drone_heartbeat(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_heartbeat_t packet_in = {
        93372036854775807ULL,963497880,41,108,175,242
    };
    mavlink_hk_drone_heartbeat_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.fc_custom_mode = packet_in.fc_custom_mode;
        packet1.fc_vehicle_type = packet_in.fc_vehicle_type;
        packet1.fc_autopilot = packet_in.fc_autopilot;
        packet1.fc_base_mode = packet_in.fc_base_mode;
        packet1.fc_system_status = packet_in.fc_system_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heartbeat_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heartbeat_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.fc_vehicle_type , packet1.fc_autopilot , packet1.fc_base_mode , packet1.fc_custom_mode , packet1.fc_system_status );
    mavlink_msg_hk_drone_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heartbeat_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.fc_vehicle_type , packet1.fc_autopilot , packet1.fc_base_mode , packet1.fc_custom_mode , packet1.fc_system_status );
    mavlink_msg_hk_drone_heartbeat_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heartbeat_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.fc_vehicle_type , packet1.fc_autopilot , packet1.fc_base_mode , packet1.fc_custom_mode , packet1.fc_system_status );
    mavlink_msg_hk_drone_heartbeat_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_HEARTBEAT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_HEARTBEAT) != NULL);
#endif
}

static void mavlink_test_hk_drone_heading(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_HEADING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_heading_t packet_in = {
        93372036854775807ULL,73.0
    };
    mavlink_hk_drone_heading_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.heading_deg = packet_in.heading_deg;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_HEADING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heading_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_heading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heading_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.heading_deg );
    mavlink_msg_hk_drone_heading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heading_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.heading_deg );
    mavlink_msg_hk_drone_heading_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_heading_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_heading_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.heading_deg );
    mavlink_msg_hk_drone_heading_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_HEADING") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_HEADING) != NULL);
#endif
}

static void mavlink_test_hk_drone_battery(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_BATTERY >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_battery_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,963498504
    };
    mavlink_hk_drone_battery_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.battery_voltage_v = packet_in.battery_voltage_v;
        packet1.battery_current_a = packet_in.battery_current_a;
        packet1.battery_remaining_pct = packet_in.battery_remaining_pct;
        packet1.battery_id = packet_in.battery_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_BATTERY_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_battery_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_battery_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.battery_voltage_v , packet1.battery_current_a , packet1.battery_remaining_pct , packet1.battery_id );
    mavlink_msg_hk_drone_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_battery_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.battery_voltage_v , packet1.battery_current_a , packet1.battery_remaining_pct , packet1.battery_id );
    mavlink_msg_hk_drone_battery_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_battery_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_battery_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.battery_voltage_v , packet1.battery_current_a , packet1.battery_remaining_pct , packet1.battery_id );
    mavlink_msg_hk_drone_battery_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_BATTERY") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_BATTERY) != NULL);
#endif
}

static void mavlink_test_hk_drone_gps(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_GPS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_gps_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,129.0,65,132
    };
    mavlink_hk_drone_gps_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.gps_time_utc_usec = packet_in.gps_time_utc_usec;
        packet1.gps_hdop = packet_in.gps_hdop;
        packet1.gps_satellites = packet_in.gps_satellites;
        packet1.gps_fix_type = packet_in.gps_fix_type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_GPS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_gps_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_gps_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.gps_satellites , packet1.gps_hdop , packet1.gps_fix_type , packet1.gps_time_utc_usec );
    mavlink_msg_hk_drone_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_gps_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.gps_satellites , packet1.gps_hdop , packet1.gps_fix_type , packet1.gps_time_utc_usec );
    mavlink_msg_hk_drone_gps_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_gps_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_gps_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.gps_satellites , packet1.gps_hdop , packet1.gps_fix_type , packet1.gps_time_utc_usec );
    mavlink_msg_hk_drone_gps_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_GPS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_GPS) != NULL);
#endif
}

static void mavlink_test_hk_drone_system_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_system_status_t packet_in = {
        93372036854775807ULL,963497880,963498088,129.0
    };
    mavlink_hk_drone_system_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.sensors_present = packet_in.sensors_present;
        packet1.sensors_health = packet_in.sensors_health;
        packet1.fc_load_pct = packet_in.fc_load_pct;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_system_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_system_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_system_status_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.sensors_present , packet1.sensors_health , packet1.fc_load_pct );
    mavlink_msg_hk_drone_system_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_system_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.sensors_present , packet1.sensors_health , packet1.fc_load_pct );
    mavlink_msg_hk_drone_system_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_system_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_system_status_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.sensors_present , packet1.sensors_health , packet1.fc_load_pct );
    mavlink_msg_hk_drone_system_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_SYSTEM_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_SYSTEM_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_drone_ai_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_AI_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_ai_status_t packet_in = {
        93372036854775807ULL,17651,17755,"MNOPQRSTUVWXYZABCDE","GHIJKLMNO",3
    };
    mavlink_hk_drone_ai_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.ai_fault_code = packet_in.ai_fault_code;
        packet1.ai_response_time_ms = packet_in.ai_response_time_ms;
        packet1.ai_status = packet_in.ai_status;
        
        mav_array_memcpy(packet1.ai_model_name, packet_in.ai_model_name, sizeof(char)*20);
        mav_array_memcpy(packet1.ai_model_version, packet_in.ai_model_version, sizeof(char)*10);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_AI_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_ai_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_ai_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_ai_status_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.ai_model_name , packet1.ai_model_version , packet1.ai_status , packet1.ai_fault_code , packet1.ai_response_time_ms );
    mavlink_msg_hk_drone_ai_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_ai_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.ai_model_name , packet1.ai_model_version , packet1.ai_status , packet1.ai_fault_code , packet1.ai_response_time_ms );
    mavlink_msg_hk_drone_ai_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_ai_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_ai_status_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.ai_model_name , packet1.ai_model_version , packet1.ai_status , packet1.ai_fault_code , packet1.ai_response_time_ms );
    mavlink_msg_hk_drone_ai_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_AI_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_AI_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_drone_motor_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_motor_status_t packet_in = {
        93372036854775807ULL,{ 963497880, 963497881, 963497882, 963497883, 963497884, 963497885, 963497886, 963497887, 963497888, 963497889, 963497890, 963497891 },{ 409.0, 410.0, 411.0, 412.0, 413.0, 414.0, 415.0, 416.0, 417.0, 418.0, 419.0, 420.0 },61,{ 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139 },{ 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175 }
    };
    mavlink_hk_drone_motor_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.motor_count = packet_in.motor_count;
        
        mav_array_memcpy(packet1.motor_rpm, packet_in.motor_rpm, sizeof(int32_t)*12);
        mav_array_memcpy(packet1.motor_thrust_pct, packet_in.motor_thrust_pct, sizeof(float)*12);
        mav_array_memcpy(packet1.motor_temperature, packet_in.motor_temperature, sizeof(int8_t)*12);
        mav_array_memcpy(packet1.motor_status, packet_in.motor_status, sizeof(uint8_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_motor_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_motor_status_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.motor_count , packet1.motor_rpm , packet1.motor_temperature , packet1.motor_thrust_pct , packet1.motor_status );
    mavlink_msg_hk_drone_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_motor_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.motor_count , packet1.motor_rpm , packet1.motor_temperature , packet1.motor_thrust_pct , packet1.motor_status );
    mavlink_msg_hk_drone_motor_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_motor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_motor_status_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.motor_count , packet1.motor_rpm , packet1.motor_temperature , packet1.motor_thrust_pct , packet1.motor_status );
    mavlink_msg_hk_drone_motor_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_MOTOR_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_MOTOR_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_drone_flight_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_flight_status_t packet_in = {
        93372036854775807ULL,29,96,163,230,41,108,175
    };
    mavlink_hk_drone_flight_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.flight_mode = packet_in.flight_mode;
        packet1.is_armed = packet_in.is_armed;
        packet1.land_state = packet_in.land_state;
        packet1.need_attack = packet_in.need_attack;
        packet1.task_finished = packet_in.task_finished;
        packet1.current_task_state = packet_in.current_task_state;
        packet1.guidance_mode = packet_in.guidance_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_flight_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_flight_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_flight_status_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.flight_mode , packet1.is_armed , packet1.land_state , packet1.need_attack , packet1.task_finished , packet1.current_task_state , packet1.guidance_mode );
    mavlink_msg_hk_drone_flight_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_flight_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.flight_mode , packet1.is_armed , packet1.land_state , packet1.need_attack , packet1.task_finished , packet1.current_task_state , packet1.guidance_mode );
    mavlink_msg_hk_drone_flight_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_flight_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_flight_status_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.flight_mode , packet1.is_armed , packet1.land_state , packet1.need_attack , packet1.task_finished , packet1.current_task_state , packet1.guidance_mode );
    mavlink_msg_hk_drone_flight_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_FLIGHT_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_FLIGHT_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_drone_home_vtol(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_drone_home_vtol_t packet_in = {
        93372036854775807ULL,179.0,235.0,291.0,101,168
    };
    mavlink_hk_drone_home_vtol_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.home_latitude_deg = packet_in.home_latitude_deg;
        packet1.home_longitude_deg = packet_in.home_longitude_deg;
        packet1.home_altitude_m = packet_in.home_altitude_m;
        packet1.vtol_state = packet_in.vtol_state;
        packet1.home_valid = packet_in.home_valid;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_home_vtol_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_drone_home_vtol_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_home_vtol_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.vtol_state , packet1.home_valid , packet1.home_latitude_deg , packet1.home_longitude_deg , packet1.home_altitude_m );
    mavlink_msg_hk_drone_home_vtol_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_home_vtol_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.vtol_state , packet1.home_valid , packet1.home_latitude_deg , packet1.home_longitude_deg , packet1.home_altitude_m );
    mavlink_msg_hk_drone_home_vtol_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_drone_home_vtol_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_drone_home_vtol_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.vtol_state , packet1.home_valid , packet1.home_latitude_deg , packet1.home_longitude_deg , packet1.home_altitude_m );
    mavlink_msg_hk_drone_home_vtol_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DRONE_HOME_VTOL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DRONE_HOME_VTOL) != NULL);
#endif
}

static void mavlink_test_hk_mavlink_bridge_heart(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_mavlink_bridge_heart_t packet_in = {
        5
    };
    mavlink_hk_mavlink_bridge_heart_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.bridge_status = packet_in.bridge_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_mavlink_bridge_heart_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_mavlink_bridge_heart_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_mavlink_bridge_heart_pack(system_id, component_id, &msg , packet1.bridge_status );
    mavlink_msg_hk_mavlink_bridge_heart_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_mavlink_bridge_heart_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.bridge_status );
    mavlink_msg_hk_mavlink_bridge_heart_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_mavlink_bridge_heart_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_mavlink_bridge_heart_send(MAVLINK_COMM_1 , packet1.bridge_status );
    mavlink_msg_hk_mavlink_bridge_heart_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_MAVLINK_BRIDGE_HEART") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_MAVLINK_BRIDGE_HEART) != NULL);
#endif
}

static void mavlink_test_hk_gpu_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_GPU_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_gpu_status_t packet_in = {
        5,72
    };
    mavlink_hk_gpu_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.gpu_usage = packet_in.gpu_usage;
        packet1.gpu_temperature = packet_in.gpu_temperature;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_GPU_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gpu_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_gpu_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gpu_status_pack(system_id, component_id, &msg , packet1.gpu_usage , packet1.gpu_temperature );
    mavlink_msg_hk_gpu_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gpu_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.gpu_usage , packet1.gpu_temperature );
    mavlink_msg_hk_gpu_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_gpu_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_gpu_status_send(MAVLINK_COMM_1 , packet1.gpu_usage , packet1.gpu_temperature );
    mavlink_msg_hk_gpu_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_GPU_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_GPU_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_detection_result(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_DETECTION_RESULT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_detection_result_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,{ 213.0, 214.0, 215.0, 216.0 },{ 325.0, 326.0, 327.0, 328.0 },20355,63,130,197,8,75,142
    };
    mavlink_hk_detection_result_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.confidence = packet_in.confidence;
        packet1.track_score = packet_in.track_score;
        packet1.horizontal_angle_rad = packet_in.horizontal_angle_rad;
        packet1.vertical_angle_rad = packet_in.vertical_angle_rad;
        packet1.distance_m = packet_in.distance_m;
        packet1.error_code = packet_in.error_code;
        packet1.status = packet_in.status;
        packet1.camera_index = packet_in.camera_index;
        packet1.level = packet_in.level;
        packet1.ai_running = packet_in.ai_running;
        packet1.has_error = packet_in.has_error;
        packet1.tracked = packet_in.tracked;
        
        mav_array_memcpy(packet1.camera_position, packet_in.camera_position, sizeof(float)*4);
        mav_array_memcpy(packet1.box, packet_in.box, sizeof(float)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_DETECTION_RESULT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_detection_result_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_detection_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_detection_result_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.status , packet1.camera_index , packet1.level , packet1.ai_running , packet1.has_error , packet1.error_code , packet1.tracked , packet1.confidence , packet1.track_score , packet1.horizontal_angle_rad , packet1.vertical_angle_rad , packet1.distance_m , packet1.camera_position , packet1.box );
    mavlink_msg_hk_detection_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_detection_result_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.status , packet1.camera_index , packet1.level , packet1.ai_running , packet1.has_error , packet1.error_code , packet1.tracked , packet1.confidence , packet1.track_score , packet1.horizontal_angle_rad , packet1.vertical_angle_rad , packet1.distance_m , packet1.camera_position , packet1.box );
    mavlink_msg_hk_detection_result_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_detection_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_detection_result_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.status , packet1.camera_index , packet1.level , packet1.ai_running , packet1.has_error , packet1.error_code , packet1.tracked , packet1.confidence , packet1.track_score , packet1.horizontal_angle_rad , packet1.vertical_angle_rad , packet1.distance_m , packet1.camera_position , packet1.box );
    mavlink_msg_hk_detection_result_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_DETECTION_RESULT") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_DETECTION_RESULT) != NULL);
#endif
}

static void mavlink_test_hk_recognition_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_RECOGNITION_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_recognition_status_t packet_in = {
        93372036854775807ULL,17651,17755,"MNOPQRSTUVWXYZABCDE","GHIJKLMNO",3
    };
    mavlink_hk_recognition_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp_ms = packet_in.timestamp_ms;
        packet1.track_fault_code = packet_in.track_fault_code;
        packet1.track_response_time = packet_in.track_response_time;
        packet1.track_status = packet_in.track_status;
        
        mav_array_memcpy(packet1.track_model_name, packet_in.track_model_name, sizeof(char)*20);
        mav_array_memcpy(packet1.track_version, packet_in.track_version, sizeof(char)*10);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_RECOGNITION_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_recognition_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_recognition_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_recognition_status_pack(system_id, component_id, &msg , packet1.timestamp_ms , packet1.track_model_name , packet1.track_version , packet1.track_status , packet1.track_fault_code , packet1.track_response_time );
    mavlink_msg_hk_recognition_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_recognition_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp_ms , packet1.track_model_name , packet1.track_version , packet1.track_status , packet1.track_fault_code , packet1.track_response_time );
    mavlink_msg_hk_recognition_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_recognition_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_recognition_status_send(MAVLINK_COMM_1 , packet1.timestamp_ms , packet1.track_model_name , packet1.track_version , packet1.track_status , packet1.track_fault_code , packet1.track_response_time );
    mavlink_msg_hk_recognition_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_RECOGNITION_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_RECOGNITION_STATUS) != NULL);
#endif
}

static void mavlink_test_hk_track_ai_key_log(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_hk_track_ai_key_log_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,129.0,157.0,18483,211,22,89,156
    };
    mavlink_hk_track_ai_key_log_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status_timestamp_ms = packet_in.status_timestamp_ms;
        packet1.detection_timestamp_ms = packet_in.detection_timestamp_ms;
        packet1.horizontal_angle_rad = packet_in.horizontal_angle_rad;
        packet1.vertical_angle_rad = packet_in.vertical_angle_rad;
        packet1.error_code = packet_in.error_code;
        packet1.status = packet_in.status;
        packet1.ai_running = packet_in.ai_running;
        packet1.has_error = packet_in.has_error;
        packet1.tracked = packet_in.tracked;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_track_ai_key_log_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_hk_track_ai_key_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_track_ai_key_log_pack(system_id, component_id, &msg , packet1.status_timestamp_ms , packet1.status , packet1.ai_running , packet1.has_error , packet1.error_code , packet1.detection_timestamp_ms , packet1.tracked , packet1.horizontal_angle_rad , packet1.vertical_angle_rad );
    mavlink_msg_hk_track_ai_key_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_track_ai_key_log_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status_timestamp_ms , packet1.status , packet1.ai_running , packet1.has_error , packet1.error_code , packet1.detection_timestamp_ms , packet1.tracked , packet1.horizontal_angle_rad , packet1.vertical_angle_rad );
    mavlink_msg_hk_track_ai_key_log_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_hk_track_ai_key_log_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_hk_track_ai_key_log_send(MAVLINK_COMM_1 , packet1.status_timestamp_ms , packet1.status , packet1.ai_running , packet1.has_error , packet1.error_code , packet1.detection_timestamp_ms , packet1.tracked , packet1.horizontal_angle_rad , packet1.vertical_angle_rad );
    mavlink_msg_hk_track_ai_key_log_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("HK_TRACK_AI_KEY_LOG") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_HK_TRACK_AI_KEY_LOG) != NULL);
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
    mavlink_test_hk_impact_confirm(system_id, component_id, last_msg);
    mavlink_test_hk_target_situation(system_id, component_id, last_msg);
    mavlink_test_hk_drone_position(system_id, component_id, last_msg);
    mavlink_test_hk_drone_velocity(system_id, component_id, last_msg);
    mavlink_test_hk_drone_attitude(system_id, component_id, last_msg);
    mavlink_test_hk_drone_attitude_base(system_id, component_id, last_msg);
    mavlink_test_hk_drone_heartbeat(system_id, component_id, last_msg);
    mavlink_test_hk_drone_heading(system_id, component_id, last_msg);
    mavlink_test_hk_drone_battery(system_id, component_id, last_msg);
    mavlink_test_hk_drone_gps(system_id, component_id, last_msg);
    mavlink_test_hk_drone_system_status(system_id, component_id, last_msg);
    mavlink_test_hk_drone_ai_status(system_id, component_id, last_msg);
    mavlink_test_hk_drone_motor_status(system_id, component_id, last_msg);
    mavlink_test_hk_drone_flight_status(system_id, component_id, last_msg);
    mavlink_test_hk_drone_home_vtol(system_id, component_id, last_msg);
    mavlink_test_hk_mavlink_bridge_heart(system_id, component_id, last_msg);
    mavlink_test_hk_gpu_status(system_id, component_id, last_msg);
    mavlink_test_hk_detection_result(system_id, component_id, last_msg);
    mavlink_test_hk_recognition_status(system_id, component_id, last_msg);
    mavlink_test_hk_track_ai_key_log(system_id, component_id, last_msg);
    mavlink_test_hk_launcher_status(system_id, component_id, last_msg);
    mavlink_test_hk_launcher_detail(system_id, component_id, last_msg);
    mavlink_test_hk_gcs_position(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // HIVEMIND_TESTSUITE_H
