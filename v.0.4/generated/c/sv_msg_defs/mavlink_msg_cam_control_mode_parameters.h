#pragma once
// MESSAGE CAM_CONTROL_MODE_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS 40011


typedef struct __mavlink_cam_control_mode_parameters_t {
 uint8_t cam_id; /*<  
        Camera identifier (user-controlled camera index).
      */
 uint8_t mode; /*<  
        Control mode: 0=Pilot view (not yet implemented), 1=Directional control, 2=Coordial control, 3=Pass-through.
      */
} mavlink_cam_control_mode_parameters_t;

#define MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN 2
#define MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN 2
#define MAVLINK_MSG_ID_40011_LEN 2
#define MAVLINK_MSG_ID_40011_MIN_LEN 2

#define MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC 75
#define MAVLINK_MSG_ID_40011_CRC 75



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_CONTROL_MODE_PARAMETERS { \
    40011, \
    "CAM_CONTROL_MODE_PARAMETERS", \
    2, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cam_control_mode_parameters_t, cam_id) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cam_control_mode_parameters_t, mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_CONTROL_MODE_PARAMETERS { \
    "CAM_CONTROL_MODE_PARAMETERS", \
    2, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_cam_control_mode_parameters_t, cam_id) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_cam_control_mode_parameters_t, mode) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_control_mode_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param mode  
        Control mode: 0=Pilot view (not yet implemented), 1=Directional control, 2=Coordial control, 3=Pass-through.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_control_mode_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#else
    mavlink_cam_control_mode_parameters_t packet;
    packet.cam_id = cam_id;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_control_mode_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param mode  
        Control mode: 0=Pilot view (not yet implemented), 1=Directional control, 2=Coordial control, 3=Pass-through.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_control_mode_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#else
    mavlink_cam_control_mode_parameters_t packet;
    packet.cam_id = cam_id;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_control_mode_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param mode  
        Control mode: 0=Pilot view (not yet implemented), 1=Directional control, 2=Coordial control, 3=Pass-through.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_control_mode_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_id,uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#else
    mavlink_cam_control_mode_parameters_t packet;
    packet.cam_id = cam_id;
    packet.mode = mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_control_mode_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_control_mode_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_control_mode_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_control_mode_parameters_t* cam_control_mode_parameters)
{
    return mavlink_msg_cam_control_mode_parameters_pack(system_id, component_id, msg, cam_control_mode_parameters->cam_id, cam_control_mode_parameters->mode);
}

/**
 * @brief Encode a cam_control_mode_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_control_mode_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_control_mode_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_control_mode_parameters_t* cam_control_mode_parameters)
{
    return mavlink_msg_cam_control_mode_parameters_pack_chan(system_id, component_id, chan, msg, cam_control_mode_parameters->cam_id, cam_control_mode_parameters->mode);
}

/**
 * @brief Encode a cam_control_mode_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_control_mode_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_control_mode_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_control_mode_parameters_t* cam_control_mode_parameters)
{
    return mavlink_msg_cam_control_mode_parameters_pack_status(system_id, component_id, _status, msg,  cam_control_mode_parameters->cam_id, cam_control_mode_parameters->mode);
}

/**
 * @brief Send a cam_control_mode_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param mode  
        Control mode: 0=Pilot view (not yet implemented), 1=Directional control, 2=Coordial control, 3=Pass-through.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_control_mode_parameters_send(mavlink_channel_t chan, uint8_t cam_id, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
#else
    mavlink_cam_control_mode_parameters_t packet;
    packet.cam_id = cam_id;
    packet.mode = mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_control_mode_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_control_mode_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_control_mode_parameters_t* cam_control_mode_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_control_mode_parameters_send(chan, cam_control_mode_parameters->cam_id, cam_control_mode_parameters->mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS, (const char *)cam_control_mode_parameters, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_control_mode_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_id, uint8_t mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
#else
    mavlink_cam_control_mode_parameters_t *packet = (mavlink_cam_control_mode_parameters_t *)msgbuf;
    packet->cam_id = cam_id;
    packet->mode = mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_CONTROL_MODE_PARAMETERS UNPACKING


/**
 * @brief Get field cam_id from cam_control_mode_parameters message
 *
 * @return  
        Camera identifier (user-controlled camera index).
      
 */
static inline uint8_t mavlink_msg_cam_control_mode_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field mode from cam_control_mode_parameters message
 *
 * @return  
        Control mode: 0=Pilot view (not yet implemented), 1=Directional control, 2=Coordial control, 3=Pass-through.
      
 */
static inline uint8_t mavlink_msg_cam_control_mode_parameters_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a cam_control_mode_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_control_mode_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_control_mode_parameters_decode(const mavlink_message_t* msg, mavlink_cam_control_mode_parameters_t* cam_control_mode_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_control_mode_parameters->cam_id = mavlink_msg_cam_control_mode_parameters_get_cam_id(msg);
    cam_control_mode_parameters->mode = mavlink_msg_cam_control_mode_parameters_get_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN;
        memset(cam_control_mode_parameters, 0, MAVLINK_MSG_ID_CAM_CONTROL_MODE_PARAMETERS_LEN);
    memcpy(cam_control_mode_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
