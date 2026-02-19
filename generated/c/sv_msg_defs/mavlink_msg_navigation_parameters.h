#pragma once
// MESSAGE NAVIGATION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_NAVIGATION_PARAMETERS 40014


typedef struct __mavlink_navigation_parameters_t {
 float altitude; /*<  Navigation altitude in meters.*/
} mavlink_navigation_parameters_t;

#define MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN 4
#define MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN 4
#define MAVLINK_MSG_ID_40014_LEN 4
#define MAVLINK_MSG_ID_40014_MIN_LEN 4

#define MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC 165
#define MAVLINK_MSG_ID_40014_CRC 165



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NAVIGATION_PARAMETERS { \
    40014, \
    "NAVIGATION_PARAMETERS", \
    1, \
    {  { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_navigation_parameters_t, altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NAVIGATION_PARAMETERS { \
    "NAVIGATION_PARAMETERS", \
    1, \
    {  { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_navigation_parameters_t, altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a navigation_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param altitude  Navigation altitude in meters.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_navigation_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#else
    mavlink_navigation_parameters_t packet;
    packet.altitude = altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NAVIGATION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
}

/**
 * @brief Pack a navigation_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param altitude  Navigation altitude in meters.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_navigation_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#else
    mavlink_navigation_parameters_t packet;
    packet.altitude = altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NAVIGATION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a navigation_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param altitude  Navigation altitude in meters.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_navigation_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, altitude);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#else
    mavlink_navigation_parameters_t packet;
    packet.altitude = altitude;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NAVIGATION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
}

/**
 * @brief Encode a navigation_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param navigation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_navigation_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_navigation_parameters_t* navigation_parameters)
{
    return mavlink_msg_navigation_parameters_pack(system_id, component_id, msg, navigation_parameters->altitude);
}

/**
 * @brief Encode a navigation_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param navigation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_navigation_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_navigation_parameters_t* navigation_parameters)
{
    return mavlink_msg_navigation_parameters_pack_chan(system_id, component_id, chan, msg, navigation_parameters->altitude);
}

/**
 * @brief Encode a navigation_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param navigation_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_navigation_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_navigation_parameters_t* navigation_parameters)
{
    return mavlink_msg_navigation_parameters_pack_status(system_id, component_id, _status, msg,  navigation_parameters->altitude);
}

/**
 * @brief Send a navigation_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param altitude  Navigation altitude in meters.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_navigation_parameters_send(mavlink_channel_t chan, float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, altitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS, buf, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
#else
    mavlink_navigation_parameters_t packet;
    packet.altitude = altitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a navigation_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_navigation_parameters_send_struct(mavlink_channel_t chan, const mavlink_navigation_parameters_t* navigation_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_navigation_parameters_send(chan, navigation_parameters->altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS, (const char *)navigation_parameters, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_navigation_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, altitude);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS, buf, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
#else
    mavlink_navigation_parameters_t *packet = (mavlink_navigation_parameters_t *)msgbuf;
    packet->altitude = altitude;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE NAVIGATION_PARAMETERS UNPACKING


/**
 * @brief Get field altitude from navigation_parameters message
 *
 * @return  Navigation altitude in meters.
 */
static inline float mavlink_msg_navigation_parameters_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a navigation_parameters message into a struct
 *
 * @param msg The message to decode
 * @param navigation_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_navigation_parameters_decode(const mavlink_message_t* msg, mavlink_navigation_parameters_t* navigation_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    navigation_parameters->altitude = mavlink_msg_navigation_parameters_get_altitude(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN;
        memset(navigation_parameters, 0, MAVLINK_MSG_ID_NAVIGATION_PARAMETERS_LEN);
    memcpy(navigation_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
