#pragma once
// MESSAGE GENERAL_SETTINGS_PARAMETERS PACKING

#define MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS 40001


typedef struct __mavlink_general_settings_parameters_t {
 uint16_t camera_width; /*<  
        Camera sensor width in pixels. Must match a supported sensor resolution.
      */
 uint16_t camera_height; /*<  
        Camera sensor height in pixels. Must match a supported sensor resolution.
      */
 uint16_t roi_width; /*<  
        Region-of-interest width in pixels. Must be ≤ camera_width.
      */
 uint16_t roi_height; /*<  
        Region-of-interest height in pixels. Must be ≤ camera_height.
      */
 uint8_t camera_fps; /*<  
        Camera frame rate in FPS. Typical valid range is [1,30].
      */
 uint8_t run_ai; /*<  
        Flag to enable or disable AI processing: 0=disabled, 1=enabled.
      */
 char crop_model_name[16]; /*<  
        Name of the model used for scanning / detection. Returned on GET; typically selected using MODEL_PARAMETERS.
      */
 char var_model_name[16]; /*<  
        Name of the model used for tracking. Returned on GET; typically selected using MODEL_PARAMETERS.
      */
} mavlink_general_settings_parameters_t;

#define MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN 42
#define MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN 42
#define MAVLINK_MSG_ID_40001_LEN 42
#define MAVLINK_MSG_ID_40001_MIN_LEN 42

#define MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC 239
#define MAVLINK_MSG_ID_40001_CRC 239

