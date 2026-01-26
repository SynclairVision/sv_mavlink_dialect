#pragma once
// MESSAGE SYSTEM_STATUS_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS 40000


typedef struct __mavlink_system_status_parameters_t {
 float jetson_temp; /*<  Jetson module temperature in °C.*/
 uint8_t status; /*<  System status, see SV_SYSTEM_STATUS_STATE.*/
 uint8_t error; /*<  Reserved error code (currently 0).*/
} mavlink_system_status_parameters_t;

#define MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN 6
#define MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN 6
#define MAVLINK_MSG_ID_40000_LEN 6
#define MAVLINK_MSG_ID_40000_MIN_LEN 6

#define MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC 174
#define MAVLINK_MSG_ID_40000_CRC 174



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SYSTEM_STATUS_PARAMETERS { \
    40000, \
    "SYSTEM_STATUS_PARAMETERS", \
    3, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_system_status_parameters_t, status) }, \
         { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_system_status_parameters_t, error) }, \
         { "jetson_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_system_status_parameters_t, jetson_temp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SYSTEM_STATUS_PARAMETERS { \
    "SYSTEM_STATUS_PARAMETERS", \
    3, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_system_status_parameters_t, status) }, \
         { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_system_status_parameters_t, error) }, \
         { "jetson_temp", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_system_status_parameters_t, jetson_temp) }, \
         } \
}
#endif

/**
 * @brief Pack a system_status_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  System status, see SV_SYSTEM_STATUS_STATE.
 * @param error  Reserved error code (currently 0).
 * @param jetson_temp  Jetson module temperature in °C.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_system_status_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, uint8_t error, float jetson_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_float(buf, 0, jetson_temp);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_uint8_t(buf, 5, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#else
    mavlink_system_status_parameters_t packet;
    packet.jetson_temp = jetson_temp;
    packet.status = status;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
}

/**
 * @brief Pack a system_status_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  System status, see SV_SYSTEM_STATUS_STATE.
 * @param error  Reserved error code (currently 0).
 * @param jetson_temp  Jetson module temperature in °C.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_system_status_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t status, uint8_t error, float jetson_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_float(buf, 0, jetson_temp);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_uint8_t(buf, 5, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#else
    mavlink_system_status_parameters_t packet;
    packet.jetson_temp = jetson_temp;
    packet.status = status;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a system_status_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  System status, see SV_SYSTEM_STATUS_STATE.
 * @param error  Reserved error code (currently 0).
 * @param jetson_temp  Jetson module temperature in °C.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_system_status_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,uint8_t error,float jetson_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_float(buf, 0, jetson_temp);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_uint8_t(buf, 5, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#else
    mavlink_system_status_parameters_t packet;
    packet.jetson_temp = jetson_temp;
    packet.status = status;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
}

/**
 * @brief Encode a system_status_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param system_status_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_system_status_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_system_status_parameters_t* system_status_parameters)
{
    return mavlink_msg_system_status_parameters_pack(system_id, component_id, msg, system_status_parameters->status, system_status_parameters->error, system_status_parameters->jetson_temp);
}

/**
 * @brief Encode a system_status_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param system_status_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_system_status_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_system_status_parameters_t* system_status_parameters)
{
    return mavlink_msg_system_status_parameters_pack_chan(system_id, component_id, chan, msg, system_status_parameters->status, system_status_parameters->error, system_status_parameters->jetson_temp);
}

/**
 * @brief Encode a system_status_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param system_status_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_system_status_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_system_status_parameters_t* system_status_parameters)
{
    return mavlink_msg_system_status_parameters_pack_status(system_id, component_id, _status, msg,  system_status_parameters->status, system_status_parameters->error, system_status_parameters->jetson_temp);
}

/**
 * @brief Send a system_status_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param status  System status, see SV_SYSTEM_STATUS_STATE.
 * @param error  Reserved error code (currently 0).
 * @param jetson_temp  Jetson module temperature in °C.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_system_status_parameters_send(mavlink_channel_t chan, uint8_t status, uint8_t error, float jetson_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_float(buf, 0, jetson_temp);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_uint8_t(buf, 5, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS, buf, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
#else
    mavlink_system_status_parameters_t packet;
    packet.jetson_temp = jetson_temp;
    packet.status = status;
    packet.error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a system_status_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_system_status_parameters_send_struct(mavlink_channel_t chan, const mavlink_system_status_parameters_t* system_status_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_system_status_parameters_send(chan, system_status_parameters->status, system_status_parameters->error, system_status_parameters->jetson_temp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS, (const char *)system_status_parameters, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_system_status_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, uint8_t error, float jetson_temp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, jetson_temp);
    _mav_put_uint8_t(buf, 4, status);
    _mav_put_uint8_t(buf, 5, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS, buf, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
#else
    mavlink_system_status_parameters_t *packet = (mavlink_system_status_parameters_t *)msgbuf;
    packet->jetson_temp = jetson_temp;
    packet->status = status;
    packet->error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SYSTEM_STATUS_PARAMETERS UNPACKING


/**
 * @brief Get field status from system_status_parameters message
 *
 * @return  System status, see SV_SYSTEM_STATUS_STATE.
 */
static inline uint8_t mavlink_msg_system_status_parameters_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field error from system_status_parameters message
 *
 * @return  Reserved error code (currently 0).
 */
static inline uint8_t mavlink_msg_system_status_parameters_get_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field jetson_temp from system_status_parameters message
 *
 * @return  Jetson module temperature in °C.
 */
static inline float mavlink_msg_system_status_parameters_get_jetson_temp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a system_status_parameters message into a struct
 *
 * @param msg The message to decode
 * @param system_status_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_system_status_parameters_decode(const mavlink_message_t* msg, mavlink_system_status_parameters_t* system_status_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    system_status_parameters->jetson_temp = mavlink_msg_system_status_parameters_get_jetson_temp(msg);
    system_status_parameters->status = mavlink_msg_system_status_parameters_get_status(msg);
    system_status_parameters->error = mavlink_msg_system_status_parameters_get_error(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN;
        memset(system_status_parameters, 0, MAVLINK_MSG_ID_SYSTEM_STATUS_PARAMETERS_LEN);
    memcpy(system_status_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
