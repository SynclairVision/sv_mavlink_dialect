#pragma once
// MESSAGE SV_SYSTEM_STATUS_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS 40000


typedef struct __mavlink_sv_system_status_parameters_t {
 uint8_t status; /*<  System status code.*/
 uint8_t error; /*<  System error code.*/
} mavlink_sv_system_status_parameters_t;

#define MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN 2
#define MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN 2
#define MAVLINK_MSG_ID_40000_LEN 2
#define MAVLINK_MSG_ID_40000_MIN_LEN 2

#define MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC 123
#define MAVLINK_MSG_ID_40000_CRC 123



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_SYSTEM_STATUS_PARAMETERS { \
    40000, \
    "SV_SYSTEM_STATUS_PARAMETERS", \
    2, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sv_system_status_parameters_t, status) }, \
         { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_sv_system_status_parameters_t, error) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_SYSTEM_STATUS_PARAMETERS { \
    "SV_SYSTEM_STATUS_PARAMETERS", \
    2, \
    {  { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_sv_system_status_parameters_t, status) }, \
         { "error", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_sv_system_status_parameters_t, error) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_system_status_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  System status code.
 * @param error  System error code.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_system_status_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t status, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#else
    mavlink_sv_system_status_parameters_t packet;
    packet.status = status;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_system_status_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param status  System status code.
 * @param error  System error code.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_system_status_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t status, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#else
    mavlink_sv_system_status_parameters_t packet;
    packet.status = status;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_system_status_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param status  System status code.
 * @param error  System error code.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_system_status_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t status,uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, error);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#else
    mavlink_sv_system_status_parameters_t packet;
    packet.status = status;
    packet.error = error;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_system_status_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_system_status_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_system_status_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_system_status_parameters_t* sv_system_status_parameters)
{
    return mavlink_msg_sv_system_status_parameters_pack(system_id, component_id, msg, sv_system_status_parameters->status, sv_system_status_parameters->error);
}

/**
 * @brief Encode a sv_system_status_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_system_status_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_system_status_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_system_status_parameters_t* sv_system_status_parameters)
{
    return mavlink_msg_sv_system_status_parameters_pack_chan(system_id, component_id, chan, msg, sv_system_status_parameters->status, sv_system_status_parameters->error);
}

/**
 * @brief Encode a sv_system_status_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_system_status_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_system_status_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_system_status_parameters_t* sv_system_status_parameters)
{
    return mavlink_msg_sv_system_status_parameters_pack_status(system_id, component_id, _status, msg,  sv_system_status_parameters->status, sv_system_status_parameters->error);
}

/**
 * @brief Send a sv_system_status_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param status  System status code.
 * @param error  System error code.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_system_status_parameters_send(mavlink_channel_t chan, uint8_t status, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS, buf, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
#else
    mavlink_sv_system_status_parameters_t packet;
    packet.status = status;
    packet.error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_system_status_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_system_status_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_system_status_parameters_t* sv_system_status_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_system_status_parameters_send(chan, sv_system_status_parameters->status, sv_system_status_parameters->error);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS, (const char *)sv_system_status_parameters, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_system_status_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t status, uint8_t error)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, status);
    _mav_put_uint8_t(buf, 1, error);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS, buf, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
#else
    mavlink_sv_system_status_parameters_t *packet = (mavlink_sv_system_status_parameters_t *)msgbuf;
    packet->status = status;
    packet->error = error;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_SYSTEM_STATUS_PARAMETERS UNPACKING


/**
 * @brief Get field status from sv_system_status_parameters message
 *
 * @return  System status code.
 */
static inline uint8_t mavlink_msg_sv_system_status_parameters_get_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field error from sv_system_status_parameters message
 *
 * @return  System error code.
 */
static inline uint8_t mavlink_msg_sv_system_status_parameters_get_error(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a sv_system_status_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_system_status_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_system_status_parameters_decode(const mavlink_message_t* msg, mavlink_sv_system_status_parameters_t* sv_system_status_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_system_status_parameters->status = mavlink_msg_sv_system_status_parameters_get_status(msg);
    sv_system_status_parameters->error = mavlink_msg_sv_system_status_parameters_get_error(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN;
        memset(sv_system_status_parameters, 0, MAVLINK_MSG_ID_SV_SYSTEM_STATUS_PARAMETERS_LEN);
    memcpy(sv_system_status_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
