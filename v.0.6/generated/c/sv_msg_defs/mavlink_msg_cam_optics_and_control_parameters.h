#pragma once
// MESSAGE CAM_OPTICS_AND_CONTROL_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS 40008


typedef struct __mavlink_cam_optics_and_control_parameters_t {
 float fov; /*<  Field of view in radians (typical range ~[0.1, 3.14]).*/
 char stream_name[8]; /*<  Stream name (max 8 characters).*/
 uint8_t cam_id; /*<  Camera index on the stream.*/
 int8_t zoom; /*<  Zoom control, -127..127 (negative=zoom out, positive=zoom in).*/
 uint8_t crop_mode; /*<  Crop mode, see SV_CROP_MODE.*/
} mavlink_cam_optics_and_control_parameters_t;

#define MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN 15
#define MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN 15
#define MAVLINK_MSG_ID_40008_LEN 15
#define MAVLINK_MSG_ID_40008_MIN_LEN 15

#define MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC 66
#define MAVLINK_MSG_ID_40008_CRC 66

#define MAVLINK_MSG_CAM_OPTICS_AND_CONTROL_PARAMETERS_FIELD_STREAM_NAME_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_OPTICS_AND_CONTROL_PARAMETERS { \
    40008, \
    "CAM_OPTICS_AND_CONTROL_PARAMETERS", \
    5, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 4, offsetof(mavlink_cam_optics_and_control_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_cam_optics_and_control_parameters_t, cam_id) }, \
         { "zoom", NULL, MAVLINK_TYPE_INT8_T, 0, 13, offsetof(mavlink_cam_optics_and_control_parameters_t, zoom) }, \
         { "fov", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_optics_and_control_parameters_t, fov) }, \
         { "crop_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_cam_optics_and_control_parameters_t, crop_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_OPTICS_AND_CONTROL_PARAMETERS { \
    "CAM_OPTICS_AND_CONTROL_PARAMETERS", \
    5, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 4, offsetof(mavlink_cam_optics_and_control_parameters_t, stream_name) }, \
         { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_cam_optics_and_control_parameters_t, cam_id) }, \
         { "zoom", NULL, MAVLINK_TYPE_INT8_T, 0, 13, offsetof(mavlink_cam_optics_and_control_parameters_t, zoom) }, \
         { "fov", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_optics_and_control_parameters_t, fov) }, \
         { "crop_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_cam_optics_and_control_parameters_t, crop_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_optics_and_control_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param zoom  Zoom control, -127..127 (negative=zoom out, positive=zoom in).
 * @param fov  Field of view in radians (typical range ~[0.1, 3.14]).
 * @param crop_mode  Crop mode, see SV_CROP_MODE.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cam_id, int8_t zoom, float fov, uint8_t crop_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN];
    _mav_put_float(buf, 0, fov);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_int8_t(buf, 13, zoom);
    _mav_put_uint8_t(buf, 14, crop_mode);
    _mav_put_char_array(buf, 4, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#else
    mavlink_cam_optics_and_control_parameters_t packet;
    packet.fov = fov;
    packet.cam_id = cam_id;
    packet.zoom = zoom;
    packet.crop_mode = crop_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_optics_and_control_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param zoom  Zoom control, -127..127 (negative=zoom out, positive=zoom in).
 * @param fov  Field of view in radians (typical range ~[0.1, 3.14]).
 * @param crop_mode  Crop mode, see SV_CROP_MODE.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cam_id, int8_t zoom, float fov, uint8_t crop_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN];
    _mav_put_float(buf, 0, fov);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_int8_t(buf, 13, zoom);
    _mav_put_uint8_t(buf, 14, crop_mode);
    _mav_put_char_array(buf, 4, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#else
    mavlink_cam_optics_and_control_parameters_t packet;
    packet.fov = fov;
    packet.cam_id = cam_id;
    packet.zoom = zoom;
    packet.crop_mode = crop_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_optics_and_control_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param zoom  Zoom control, -127..127 (negative=zoom out, positive=zoom in).
 * @param fov  Field of view in radians (typical range ~[0.1, 3.14]).
 * @param crop_mode  Crop mode, see SV_CROP_MODE.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *stream_name,uint8_t cam_id,int8_t zoom,float fov,uint8_t crop_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN];
    _mav_put_float(buf, 0, fov);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_int8_t(buf, 13, zoom);
    _mav_put_uint8_t(buf, 14, crop_mode);
    _mav_put_char_array(buf, 4, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#else
    mavlink_cam_optics_and_control_parameters_t packet;
    packet.fov = fov;
    packet.cam_id = cam_id;
    packet.zoom = zoom;
    packet.crop_mode = crop_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_optics_and_control_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_optics_and_control_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_optics_and_control_parameters_t* cam_optics_and_control_parameters)
{
    return mavlink_msg_cam_optics_and_control_parameters_pack(system_id, component_id, msg, cam_optics_and_control_parameters->stream_name, cam_optics_and_control_parameters->cam_id, cam_optics_and_control_parameters->zoom, cam_optics_and_control_parameters->fov, cam_optics_and_control_parameters->crop_mode);
}

