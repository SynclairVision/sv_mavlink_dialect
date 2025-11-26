/** @file
 *    @brief MAVLink comm protocol testsuite generated from sv_msg_defs.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef SV_MSG_DEFS_TESTSUITE_H
#define SV_MSG_DEFS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_sv_msg_defs(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_sv_msg_defs(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_system_status_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_system_status_parameters_t packet_in = {
        5,72
    };
    mavlink_system_status_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.status = packet_in.status;
        packet1.error = packet_in.error;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_status_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_system_status_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_status_parameters_pack(system_id, component_id, &msg , packet1.status , packet1.error );
    mavlink_msg_system_status_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_status_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.status , packet1.error );
    mavlink_msg_system_status_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_system_status_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_status_parameters_send(MAVLINK_COMM_1 , packet1.status , packet1.error );
    mavlink_msg_system_status_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SYSTEM_STATUS_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_general_settings_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_general_settings_parameters_t packet_in = {
        17235,17339,17443,17547,29,96,"KLMNOPQRSTUVWXY","ABCDEFGHIJKLMNO"
    };
    mavlink_general_settings_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.camera_width = packet_in.camera_width;
        packet1.camera_height = packet_in.camera_height;
        packet1.roi_width = packet_in.roi_width;
        packet1.roi_height = packet_in.roi_height;
        packet1.camera_fps = packet_in.camera_fps;
        packet1.run_ai = packet_in.run_ai;
        
        mav_array_memcpy(packet1.crop_model_name, packet_in.crop_model_name, sizeof(char)*16);
        mav_array_memcpy(packet1.var_model_name, packet_in.var_model_name, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_general_settings_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_general_settings_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_general_settings_parameters_pack(system_id, component_id, &msg , packet1.camera_width , packet1.camera_height , packet1.roi_width , packet1.roi_height , packet1.camera_fps , packet1.run_ai , packet1.crop_model_name , packet1.var_model_name );
    mavlink_msg_general_settings_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_general_settings_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.camera_width , packet1.camera_height , packet1.roi_width , packet1.roi_height , packet1.camera_fps , packet1.run_ai , packet1.crop_model_name , packet1.var_model_name );
    mavlink_msg_general_settings_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_general_settings_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_general_settings_parameters_send(MAVLINK_COMM_1 , packet1.camera_width , packet1.camera_height , packet1.roi_width , packet1.roi_height , packet1.camera_fps , packet1.run_ai , packet1.crop_model_name , packet1.var_model_name );
    mavlink_msg_general_settings_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("GENERAL_SETTINGS_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_model_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MODEL_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_model_parameters_t packet_in = {
        "ABCDEFGHIJKLMNO"
    };
    mavlink_model_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.model_name, packet_in.model_name, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_model_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_model_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_model_parameters_pack(system_id, component_id, &msg , packet1.model_name );
    mavlink_msg_model_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_model_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.model_name );
    mavlink_msg_model_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_model_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_model_parameters_send(MAVLINK_COMM_1 , packet1.model_name );
    mavlink_msg_model_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("MODEL_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_MODEL_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_video_output_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_VIDEO_OUTPUT_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_video_output_parameters_t packet_in = {
        17235,17339,{ 17443, 17444, 17445, 17446 },{ 17859, 17860, 17861, 17862 },{ 18275, 18276, 18277, 18278 },{ 18691, 18692, 18693, 18694 },19107,19211,19315,19419,19523,"UVWXYZA",39,106,173
    };
    mavlink_video_output_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.width = packet_in.width;
        packet1.height = packet_in.height;
        packet1.detection_overlay_x = packet_in.detection_overlay_x;
        packet1.detection_overlay_y = packet_in.detection_overlay_y;
        packet1.detection_overlay_w = packet_in.detection_overlay_w;
        packet1.detection_overlay_h = packet_in.detection_overlay_h;
        packet1.single_detection_size = packet_in.single_detection_size;
        packet1.fps = packet_in.fps;
        packet1.layout_mode = packet_in.layout_mode;
        packet1.detection_overlay_mode = packet_in.detection_overlay_mode;
        
        mav_array_memcpy(packet1.views_x, packet_in.views_x, sizeof(uint16_t)*4);
        mav_array_memcpy(packet1.views_y, packet_in.views_y, sizeof(uint16_t)*4);
        mav_array_memcpy(packet1.views_w, packet_in.views_w, sizeof(uint16_t)*4);
        mav_array_memcpy(packet1.views_h, packet_in.views_h, sizeof(uint16_t)*4);
        mav_array_memcpy(packet1.stream_name, packet_in.stream_name, sizeof(char)*8);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_VIDEO_OUTPUT_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_VIDEO_OUTPUT_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_video_output_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_video_output_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_video_output_parameters_pack(system_id, component_id, &msg , packet1.stream_name , packet1.width , packet1.height , packet1.fps , packet1.layout_mode , packet1.detection_overlay_mode , packet1.views_x , packet1.views_y , packet1.views_w , packet1.views_h , packet1.detection_overlay_x , packet1.detection_overlay_y , packet1.detection_overlay_w , packet1.detection_overlay_h , packet1.single_detection_size );
    mavlink_msg_video_output_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_video_output_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.stream_name , packet1.width , packet1.height , packet1.fps , packet1.layout_mode , packet1.detection_overlay_mode , packet1.views_x , packet1.views_y , packet1.views_w , packet1.views_h , packet1.detection_overlay_x , packet1.detection_overlay_y , packet1.detection_overlay_w , packet1.detection_overlay_h , packet1.single_detection_size );
    mavlink_msg_video_output_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_video_output_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_video_output_parameters_send(MAVLINK_COMM_1 , packet1.stream_name , packet1.width , packet1.height , packet1.fps , packet1.layout_mode , packet1.detection_overlay_mode , packet1.views_x , packet1.views_y , packet1.views_w , packet1.views_h , packet1.detection_overlay_x , packet1.detection_overlay_y , packet1.detection_overlay_w , packet1.detection_overlay_h , packet1.single_detection_size );
    mavlink_msg_video_output_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("VIDEO_OUTPUT_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_VIDEO_OUTPUT_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_capture_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAPTURE_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_capture_parameters_t packet_in = {
        17235,17339,17,84
    };
    mavlink_capture_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.images_captured = packet_in.images_captured;
        packet1.videos_captured = packet_in.videos_captured;
        packet1.cap_single_image = packet_in.cap_single_image;
        packet1.record_video = packet_in.record_video;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_capture_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_parameters_pack(system_id, component_id, &msg , packet1.cap_single_image , packet1.record_video , packet1.images_captured , packet1.videos_captured );
    mavlink_msg_capture_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cap_single_image , packet1.record_video , packet1.images_captured , packet1.videos_captured );
    mavlink_msg_capture_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_capture_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_capture_parameters_send(MAVLINK_COMM_1 , packet1.cap_single_image , packet1.record_video , packet1.images_captured , packet1.videos_captured );
    mavlink_msg_capture_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAPTURE_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAPTURE_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_detection_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DETECTION_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_detection_parameters_t packet_in = {
        17.0,45.0,73.0,101.0,18067,18171,65,132,199,10,77,144,211
    };
    mavlink_detection_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.crop_confidence_threshold = packet_in.crop_confidence_threshold;
        packet1.var_confidence_threshold = packet_in.var_confidence_threshold;
        packet1.crop_box_overlap = packet_in.crop_box_overlap;
        packet1.var_box_overlap = packet_in.var_box_overlap;
        packet1.crop_box_limit = packet_in.crop_box_limit;
        packet1.var_box_limit = packet_in.var_box_limit;
        packet1.mode = packet_in.mode;
        packet1.sorting_mode = packet_in.sorting_mode;
        packet1.creation_score_scale = packet_in.creation_score_scale;
        packet1.bonus_detection_scale = packet_in.bonus_detection_scale;
        packet1.bonus_redetection_scale = packet_in.bonus_redetection_scale;
        packet1.missed_detection_penalty = packet_in.missed_detection_penalty;
        packet1.missed_redetection_penalty = packet_in.missed_redetection_penalty;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detection_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_detection_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detection_parameters_pack(system_id, component_id, &msg , packet1.mode , packet1.sorting_mode , packet1.crop_confidence_threshold , packet1.var_confidence_threshold , packet1.crop_box_limit , packet1.var_box_limit , packet1.crop_box_overlap , packet1.var_box_overlap , packet1.creation_score_scale , packet1.bonus_detection_scale , packet1.bonus_redetection_scale , packet1.missed_detection_penalty , packet1.missed_redetection_penalty );
    mavlink_msg_detection_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detection_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.mode , packet1.sorting_mode , packet1.crop_confidence_threshold , packet1.var_confidence_threshold , packet1.crop_box_limit , packet1.var_box_limit , packet1.crop_box_overlap , packet1.var_box_overlap , packet1.creation_score_scale , packet1.bonus_detection_scale , packet1.bonus_redetection_scale , packet1.missed_detection_penalty , packet1.missed_redetection_penalty );
    mavlink_msg_detection_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_detection_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detection_parameters_send(MAVLINK_COMM_1 , packet1.mode , packet1.sorting_mode , packet1.crop_confidence_threshold , packet1.var_confidence_threshold , packet1.crop_box_limit , packet1.var_box_limit , packet1.crop_box_overlap , packet1.var_box_overlap , packet1.creation_score_scale , packet1.bonus_detection_scale , packet1.bonus_redetection_scale , packet1.missed_detection_penalty , packet1.missed_redetection_penalty );
    mavlink_msg_detection_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DETECTION_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DETECTION_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_detected_roi_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_detected_roi_parameters_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,101,168,235
    };
    mavlink_detected_roi_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw_abs = packet_in.yaw_abs;
        packet1.pitch_abs = packet_in.pitch_abs;
        packet1.yaw_rel = packet_in.yaw_rel;
        packet1.pitch_rel = packet_in.pitch_rel;
        packet1.latitude = packet_in.latitude;
        packet1.longitude = packet_in.longitude;
        packet1.altitude = packet_in.altitude;
        packet1.distance = packet_in.distance;
        packet1.index = packet_in.index;
        packet1.score = packet_in.score;
        packet1.total_detections = packet_in.total_detections;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_roi_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_detected_roi_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_roi_parameters_pack(system_id, component_id, &msg , packet1.index , packet1.score , packet1.total_detections , packet1.yaw_abs , packet1.pitch_abs , packet1.yaw_rel , packet1.pitch_rel , packet1.latitude , packet1.longitude , packet1.altitude , packet1.distance );
    mavlink_msg_detected_roi_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_roi_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.score , packet1.total_detections , packet1.yaw_abs , packet1.pitch_abs , packet1.yaw_rel , packet1.pitch_rel , packet1.latitude , packet1.longitude , packet1.altitude , packet1.distance );
    mavlink_msg_detected_roi_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_detected_roi_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_detected_roi_parameters_send(MAVLINK_COMM_1 , packet1.index , packet1.score , packet1.total_detections , packet1.yaw_abs , packet1.pitch_abs , packet1.yaw_rel , packet1.pitch_rel , packet1.latitude , packet1.longitude , packet1.altitude , packet1.distance );
    mavlink_msg_detected_roi_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DETECTED_ROI_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_lens_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_LENS_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_lens_parameters_t packet_in = {
        5
    };
    mavlink_lens_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lens_id = packet_in.lens_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_lens_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_lens_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_lens_parameters_pack(system_id, component_id, &msg , packet1.lens_id );
    mavlink_msg_lens_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_lens_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.lens_id );
    mavlink_msg_lens_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_lens_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_lens_parameters_send(MAVLINK_COMM_1 , packet1.lens_id );
    mavlink_msg_lens_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("LENS_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_LENS_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_euler_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_EULER_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_euler_parameters_t packet_in = {
        17.0,45.0,73.0,41,108
    };
    mavlink_cam_euler_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw = packet_in.yaw;
        packet1.pitch = packet_in.pitch;
        packet1.roll = packet_in.roll;
        packet1.cam_id = packet_in.cam_id;
        packet1.is_delta = packet_in.is_delta;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_euler_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_euler_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_euler_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.is_delta , packet1.yaw , packet1.pitch , packet1.roll );
    mavlink_msg_cam_euler_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_euler_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.is_delta , packet1.yaw , packet1.pitch , packet1.roll );
    mavlink_msg_cam_euler_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_euler_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_euler_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.is_delta , packet1.yaw , packet1.pitch , packet1.roll );
    mavlink_msg_cam_euler_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_EULER_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_EULER_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_zoom_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_ZOOM_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_zoom_parameters_t packet_in = {
        5,72
    };
    mavlink_cam_zoom_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cam_id = packet_in.cam_id;
        packet1.zoom = packet_in.zoom;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_ZOOM_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_ZOOM_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_zoom_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_zoom_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_zoom_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.zoom );
    mavlink_msg_cam_zoom_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_zoom_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.zoom );
    mavlink_msg_cam_zoom_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_zoom_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_zoom_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.zoom );
    mavlink_msg_cam_zoom_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_ZOOM_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_ZOOM_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_lock_flags_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_LOCK_FLAGS_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_lock_flags_parameters_t packet_in = {
        5,72
    };
    mavlink_cam_lock_flags_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cam_id = packet_in.cam_id;
        packet1.flags = packet_in.flags;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_LOCK_FLAGS_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_LOCK_FLAGS_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_lock_flags_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_lock_flags_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_lock_flags_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.flags );
    mavlink_msg_cam_lock_flags_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_lock_flags_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.flags );
    mavlink_msg_cam_lock_flags_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_lock_flags_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_lock_flags_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.flags );
    mavlink_msg_cam_lock_flags_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_LOCK_FLAGS_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_LOCK_FLAGS_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_control_mode_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_control_mode_parameters_t packet_in = {
        5,72
    };
    mavlink_cam_control_mode_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cam_id = packet_in.cam_id;
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_control_mode_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_control_mode_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_control_mode_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.mode );
    mavlink_msg_cam_control_mode_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_control_mode_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.mode );
    mavlink_msg_cam_control_mode_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_control_mode_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_control_mode_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.mode );
    mavlink_msg_cam_control_mode_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_CONTROL_MODE_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_crop_mode_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_CROP_MODE_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_crop_mode_parameters_t packet_in = {
        5,72
    };
    mavlink_cam_crop_mode_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.cam_id = packet_in.cam_id;
        packet1.mode = packet_in.mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_CROP_MODE_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_CROP_MODE_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_crop_mode_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_crop_mode_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_crop_mode_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.mode );
    mavlink_msg_cam_crop_mode_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_crop_mode_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.mode );
    mavlink_msg_cam_crop_mode_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_crop_mode_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_crop_mode_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.mode );
    mavlink_msg_cam_crop_mode_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_CROP_MODE_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_CROP_MODE_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_offset_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_OFFSET_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_offset_parameters_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,77
    };
    mavlink_cam_offset_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.yaw_abs = packet_in.yaw_abs;
        packet1.pitch_abs = packet_in.pitch_abs;
        packet1.yaw_rel = packet_in.yaw_rel;
        packet1.pitch_rel = packet_in.pitch_rel;
        packet1.cam_id = packet_in.cam_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_OFFSET_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_OFFSET_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_offset_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_offset_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_offset_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.x , packet1.y , packet1.yaw_abs , packet1.pitch_abs , packet1.yaw_rel , packet1.pitch_rel );
    mavlink_msg_cam_offset_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_offset_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.x , packet1.y , packet1.yaw_abs , packet1.pitch_abs , packet1.yaw_rel , packet1.pitch_rel );
    mavlink_msg_cam_offset_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_offset_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_offset_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.x , packet1.y , packet1.yaw_abs , packet1.pitch_abs , packet1.yaw_rel , packet1.pitch_rel );
    mavlink_msg_cam_offset_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_OFFSET_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_OFFSET_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_fov_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_FOV_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_fov_parameters_t packet_in = {
        17.0,17
    };
    mavlink_cam_fov_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.fov = packet_in.fov;
        packet1.cam_id = packet_in.cam_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_FOV_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_FOV_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_fov_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_fov_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_fov_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.fov );
    mavlink_msg_cam_fov_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_fov_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.fov );
    mavlink_msg_cam_fov_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_fov_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_fov_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.fov );
    mavlink_msg_cam_fov_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_FOV_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_FOV_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_target_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_target_parameters_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,65
    };
    mavlink_cam_target_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.t_latitude = packet_in.t_latitude;
        packet1.t_longitude = packet_in.t_longitude;
        packet1.t_altitude = packet_in.t_altitude;
        packet1.cam_id = packet_in.cam_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_target_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_target_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_target_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.x , packet1.y , packet1.t_latitude , packet1.t_longitude , packet1.t_altitude );
    mavlink_msg_cam_target_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_target_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.x , packet1.y , packet1.t_latitude , packet1.t_longitude , packet1.t_altitude );
    mavlink_msg_cam_target_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_target_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_target_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.x , packet1.y , packet1.t_latitude , packet1.t_longitude , packet1.t_altitude );
    mavlink_msg_cam_target_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_TARGET_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_sensor_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_sensor_parameters_t packet_in = {
        963497464,963497672,963497880,963498088,129.0
    };
    mavlink_cam_sensor_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.min_exposure = packet_in.min_exposure;
        packet1.max_exposure = packet_in.max_exposure;
        packet1.min_gain = packet_in.min_gain;
        packet1.max_gain = packet_in.max_gain;
        packet1.target_brightness = packet_in.target_brightness;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_sensor_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_sensor_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_sensor_parameters_pack(system_id, component_id, &msg , packet1.min_exposure , packet1.max_exposure , packet1.min_gain , packet1.max_gain , packet1.target_brightness );
    mavlink_msg_cam_sensor_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_sensor_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.min_exposure , packet1.max_exposure , packet1.min_gain , packet1.max_gain , packet1.target_brightness );
    mavlink_msg_cam_sensor_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_sensor_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_sensor_parameters_send(MAVLINK_COMM_1 , packet1.min_exposure , packet1.max_exposure , packet1.min_gain , packet1.max_gain , packet1.target_brightness );
    mavlink_msg_cam_sensor_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_SENSOR_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_cam_depth_estimation_parameters(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cam_depth_estimation_parameters_t packet_in = {
        17.0,17,84
    };
    mavlink_cam_depth_estimation_parameters_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.depth = packet_in.depth;
        packet1.cam_id = packet_in.cam_id;
        packet1.depth_estimation_mode = packet_in.depth_estimation_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_depth_estimation_parameters_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cam_depth_estimation_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_depth_estimation_parameters_pack(system_id, component_id, &msg , packet1.cam_id , packet1.depth_estimation_mode , packet1.depth );
    mavlink_msg_cam_depth_estimation_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_depth_estimation_parameters_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.cam_id , packet1.depth_estimation_mode , packet1.depth );
    mavlink_msg_cam_depth_estimation_parameters_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cam_depth_estimation_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cam_depth_estimation_parameters_send(MAVLINK_COMM_1 , packet1.cam_id , packet1.depth_estimation_mode , packet1.depth );
    mavlink_msg_cam_depth_estimation_parameters_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("CAM_DEPTH_ESTIMATION_PARAMETERS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS) != NULL);
#endif
}

static void mavlink_test_sv_msg_defs(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_system_status_parameters(system_id, component_id, last_msg);
    mavlink_test_general_settings_parameters(system_id, component_id, last_msg);
    mavlink_test_model_parameters(system_id, component_id, last_msg);
    mavlink_test_video_output_parameters(system_id, component_id, last_msg);
    mavlink_test_capture_parameters(system_id, component_id, last_msg);
    mavlink_test_detection_parameters(system_id, component_id, last_msg);
    mavlink_test_detected_roi_parameters(system_id, component_id, last_msg);
    mavlink_test_lens_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_euler_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_zoom_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_lock_flags_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_control_mode_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_crop_mode_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_offset_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_fov_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_target_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_sensor_parameters(system_id, component_id, last_msg);
    mavlink_test_cam_depth_estimation_parameters(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // SV_MSG_DEFS_TESTSUITE_H
