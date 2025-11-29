#pragma once
// MESSAGE AI_PARAMETERS PACKING

#define MAVLINK_MSG_ID_AI_PARAMETERS 40001


typedef struct __mavlink_ai_parameters_t {
 uint8_t run_ai; /*<  1 if AI processing is enabled, 0 otherwise.*/
 char crop_model_name[16]; /*<  Name of the crop (detection) model.*/
 char var_model_name[16]; /*<  Name of the verification / tracking model.*/
} mavlink_ai_parameters_t;

#define MAVLINK_MSG_ID_AI_PARAMETERS_LEN 33
#define MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN 33
#define MAVLINK_MSG_ID_40001_LEN 33
#define MAVLINK_MSG_ID_40001_MIN_LEN 33

#define MAVLINK_MSG_ID_AI_PARAMETERS_CRC 48
#define MAVLINK_MSG_ID_40001_CRC 48

#define MAVLINK_MSG_AI_PARAMETERS_FIELD_CROP_MODEL_NAME_LEN 16
#define MAVLINK_MSG_AI_PARAMETERS_FIELD_VAR_MODEL_NAME_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AI_PARAMETERS { \
    40001, \
    "AI_PARAMETERS", \
    3, \
    {  { "run_ai", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ai_parameters_t, run_ai) }, \
         { "crop_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 1, offsetof(mavlink_ai_parameters_t, crop_model_name) }, \
         { "var_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 17, offsetof(mavlink_ai_parameters_t, var_model_name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AI_PARAMETERS { \
    "AI_PARAMETERS", \
    3, \
    {  { "run_ai", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ai_parameters_t, run_ai) }, \
         { "crop_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 1, offsetof(mavlink_ai_parameters_t, crop_model_name) }, \
         { "var_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 17, offsetof(mavlink_ai_parameters_t, var_model_name) }, \
         } \
}
#endif

/**
 * @brief Pack a ai_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param run_ai  1 if AI processing is enabled, 0 otherwise.
 * @param crop_model_name  Name of the crop (detection) model.
 * @param var_model_name  Name of the verification / tracking model.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, run_ai);
    _mav_put_char_array(buf, 1, crop_model_name, 16);
    _mav_put_char_array(buf, 17, var_model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#else
    mavlink_ai_parameters_t packet;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
}

/**
 * @brief Pack a ai_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param run_ai  1 if AI processing is enabled, 0 otherwise.
 * @param crop_model_name  Name of the crop (detection) model.
 * @param var_model_name  Name of the verification / tracking model.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, run_ai);
    _mav_put_char_array(buf, 1, crop_model_name, 16);
    _mav_put_char_array(buf, 17, var_model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#else
    mavlink_ai_parameters_t packet;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a ai_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param run_ai  1 if AI processing is enabled, 0 otherwise.
 * @param crop_model_name  Name of the crop (detection) model.
 * @param var_model_name  Name of the verification / tracking model.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ai_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t run_ai,const char *crop_model_name,const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, run_ai);
    _mav_put_char_array(buf, 1, crop_model_name, 16);
    _mav_put_char_array(buf, 17, var_model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#else
    mavlink_ai_parameters_t packet;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AI_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
}

/**
 * @brief Encode a ai_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ai_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ai_parameters_t* ai_parameters)
{
    return mavlink_msg_ai_parameters_pack(system_id, component_id, msg, ai_parameters->run_ai, ai_parameters->crop_model_name, ai_parameters->var_model_name);
}

/**
 * @brief Encode a ai_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ai_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ai_parameters_t* ai_parameters)
{
    return mavlink_msg_ai_parameters_pack_chan(system_id, component_id, chan, msg, ai_parameters->run_ai, ai_parameters->crop_model_name, ai_parameters->var_model_name);
}

/**
 * @brief Encode a ai_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ai_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ai_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ai_parameters_t* ai_parameters)
{
    return mavlink_msg_ai_parameters_pack_status(system_id, component_id, _status, msg,  ai_parameters->run_ai, ai_parameters->crop_model_name, ai_parameters->var_model_name);
}

/**
 * @brief Send a ai_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param run_ai  1 if AI processing is enabled, 0 otherwise.
 * @param crop_model_name  Name of the crop (detection) model.
 * @param var_model_name  Name of the verification / tracking model.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ai_parameters_send(mavlink_channel_t chan, uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AI_PARAMETERS_LEN];
    _mav_put_uint8_t(buf, 0, run_ai);
    _mav_put_char_array(buf, 1, crop_model_name, 16);
    _mav_put_char_array(buf, 17, var_model_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_PARAMETERS, buf, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
#else
    mavlink_ai_parameters_t packet;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a ai_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ai_parameters_send_struct(mavlink_channel_t chan, const mavlink_ai_parameters_t* ai_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ai_parameters_send(chan, ai_parameters->run_ai, ai_parameters->crop_model_name, ai_parameters->var_model_name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_PARAMETERS, (const char *)ai_parameters, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AI_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ai_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, run_ai);
    _mav_put_char_array(buf, 1, crop_model_name, 16);
    _mav_put_char_array(buf, 17, var_model_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_PARAMETERS, buf, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
#else
    mavlink_ai_parameters_t *packet = (mavlink_ai_parameters_t *)msgbuf;
    packet->run_ai = run_ai;
    mav_array_memcpy(packet->crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet->var_model_name, var_model_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AI_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_AI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_LEN, MAVLINK_MSG_ID_AI_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE AI_PARAMETERS UNPACKING


/**
 * @brief Get field run_ai from ai_parameters message
 *
 * @return  1 if AI processing is enabled, 0 otherwise.
 */
static inline uint8_t mavlink_msg_ai_parameters_get_run_ai(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field crop_model_name from ai_parameters message
 *
 * @return  Name of the crop (detection) model.
 */
static inline uint16_t mavlink_msg_ai_parameters_get_crop_model_name(const mavlink_message_t* msg, char *crop_model_name)
{
    return _MAV_RETURN_char_array(msg, crop_model_name, 16,  1);
}

/**
 * @brief Get field var_model_name from ai_parameters message
 *
 * @return  Name of the verification / tracking model.
 */
static inline uint16_t mavlink_msg_ai_parameters_get_var_model_name(const mavlink_message_t* msg, char *var_model_name)
{
    return _MAV_RETURN_char_array(msg, var_model_name, 16,  17);
}

/**
 * @brief Decode a ai_parameters message into a struct
 *
 * @param msg The message to decode
 * @param ai_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_ai_parameters_decode(const mavlink_message_t* msg, mavlink_ai_parameters_t* ai_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ai_parameters->run_ai = mavlink_msg_ai_parameters_get_run_ai(msg);
    mavlink_msg_ai_parameters_get_crop_model_name(msg, ai_parameters->crop_model_name);
    mavlink_msg_ai_parameters_get_var_model_name(msg, ai_parameters->var_model_name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AI_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_AI_PARAMETERS_LEN;
        memset(ai_parameters, 0, MAVLINK_MSG_ID_AI_PARAMETERS_LEN);
    memcpy(ai_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
