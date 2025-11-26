#pragma once
// MESSAGE CAM_SENSOR_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS 40016


typedef struct __mavlink_cam_sensor_parameters_t {
 uint32_t min_exposure; /*<  
        Minimum exposure value used by the automatic exposure controller (typically (1,40000]).
      */
 uint32_t max_exposure; /*<  
        Maximum exposure value used by the automatic exposure controller (typically (1,40000]).
      */
 uint32_t min_gain; /*<  
        Minimum gain value used by the automatic gain controller (typically (1000,51000]).
      */
 uint32_t max_gain; /*<  
        Maximum gain value used by the automatic gain controller (typically (1000,51000]).
      */
 float target_brightness; /*<  
        Target scene brightness for the automatic exposure system, typically in range (-12,12].
      */
} mavlink_cam_sensor_parameters_t;

#define MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN 20
#define MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN 20
#define MAVLINK_MSG_ID_40016_LEN 20
#define MAVLINK_MSG_ID_40016_MIN_LEN 20

#define MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC 174
#define MAVLINK_MSG_ID_40016_CRC 174



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_SENSOR_PARAMETERS { \
    40016, \
    "CAM_SENSOR_PARAMETERS", \
    5, \
    {  { "min_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cam_sensor_parameters_t, min_exposure) }, \
         { "max_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_cam_sensor_parameters_t, max_exposure) }, \
         { "min_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_cam_sensor_parameters_t, min_gain) }, \
         { "max_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_cam_sensor_parameters_t, max_gain) }, \
         { "target_brightness", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cam_sensor_parameters_t, target_brightness) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_SENSOR_PARAMETERS { \
    "CAM_SENSOR_PARAMETERS", \
    5, \
    {  { "min_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_cam_sensor_parameters_t, min_exposure) }, \
         { "max_exposure", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_cam_sensor_parameters_t, max_exposure) }, \
         { "min_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_cam_sensor_parameters_t, min_gain) }, \
         { "max_gain", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_cam_sensor_parameters_t, max_gain) }, \
         { "target_brightness", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cam_sensor_parameters_t, target_brightness) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_sensor_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param min_exposure  
        Minimum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param max_exposure  
        Maximum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param min_gain  
        Minimum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param max_gain  
        Maximum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param target_brightness  
        Target scene brightness for the automatic exposure system, typically in range (-12,12].
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_sensor_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain, float target_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);
    _mav_put_float(buf, 16, target_brightness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#else
    mavlink_cam_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;
    packet.target_brightness = target_brightness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_sensor_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param min_exposure  
        Minimum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param max_exposure  
        Maximum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param min_gain  
        Minimum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param max_gain  
        Maximum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param target_brightness  
        Target scene brightness for the automatic exposure system, typically in range (-12,12].
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_sensor_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain, float target_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);
    _mav_put_float(buf, 16, target_brightness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#else
    mavlink_cam_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;
    packet.target_brightness = target_brightness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_sensor_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param min_exposure  
        Minimum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param max_exposure  
        Maximum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param min_gain  
        Minimum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param max_gain  
        Maximum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param target_brightness  
        Target scene brightness for the automatic exposure system, typically in range (-12,12].
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_sensor_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t min_exposure,uint32_t max_exposure,uint32_t min_gain,uint32_t max_gain,float target_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);
    _mav_put_float(buf, 16, target_brightness);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#else
    mavlink_cam_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;
    packet.target_brightness = target_brightness;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_sensor_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_sensor_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_sensor_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_sensor_parameters_t* cam_sensor_parameters)
{
    return mavlink_msg_cam_sensor_parameters_pack(system_id, component_id, msg, cam_sensor_parameters->min_exposure, cam_sensor_parameters->max_exposure, cam_sensor_parameters->min_gain, cam_sensor_parameters->max_gain, cam_sensor_parameters->target_brightness);
}

