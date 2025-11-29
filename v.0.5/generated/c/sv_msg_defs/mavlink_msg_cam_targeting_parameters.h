#pragma once
// MESSAGE CAM_TARGETING_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS 40007


typedef struct __mavlink_cam_targeting_parameters_t {
 float yaw; /*<  Yaw in radians (global frame, Tait-Bryan).*/
 float pitch; /*<  Pitch in radians (global frame, Tait-Bryan).*/
 float roll; /*<  Roll in radians (currently ignored).*/
 float x_offset; /*<  Horizontal offset in view, [-1.0, 1.0].*/
 float y_offset; /*<  Vertical offset in view, [-1.0, 1.0].*/
 float target_latitude; /*<  Target latitude if using coordinal mode.*/
 float target_longitude; /*<  Target longitude if using coordinal mode.*/
 float target_altitude; /*<  Target altitude (m) if using coordinal mode.*/
 char stream_name[8]; /*<  Stream name (max 8 characters).*/
 uint8_t cam_id; /*<  Camera index on the stream.*/
 uint8_t targeting_mode; /*<  Targeting mode, see SV_TARGETING_MODE.*/
 uint8_t euler_delta; /*<  1 if yaw/pitch/roll are deltas, 0 if absolute.*/
 uint8_t lock_flags; /*<  Bitmask locking yaw/pitch/roll stabilization.*/
} mavlink_cam_targeting_parameters_t;

#define MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN 44
#define MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN 44
#define MAVLINK_MSG_ID_40007_LEN 44
#define MAVLINK_MSG_ID_40007_MIN_LEN 44

#define MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC 85
#define MAVLINK_MSG_ID_40007_CRC 85

