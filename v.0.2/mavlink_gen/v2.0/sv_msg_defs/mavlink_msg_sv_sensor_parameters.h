#pragma once
// MESSAGE SV_SENSOR_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS 40010


typedef struct __mavlink_sv_sensor_parameters_t {
 uint32_t min_exposure; /*<  Min exposure (µs or units).*/
 uint32_t max_exposure; /*<  Max exposure.*/
 uint32_t min_gain; /*<  Min gain (ISO or units).*/
 uint32_t max_gain; /*<  Max gain.*/
} mavlink_sv_sensor_parameters_t;

#define MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN 16
#define MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN 16
#define MAVLINK_MSG_ID_40010_LEN 16
#define MAVLINK_MSG_ID_40010_MIN_LEN 16

#define MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC 152
#define MAVLINK_MSG_ID_40010_CRC 152



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_SENSOR_PARAMETERS { \
    40010, \
    "SV_SENSOR_PARAMETERS", \
    4, \
    {  { "min_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sv_sensor_parameters_t, min_exposure) }, \
         { "max_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_sv_sensor_parameters_t, max_exposure) }, \
         { "min_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_sv_sensor_parameters_t, min_gain) }, \
         { "max_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_sv_sensor_parameters_t, max_gain) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_SENSOR_PARAMETERS { \
    "SV_SENSOR_PARAMETERS", \
    4, \
    {  { "min_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sv_sensor_parameters_t, min_exposure) }, \
         { "max_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_sv_sensor_parameters_t, max_exposure) }, \
         { "min_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_sv_sensor_parameters_t, min_gain) }, \
         { "max_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_sv_sensor_parameters_t, max_gain) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_sensor_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param min_exposure  Min exposure (µs or units).
 * @param max_exposure  Max exposure.
 * @param min_gain  Min gain (ISO or units).
 * @param max_gain  Max gain.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_sensor_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#else
    mavlink_sv_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_sensor_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param min_exposure  Min exposure (µs or units).
 * @param max_exposure  Max exposure.
 * @param min_gain  Min gain (ISO or units).
 * @param max_gain  Max gain.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_sensor_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#else
    mavlink_sv_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_sensor_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param min_exposure  Min exposure (µs or units).
 * @param max_exposure  Max exposure.
 * @param min_gain  Min gain (ISO or units).
 * @param max_gain  Max gain.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_sensor_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t min_exposure,uint32_t max_exposure,uint32_t min_gain,uint32_t max_gain)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#else
    mavlink_sv_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_sensor_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_sensor_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_sensor_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_sensor_parameters_t* sv_sensor_parameters)
{
    return mavlink_msg_sv_sensor_parameters_pack(system_id, component_id, msg, sv_sensor_parameters->min_exposure, sv_sensor_parameters->max_exposure, sv_sensor_parameters->min_gain, sv_sensor_parameters->max_gain);
}

/**
 * @brief Encode a sv_sensor_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_sensor_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_sensor_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_sensor_parameters_t* sv_sensor_parameters)
{
    return mavlink_msg_sv_sensor_parameters_pack_chan(system_id, component_id, chan, msg, sv_sensor_parameters->min_exposure, sv_sensor_parameters->max_exposure, sv_sensor_parameters->min_gain, sv_sensor_parameters->max_gain);
}

/**
 * @brief Encode a sv_sensor_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_sensor_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_sensor_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_sensor_parameters_t* sv_sensor_parameters)
{
    return mavlink_msg_sv_sensor_parameters_pack_status(system_id, component_id, _status, msg,  sv_sensor_parameters->min_exposure, sv_sensor_parameters->max_exposure, sv_sensor_parameters->min_gain, sv_sensor_parameters->max_gain);
}

/**
 * @brief Send a sv_sensor_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param min_exposure  Min exposure (µs or units).
 * @param max_exposure  Max exposure.
 * @param min_gain  Min gain (ISO or units).
 * @param max_gain  Max gain.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_sensor_parameters_send(mavlink_channel_t chan, uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS, buf, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
#else
    mavlink_sv_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_sensor_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_sensor_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_sensor_parameters_t* sv_sensor_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_sensor_parameters_send(chan, sv_sensor_parameters->min_exposure, sv_sensor_parameters->max_exposure, sv_sensor_parameters->min_gain, sv_sensor_parameters->max_gain);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS, (const char *)sv_sensor_parameters, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_sensor_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS, buf, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
#else
    mavlink_sv_sensor_parameters_t *packet = (mavlink_sv_sensor_parameters_t *)msgbuf;
    packet->min_exposure = min_exposure;
    packet->max_exposure = max_exposure;
    packet->min_gain = min_gain;
    packet->max_gain = max_gain;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_SENSOR_PARAMETERS UNPACKING


/**
 * @brief Get field min_exposure from sv_sensor_parameters message
 *
 * @return  Min exposure (µs or units).
 */
static inline uint32_t mavlink_msg_sv_sensor_parameters_get_min_exposure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field max_exposure from sv_sensor_parameters message
 *
 * @return  Max exposure.
 */
static inline uint32_t mavlink_msg_sv_sensor_parameters_get_max_exposure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field min_gain from sv_sensor_parameters message
 *
 * @return  Min gain (ISO or units).
 */
static inline uint32_t mavlink_msg_sv_sensor_parameters_get_min_gain(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field max_gain from sv_sensor_parameters message
 *
 * @return  Max gain.
 */
static inline uint32_t mavlink_msg_sv_sensor_parameters_get_max_gain(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Decode a sv_sensor_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_sensor_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_sensor_parameters_decode(const mavlink_message_t* msg, mavlink_sv_sensor_parameters_t* sv_sensor_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_sensor_parameters->min_exposure = mavlink_msg_sv_sensor_parameters_get_min_exposure(msg);
    sv_sensor_parameters->max_exposure = mavlink_msg_sv_sensor_parameters_get_max_exposure(msg);
    sv_sensor_parameters->min_gain = mavlink_msg_sv_sensor_parameters_get_min_gain(msg);
    sv_sensor_parameters->max_gain = mavlink_msg_sv_sensor_parameters_get_max_gain(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN;
        memset(sv_sensor_parameters, 0, MAVLINK_MSG_ID_SV_SENSOR_PARAMETERS_LEN);
    memcpy(sv_sensor_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
