#pragma once
// MESSAGE CAM_EULER_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_EULER_PARAMETERS 40008


typedef struct __mavlink_cam_euler_parameters_t {
 float yaw; /*<  
        Camera yaw angle in radians.
      */
 float pitch; /*<  
        Camera pitch angle in radians.
      */
 float roll; /*<  
        Camera roll angle in radians. Currently often ignored.
      */
 uint8_t cam_id; /*<  
        Camera identifier (user-controlled camera index).
      */
 uint8_t is_delta; /*<  
        0 = angles are absolute directions; non-zero = angles are deltas applied to current aim (recommended: 1 for true).
      */
} mavlink_cam_euler_parameters_t;

#define MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN 14
#define MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN 14
#define MAVLINK_MSG_ID_40008_LEN 14
#define MAVLINK_MSG_ID_40008_MIN_LEN 14

#define MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC 101
#define MAVLINK_MSG_ID_40008_CRC 101



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_EULER_PARAMETERS { \
    40008, \
    "CAM_EULER_PARAMETERS", \
    5, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_cam_euler_parameters_t, cam_id) }, \
         { "is_delta", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_cam_euler_parameters_t, is_delta) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_euler_parameters_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cam_euler_parameters_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cam_euler_parameters_t, roll) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_EULER_PARAMETERS { \
    "CAM_EULER_PARAMETERS", \
    5, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_cam_euler_parameters_t, cam_id) }, \
         { "is_delta", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_cam_euler_parameters_t, is_delta) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_euler_parameters_t, yaw) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cam_euler_parameters_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cam_euler_parameters_t, roll) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_euler_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param is_delta  
        0 = angles are absolute directions; non-zero = angles are deltas applied to current aim (recommended: 1 for true).
      
 * @param yaw  
        Camera yaw angle in radians.
      
 * @param pitch  
        Camera pitch angle in radians.
      
 * @param roll  
        Camera roll angle in radians. Currently often ignored.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_euler_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t is_delta, float yaw, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_uint8_t(buf, 13, is_delta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#else
    mavlink_cam_euler_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.cam_id = cam_id;
    packet.is_delta = is_delta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_EULER_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_euler_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param is_delta  
        0 = angles are absolute directions; non-zero = angles are deltas applied to current aim (recommended: 1 for true).
      
 * @param yaw  
        Camera yaw angle in radians.
      
 * @param pitch  
        Camera pitch angle in radians.
      
 * @param roll  
        Camera roll angle in radians. Currently often ignored.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_euler_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t is_delta, float yaw, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_uint8_t(buf, 13, is_delta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#else
    mavlink_cam_euler_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.cam_id = cam_id;
    packet.is_delta = is_delta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_EULER_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_euler_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param is_delta  
        0 = angles are absolute directions; non-zero = angles are deltas applied to current aim (recommended: 1 for true).
      
 * @param yaw  
        Camera yaw angle in radians.
      
 * @param pitch  
        Camera pitch angle in radians.
      
 * @param roll  
        Camera roll angle in radians. Currently often ignored.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_euler_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_id,uint8_t is_delta,float yaw,float pitch,float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_uint8_t(buf, 13, is_delta);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#else
    mavlink_cam_euler_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.cam_id = cam_id;
    packet.is_delta = is_delta;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_EULER_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_euler_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_euler_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_euler_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_euler_parameters_t* cam_euler_parameters)
{
    return mavlink_msg_cam_euler_parameters_pack(system_id, component_id, msg, cam_euler_parameters->cam_id, cam_euler_parameters->is_delta, cam_euler_parameters->yaw, cam_euler_parameters->pitch, cam_euler_parameters->roll);
}

/**
 * @brief Encode a cam_euler_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_euler_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_euler_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_euler_parameters_t* cam_euler_parameters)
{
    return mavlink_msg_cam_euler_parameters_pack_chan(system_id, component_id, chan, msg, cam_euler_parameters->cam_id, cam_euler_parameters->is_delta, cam_euler_parameters->yaw, cam_euler_parameters->pitch, cam_euler_parameters->roll);
}

/**
 * @brief Encode a cam_euler_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_euler_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_euler_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_euler_parameters_t* cam_euler_parameters)
{
    return mavlink_msg_cam_euler_parameters_pack_status(system_id, component_id, _status, msg,  cam_euler_parameters->cam_id, cam_euler_parameters->is_delta, cam_euler_parameters->yaw, cam_euler_parameters->pitch, cam_euler_parameters->roll);
}

/**
 * @brief Send a cam_euler_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param is_delta  
        0 = angles are absolute directions; non-zero = angles are deltas applied to current aim (recommended: 1 for true).
      
 * @param yaw  
        Camera yaw angle in radians.
      
 * @param pitch  
        Camera pitch angle in radians.
      
 * @param roll  
        Camera roll angle in radians. Currently often ignored.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_euler_parameters_send(mavlink_channel_t chan, uint8_t cam_id, uint8_t is_delta, float yaw, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_uint8_t(buf, 13, is_delta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
#else
    mavlink_cam_euler_parameters_t packet;
    packet.yaw = yaw;
    packet.pitch = pitch;
    packet.roll = roll;
    packet.cam_id = cam_id;
    packet.is_delta = is_delta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_euler_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_euler_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_euler_parameters_t* cam_euler_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_euler_parameters_send(chan, cam_euler_parameters->cam_id, cam_euler_parameters->is_delta, cam_euler_parameters->yaw, cam_euler_parameters->pitch, cam_euler_parameters->roll);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS, (const char *)cam_euler_parameters, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_euler_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_id, uint8_t is_delta, float yaw, float pitch, float roll)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, yaw);
    _mav_put_float(buf, 4, pitch);
    _mav_put_float(buf, 8, roll);
    _mav_put_uint8_t(buf, 12, cam_id);
    _mav_put_uint8_t(buf, 13, is_delta);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
#else
    mavlink_cam_euler_parameters_t *packet = (mavlink_cam_euler_parameters_t *)msgbuf;
    packet->yaw = yaw;
    packet->pitch = pitch;
    packet->roll = roll;
    packet->cam_id = cam_id;
    packet->is_delta = is_delta;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_EULER_PARAMETERS UNPACKING


/**
 * @brief Get field cam_id from cam_euler_parameters message
 *
 * @return  
        Camera identifier (user-controlled camera index).
      
 */
static inline uint8_t mavlink_msg_cam_euler_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field is_delta from cam_euler_parameters message
 *
 * @return  
        0 = angles are absolute directions; non-zero = angles are deltas applied to current aim (recommended: 1 for true).
      
 */
static inline uint8_t mavlink_msg_cam_euler_parameters_get_is_delta(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field yaw from cam_euler_parameters message
 *
 * @return  
        Camera yaw angle in radians.
      
 */
static inline float mavlink_msg_cam_euler_parameters_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch from cam_euler_parameters message
 *
 * @return  
        Camera pitch angle in radians.
      
 */
static inline float mavlink_msg_cam_euler_parameters_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field roll from cam_euler_parameters message
 *
 * @return  
        Camera roll angle in radians. Currently often ignored.
      
 */
static inline float mavlink_msg_cam_euler_parameters_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a cam_euler_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_euler_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_euler_parameters_decode(const mavlink_message_t* msg, mavlink_cam_euler_parameters_t* cam_euler_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_euler_parameters->yaw = mavlink_msg_cam_euler_parameters_get_yaw(msg);
    cam_euler_parameters->pitch = mavlink_msg_cam_euler_parameters_get_pitch(msg);
    cam_euler_parameters->roll = mavlink_msg_cam_euler_parameters_get_roll(msg);
    cam_euler_parameters->cam_id = mavlink_msg_cam_euler_parameters_get_cam_id(msg);
    cam_euler_parameters->is_delta = mavlink_msg_cam_euler_parameters_get_is_delta(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN;
        memset(cam_euler_parameters, 0, MAVLINK_MSG_ID_CAM_EULER_PARAMETERS_LEN);
    memcpy(cam_euler_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