#define MAVLINK_MSG_CAM_TARGETING_PARAMETERS_FIELD_STREAM_NAME_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_TARGETING_PARAMETERS { \
    40007, \
    "CAM_TARGETING_PARAMETERS", \
    13, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 32, offsetof(mavlink_cam_targeting_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_cam_targeting_parameters_t, cam_id) }, \
         { "targeting_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_cam_targeting_parameters_t, targeting_mode) }, \
         { "euler_delta", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_cam_targeting_parameters_t, euler_delta) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_targeting_parameters_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cam_targeting_parameters_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cam_targeting_parameters_t, roll) }, \
         { "lock_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_cam_targeting_parameters_t, lock_flags) }, \
         { "x_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_cam_targeting_parameters_t, x_offset) }, \
         { "y_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cam_targeting_parameters_t, y_offset) }, \
         { "target_latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_cam_targeting_parameters_t, target_latitude) }, \
         { "target_longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_cam_targeting_parameters_t, target_longitude) }, \
         { "target_altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_cam_targeting_parameters_t, target_altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_TARGETING_PARAMETERS { \
    "CAM_TARGETING_PARAMETERS", \
    13, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 32, offsetof(mavlink_cam_targeting_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_cam_targeting_parameters_t, cam_id) }, \
         { "targeting_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_cam_targeting_parameters_t, targeting_mode) }, \
         { "euler_delta", NULL, MAVLINK_TYPE_UINT8_T, 0, 42, offsetof(mavlink_cam_targeting_parameters_t, euler_delta) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_targeting_parameters_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cam_targeting_parameters_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cam_targeting_parameters_t, roll) }, \
         { "lock_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 43, offsetof(mavlink_cam_targeting_parameters_t, lock_flags) }, \
         { "x_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_cam_targeting_parameters_t, x_offset) }, \
         { "y_offset", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cam_targeting_parameters_t, y_offset) }, \
         { "target_latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_cam_targeting_parameters_t, target_latitude) }, \
         { "target_longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_cam_targeting_parameters_t, target_longitude) }, \
         { "target_altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_cam_targeting_parameters_t, target_altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_targeting_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param targeting_mode  Targeting mode, see SV_TARGETING_MODE.
 * @param euler_delta  1 if yaw/pitch/roll are deltas, 0 if absolute.
 * @param yaw  Yaw in radians (global frame, Tait-Bryan).
 * @param pitch  Pitch in radians (global frame, Tait-Bryan).
 * @param roll  Roll in radians (currently ignored).
 * @param lock_flags  Bitmask locking yaw/pitch/roll stabilization.
 * @param x_offset  Horizontal offset in view, [-1.0, 1.0].
 * @param y_offset  Vertical offset in view, [-1.0, 1.0].
 * @param target_latitude  Target latitude if using coordinal mode.
 * @param target_longitude  Target longitude if using coordinal mode.
 * @param target_altitude  Target altitude (m) if using coordinal mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cam_id, uint8_t targeting_mode, uint8_t euler_delta, float yaw, float pitch, float roll, uint8_t lock_flags, float x_offset, float y_offset, float target_latitude, float target_longitude, float target_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, x_offset);
    _mav_put_float(buf, 16, y_offset);
    _mav_put_float(buf, 20, target_latitude);
    _mav_put_float(buf, 24, target_longitude);
    _mav_put_float(buf, 28, target_altitude);
    _mav_put_uint8_t(buf, 40, cam_id);
    _mav_put_uint8_t(buf, 41, targeting_mode);
    _mav_put_uint8_t(buf, 42, euler_delta);
    _mav_put_uint8_t(buf, 43, lock_flags);
    _mav_put_char_array(buf, 32, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#else
    mavlink_cam_targeting_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.target_latitude = target_latitude;
    packet.target_longitude = target_longitude;
    packet.target_altitude = target_altitude;
    packet.cam_id = cam_id;
    packet.targeting_mode = targeting_mode;
    packet.euler_delta = euler_delta;
    packet.lock_flags = lock_flags;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_targeting_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param targeting_mode  Targeting mode, see SV_TARGETING_MODE.
 * @param euler_delta  1 if yaw/pitch/roll are deltas, 0 if absolute.
 * @param yaw  Yaw in radians (global frame, Tait-Bryan).
 * @param pitch  Pitch in radians (global frame, Tait-Bryan).
 * @param roll  Roll in radians (currently ignored).
 * @param lock_flags  Bitmask locking yaw/pitch/roll stabilization.
 * @param x_offset  Horizontal offset in view, [-1.0, 1.0].
 * @param y_offset  Vertical offset in view, [-1.0, 1.0].
 * @param target_latitude  Target latitude if using coordinal mode.
 * @param target_longitude  Target longitude if using coordinal mode.
 * @param target_altitude  Target altitude (m) if using coordinal mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cam_id, uint8_t targeting_mode, uint8_t euler_delta, float yaw, float pitch, float roll, uint8_t lock_flags, float x_offset, float y_offset, float target_latitude, float target_longitude, float target_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, x_offset);
    _mav_put_float(buf, 16, y_offset);
    _mav_put_float(buf, 20, target_latitude);
    _mav_put_float(buf, 24, target_longitude);
    _mav_put_float(buf, 28, target_altitude);
    _mav_put_uint8_t(buf, 40, cam_id);
    _mav_put_uint8_t(buf, 41, targeting_mode);
    _mav_put_uint8_t(buf, 42, euler_delta);
    _mav_put_uint8_t(buf, 43, lock_flags);
    _mav_put_char_array(buf, 32, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#else
    mavlink_cam_targeting_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.target_latitude = target_latitude;
    packet.target_longitude = target_longitude;
    packet.target_altitude = target_altitude;
    packet.cam_id = cam_id;
    packet.targeting_mode = targeting_mode;
    packet.euler_delta = euler_delta;
    packet.lock_flags = lock_flags;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_targeting_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param targeting_mode  Targeting mode, see SV_TARGETING_MODE.
 * @param euler_delta  1 if yaw/pitch/roll are deltas, 0 if absolute.
 * @param yaw  Yaw in radians (global frame, Tait-Bryan).
 * @param pitch  Pitch in radians (global frame, Tait-Bryan).
 * @param roll  Roll in radians (currently ignored).
 * @param lock_flags  Bitmask locking yaw/pitch/roll stabilization.
 * @param x_offset  Horizontal offset in view, [-1.0, 1.0].
 * @param y_offset  Vertical offset in view, [-1.0, 1.0].
 * @param target_latitude  Target latitude if using coordinal mode.
 * @param target_longitude  Target longitude if using coordinal mode.
 * @param target_altitude  Target altitude (m) if using coordinal mode.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *stream_name,uint8_t cam_id,uint8_t targeting_mode,uint8_t euler_delta,float yaw,float pitch,float roll,uint8_t lock_flags,float x_offset,float y_offset,float target_latitude,float target_longitude,float target_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, x_offset);
    _mav_put_float(buf, 16, y_offset);
    _mav_put_float(buf, 20, target_latitude);
    _mav_put_float(buf, 24, target_longitude);
    _mav_put_float(buf, 28, target_altitude);
    _mav_put_uint8_t(buf, 40, cam_id);
    _mav_put_uint8_t(buf, 41, targeting_mode);
    _mav_put_uint8_t(buf, 42, euler_delta);
    _mav_put_uint8_t(buf, 43, lock_flags);
    _mav_put_char_array(buf, 32, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#else
    mavlink_cam_targeting_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.target_latitude = target_latitude;
    packet.target_longitude = target_longitude;
    packet.target_altitude = target_altitude;
    packet.cam_id = cam_id;
    packet.targeting_mode = targeting_mode;
    packet.euler_delta = euler_delta;
    packet.lock_flags = lock_flags;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_targeting_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_targeting_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_targeting_parameters_t* cam_targeting_parameters)
{
    return mavlink_msg_cam_targeting_parameters_pack(system_id, component_id, msg, cam_targeting_parameters->stream_name, cam_targeting_parameters->cam_id, cam_targeting_parameters->targeting_mode, cam_targeting_parameters->euler_delta, cam_targeting_parameters->yaw, cam_targeting_parameters->pitch, cam_targeting_parameters->roll, cam_targeting_parameters->lock_flags, cam_targeting_parameters->x_offset, cam_targeting_parameters->y_offset, cam_targeting_parameters->target_latitude, cam_targeting_parameters->target_longitude, cam_targeting_parameters->target_altitude);
}