/**
 * @brief Encode a cam_sensor_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_sensor_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_sensor_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_sensor_parameters_t* cam_sensor_parameters)
{
    return mavlink_msg_cam_sensor_parameters_pack_chan(system_id, component_id, chan, msg, cam_sensor_parameters->min_exposure, cam_sensor_parameters->max_exposure, cam_sensor_parameters->min_gain, cam_sensor_parameters->max_gain, cam_sensor_parameters->target_brightness);
}

/**
 * @brief Encode a cam_sensor_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_sensor_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_sensor_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_sensor_parameters_t* cam_sensor_parameters)
{
    return mavlink_msg_cam_sensor_parameters_pack_status(system_id, component_id, _status, msg,  cam_sensor_parameters->min_exposure, cam_sensor_parameters->max_exposure, cam_sensor_parameters->min_gain, cam_sensor_parameters->max_gain, cam_sensor_parameters->target_brightness);
}

/**
 * @brief Send a cam_sensor_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param min_exposure  
        Minimum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param max_exposure  
        Maximum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 * @param min_gain  
        Minimum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param max_gain  
        Maximum gain value used by the automatic gain controller (typically (1000,51000]).
      
 * @param target_brightness  
        Target scene brightness for the automatic exposure system, typically in range (-12,12].
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_sensor_parameters_send(mavlink_channel_t chan, uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain, float target_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN];
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);
    _mav_put_float(buf, 16, target_brightness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
#else
    mavlink_cam_sensor_parameters_t packet;
    packet.min_exposure = min_exposure;
    packet.max_exposure = max_exposure;
    packet.min_gain = min_gain;
    packet.max_gain = max_gain;
    packet.target_brightness = target_brightness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_sensor_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_sensor_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_sensor_parameters_t* cam_sensor_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_sensor_parameters_send(chan, cam_sensor_parameters->min_exposure, cam_sensor_parameters->max_exposure, cam_sensor_parameters->min_gain, cam_sensor_parameters->max_gain, cam_sensor_parameters->target_brightness);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS, (const char *)cam_sensor_parameters, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_sensor_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t min_exposure, uint32_t max_exposure, uint32_t min_gain, uint32_t max_gain, float target_brightness)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, min_exposure);
    _mav_put_uint32_t(buf, 4, max_exposure);
    _mav_put_uint32_t(buf, 8, min_gain);
    _mav_put_uint32_t(buf, 12, max_gain);
    _mav_put_float(buf, 16, target_brightness);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
#else
    mavlink_cam_sensor_parameters_t *packet = (mavlink_cam_sensor_parameters_t *)msgbuf;
    packet->min_exposure = min_exposure;
    packet->max_exposure = max_exposure;
    packet->min_gain = min_gain;
    packet->max_gain = max_gain;
    packet->target_brightness = target_brightness;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_SENSOR_PARAMETERS UNPACKING


/**
 * @brief Get field min_exposure from cam_sensor_parameters message
 *
 * @return  
        Minimum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 */
static inline uint32_t mavlink_msg_cam_sensor_parameters_get_min_exposure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field max_exposure from cam_sensor_parameters message
 *
 * @return  
        Maximum exposure value used by the automatic exposure controller (typically (1,40000]).
      
 */
static inline uint32_t mavlink_msg_cam_sensor_parameters_get_max_exposure(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field min_gain from cam_sensor_parameters message
 *
 * @return  
        Minimum gain value used by the automatic gain controller (typically (1000,51000]).
      
 */
static inline uint32_t mavlink_msg_cam_sensor_parameters_get_min_gain(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field max_gain from cam_sensor_parameters message
 *
 * @return  
        Maximum gain value used by the automatic gain controller (typically (1000,51000]).
      
 */
static inline uint32_t mavlink_msg_cam_sensor_parameters_get_max_gain(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field target_brightness from cam_sensor_parameters message
 *
 * @return  
        Target scene brightness for the automatic exposure system, typically in range (-12,12].
      
 */
static inline float mavlink_msg_cam_sensor_parameters_get_target_brightness(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a cam_sensor_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_sensor_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_sensor_parameters_decode(const mavlink_message_t* msg, mavlink_cam_sensor_parameters_t* cam_sensor_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_sensor_parameters->min_exposure = mavlink_msg_cam_sensor_parameters_get_min_exposure(msg);
    cam_sensor_parameters->max_exposure = mavlink_msg_cam_sensor_parameters_get_max_exposure(msg);
    cam_sensor_parameters->min_gain = mavlink_msg_cam_sensor_parameters_get_min_gain(msg);
    cam_sensor_parameters->max_gain = mavlink_msg_cam_sensor_parameters_get_max_gain(msg);
    cam_sensor_parameters->target_brightness = mavlink_msg_cam_sensor_parameters_get_target_brightness(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN;
        memset(cam_sensor_parameters, 0, MAVLINK_MSG_ID_CAM_SENSOR_PARAMETERS_LEN);
    memcpy(cam_sensor_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
