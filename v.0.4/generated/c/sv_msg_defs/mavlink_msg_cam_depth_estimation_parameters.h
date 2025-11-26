#pragma once
// MESSAGE CAM_DEPTH_ESTIMATION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS 40017


typedef struct __mavlink_cam_depth_estimation_parameters_t {
 float depth; /*<  
        Estimated depth in meters for the center point of the camera. Ignored on SET; populated on GET when implemented.
      */
 uint8_t cam_id; /*<  
        Camera identifier (user-controlled camera index).
      */
 uint8_t depth_estimation_mode; /*<  
        Depth estimation mode selector (implementation-specific; typically [0,1]).
      */
} mavlink_cam_depth_estimation_parameters_t;

#define MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN 6
#define MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN 6
#define MAVLINK_MSG_ID_40017_LEN 6
#define MAVLINK_MSG_ID_40017_MIN_LEN 6

#define MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC 25
#define MAVLINK_MSG_ID_40017_CRC 25



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_DEPTH_ESTIMATION_PARAMETERS { \
    40017, \
    "CAM_DEPTH_ESTIMATION_PARAMETERS", \
    3, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_cam_depth_estimation_parameters_t, cam_id) }, \
         { "depth_estimation_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_cam_depth_estimation_parameters_t, depth_estimation_mode) }, \
         { "depth", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_depth_estimation_parameters_t, depth) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_DEPTH_ESTIMATION_PARAMETERS { \
    "CAM_DEPTH_ESTIMATION_PARAMETERS", \
    3, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_cam_depth_estimation_parameters_t, cam_id) }, \
         { "depth_estimation_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_cam_depth_estimation_parameters_t, depth_estimation_mode) }, \
         { "depth", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_depth_estimation_parameters_t, depth) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_depth_estimation_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param depth_estimation_mode  
        Depth estimation mode selector (implementation-specific; typically [0,1]).
      
 * @param depth  
        Estimated depth in meters for the center point of the camera. Ignored on SET; populated on GET when implemented.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_depth_estimation_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 4, cam_id);
    _mav_put_uint8_t(buf, 5, depth_estimation_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#else
    mavlink_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_depth_estimation_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param depth_estimation_mode  
        Depth estimation mode selector (implementation-specific; typically [0,1]).
      
 * @param depth  
        Estimated depth in meters for the center point of the camera. Ignored on SET; populated on GET when implemented.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_depth_estimation_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 4, cam_id);
    _mav_put_uint8_t(buf, 5, depth_estimation_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#else
    mavlink_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_depth_estimation_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param depth_estimation_mode  
        Depth estimation mode selector (implementation-specific; typically [0,1]).
      
 * @param depth  
        Estimated depth in meters for the center point of the camera. Ignored on SET; populated on GET when implemented.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_depth_estimation_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_id,uint8_t depth_estimation_mode,float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 4, cam_id);
    _mav_put_uint8_t(buf, 5, depth_estimation_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#else
    mavlink_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_depth_estimation_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_depth_estimation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_depth_estimation_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_depth_estimation_parameters_t* cam_depth_estimation_parameters)
{
    return mavlink_msg_cam_depth_estimation_parameters_pack(system_id, component_id, msg, cam_depth_estimation_parameters->cam_id, cam_depth_estimation_parameters->depth_estimation_mode, cam_depth_estimation_parameters->depth);
}

/**
 * @brief Encode a cam_depth_estimation_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_depth_estimation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_depth_estimation_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_depth_estimation_parameters_t* cam_depth_estimation_parameters)
{
    return mavlink_msg_cam_depth_estimation_parameters_pack_chan(system_id, component_id, chan, msg, cam_depth_estimation_parameters->cam_id, cam_depth_estimation_parameters->depth_estimation_mode, cam_depth_estimation_parameters->depth);
}

/**
 * @brief Encode a cam_depth_estimation_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_depth_estimation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_depth_estimation_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_depth_estimation_parameters_t* cam_depth_estimation_parameters)
{
    return mavlink_msg_cam_depth_estimation_parameters_pack_status(system_id, component_id, _status, msg,  cam_depth_estimation_parameters->cam_id, cam_depth_estimation_parameters->depth_estimation_mode, cam_depth_estimation_parameters->depth);
}

/**
 * @brief Send a cam_depth_estimation_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param depth_estimation_mode  
        Depth estimation mode selector (implementation-specific; typically [0,1]).
      
 * @param depth  
        Estimated depth in meters for the center point of the camera. Ignored on SET; populated on GET when implemented.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_depth_estimation_parameters_send(mavlink_channel_t chan, uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 4, cam_id);
    _mav_put_uint8_t(buf, 5, depth_estimation_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#else
    mavlink_cam_depth_estimation_parameters_t packet;
    packet.depth = depth;
    packet.cam_id = cam_id;
    packet.depth_estimation_mode = depth_estimation_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_depth_estimation_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_depth_estimation_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_depth_estimation_parameters_t* cam_depth_estimation_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_depth_estimation_parameters_send(chan, cam_depth_estimation_parameters->cam_id, cam_depth_estimation_parameters->depth_estimation_mode, cam_depth_estimation_parameters->depth);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS, (const char *)cam_depth_estimation_parameters, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_depth_estimation_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_id, uint8_t depth_estimation_mode, float depth)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, depth);
    _mav_put_uint8_t(buf, 4, cam_id);
    _mav_put_uint8_t(buf, 5, depth_estimation_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#else
    mavlink_cam_depth_estimation_parameters_t *packet = (mavlink_cam_depth_estimation_parameters_t *)msgbuf;
    packet->depth = depth;
    packet->cam_id = cam_id;
    packet->depth_estimation_mode = depth_estimation_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_DEPTH_ESTIMATION_PARAMETERS UNPACKING


/**
 * @brief Get field cam_id from cam_depth_estimation_parameters message
 *
 * @return  
        Camera identifier (user-controlled camera index).
      
 */
static inline uint8_t mavlink_msg_cam_depth_estimation_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field depth_estimation_mode from cam_depth_estimation_parameters message
 *
 * @return  
        Depth estimation mode selector (implementation-specific; typically [0,1]).
      
 */
static inline uint8_t mavlink_msg_cam_depth_estimation_parameters_get_depth_estimation_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field depth from cam_depth_estimation_parameters message
 *
 * @return  
        Estimated depth in meters for the center point of the camera. Ignored on SET; populated on GET when implemented.
      
 */
static inline float mavlink_msg_cam_depth_estimation_parameters_get_depth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a cam_depth_estimation_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_depth_estimation_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_depth_estimation_parameters_decode(const mavlink_message_t* msg, mavlink_cam_depth_estimation_parameters_t* cam_depth_estimation_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_depth_estimation_parameters->depth = mavlink_msg_cam_depth_estimation_parameters_get_depth(msg);
    cam_depth_estimation_parameters->cam_id = mavlink_msg_cam_depth_estimation_parameters_get_cam_id(msg);
    cam_depth_estimation_parameters->depth_estimation_mode = mavlink_msg_cam_depth_estimation_parameters_get_depth_estimation_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN;
        memset(cam_depth_estimation_parameters, 0, MAVLINK_MSG_ID_CAM_DEPTH_ESTIMATION_PARAMETERS_LEN);
    memcpy(cam_depth_estimation_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