/**
 * @brief Encode a cam_targeting_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_targeting_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_targeting_parameters_t* cam_targeting_parameters)
{
    return mavlink_msg_cam_targeting_parameters_pack_chan(system_id, component_id, chan, msg, cam_targeting_parameters->stream_name, cam_targeting_parameters->cam_id, cam_targeting_parameters->targeting_mode, cam_targeting_parameters->euler_delta, cam_targeting_parameters->yaw, cam_targeting_parameters->pitch, cam_targeting_parameters->roll, cam_targeting_parameters->lock_flags, cam_targeting_parameters->x_offset, cam_targeting_parameters->y_offset, cam_targeting_parameters->target_latitude, cam_targeting_parameters->target_longitude, cam_targeting_parameters->target_altitude);
}

/**
 * @brief Encode a cam_targeting_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_targeting_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_targeting_parameters_t* cam_targeting_parameters)
{
    return mavlink_msg_cam_targeting_parameters_pack_status(system_id, component_id, _status, msg,  cam_targeting_parameters->stream_name, cam_targeting_parameters->cam_id, cam_targeting_parameters->targeting_mode, cam_targeting_parameters->euler_delta, cam_targeting_parameters->yaw, cam_targeting_parameters->pitch, cam_targeting_parameters->roll, cam_targeting_parameters->lock_flags, cam_targeting_parameters->x_offset, cam_targeting_parameters->y_offset, cam_targeting_parameters->target_latitude, cam_targeting_parameters->target_longitude, cam_targeting_parameters->target_altitude);
}

/**
 * @brief Send a cam_targeting_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param targeting_mode  Targeting mode, see SV_TARGETING_MODE.
 * @param euler_delta  1 if yaw/pitch/roll are deltas, 0 if absolute.
 * @param yaw  Yaw in radians (global frame, Tait-Bryan).
 * @param pitch  Pitch in radians (global frame, Tait-Bryan).
 * @param roll  Roll in radians (currently ignored).
 * @param lock_flags  Bitmask locking yaw/pitch/roll stabilization.
 * @param x_offset  Horizontal offset in view, [-1.0, 1.0].
 * @param y_offset  Vertical offset in view, [-1.0, 1.0].
 * @param target_latitude  Target latitude if using coordinal mode.
 * @param target_longitude  Target longitude if using coordinal mode.
 * @param target_altitude  Target altitude (m) if using coordinal mode.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_targeting_parameters_send(mavlink_channel_t chan, const char *stream_name, uint8_t cam_id, uint8_t targeting_mode, uint8_t euler_delta, float yaw, float pitch, float roll, uint8_t lock_flags, float x_offset, float y_offset, float target_latitude, float target_longitude, float target_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, x_offset);
    _mav_put_float(buf, 16, y_offset);
    _mav_put_float(buf, 20, target_latitude);
    _mav_put_float(buf, 24, target_longitude);
    _mav_put_float(buf, 28, target_altitude);
    _mav_put_uint8_t(buf, 40, cam_id);
    _mav_put_uint8_t(buf, 41, targeting_mode);
    _mav_put_uint8_t(buf, 42, euler_delta);
    _mav_put_uint8_t(buf, 43, lock_flags);
    _mav_put_char_array(buf, 32, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
#else
    mavlink_cam_targeting_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.x_offset = x_offset;
    packet.y_offset = y_offset;
    packet.target_latitude = target_latitude;
    packet.target_longitude = target_longitude;
    packet.target_altitude = target_altitude;
    packet.cam_id = cam_id;
    packet.targeting_mode = targeting_mode;
    packet.euler_delta = euler_delta;
    packet.lock_flags = lock_flags;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_targeting_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_targeting_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_targeting_parameters_t* cam_targeting_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_targeting_parameters_send(chan, cam_targeting_parameters->stream_name, cam_targeting_parameters->cam_id, cam_targeting_parameters->targeting_mode, cam_targeting_parameters->euler_delta, cam_targeting_parameters->yaw, cam_targeting_parameters->pitch, cam_targeting_parameters->roll, cam_targeting_parameters->lock_flags, cam_targeting_parameters->x_offset, cam_targeting_parameters->y_offset, cam_targeting_parameters->target_latitude, cam_targeting_parameters->target_longitude, cam_targeting_parameters->target_altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS, (const char *)cam_targeting_parameters, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_targeting_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *stream_name, uint8_t cam_id, uint8_t targeting_mode, uint8_t euler_delta, float yaw, float pitch, float roll, uint8_t lock_flags, float x_offset, float y_offset, float target_latitude, float target_longitude, float target_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_float(buf, 12, x_offset);
    _mav_put_float(buf, 16, y_offset);
    _mav_put_float(buf, 20, target_latitude);
    _mav_put_float(buf, 24, target_longitude);
    _mav_put_float(buf, 28, target_altitude);
    _mav_put_uint8_t(buf, 40, cam_id);
    _mav_put_uint8_t(buf, 41, targeting_mode);
    _mav_put_uint8_t(buf, 42, euler_delta);
    _mav_put_uint8_t(buf, 43, lock_flags);
    _mav_put_char_array(buf, 32, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
#else
    mavlink_cam_targeting_parameters_t *packet = (mavlink_cam_targeting_parameters_t *)msgbuf;
    packet->yaw = yaw;
    packet->pitch = pitch;
    packet->roll = roll;
    packet->x_offset = x_offset;
    packet->y_offset = y_offset;
    packet->target_latitude = target_latitude;
    packet->target_longitude = target_longitude;
    packet->target_altitude = target_altitude;
    packet->cam_id = cam_id;
    packet->targeting_mode = targeting_mode;
    packet->euler_delta = euler_delta;
    packet->lock_flags = lock_flags;
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_TARGETING_PARAMETERS UNPACKING


/**
 * @brief Get field stream_name from cam_targeting_parameters message
 *
 * @return  Stream name (max 8 characters).
 */
