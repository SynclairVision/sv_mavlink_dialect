#pragma once
// MESSAGE SINGLE_TARGET_TRACKING_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS 40012


typedef struct __mavlink_single_target_tracking_parameters_t {
 float x_offset; /*<  Normalized horizontal offset [-1.0, 1.0].*/
 float y_offset; /*<  Normalized vertical offset [-1.0, 1.0].*/
 float confidence; /*<  System's confidence in the current target.*/
 float yaw_global; /*<  global yaw of target in radians.*/
 float pitch_global; /*<  global pitch of target in radians.*/
 float yaw_rel; /*<  Relative yaw of target in radians.*/
 float pitch_rel; /*<  Relative pitch of target in radians.*/
 uint16_t zoom_level; /*<  Tracking zoom level (0 = widest, higher = tighter).*/
 uint8_t command; /*<  Tracking command, see SV_STT_COMMAND.*/
 char stream_name[8]; /*<  Stream name (max 8 characters).*/
 uint8_t cam_id; /*<  Camera index on the stream.*/
 uint8_t detection_id; /*<  Detection ID to follow when relevant.*/
 uint8_t rel_frame_of_reference; /*<  Indicates the frame of reference for the relative yaw and pitch
angles.*/
} mavlink_single_target_tracking_parameters_t;

#define MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN 42
#define MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN 42
#define MAVLINK_MSG_ID_40012_LEN 42
#define MAVLINK_MSG_ID_40012_MIN_LEN 42

#define MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC 70
#define MAVLINK_MSG_ID_40012_CRC 70

#define MAVLINK_MSG_SINGLE_TARGET_TRACKING_PARAMETERS_FIELD_STREAM_NAME_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SINGLE_TARGET_TRACKING_PARAMETERS { \
    40012, \
    "SINGLE_TARGET_TRACKING_PARAMETERS", \
    13, \
    {  { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_single_target_tracking_parameters_t, command) }, \
         { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 31, offsetof(mavlink_single_target_tracking_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_single_target_tracking_parameters_t, cam_id) }, \
         { "x_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_single_target_tracking_parameters_t, x_offset) }, \
         { "y_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_single_target_tracking_parameters_t, y_offset) }, \
         { "detection_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_single_target_tracking_parameters_t, detection_id) }, \
         { "zoom_level", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_single_target_tracking_parameters_t, zoom_level) }, \
         { "confidence", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_single_target_tracking_parameters_t, confidence) }, \
         { "yaw_global", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_single_target_tracking_parameters_t, yaw_global) }, \
         { "pitch_global", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_single_target_tracking_parameters_t, pitch_global) }, \
         { "rel_frame_of_reference", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_single_target_tracking_parameters_t, rel_frame_of_reference) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_single_target_tracking_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_single_target_tracking_parameters_t, pitch_rel) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SINGLE_TARGET_TRACKING_PARAMETERS { \
    "SINGLE_TARGET_TRACKING_PARAMETERS", \
    13, \
    {  { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_single_target_tracking_parameters_t, command) }, \
         { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 31, offsetof(mavlink_single_target_tracking_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 39, offsetof(mavlink_single_target_tracking_parameters_t, cam_id) }, \
         { "x_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_single_target_tracking_parameters_t, x_offset) }, \
         { "y_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_single_target_tracking_parameters_t, y_offset) }, \
         { "detection_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_single_target_tracking_parameters_t, detection_id) }, \
         { "zoom_level", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_single_target_tracking_parameters_t, zoom_level) }, \
         { "confidence", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_single_target_tracking_parameters_t, confidence) }, \
         { "yaw_global", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_single_target_tracking_parameters_t, yaw_global) }, \
         { "pitch_global", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_single_target_tracking_parameters_t, pitch_global) }, \
         { "rel_frame_of_reference", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_single_target_tracking_parameters_t, rel_frame_of_reference) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_single_target_tracking_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_single_target_tracking_parameters_t, pitch_rel) }, \
         } \
}
#endif

