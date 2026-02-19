#pragma once
// MESSAGE MODEL_PARAMETERS PACKING

#define MAVLINK_MSG_ID_MODEL_PARAMETERS 40002


typedef struct __mavlink_model_parameters_t {
 char model_name[16]; /*<  Model identifier used by AI settings.*/
} mavlink_model_parameters_t;

#define MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN 16
#define MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN 16
#define MAVLINK_MSG_ID_40002_LEN 16
#define MAVLINK_MSG_ID_40002_MIN_LEN 16

#define MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC 109
#define MAVLINK_MSG_ID_40002_CRC 109

#define MAVLINK_MSG_MODEL_PARAMETERS_FIELD_MODEL_NAME_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MODEL_PARAMETERS { \
    40002, \
    "MODEL_PARAMETERS", \
    1, \
    {  { "model_name", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_model_parameters_t, model_name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MODEL_PARAMETERS { \
    "MODEL_PARAMETERS", \
    1, \
    {  { "model_name", NULL, MAVLINK_TYPE_CHAR, 16, 0, offsetof(mavlink_model_parameters_t, model_name) }, \
         } \
}
#endif

/**
 * @brief Pack a model_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param model_name  Model identifier used by AI settings.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_model_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN];

    _mav_put_char_array(buf, 0, model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#else
    mavlink_model_parameters_t packet;

    mav_array_memcpy(packet.model_name, model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MODEL_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
}

/**
 * @brief Pack a model_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param model_name  Model identifier used by AI settings.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_model_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN];

    _mav_put_char_array(buf, 0, model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#else
    mavlink_model_parameters_t packet;

    mav_array_memcpy(packet.model_name, model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MODEL_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a model_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param model_name  Model identifier used by AI settings.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_model_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN];

    _mav_put_char_array(buf, 0, model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#else
    mavlink_model_parameters_t packet;

    mav_array_memcpy(packet.model_name, model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MODEL_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
}

/**
 * @brief Encode a model_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param model_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_model_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_model_parameters_t* model_parameters)
{
    return mavlink_msg_model_parameters_pack(system_id, component_id, msg, model_parameters->model_name);
}

/**
 * @brief Encode a model_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param model_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_model_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_model_parameters_t* model_parameters)
{
    return mavlink_msg_model_parameters_pack_chan(system_id, component_id, chan, msg, model_parameters->model_name);
}

/**
 * @brief Encode a model_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param model_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_model_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_model_parameters_t* model_parameters)
{
    return mavlink_msg_model_parameters_pack_status(system_id, component_id, _status, msg,  model_parameters->model_name);
}

/**
 * @brief Send a model_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param model_name  Model identifier used by AI settings.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_model_parameters_send(mavlink_channel_t chan, const char *model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN];

    _mav_put_char_array(buf, 0, model_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MODEL_PARAMETERS, buf, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
#else
    mavlink_model_parameters_t packet;

    mav_array_memcpy(packet.model_name, model_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MODEL_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a model_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_model_parameters_send_struct(mavlink_channel_t chan, const mavlink_model_parameters_t* model_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_model_parameters_send(chan, model_parameters->model_name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MODEL_PARAMETERS, (const char *)model_parameters, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_model_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, model_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MODEL_PARAMETERS, buf, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
#else
    mavlink_model_parameters_t *packet = (mavlink_model_parameters_t *)msgbuf;

    mav_array_memcpy(packet->model_name, model_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MODEL_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_MODEL_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN, MAVLINK_MSG_ID_MODEL_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE MODEL_PARAMETERS UNPACKING


/**
 * @brief Get field model_name from model_parameters message
 *
 * @return  Model identifier used by AI settings.
 */
static inline uint16_t mavlink_msg_model_parameters_get_model_name(const mavlink_message_t* msg, char *model_name)
{
    return _MAV_RETURN_char_array(msg, model_name, 16,  0);
}

/**
 * @brief Decode a model_parameters message into a struct
 *
 * @param msg The message to decode
 * @param model_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_model_parameters_decode(const mavlink_message_t* msg, mavlink_model_parameters_t* model_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_model_parameters_get_model_name(msg, model_parameters->model_name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN;
        memset(model_parameters, 0, MAVLINK_MSG_ID_MODEL_PARAMETERS_LEN);
    memcpy(model_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
