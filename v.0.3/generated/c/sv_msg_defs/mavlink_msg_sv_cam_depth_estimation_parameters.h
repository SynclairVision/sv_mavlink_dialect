#pragma once
// MESSAGE SV_CAM_DEPTH_ESTIMATION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS 40011


typedef struct __mavlink_sv_cam_depth_estimation_parameters_t {
 float depth; /*<  Depth value (m) when FIXED.*/
 char stream_name[16]; /*<  Stream name.*/
 uint8_t cam_id; /*<  Camera ID.*/
 uint8_t depth_estimation_mode; /*<  Depth estimation mode.*/
} mavlink_sv_cam_depth_estimation_parameters_t;

#define MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN 22
#define MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN 22
#define MAVLINK_MSG_ID_40011_LEN 22
#define MAVLINK_MSG_ID_40011_MIN_LEN 22

#define MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC 29
#define MAVLINK_MSG_ID_40011_CRC 29

#define MAVLINK_MSG_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_FIELD_STREAM_NAME_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_CAM_DEPTH_ESTIMATION_PARAMETERS { \
    40011, \
    "SV_CAM_DEPTH_ESTIMATION_PARAMETERS", \
    4, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 16, 4, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, cam_id) }, \
         { "depth_estimation_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, depth_estimation_mode) }, \
         { "depth", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, depth) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_CAM_DEPTH_ESTIMATION_PARAMETERS { \
    "SV_CAM_DEPTH_ESTIMATION_PARAMETERS", \
    4, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 16, 4, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, cam_id) }, \
         { "depth_estimation_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, depth_estimation_mode) }, \
         { "depth", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_cam_depth_estimation_parameters_t, depth) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_cam_depth_estimation_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name.
 * @param cam_id  Camera ID.
 * @param depth_estimation_mode  Depth estimation mode.
 * @param depth  Depth value (m) when FIXED.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 20, cam_id);
    _mav_put_uint8_t(buf, 21, depth_estimation_mode);
    _mav_put_char_array(buf, 4, stream_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#else
    mavlink_sv_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_cam_depth_estimation_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name.
 * @param cam_id  Camera ID.
 * @param depth_estimation_mode  Depth estimation mode.
 * @param depth  Depth value (m) when FIXED.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 20, cam_id);
    _mav_put_uint8_t(buf, 21, depth_estimation_mode);
    _mav_put_char_array(buf, 4, stream_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#else
    mavlink_sv_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_cam_depth_estimation_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_name  Stream name.
 * @param cam_id  Camera ID.
 * @param depth_estimation_mode  Depth estimation mode.
 * @param depth  Depth value (m) when FIXED.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *stream_name,uint8_t cam_id,uint8_t depth_estimation_mode,float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 20, cam_id);
    _mav_put_uint8_t(buf, 21, depth_estimation_mode);
    _mav_put_char_array(buf, 4, stream_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#else
    mavlink_sv_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_cam_depth_estimation_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_cam_depth_estimation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_cam_depth_estimation_parameters_t* sv_cam_depth_estimation_parameters)
{
    return mavlink_msg_sv_cam_depth_estimation_parameters_pack(system_id, component_id, msg, sv_cam_depth_estimation_parameters->stream_name, sv_cam_depth_estimation_parameters->cam_id, sv_cam_depth_estimation_parameters->depth_estimation_mode, sv_cam_depth_estimation_parameters->depth);
}