#define MAVLINK_MSG_GENERAL_SETTINGS_PARAMETERS_FIELD_CROP_MODEL_NAME_LEN 16
#define MAVLINK_MSG_GENERAL_SETTINGS_PARAMETERS_FIELD_VAR_MODEL_NAME_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GENERAL_SETTINGS_PARAMETERS { \
    40001, \
    "GENERAL_SETTINGS_PARAMETERS", \
    8, \
    {  { "camera_width", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_general_settings_parameters_t, camera_width) }, \
         { "camera_height", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_general_settings_parameters_t, camera_height) }, \
         { "roi_width", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_general_settings_parameters_t, roi_width) }, \
         { "roi_height", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_general_settings_parameters_t, roi_height) }, \
         { "camera_fps", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_general_settings_parameters_t, camera_fps) }, \
         { "run_ai", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_general_settings_parameters_t, run_ai) }, \
         { "crop_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 10, offsetof(mavlink_general_settings_parameters_t, crop_model_name) }, \
         { "var_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 26, offsetof(mavlink_general_settings_parameters_t, var_model_name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GENERAL_SETTINGS_PARAMETERS { \
    "GENERAL_SETTINGS_PARAMETERS", \
    8, \
    {  { "camera_width", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_general_settings_parameters_t, camera_width) }, \
         { "camera_height", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_general_settings_parameters_t, camera_height) }, \
         { "roi_width", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_general_settings_parameters_t, roi_width) }, \
         { "roi_height", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_general_settings_parameters_t, roi_height) }, \
         { "camera_fps", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_general_settings_parameters_t, camera_fps) }, \
         { "run_ai", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_general_settings_parameters_t, run_ai) }, \
         { "crop_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 10, offsetof(mavlink_general_settings_parameters_t, crop_model_name) }, \
         { "var_model_name", NULL, MAVLINK_TYPE_CHAR, 16, 26, offsetof(mavlink_general_settings_parameters_t, var_model_name) }, \
         } \
}
#endif

/**
 * @brief Pack a general_settings_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param camera_width  
        Camera sensor width in pixels. Must match a supported sensor resolution.
      
 * @param camera_height  
        Camera sensor height in pixels. Must match a supported sensor resolution.
      
 * @param roi_width  
        Region-of-interest width in pixels. Must be ≤ camera_width.
      
 * @param roi_height  
        Region-of-interest height in pixels. Must be ≤ camera_height.
      
 * @param camera_fps  
        Camera frame rate in FPS. Typical valid range is [1,30].
      
 * @param run_ai  
        Flag to enable or disable AI processing: 0=disabled, 1=enabled.
      
 * @param crop_model_name  
        Name of the model used for scanning / detection. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @param var_model_name  
        Name of the model used for tracking. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general_settings_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t camera_width, uint16_t camera_height, uint16_t roi_width, uint16_t roi_height, uint8_t camera_fps, uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, camera_width);
    _mav_put_uint16_t(buf, 2, camera_height);
    _mav_put_uint16_t(buf, 4, roi_width);
    _mav_put_uint16_t(buf, 6, roi_height);
    _mav_put_uint8_t(buf, 8, camera_fps);
    _mav_put_uint8_t(buf, 9, run_ai);
    _mav_put_char_array(buf, 10, crop_model_name, 16);
    _mav_put_char_array(buf, 26, var_model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#else
    mavlink_general_settings_parameters_t packet;
    packet.camera_width = camera_width;
    packet.camera_height = camera_height;
    packet.roi_width = roi_width;
    packet.roi_height = roi_height;
    packet.camera_fps = camera_fps;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
}

/**
 * @brief Pack a general_settings_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param camera_width  
        Camera sensor width in pixels. Must match a supported sensor resolution.
      
 * @param camera_height  
        Camera sensor height in pixels. Must match a supported sensor resolution.
      
 * @param roi_width  
        Region-of-interest width in pixels. Must be ≤ camera_width.
      
 * @param roi_height  
        Region-of-interest height in pixels. Must be ≤ camera_height.
      
 * @param camera_fps  
        Camera frame rate in FPS. Typical valid range is [1,30].
      
 * @param run_ai  
        Flag to enable or disable AI processing: 0=disabled, 1=enabled.
      
 * @param crop_model_name  
        Name of the model used for scanning / detection. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @param var_model_name  
        Name of the model used for tracking. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general_settings_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t camera_width, uint16_t camera_height, uint16_t roi_width, uint16_t roi_height, uint8_t camera_fps, uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, camera_width);
    _mav_put_uint16_t(buf, 2, camera_height);
    _mav_put_uint16_t(buf, 4, roi_width);
    _mav_put_uint16_t(buf, 6, roi_height);
    _mav_put_uint8_t(buf, 8, camera_fps);
    _mav_put_uint8_t(buf, 9, run_ai);
    _mav_put_char_array(buf, 10, crop_model_name, 16);
    _mav_put_char_array(buf, 26, var_model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#else
    mavlink_general_settings_parameters_t packet;
    packet.camera_width = camera_width;
    packet.camera_height = camera_height;
    packet.roi_width = roi_width;
    packet.roi_height = roi_height;
    packet.camera_fps = camera_fps;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a general_settings_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param camera_width  
        Camera sensor width in pixels. Must match a supported sensor resolution.
      
 * @param camera_height  
        Camera sensor height in pixels. Must match a supported sensor resolution.
      
 * @param roi_width  
        Region-of-interest width in pixels. Must be ≤ camera_width.
      
 * @param roi_height  
        Region-of-interest height in pixels. Must be ≤ camera_height.
      
 * @param camera_fps  
        Camera frame rate in FPS. Typical valid range is [1,30].
      
 * @param run_ai  
        Flag to enable or disable AI processing: 0=disabled, 1=enabled.
      
 * @param crop_model_name  
        Name of the model used for scanning / detection. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @param var_model_name  
        Name of the model used for tracking. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_general_settings_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t camera_width,uint16_t camera_height,uint16_t roi_width,uint16_t roi_height,uint8_t camera_fps,uint8_t run_ai,const char *crop_model_name,const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, camera_width);
    _mav_put_uint16_t(buf, 2, camera_height);
    _mav_put_uint16_t(buf, 4, roi_width);
    _mav_put_uint16_t(buf, 6, roi_height);
    _mav_put_uint8_t(buf, 8, camera_fps);
    _mav_put_uint8_t(buf, 9, run_ai);
    _mav_put_char_array(buf, 10, crop_model_name, 16);
    _mav_put_char_array(buf, 26, var_model_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#else
    mavlink_general_settings_parameters_t packet;
    packet.camera_width = camera_width;
    packet.camera_height = camera_height;
    packet.roi_width = roi_width;
    packet.roi_height = roi_height;
    packet.camera_fps = camera_fps;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
}

/**
 * @brief Encode a general_settings_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param general_settings_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general_settings_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_general_settings_parameters_t* general_settings_parameters)
{
    return mavlink_msg_general_settings_parameters_pack(system_id, component_id, msg, general_settings_parameters->camera_width, general_settings_parameters->camera_height, general_settings_parameters->roi_width, general_settings_parameters->roi_height, general_settings_parameters->camera_fps, general_settings_parameters->run_ai, general_settings_parameters->crop_model_name, general_settings_parameters->var_model_name);
}

/**
 * @brief Encode a general_settings_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param general_settings_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general_settings_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_general_settings_parameters_t* general_settings_parameters)
{
    return mavlink_msg_general_settings_parameters_pack_chan(system_id, component_id, chan, msg, general_settings_parameters->camera_width, general_settings_parameters->camera_height, general_settings_parameters->roi_width, general_settings_parameters->roi_height, general_settings_parameters->camera_fps, general_settings_parameters->run_ai, general_settings_parameters->crop_model_name, general_settings_parameters->var_model_name);
}

/**
 * @brief Encode a general_settings_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param general_settings_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_general_settings_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_general_settings_parameters_t* general_settings_parameters)
{
    return mavlink_msg_general_settings_parameters_pack_status(system_id, component_id, _status, msg,  general_settings_parameters->camera_width, general_settings_parameters->camera_height, general_settings_parameters->roi_width, general_settings_parameters->roi_height, general_settings_parameters->camera_fps, general_settings_parameters->run_ai, general_settings_parameters->crop_model_name, general_settings_parameters->var_model_name);
}

/**
 * @brief Send a general_settings_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param camera_width  
        Camera sensor width in pixels. Must match a supported sensor resolution.
      
 * @param camera_height  
        Camera sensor height in pixels. Must match a supported sensor resolution.
      
 * @param roi_width  
        Region-of-interest width in pixels. Must be ≤ camera_width.
      
 * @param roi_height  
        Region-of-interest height in pixels. Must be ≤ camera_height.
      
 * @param camera_fps  
        Camera frame rate in FPS. Typical valid range is [1,30].
      
 * @param run_ai  
        Flag to enable or disable AI processing: 0=disabled, 1=enabled.
      
 * @param crop_model_name  
        Name of the model used for scanning / detection. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 * @param var_model_name  
        Name of the model used for tracking. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_general_settings_parameters_send(mavlink_channel_t chan, uint16_t camera_width, uint16_t camera_height, uint16_t roi_width, uint16_t roi_height, uint8_t camera_fps, uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, camera_width);
    _mav_put_uint16_t(buf, 2, camera_height);
    _mav_put_uint16_t(buf, 4, roi_width);
    _mav_put_uint16_t(buf, 6, roi_height);
    _mav_put_uint8_t(buf, 8, camera_fps);
    _mav_put_uint8_t(buf, 9, run_ai);
    _mav_put_char_array(buf, 10, crop_model_name, 16);
    _mav_put_char_array(buf, 26, var_model_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS, buf, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
#else
    mavlink_general_settings_parameters_t packet;
    packet.camera_width = camera_width;
    packet.camera_height = camera_height;
    packet.roi_width = roi_width;
    packet.roi_height = roi_height;
    packet.camera_fps = camera_fps;
    packet.run_ai = run_ai;
    mav_array_memcpy(packet.crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet.var_model_name, var_model_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a general_settings_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_general_settings_parameters_send_struct(mavlink_channel_t chan, const mavlink_general_settings_parameters_t* general_settings_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_general_settings_parameters_send(chan, general_settings_parameters->camera_width, general_settings_parameters->camera_height, general_settings_parameters->roi_width, general_settings_parameters->roi_height, general_settings_parameters->camera_fps, general_settings_parameters->run_ai, general_settings_parameters->crop_model_name, general_settings_parameters->var_model_name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS, (const char *)general_settings_parameters, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_general_settings_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t camera_width, uint16_t camera_height, uint16_t roi_width, uint16_t roi_height, uint8_t camera_fps, uint8_t run_ai, const char *crop_model_name, const char *var_model_name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, camera_width);
    _mav_put_uint16_t(buf, 2, camera_height);
    _mav_put_uint16_t(buf, 4, roi_width);
    _mav_put_uint16_t(buf, 6, roi_height);
    _mav_put_uint8_t(buf, 8, camera_fps);
    _mav_put_uint8_t(buf, 9, run_ai);
    _mav_put_char_array(buf, 10, crop_model_name, 16);
    _mav_put_char_array(buf, 26, var_model_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS, buf, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
#else
    mavlink_general_settings_parameters_t *packet = (mavlink_general_settings_parameters_t *)msgbuf;
    packet->camera_width = camera_width;
    packet->camera_height = camera_height;
    packet->roi_width = roi_width;
    packet->roi_height = roi_height;
    packet->camera_fps = camera_fps;
    packet->run_ai = run_ai;
    mav_array_memcpy(packet->crop_model_name, crop_model_name, sizeof(char)*16);
    mav_array_memcpy(packet->var_model_name, var_model_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE GENERAL_SETTINGS_PARAMETERS UNPACKING


/**
 * @brief Get field camera_width from general_settings_parameters message
 *
 * @return  
        Camera sensor width in pixels. Must match a supported sensor resolution.
      
 */
static inline uint16_t mavlink_msg_general_settings_parameters_get_camera_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field camera_height from general_settings_parameters message
 *
 * @return  
        Camera sensor height in pixels. Must match a supported sensor resolution.
      
 */
static inline uint16_t mavlink_msg_general_settings_parameters_get_camera_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field roi_width from general_settings_parameters message
 *
 * @return  
        Region-of-interest width in pixels. Must be ≤ camera_width.
      
 */
static inline uint16_t mavlink_msg_general_settings_parameters_get_roi_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field roi_height from general_settings_parameters message
 *
 * @return  
        Region-of-interest height in pixels. Must be ≤ camera_height.
      
 */
static inline uint16_t mavlink_msg_general_settings_parameters_get_roi_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field camera_fps from general_settings_parameters message
 *
 * @return  
        Camera frame rate in FPS. Typical valid range is [1,30].
      
 */
static inline uint8_t mavlink_msg_general_settings_parameters_get_camera_fps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field run_ai from general_settings_parameters message
 *
 * @return  
        Flag to enable or disable AI processing: 0=disabled, 1=enabled.
      
 */
static inline uint8_t mavlink_msg_general_settings_parameters_get_run_ai(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field crop_model_name from general_settings_parameters message
 *
 * @return  
        Name of the model used for scanning / detection. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 */
static inline uint16_t mavlink_msg_general_settings_parameters_get_crop_model_name(const mavlink_message_t* msg, char *crop_model_name)
{
    return _MAV_RETURN_char_array(msg, crop_model_name, 16,  10);
}

/**
 * @brief Get field var_model_name from general_settings_parameters message
 *
 * @return  
        Name of the model used for tracking. Returned on GET; typically selected using MODEL_PARAMETERS.
      
 */
static inline uint16_t mavlink_msg_general_settings_parameters_get_var_model_name(const mavlink_message_t* msg, char *var_model_name)
{
    return _MAV_RETURN_char_array(msg, var_model_name, 16,  26);
}

/**
 * @brief Decode a general_settings_parameters message into a struct
 *
 * @param msg The message to decode
 * @param general_settings_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_general_settings_parameters_decode(const mavlink_message_t* msg, mavlink_general_settings_parameters_t* general_settings_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    general_settings_parameters->camera_width = mavlink_msg_general_settings_parameters_get_camera_width(msg);
    general_settings_parameters->camera_height = mavlink_msg_general_settings_parameters_get_camera_height(msg);
    general_settings_parameters->roi_width = mavlink_msg_general_settings_parameters_get_roi_width(msg);
    general_settings_parameters->roi_height = mavlink_msg_general_settings_parameters_get_roi_height(msg);
    general_settings_parameters->camera_fps = mavlink_msg_general_settings_parameters_get_camera_fps(msg);
    general_settings_parameters->run_ai = mavlink_msg_general_settings_parameters_get_run_ai(msg);
    mavlink_msg_general_settings_parameters_get_crop_model_name(msg, general_settings_parameters->crop_model_name);
    mavlink_msg_general_settings_parameters_get_var_model_name(msg, general_settings_parameters->var_model_name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN;
        memset(general_settings_parameters, 0, MAVLINK_MSG_ID_GENERAL_SETTINGS_PARAMETERS_LEN);
    memcpy(general_settings_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
