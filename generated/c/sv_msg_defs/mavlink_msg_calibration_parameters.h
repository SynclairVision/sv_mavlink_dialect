#pragma once
// MESSAGE CALIBRATION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CALIBRATION_PARAMETERS 40013


typedef struct __mavlink_calibration_parameters_t {
 uint8_t cam_id; /*<  Camera index.*/
 uint8_t calib_command; /*<  Calibration command.*/
 uint8_t calib_status; /*<  Calibration status.*/
} mavlink_calibration_parameters_t;

#define MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN 3
#define MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN 3
#define MAVLINK_MSG_ID_40013_LEN 3
#define MAVLINK_MSG_ID_40013_MIN_LEN 3

#define MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC 226
#define MAVLINK_MSG_ID_40013_CRC 226



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CALIBRATION_PARAMETERS { \
    40013, \
    "CALIBRATION_PARAMETERS", \
    3, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_calibration_parameters_t, cam_id) }, \
         { "calib_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_calibration_parameters_t, calib_command) }, \
         { "calib_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_calibration_parameters_t, calib_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CALIBRATION_PARAMETERS { \
    "CALIBRATION_PARAMETERS", \
    3, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_calibration_parameters_t, cam_id) }, \
         { "calib_command", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_calibration_parameters_t, calib_command) }, \
         { "calib_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_calibration_parameters_t, calib_status) }, \
         } \
}
#endif

/**
 * @brief Pack a calibration_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  Camera index.
 * @param calib_command  Calibration command.
 * @param calib_status  Calibration status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_calibration_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t calib_command, uint8_t calib_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, calib_command);
    _mav_put_uint8_t(buf, 2, calib_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#else
    mavlink_calibration_parameters_t packet;
    packet.cam_id = cam_id;
    packet.calib_command = calib_command;
    packet.calib_status = calib_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CALIBRATION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
}

/**
 * @brief Pack a calibration_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  Camera index.
 * @param calib_command  Calibration command.
 * @param calib_status  Calibration status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_calibration_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cam_id, uint8_t calib_command, uint8_t calib_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, calib_command);
    _mav_put_uint8_t(buf, 2, calib_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#else
    mavlink_calibration_parameters_t packet;
    packet.cam_id = cam_id;
    packet.calib_command = calib_command;
    packet.calib_status = calib_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CALIBRATION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a calibration_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_id  Camera index.
 * @param calib_command  Calibration command.
 * @param calib_status  Calibration status.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_calibration_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_id,uint8_t calib_command,uint8_t calib_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, calib_command);
    _mav_put_uint8_t(buf, 2, calib_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#else
    mavlink_calibration_parameters_t packet;
    packet.cam_id = cam_id;
    packet.calib_command = calib_command;
    packet.calib_status = calib_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CALIBRATION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
}

/**
 * @brief Encode a calibration_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param calibration_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_calibration_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_calibration_parameters_t* calibration_parameters)
{
    return mavlink_msg_calibration_parameters_pack(system_id, component_id, msg, calibration_parameters->cam_id, calibration_parameters->calib_command, calibration_parameters->calib_status);
}

/**
 * @brief Encode a calibration_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param calibration_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_calibration_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_calibration_parameters_t* calibration_parameters)
{
    return mavlink_msg_calibration_parameters_pack_chan(system_id, component_id, chan, msg, calibration_parameters->cam_id, calibration_parameters->calib_command, calibration_parameters->calib_status);
}

/**
 * @brief Encode a calibration_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param calibration_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_calibration_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_calibration_parameters_t* calibration_parameters)
{
    return mavlink_msg_calibration_parameters_pack_status(system_id, component_id, _status, msg,  calibration_parameters->cam_id, calibration_parameters->calib_command, calibration_parameters->calib_status);
}

/**
 * @brief Send a calibration_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_id  Camera index.
 * @param calib_command  Calibration command.
 * @param calib_status  Calibration status.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_calibration_parameters_send(mavlink_channel_t chan, uint8_t cam_id, uint8_t calib_command, uint8_t calib_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, calib_command);
    _mav_put_uint8_t(buf, 2, calib_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS, buf, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
#else
    mavlink_calibration_parameters_t packet;
    packet.cam_id = cam_id;
    packet.calib_command = calib_command;
    packet.calib_status = calib_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a calibration_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_calibration_parameters_send_struct(mavlink_channel_t chan, const mavlink_calibration_parameters_t* calibration_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_calibration_parameters_send(chan, calibration_parameters->cam_id, calibration_parameters->calib_command, calibration_parameters->calib_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS, (const char *)calibration_parameters, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_calibration_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_id, uint8_t calib_command, uint8_t calib_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, cam_id);
    _mav_put_uint8_t(buf, 1, calib_command);
    _mav_put_uint8_t(buf, 2, calib_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS, buf, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
#else
    mavlink_calibration_parameters_t *packet = (mavlink_calibration_parameters_t *)msgbuf;
    packet->cam_id = cam_id;
    packet->calib_command = calib_command;
    packet->calib_status = calib_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CALIBRATION_PARAMETERS UNPACKING


/**
 * @brief Get field cam_id from calibration_parameters message
 *
 * @return  Camera index.
 */
static inline uint8_t mavlink_msg_calibration_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field calib_command from calibration_parameters message
 *
 * @return  Calibration command.
 */
static inline uint8_t mavlink_msg_calibration_parameters_get_calib_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field calib_status from calibration_parameters message
 *
 * @return  Calibration status.
 */
static inline uint8_t mavlink_msg_calibration_parameters_get_calib_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a calibration_parameters message into a struct
 *
 * @param msg The message to decode
 * @param calibration_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_calibration_parameters_decode(const mavlink_message_t* msg, mavlink_calibration_parameters_t* calibration_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    calibration_parameters->cam_id = mavlink_msg_calibration_parameters_get_cam_id(msg);
    calibration_parameters->calib_command = mavlink_msg_calibration_parameters_get_calib_command(msg);
    calibration_parameters->calib_status = mavlink_msg_calibration_parameters_get_calib_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN;
        memset(calibration_parameters, 0, MAVLINK_MSG_ID_CALIBRATION_PARAMETERS_LEN);
    memcpy(calibration_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
