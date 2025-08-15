#pragma once
// MESSAGE SV_CAM_OFFSET_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS 40009


typedef struct __mavlink_sv_cam_offset_parameters_t {
 float x; /*<  X offset [-1..1].*/
 float y; /*<  Y offset [-1..1].*/
 float yaw_abs; /*<  Absolute yaw.*/
 float pitch_abs; /*<  Absolute pitch.*/
 float yaw_rel; /*<  Relative yaw.*/
 float pitch_rel; /*<  Relative pitch.*/
 uint8_t cam_id; /*<  Camera ID.*/
 char stream_name[8]; /*<  Stream name.*/
} mavlink_sv_cam_offset_parameters_t;

#define MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN 33
#define MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN 33
#define MAVLINK_MSG_ID_40009_LEN 33
#define MAVLINK_MSG_ID_40009_MIN_LEN 33

#define MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC 34
#define MAVLINK_MSG_ID_40009_CRC 34

#define MAVLINK_MSG_SV_CAM_OFFSET_PARAMETERS_FIELD_STREAM_NAME_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_CAM_OFFSET_PARAMETERS { \
    40009, \
    "SV_CAM_OFFSET_PARAMETERS", \
    8, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_cam_offset_parameters_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sv_cam_offset_parameters_t, y) }, \
         { "yaw_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sv_cam_offset_parameters_t, yaw_abs) }, \
         { "pitch_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sv_cam_offset_parameters_t, pitch_abs) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sv_cam_offset_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sv_cam_offset_parameters_t, pitch_rel) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_sv_cam_offset_parameters_t, cam_id) }, \
         { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 25, offsetof(mavlink_sv_cam_offset_parameters_t, stream_name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_CAM_OFFSET_PARAMETERS { \
    "SV_CAM_OFFSET_PARAMETERS", \
    8, \
    {  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_cam_offset_parameters_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sv_cam_offset_parameters_t, y) }, \
         { "yaw_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sv_cam_offset_parameters_t, yaw_abs) }, \
         { "pitch_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sv_cam_offset_parameters_t, pitch_abs) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sv_cam_offset_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sv_cam_offset_parameters_t, pitch_rel) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_sv_cam_offset_parameters_t, cam_id) }, \
         { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 25, offsetof(mavlink_sv_cam_offset_parameters_t, stream_name) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_cam_offset_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  X offset [-1..1].
 * @param y  Y offset [-1..1].
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param cam_id  Camera ID.
 * @param stream_name  Stream name.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float x, float y, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, uint8_t cam_id, const char *stream_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, yaw_abs);
    _mav_put_float(buf, 12, pitch_abs);
    _mav_put_float(buf, 16, yaw_rel);
    _mav_put_float(buf, 20, pitch_rel);
    _mav_put_uint8_t(buf, 24, cam_id);
    _mav_put_char_array(buf, 25, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#else
    mavlink_sv_cam_offset_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.cam_id = cam_id;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_cam_offset_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param x  X offset [-1..1].
 * @param y  Y offset [-1..1].
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param cam_id  Camera ID.
 * @param stream_name  Stream name.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float x, float y, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, uint8_t cam_id, const char *stream_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, yaw_abs);
    _mav_put_float(buf, 12, pitch_abs);
    _mav_put_float(buf, 16, yaw_rel);
    _mav_put_float(buf, 20, pitch_rel);
    _mav_put_uint8_t(buf, 24, cam_id);
    _mav_put_char_array(buf, 25, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#else
    mavlink_sv_cam_offset_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.cam_id = cam_id;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_cam_offset_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x  X offset [-1..1].
 * @param y  Y offset [-1..1].
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param cam_id  Camera ID.
 * @param stream_name  Stream name.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float x,float y,float yaw_abs,float pitch_abs,float yaw_rel,float pitch_rel,uint8_t cam_id,const char *stream_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, yaw_abs);
    _mav_put_float(buf, 12, pitch_abs);
    _mav_put_float(buf, 16, yaw_rel);
    _mav_put_float(buf, 20, pitch_rel);
    _mav_put_uint8_t(buf, 24, cam_id);
    _mav_put_char_array(buf, 25, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#else
    mavlink_sv_cam_offset_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.cam_id = cam_id;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_cam_offset_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_cam_offset_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_cam_offset_parameters_t* sv_cam_offset_parameters)
{
    return mavlink_msg_sv_cam_offset_parameters_pack(system_id, component_id, msg, sv_cam_offset_parameters->x, sv_cam_offset_parameters->y, sv_cam_offset_parameters->yaw_abs, sv_cam_offset_parameters->pitch_abs, sv_cam_offset_parameters->yaw_rel, sv_cam_offset_parameters->pitch_rel, sv_cam_offset_parameters->cam_id, sv_cam_offset_parameters->stream_name);
}