/**
 * @brief Pack a single_target_tracking_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  Tracking command, see SV_STT_COMMAND.
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param x_offset  Normalized horizontal offset [-1.0, 1.0].
 * @param y_offset  Normalized vertical offset [-1.0, 1.0].
 * @param detection_id  Detection ID to follow when relevant.
 * @param zoom_level  Tracking zoom level (0 = widest, higher = tighter).
 * @param confidence  System's confidence in the current target.
 * @param yaw_global  global yaw of target in radians.
 * @param pitch_global  global pitch of target in radians.
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch
angles.
 * @param yaw_rel  Relative yaw of target in radians.
 * @param pitch_rel  Relative pitch of target in radians.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t command, const char *stream_name, uint8_t cam_id, float x_offset, float y_offset, uint8_t detection_id, uint16_t zoom_level, float confidence, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, float yaw_rel, float pitch_rel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x_offset);
    _mav_put_float(buf, 4, y_offset);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, yaw_global);
    _mav_put_float(buf, 16, pitch_global);
    _mav_put_float(buf, 20, yaw_rel);
    _mav_put_float(buf, 24, pitch_rel);
    _mav_put_uint16_t(buf, 28, zoom_level);
    _mav_put_uint8_t(buf, 30, command);
    _mav_put_uint8_t(buf, 39, cam_id);
    _mav_put_uint8_t(buf, 40, detection_id);
    _mav_put_uint8_t(buf, 41, rel_frame_of_reference);
    _mav_put_char_array(buf, 31, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#else
    mavlink_single_target_tracking_parameters_t packet;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.confidence = confidence;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.zoom_level = zoom_level;
    packet.command = command;
    packet.cam_id = cam_id;
    packet.detection_id = detection_id;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
}

/**
 * @brief Pack a single_target_tracking_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  Tracking command, see SV_STT_COMMAND.
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param x_offset  Normalized horizontal offset [-1.0, 1.0].
 * @param y_offset  Normalized vertical offset [-1.0, 1.0].
 * @param detection_id  Detection ID to follow when relevant.
 * @param zoom_level  Tracking zoom level (0 = widest, higher = tighter).
 * @param confidence  System's confidence in the current target.
 * @param yaw_global  global yaw of target in radians.
 * @param pitch_global  global pitch of target in radians.
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch
angles.
 * @param yaw_rel  Relative yaw of target in radians.
 * @param pitch_rel  Relative pitch of target in radians.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t command, const char *stream_name, uint8_t cam_id, float x_offset, float y_offset, uint8_t detection_id, uint16_t zoom_level, float confidence, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, float yaw_rel, float pitch_rel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x_offset);
    _mav_put_float(buf, 4, y_offset);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, yaw_global);
    _mav_put_float(buf, 16, pitch_global);
    _mav_put_float(buf, 20, yaw_rel);
    _mav_put_float(buf, 24, pitch_rel);
    _mav_put_uint16_t(buf, 28, zoom_level);
    _mav_put_uint8_t(buf, 30, command);
    _mav_put_uint8_t(buf, 39, cam_id);
    _mav_put_uint8_t(buf, 40, detection_id);
    _mav_put_uint8_t(buf, 41, rel_frame_of_reference);
    _mav_put_char_array(buf, 31, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#else
    mavlink_single_target_tracking_parameters_t packet;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.confidence = confidence;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.zoom_level = zoom_level;
    packet.command = command;
    packet.cam_id = cam_id;
    packet.detection_id = detection_id;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a single_target_tracking_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command  Tracking command, see SV_STT_COMMAND.
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param x_offset  Normalized horizontal offset [-1.0, 1.0].
 * @param y_offset  Normalized vertical offset [-1.0, 1.0].
 * @param detection_id  Detection ID to follow when relevant.
 * @param zoom_level  Tracking zoom level (0 = widest, higher = tighter).
 * @param confidence  System's confidence in the current target.
 * @param yaw_global  global yaw of target in radians.
 * @param pitch_global  global pitch of target in radians.
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch
angles.
 * @param yaw_rel  Relative yaw of target in radians.
 * @param pitch_rel  Relative pitch of target in radians.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t command,const char *stream_name,uint8_t cam_id,float x_offset,float y_offset,uint8_t detection_id,uint16_t zoom_level,float confidence,float yaw_global,float pitch_global,uint8_t rel_frame_of_reference,float yaw_rel,float pitch_rel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x_offset);
    _mav_put_float(buf, 4, y_offset);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, yaw_global);
    _mav_put_float(buf, 16, pitch_global);
    _mav_put_float(buf, 20, yaw_rel);
    _mav_put_float(buf, 24, pitch_rel);
    _mav_put_uint16_t(buf, 28, zoom_level);
    _mav_put_uint8_t(buf, 30, command);
    _mav_put_uint8_t(buf, 39, cam_id);
    _mav_put_uint8_t(buf, 40, detection_id);
    _mav_put_uint8_t(buf, 41, rel_frame_of_reference);
    _mav_put_char_array(buf, 31, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#else
    mavlink_single_target_tracking_parameters_t packet;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.confidence = confidence;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.zoom_level = zoom_level;
    packet.command = command;
    packet.cam_id = cam_id;
    packet.detection_id = detection_id;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
}

/**
 * @brief Encode a single_target_tracking_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param single_target_tracking_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_single_target_tracking_parameters_t* single_target_tracking_parameters)
{
    return mavlink_msg_single_target_tracking_parameters_pack(system_id, component_id, msg, single_target_tracking_parameters->command, single_target_tracking_parameters->stream_name, single_target_tracking_parameters->cam_id, single_target_tracking_parameters->x_offset, single_target_tracking_parameters->y_offset, single_target_tracking_parameters->detection_id, single_target_tracking_parameters->zoom_level, single_target_tracking_parameters->confidence, single_target_tracking_parameters->yaw_global, single_target_tracking_parameters->pitch_global, single_target_tracking_parameters->rel_frame_of_reference, single_target_tracking_parameters->yaw_rel, single_target_tracking_parameters->pitch_rel);
}

/**
 * @brief Encode a single_target_tracking_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param single_target_tracking_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_single_target_tracking_parameters_t* single_target_tracking_parameters)
{
    return mavlink_msg_single_target_tracking_parameters_pack_chan(system_id, component_id, chan, msg, single_target_tracking_parameters->command, single_target_tracking_parameters->stream_name, single_target_tracking_parameters->cam_id, single_target_tracking_parameters->x_offset, single_target_tracking_parameters->y_offset, single_target_tracking_parameters->detection_id, single_target_tracking_parameters->zoom_level, single_target_tracking_parameters->confidence, single_target_tracking_parameters->yaw_global, single_target_tracking_parameters->pitch_global, single_target_tracking_parameters->rel_frame_of_reference, single_target_tracking_parameters->yaw_rel, single_target_tracking_parameters->pitch_rel);
}

/**
 * @brief Encode a single_target_tracking_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param single_target_tracking_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_single_target_tracking_parameters_t* single_target_tracking_parameters)
{
    return mavlink_msg_single_target_tracking_parameters_pack_status(system_id, component_id, _status, msg,  single_target_tracking_parameters->command, single_target_tracking_parameters->stream_name, single_target_tracking_parameters->cam_id, single_target_tracking_parameters->x_offset, single_target_tracking_parameters->y_offset, single_target_tracking_parameters->detection_id, single_target_tracking_parameters->zoom_level, single_target_tracking_parameters->confidence, single_target_tracking_parameters->yaw_global, single_target_tracking_parameters->pitch_global, single_target_tracking_parameters->rel_frame_of_reference, single_target_tracking_parameters->yaw_rel, single_target_tracking_parameters->pitch_rel);
}

/**
 * @brief Send a single_target_tracking_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param command  Tracking command, see SV_STT_COMMAND.
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param x_offset  Normalized horizontal offset [-1.0, 1.0].
 * @param y_offset  Normalized vertical offset [-1.0, 1.0].
 * @param detection_id  Detection ID to follow when relevant.
 * @param zoom_level  Tracking zoom level (0 = widest, higher = tighter).
 * @param confidence  System's confidence in the current target.
 * @param yaw_global  global yaw of target in radians.
 * @param pitch_global  global pitch of target in radians.
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch
angles.
 * @param yaw_rel  Relative yaw of target in radians.
 * @param pitch_rel  Relative pitch of target in radians.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_single_target_tracking_parameters_send(mavlink_channel_t chan, uint8_t command, const char *stream_name, uint8_t cam_id, float x_offset, float y_offset, uint8_t detection_id, uint16_t zoom_level, float confidence, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, float yaw_rel, float pitch_rel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x_offset);
    _mav_put_float(buf, 4, y_offset);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, yaw_global);
    _mav_put_float(buf, 16, pitch_global);
    _mav_put_float(buf, 20, yaw_rel);
    _mav_put_float(buf, 24, pitch_rel);
    _mav_put_uint16_t(buf, 28, zoom_level);
    _mav_put_uint8_t(buf, 30, command);
    _mav_put_uint8_t(buf, 39, cam_id);
    _mav_put_uint8_t(buf, 40, detection_id);
    _mav_put_uint8_t(buf, 41, rel_frame_of_reference);
    _mav_put_char_array(buf, 31, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS, buf, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
#else
    mavlink_single_target_tracking_parameters_t packet;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.confidence = confidence;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.zoom_level = zoom_level;
    packet.command = command;
    packet.cam_id = cam_id;
    packet.detection_id = detection_id;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a single_target_tracking_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_single_target_tracking_parameters_send_struct(mavlink_channel_t chan, const mavlink_single_target_tracking_parameters_t* single_target_tracking_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_single_target_tracking_parameters_send(chan, single_target_tracking_parameters->command, single_target_tracking_parameters->stream_name, single_target_tracking_parameters->cam_id, single_target_tracking_parameters->x_offset, single_target_tracking_parameters->y_offset, single_target_tracking_parameters->detection_id, single_target_tracking_parameters->zoom_level, single_target_tracking_parameters->confidence, single_target_tracking_parameters->yaw_global, single_target_tracking_parameters->pitch_global, single_target_tracking_parameters->rel_frame_of_reference, single_target_tracking_parameters->yaw_rel, single_target_tracking_parameters->pitch_rel);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS, (const char *)single_target_tracking_parameters, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_single_target_tracking_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t command, const char *stream_name, uint8_t cam_id, float x_offset, float y_offset, uint8_t detection_id, uint16_t zoom_level, float confidence, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, float yaw_rel, float pitch_rel)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x_offset);
    _mav_put_float(buf, 4, y_offset);
    _mav_put_float(buf, 8, confidence);
    _mav_put_float(buf, 12, yaw_global);
    _mav_put_float(buf, 16, pitch_global);
    _mav_put_float(buf, 20, yaw_rel);
    _mav_put_float(buf, 24, pitch_rel);
    _mav_put_uint16_t(buf, 28, zoom_level);
    _mav_put_uint8_t(buf, 30, command);
    _mav_put_uint8_t(buf, 39, cam_id);
    _mav_put_uint8_t(buf, 40, detection_id);
    _mav_put_uint8_t(buf, 41, rel_frame_of_reference);
    _mav_put_char_array(buf, 31, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS, buf, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
#else
    mavlink_single_target_tracking_parameters_t *packet = (mavlink_single_target_tracking_parameters_t *)msgbuf;
    packet->x_offset = x_offset;
    packet->y_offset = y_offset;
    packet->confidence = confidence;
    packet->yaw_global = yaw_global;
    packet->pitch_global = pitch_global;
    packet->yaw_rel = yaw_rel;
    packet->pitch_rel = pitch_rel;
    packet->zoom_level = zoom_level;
    packet->command = command;
    packet->cam_id = cam_id;
    packet->detection_id = detection_id;
    packet->rel_frame_of_reference = rel_frame_of_reference;
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SINGLE_TARGET_TRACKING_PARAMETERS UNPACKING


/**
 * @brief Get field command from single_target_tracking_parameters message
 *
 * @return  Tracking command, see SV_STT_COMMAND.
 */
