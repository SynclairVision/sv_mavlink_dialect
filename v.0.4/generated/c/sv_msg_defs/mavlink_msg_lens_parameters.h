#pragma once
// MESSAGE LENS_PARAMETERS PACKING

#define MAVLINK_MSG_ID_LENS_PARAMETERS 40007


typedef struct __mavlink_lens_parameters_t {
 uint8_t lens_id; /*<  
        Lens identifier to select which calibration / lens parameters to use.
      */
} mavlink_lens_parameters_t;

#define MAVLINK_MSG_ID_LENS_PARAMETERS_LEN 1
#define MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN 1
#define MAVLINK_MSG_ID_40007_LEN 1
#define MAVLINK_MSG_ID_40007_MIN_LEN 1

#define MAVLINK_MSG_ID_LENS_PARAMETERS_CRC 126
#define MAVLINK_MSG_ID_40007_CRC 126



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LENS_PARAMETERS { \
    40007, \
    "LENS_PARAMETERS", \
    1, \
    {  { "lens_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_lens_parameters_t, lens_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LENS_PARAMETERS { \
    "LENS_PARAMETERS", \
    1, \
    {  { "lens_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_lens_parameters_t, lens_id) }, \
         } \
}
#endif

/**
 * @brief Pack a lens_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param lens_id  
        Lens identifier to select which calibration / lens parameters to use.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lens_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t lens_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LENS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, lens_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#else
    mavlink_lens_parameters_t packet;
    packet.lens_id = lens_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LENS_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
}

/**
 * @brief Pack a lens_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param lens_id  
        Lens identifier to select which calibration / lens parameters to use.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lens_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t lens_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LENS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, lens_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#else
    mavlink_lens_parameters_t packet;
    packet.lens_id = lens_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LENS_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a lens_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lens_id  
        Lens identifier to select which calibration / lens parameters to use.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lens_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t lens_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LENS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, lens_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#else
    mavlink_lens_parameters_t packet;
    packet.lens_id = lens_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LENS_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
}

/**
 * @brief Encode a lens_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param lens_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lens_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_lens_parameters_t* lens_parameters)
{
    return mavlink_msg_lens_parameters_pack(system_id, component_id, msg, lens_parameters->lens_id);
}

/**
 * @brief Encode a lens_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lens_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lens_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_lens_parameters_t* lens_parameters)
{
    return mavlink_msg_lens_parameters_pack_chan(system_id, component_id, chan, msg, lens_parameters->lens_id);
}

/**
 * @brief Encode a lens_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param lens_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lens_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_lens_parameters_t* lens_parameters)
{
    return mavlink_msg_lens_parameters_pack_status(system_id, component_id, _status, msg,  lens_parameters->lens_id);
}

/**
 * @brief Send a lens_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param lens_id  
        Lens identifier to select which calibration / lens parameters to use.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_lens_parameters_send(mavlink_channel_t chan, uint8_t lens_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LENS_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, lens_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LENS_PARAMETERS, buf, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
#else
    mavlink_lens_parameters_t packet;
    packet.lens_id = lens_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LENS_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a lens_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_lens_parameters_send_struct(mavlink_channel_t chan, const mavlink_lens_parameters_t* lens_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_lens_parameters_send(chan, lens_parameters->lens_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LENS_PARAMETERS, (const char *)lens_parameters, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LENS_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_lens_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t lens_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, lens_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LENS_PARAMETERS, buf, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
#else
    mavlink_lens_parameters_t *packet = (mavlink_lens_parameters_t *)msgbuf;
    packet->lens_id = lens_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LENS_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_LENS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN, MAVLINK_MSG_ID_LENS_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE LENS_PARAMETERS UNPACKING


/**
 * @brief Get field lens_id from lens_parameters message
 *
 * @return  
        Lens identifier to select which calibration / lens parameters to use.
      
 */
static inline uint8_t mavlink_msg_lens_parameters_get_lens_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Decode a lens_parameters message into a struct
 *
 * @param msg The message to decode
 * @param lens_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_lens_parameters_decode(const mavlink_message_t* msg, mavlink_lens_parameters_t* lens_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    lens_parameters->lens_id = mavlink_msg_lens_parameters_get_lens_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LENS_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_LENS_PARAMETERS_LEN;
        memset(lens_parameters, 0, MAVLINK_MSG_ID_LENS_PARAMETERS_LEN);
    memcpy(lens_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