/**
 * @brief Encode a cam_optics_and_control_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_optics_and_control_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_optics_and_control_parameters_t* cam_optics_and_control_parameters)
{
    return mavlink_msg_cam_optics_and_control_parameters_pack_chan(system_id, component_id, chan, msg, cam_optics_and_control_parameters->stream_name, cam_optics_and_control_parameters->cam_id, cam_optics_and_control_parameters->zoom, cam_optics_and_control_parameters->fov, cam_optics_and_control_parameters->crop_mode);
}

/**
 * @brief Encode a cam_optics_and_control_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_optics_and_control_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_optics_and_control_parameters_t* cam_optics_and_control_parameters)
{
    return mavlink_msg_cam_optics_and_control_parameters_pack_status(system_id, component_id, _status, msg,  cam_optics_and_control_parameters->stream_name, cam_optics_and_control_parameters->cam_id, cam_optics_and_control_parameters->zoom, cam_optics_and_control_parameters->fov, cam_optics_and_control_parameters->crop_mode);
}

/**
 * @brief Send a cam_optics_and_control_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_name  Stream name (max 8 characters).
 * @param cam_id  Camera index on the stream.
 * @param zoom  Zoom control, -127..127 (negative=zoom out, positive=zoom in).
 * @param fov  Field of view in radians (typical range ~[0.1, 3.14]).
 * @param crop_mode  Crop mode, see SV_CROP_MODE.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_optics_and_control_parameters_send(mavlink_channel_t chan, const char *stream_name, uint8_t cam_id, int8_t zoom, float fov, uint8_t crop_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN];
    _mav_put_float(buf, 0, fov);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_int8_t(buf, 13, zoom);
    _mav_put_uint8_t(buf, 14, crop_mode);
    _mav_put_char_array(buf, 4, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
#else
    mavlink_cam_optics_and_control_parameters_t packet;
    packet.fov = fov;
    packet.cam_id = cam_id;
    packet.zoom = zoom;
    packet.crop_mode = crop_mode;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_optics_and_control_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_optics_and_control_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_optics_and_control_parameters_t* cam_optics_and_control_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_optics_and_control_parameters_send(chan, cam_optics_and_control_parameters->stream_name, cam_optics_and_control_parameters->cam_id, cam_optics_and_control_parameters->zoom, cam_optics_and_control_parameters->fov, cam_optics_and_control_parameters->crop_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS, (const char *)cam_optics_and_control_parameters, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_optics_and_control_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *stream_name, uint8_t cam_id, int8_t zoom, float fov, uint8_t crop_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, fov);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_int8_t(buf, 13, zoom);
    _mav_put_uint8_t(buf, 14, crop_mode);
    _mav_put_char_array(buf, 4, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
#else
    mavlink_cam_optics_and_control_parameters_t *packet = (mavlink_cam_optics_and_control_parameters_t *)msgbuf;
    packet->fov = fov;
    packet->cam_id = cam_id;
    packet->zoom = zoom;
    packet->crop_mode = crop_mode;
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_OPTICS_AND_CONTROL_PARAMETERS UNPACKING


/**
 * @brief Get field stream_name from cam_optics_and_control_parameters message
 *
 * @return  Stream name (max 8 characters).
 */
static inline uint16_t mavlink_msg_cam_optics_and_control_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 8,  4);
}

/**
 * @brief Get field cam_id from cam_optics_and_control_parameters message
 *
 * @return  Camera index on the stream.
 */
static inline uint8_t mavlink_msg_cam_optics_and_control_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field zoom from cam_optics_and_control_parameters message
 *
 * @return  Zoom control, -127..127 (negative=zoom out, positive=zoom in).
 */
static inline int8_t mavlink_msg_cam_optics_and_control_parameters_get_zoom(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  13);
}

/**
 * @brief Get field fov from cam_optics_and_control_parameters message
 *
 * @return  Field of view in radians (typical range ~[0.1, 3.14]).
 */
static inline float mavlink_msg_cam_optics_and_control_parameters_get_fov(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field crop_mode from cam_optics_and_control_parameters message
 *
 * @return  Crop mode, see SV_CROP_MODE.
 */
static inline uint8_t mavlink_msg_cam_optics_and_control_parameters_get_crop_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Decode a cam_optics_and_control_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_optics_and_control_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_optics_and_control_parameters_decode(const mavlink_message_t* msg, mavlink_cam_optics_and_control_parameters_t* cam_optics_and_control_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_optics_and_control_parameters->fov = mavlink_msg_cam_optics_and_control_parameters_get_fov(msg);
    mavlink_msg_cam_optics_and_control_parameters_get_stream_name(msg, cam_optics_and_control_parameters->stream_name);
    cam_optics_and_control_parameters->cam_id = mavlink_msg_cam_optics_and_control_parameters_get_cam_id(msg);
    cam_optics_and_control_parameters->zoom = mavlink_msg_cam_optics_and_control_parameters_get_zoom(msg);
    cam_optics_and_control_parameters->crop_mode = mavlink_msg_cam_optics_and_control_parameters_get_crop_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN;
        memset(cam_optics_and_control_parameters, 0, MAVLINK_MSG_ID_CAM_OPTICS_AND_CONTROL_PARAMETERS_LEN);
    memcpy(cam_optics_and_control_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