/**
 * @brief Encode a sv_cam_depth_estimation_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_cam_depth_estimation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_cam_depth_estimation_parameters_t* sv_cam_depth_estimation_parameters)
{
    return mavlink_msg_sv_cam_depth_estimation_parameters_pack_chan(system_id, component_id, chan, msg, sv_cam_depth_estimation_parameters->stream_name, sv_cam_depth_estimation_parameters->cam_id, sv_cam_depth_estimation_parameters->depth_estimation_mode, sv_cam_depth_estimation_parameters->depth);
}

/**
 * @brief Encode a sv_cam_depth_estimation_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_cam_depth_estimation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_cam_depth_estimation_parameters_t* sv_cam_depth_estimation_parameters)
{
    return mavlink_msg_sv_cam_depth_estimation_parameters_pack_status(system_id, component_id, _status, msg,  sv_cam_depth_estimation_parameters->stream_name, sv_cam_depth_estimation_parameters->cam_id, sv_cam_depth_estimation_parameters->depth_estimation_mode, sv_cam_depth_estimation_parameters->depth);
}

/**
 * @brief Send a sv_cam_depth_estimation_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_name  Stream name.
 * @param cam_id  Camera ID.
 * @param depth_estimation_mode  Depth estimation mode.
 * @param depth  Depth value (m) when FIXED.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_cam_depth_estimation_parameters_send(mavlink_channel_t chan, const char *stream_name, uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 20, cam_id);
    _mav_put_uint8_t(buf, 21, depth_estimation_mode);
    _mav_put_char_array(buf, 4, stream_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS, buf, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#else
    mavlink_sv_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_cam_depth_estimation_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_cam_depth_estimation_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_cam_depth_estimation_parameters_t* sv_cam_depth_estimation_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_cam_depth_estimation_parameters_send(chan, sv_cam_depth_estimation_parameters->stream_name, sv_cam_depth_estimation_parameters->cam_id, sv_cam_depth_estimation_parameters->depth_estimation_mode, sv_cam_depth_estimation_parameters->depth);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS, (const char *)sv_cam_depth_estimation_parameters, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_cam_depth_estimation_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *stream_name, uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 20, cam_id);
    _mav_put_uint8_t(buf, 21, depth_estimation_mode);
    _mav_put_char_array(buf, 4, stream_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS, buf, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#else
    mavlink_sv_cam_depth_estimation_parameters_t *packet = (mavlink_sv_cam_depth_estimation_parameters_t *)msgbuf;
    packet->depth = depth;
    packet->cam_id = cam_id;
    packet->depth_estimation_mode = depth_estimation_mode;
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_CAM_DEPTH_ESTIMATION_PARAMETERS UNPACKING


/**
 * @brief Get field stream_name from sv_cam_depth_estimation_parameters message
 *
 * @return  Stream name.
 */
static inline uint16_t mavlink_msg_sv_cam_depth_estimation_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 16,  4);
}

/**
 * @brief Get field cam_id from sv_cam_depth_estimation_parameters message
 *
 * @return  Camera ID.
 */
static inline uint8_t mavlink_msg_sv_cam_depth_estimation_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field depth_estimation_mode from sv_cam_depth_estimation_parameters message
 *
 * @return  Depth estimation mode.
 */
static inline uint8_t mavlink_msg_sv_cam_depth_estimation_parameters_get_depth_estimation_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field depth from sv_cam_depth_estimation_parameters message
 *
 * @return  Depth value (m) when FIXED.
 */
static inline float mavlink_msg_sv_cam_depth_estimation_parameters_get_depth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a sv_cam_depth_estimation_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_cam_depth_estimation_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_cam_depth_estimation_parameters_decode(const mavlink_message_t* msg, mavlink_sv_cam_depth_estimation_parameters_t* sv_cam_depth_estimation_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_cam_depth_estimation_parameters->depth = mavlink_msg_sv_cam_depth_estimation_parameters_get_depth(msg);
    mavlink_msg_sv_cam_depth_estimation_parameters_get_stream_name(msg, sv_cam_depth_estimation_parameters->stream_name);
    sv_cam_depth_estimation_parameters->cam_id = mavlink_msg_sv_cam_depth_estimation_parameters_get_cam_id(msg);
    sv_cam_depth_estimation_parameters->depth_estimation_mode = mavlink_msg_sv_cam_depth_estimation_parameters_get_depth_estimation_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN;
        memset(sv_cam_depth_estimation_parameters, 0, MAVLINK_MSG_ID_SV_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
    memcpy(sv_cam_depth_estimation_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