/**
 * @brief Encode a sv_cam_offset_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_cam_offset_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_cam_offset_parameters_t* sv_cam_offset_parameters)
{
    return mavlink_msg_sv_cam_offset_parameters_pack_chan(system_id, component_id, chan, msg, sv_cam_offset_parameters->x, sv_cam_offset_parameters->y, sv_cam_offset_parameters->yaw_abs, sv_cam_offset_parameters->pitch_abs, sv_cam_offset_parameters->yaw_rel, sv_cam_offset_parameters->pitch_rel, sv_cam_offset_parameters->cam_id, sv_cam_offset_parameters->stream_name);
}

/**
 * @brief Encode a sv_cam_offset_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_cam_offset_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_cam_offset_parameters_t* sv_cam_offset_parameters)
{
    return mavlink_msg_sv_cam_offset_parameters_pack_status(system_id, component_id, _status, msg,  sv_cam_offset_parameters->x, sv_cam_offset_parameters->y, sv_cam_offset_parameters->yaw_abs, sv_cam_offset_parameters->pitch_abs, sv_cam_offset_parameters->yaw_rel, sv_cam_offset_parameters->pitch_rel, sv_cam_offset_parameters->cam_id, sv_cam_offset_parameters->stream_name);
}

/**
 * @brief Send a sv_cam_offset_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param x  X offset [-1..1].
 * @param y  Y offset [-1..1].
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param cam_id  Camera ID.
 * @param stream_name  Stream name.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_cam_offset_parameters_send(mavlink_channel_t chan, float x, float y, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, uint8_t cam_id, const char *stream_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, yaw_abs);
    _mav_put_float(buf, 12, pitch_abs);
    _mav_put_float(buf, 16, yaw_rel);
    _mav_put_float(buf, 20, pitch_rel);
    _mav_put_uint8_t(buf, 24, cam_id);
    _mav_put_char_array(buf, 25, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS, buf, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
#else
    mavlink_sv_cam_offset_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.cam_id = cam_id;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_cam_offset_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_cam_offset_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_cam_offset_parameters_t* sv_cam_offset_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_cam_offset_parameters_send(chan, sv_cam_offset_parameters->x, sv_cam_offset_parameters->y, sv_cam_offset_parameters->yaw_abs, sv_cam_offset_parameters->pitch_abs, sv_cam_offset_parameters->yaw_rel, sv_cam_offset_parameters->pitch_rel, sv_cam_offset_parameters->cam_id, sv_cam_offset_parameters->stream_name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS, (const char *)sv_cam_offset_parameters, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_cam_offset_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, uint8_t cam_id, const char *stream_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, yaw_abs);
    _mav_put_float(buf, 12, pitch_abs);
    _mav_put_float(buf, 16, yaw_rel);
    _mav_put_float(buf, 20, pitch_rel);
    _mav_put_uint8_t(buf, 24, cam_id);
    _mav_put_char_array(buf, 25, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS, buf, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
#else
    mavlink_sv_cam_offset_parameters_t *packet = (mavlink_sv_cam_offset_parameters_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->yaw_abs = yaw_abs;
    packet->pitch_abs = pitch_abs;
    packet->yaw_rel = yaw_rel;
    packet->pitch_rel = pitch_rel;
    packet->cam_id = cam_id;
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_CAM_OFFSET_PARAMETERS UNPACKING


/**
 * @brief Get field x from sv_cam_offset_parameters message
 *
 * @return  X offset [-1..1].
 */
static inline float mavlink_msg_sv_cam_offset_parameters_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from sv_cam_offset_parameters message
 *
 * @return  Y offset [-1..1].
 */
static inline float mavlink_msg_sv_cam_offset_parameters_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field yaw_abs from sv_cam_offset_parameters message
 *
 * @return  Absolute yaw.
 */
static inline float mavlink_msg_sv_cam_offset_parameters_get_yaw_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch_abs from sv_cam_offset_parameters message
 *
 * @return  Absolute pitch.
 */
static inline float mavlink_msg_sv_cam_offset_parameters_get_pitch_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw_rel from sv_cam_offset_parameters message
 *
 * @return  Relative yaw.
 */
static inline float mavlink_msg_sv_cam_offset_parameters_get_yaw_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field pitch_rel from sv_cam_offset_parameters message
 *
 * @return  Relative pitch.
 */
static inline float mavlink_msg_sv_cam_offset_parameters_get_pitch_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field cam_id from sv_cam_offset_parameters message
 *
 * @return  Camera ID.
 */
static inline uint8_t mavlink_msg_sv_cam_offset_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field stream_name from sv_cam_offset_parameters message
 *
 * @return  Stream name.
 */
static inline uint16_t mavlink_msg_sv_cam_offset_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 8,  25);
}

/**
 * @brief Decode a sv_cam_offset_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_cam_offset_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_cam_offset_parameters_decode(const mavlink_message_t* msg, mavlink_sv_cam_offset_parameters_t* sv_cam_offset_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_cam_offset_parameters->x = mavlink_msg_sv_cam_offset_parameters_get_x(msg);
    sv_cam_offset_parameters->y = mavlink_msg_sv_cam_offset_parameters_get_y(msg);
    sv_cam_offset_parameters->yaw_abs = mavlink_msg_sv_cam_offset_parameters_get_yaw_abs(msg);
    sv_cam_offset_parameters->pitch_abs = mavlink_msg_sv_cam_offset_parameters_get_pitch_abs(msg);
    sv_cam_offset_parameters->yaw_rel = mavlink_msg_sv_cam_offset_parameters_get_yaw_rel(msg);
    sv_cam_offset_parameters->pitch_rel = mavlink_msg_sv_cam_offset_parameters_get_pitch_rel(msg);
    sv_cam_offset_parameters->cam_id = mavlink_msg_sv_cam_offset_parameters_get_cam_id(msg);
    mavlink_msg_sv_cam_offset_parameters_get_stream_name(msg, sv_cam_offset_parameters->stream_name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN;
        memset(sv_cam_offset_parameters, 0, MAVLINK_MSG_ID_SV_CAM_OFFSET_PARAMETERS_LEN);
    memcpy(sv_cam_offset_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