static inline uint16_t mavlink_msg_cam_targeting_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 8,  32);
}

/**
 * @brief Get field cam_id from cam_targeting_parameters message
 *
 * @return  Camera index on the stream.
 */
static inline uint8_t mavlink_msg_cam_targeting_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field targeting_mode from cam_targeting_parameters message
 *
 * @return  Targeting mode, see SV_TARGETING_MODE.
 */
static inline uint8_t mavlink_msg_cam_targeting_parameters_get_targeting_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field euler_delta from cam_targeting_parameters message
 *
 * @return  1 if yaw/pitch/roll are deltas, 0 if absolute.
 */
static inline uint8_t mavlink_msg_cam_targeting_parameters_get_euler_delta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  42);
}

/**
 * @brief Get field yaw from cam_targeting_parameters message
 *
 * @return  Yaw in radians (global frame, Tait-Bryan).
 */
static inline float mavlink_msg_cam_targeting_parameters_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch from cam_targeting_parameters message
 *
 * @return  Pitch in radians (global frame, Tait-Bryan).
 */
static inline float mavlink_msg_cam_targeting_parameters_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field roll from cam_targeting_parameters message
 *
 * @return  Roll in radians (currently ignored).
 */
static inline float mavlink_msg_cam_targeting_parameters_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field lock_flags from cam_targeting_parameters message
 *
 * @return  Bitmask locking yaw/pitch/roll stabilization.
 */