static inline uint8_t mavlink_msg_single_target_tracking_parameters_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field stream_name from single_target_tracking_parameters message
 *
 * @return  Stream name (max 8 characters).
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 8,  31);
}

/**
 * @brief Get field cam_id from single_target_tracking_parameters message
 *
 * @return  Camera index on the stream.
 */
static inline uint8_t mavlink_msg_single_target_tracking_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  39);
}

/**
 * @brief Get field x_offset from single_target_tracking_parameters message
 *
 * @return  Normalized horizontal offset [-1.0, 1.0].
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_x_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y_offset from single_target_tracking_parameters message
 *
 * @return  Normalized vertical offset [-1.0, 1.0].
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_y_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field detection_id from single_target_tracking_parameters message
 *
 * @return  Detection ID to follow when relevant.
 */
static inline uint8_t mavlink_msg_single_target_tracking_parameters_get_detection_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field zoom_level from single_target_tracking_parameters message
 *
 * @return  Tracking zoom level (0 = widest, higher = tighter).
 */
static inline uint16_t mavlink_msg_single_target_tracking_parameters_get_zoom_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field confidence from single_target_tracking_parameters message
 *
 * @return  System's confidence in the current target.
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_confidence(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw_global from single_target_tracking_parameters message
 *
 * @return  global yaw of target in radians.
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_yaw_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field pitch_global from single_target_tracking_parameters message
 *
 * @return  global pitch of target in radians.
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_pitch_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rel_frame_of_reference from single_target_tracking_parameters message
 *
 * @return  Indicates the frame of reference for the relative yaw and pitch
angles.
 */
static inline uint8_t mavlink_msg_single_target_tracking_parameters_get_rel_frame_of_reference(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field yaw_rel from single_target_tracking_parameters message
 *
 * @return  Relative yaw of target in radians.
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_yaw_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field pitch_rel from single_target_tracking_parameters message
 *
 * @return  Relative pitch of target in radians.
 */
static inline float mavlink_msg_single_target_tracking_parameters_get_pitch_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a single_target_tracking_parameters message into a struct
 *
 * @param msg The message to decode
 * @param single_target_tracking_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_single_target_tracking_parameters_decode(const mavlink_message_t* msg, mavlink_single_target_tracking_parameters_t* single_target_tracking_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    single_target_tracking_parameters->x_offset = mavlink_msg_single_target_tracking_parameters_get_x_offset(msg);
    single_target_tracking_parameters->y_offset = mavlink_msg_single_target_tracking_parameters_get_y_offset(msg);
    single_target_tracking_parameters->confidence = mavlink_msg_single_target_tracking_parameters_get_confidence(msg);
    single_target_tracking_parameters->yaw_global = mavlink_msg_single_target_tracking_parameters_get_yaw_global(msg);
    single_target_tracking_parameters->pitch_global = mavlink_msg_single_target_tracking_parameters_get_pitch_global(msg);
    single_target_tracking_parameters->yaw_rel = mavlink_msg_single_target_tracking_parameters_get_yaw_rel(msg);
    single_target_tracking_parameters->pitch_rel = mavlink_msg_single_target_tracking_parameters_get_pitch_rel(msg);
    single_target_tracking_parameters->zoom_level = mavlink_msg_single_target_tracking_parameters_get_zoom_level(msg);
    single_target_tracking_parameters->command = mavlink_msg_single_target_tracking_parameters_get_command(msg);
    mavlink_msg_single_target_tracking_parameters_get_stream_name(msg, single_target_tracking_parameters->stream_name);
    single_target_tracking_parameters->cam_id = mavlink_msg_single_target_tracking_parameters_get_cam_id(msg);
    single_target_tracking_parameters->detection_id = mavlink_msg_single_target_tracking_parameters_get_detection_id(msg);
    single_target_tracking_parameters->rel_frame_of_reference = mavlink_msg_single_target_tracking_parameters_get_rel_frame_of_reference(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN;
        memset(single_target_tracking_parameters, 0, MAVLINK_MSG_ID_SINGLE_TARGET_TRACKING_PARAMETERS_LEN);
    memcpy(single_target_tracking_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
