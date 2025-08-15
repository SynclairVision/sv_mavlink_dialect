/** @file
 *    @brief MAVLink comm protocol testsuite generated from test_dialect.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef TEST_DIALECT_TESTSUITE_H
#define TEST_DIALECT_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_test_dialect(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_test_dialect(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_custom_message_1(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CUSTOM_MESSAGE_1 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_custom_message_1_t packet_in = {
        93372036854775807ULL,73.0,41
    };
    mavlink_custom_message_1_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.reading = packet_in.reading;
        packet1.sensor_status = packet_in.sensor_status;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_1_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_custom_message_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_1_pack(system_id, component_id, &msg , packet1.timestamp , packet1.reading , packet1.sensor_status );
    mavlink_msg_custom_message_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_1_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.reading , packet1.sensor_status );
    mavlink_msg_custom_message_1_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_custom_message_1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_1_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.reading , packet1.sensor_status );
    mavlink_msg_custom_message_1_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CUSTOM_MESSAGE_1") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CUSTOM_MESSAGE_1) != NULL);
#endif
}

static void mavlink_test_custom_message_2(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CUSTOM_MESSAGE_2 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_custom_message_2_t packet_in = {
        963497464,17
    };
    mavlink_custom_message_2_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.uptime_ms = packet_in.uptime_ms;
        packet1.work_state = packet_in.work_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_2_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_custom_message_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_2_pack(system_id, component_id, &msg , packet1.uptime_ms , packet1.work_state );
    mavlink_msg_custom_message_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_2_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.uptime_ms , packet1.work_state );
    mavlink_msg_custom_message_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_custom_message_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_custom_message_2_send(MAVLINK_COMM_1 , packet1.uptime_ms , packet1.work_state );
    mavlink_msg_custom_message_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CUSTOM_MESSAGE_2") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CUSTOM_MESSAGE_2) != NULL);
#endif
}

static void mavlink_test_test_dialect(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_custom_message_1(system_id, component_id, last_msg);
    mavlink_test_custom_message_2(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // TEST_DIALECT_TESTSUITE_H