static inline uint8_t mavlink_msg_cam_targeting_parameters_get_lock_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  43);
}

/**
 * @brief Get field x_offset from cam_targeting_parameters message
 *
 * @return  Horizontal offset in view, [-1.0, 1.0].
 */
static inline float mavlink_msg_cam_targeting_parameters_get_x_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field y_offset from cam_targeting_parameters message
 *
 * @return  Vertical offset in view, [-1.0, 1.0].
 */
static inline float mavlink_msg_cam_targeting_parameters_get_y_offset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field target_latitude from cam_targeting_parameters message
 *
 * @return  Target latitude if using coordinal mode.
 */
static inline float mavlink_msg_cam_targeting_parameters_get_target_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field target_longitude from cam_targeting_parameters message
 *
 * @return  Target longitude if using coordinal mode.
 */
static inline float mavlink_msg_cam_targeting_parameters_get_target_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field target_altitude from cam_targeting_parameters message
 *
 * @return  Target altitude (m) if using coordinal mode.
 */
static inline float mavlink_msg_cam_targeting_parameters_get_target_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a cam_targeting_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_targeting_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_targeting_parameters_decode(const mavlink_message_t* msg, mavlink_cam_targeting_parameters_t* cam_targeting_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_targeting_parameters->yaw = mavlink_msg_cam_targeting_parameters_get_yaw(msg);
    cam_targeting_parameters->pitch = mavlink_msg_cam_targeting_parameters_get_pitch(msg);
    cam_targeting_parameters->roll = mavlink_msg_cam_targeting_parameters_get_roll(msg);
    cam_targeting_parameters->x_offset = mavlink_msg_cam_targeting_parameters_get_x_offset(msg);
    cam_targeting_parameters->y_offset = mavlink_msg_cam_targeting_parameters_get_y_offset(msg);
    cam_targeting_parameters->target_latitude = mavlink_msg_cam_targeting_parameters_get_target_latitude(msg);
    cam_targeting_parameters->target_longitude = mavlink_msg_cam_targeting_parameters_get_target_longitude(msg);
    cam_targeting_parameters->target_altitude = mavlink_msg_cam_targeting_parameters_get_target_altitude(msg);
    mavlink_msg_cam_targeting_parameters_get_stream_name(msg, cam_targeting_parameters->stream_name);
    cam_targeting_parameters->cam_id = mavlink_msg_cam_targeting_parameters_get_cam_id(msg);
    cam_targeting_parameters->targeting_mode = mavlink_msg_cam_targeting_parameters_get_targeting_mode(msg);
    cam_targeting_parameters->euler_delta = mavlink_msg_cam_targeting_parameters_get_euler_delta(msg);
    cam_targeting_parameters->lock_flags = mavlink_msg_cam_targeting_parameters_get_lock_flags(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN;
        memset(cam_targeting_parameters, 0, MAVLINK_MSG_ID_CAM_TARGETING_PARAMETERS_LEN);
    memcpy(cam_targeting_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
