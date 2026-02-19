#pragma once
// MESSAGE CAPTURE_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAPTURE_PARAMETERS 40004


typedef struct __mavlink_capture_parameters_t {
 uint16_t images_captured; /*<  Number of images captured so far.*/
 uint16_t videos_captured; /*<  Number of videos captured so far.*/
 char stream_name[8]; /*<  Stream name.*/
 uint8_t cap_single_image; /*<  1 to capture a single still image.*/
 uint8_t record_video; /*<  1 to start/continue video recording, 0 to stop.*/
} mavlink_capture_parameters_t;

#define MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN 14
#define MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN 14
#define MAVLINK_MSG_ID_40004_LEN 14
#define MAVLINK_MSG_ID_40004_MIN_LEN 14

#define MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC 174
#define MAVLINK_MSG_ID_40004_CRC 174

#define MAVLINK_MSG_CAPTURE_PARAMETERS_FIELD_STREAM_NAME_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAPTURE_PARAMETERS { \
    40004, \
    "CAPTURE_PARAMETERS", \
    5, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 4, offsetof(mavlink_capture_parameters_t, stream_name) }, \
         { "cap_single_image", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_capture_parameters_t, cap_single_image) }, \
         { "record_video", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_capture_parameters_t, record_video) }, \
         { "images_captured", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_capture_parameters_t, images_captured) }, \
         { "videos_captured", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_capture_parameters_t, videos_captured) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAPTURE_PARAMETERS { \
    "CAPTURE_PARAMETERS", \
    5, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 8, 4, offsetof(mavlink_capture_parameters_t, stream_name) }, \
         { "cap_single_image", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_capture_parameters_t, cap_single_image) }, \
         { "record_video", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_capture_parameters_t, record_video) }, \
         { "images_captured", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_capture_parameters_t, images_captured) }, \
         { "videos_captured", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_capture_parameters_t, videos_captured) }, \
         } \
}
#endif

/**
 * @brief Pack a capture_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name.
 * @param cap_single_image  1 to capture a single still image.
 * @param record_video  1 to start/continue video recording, 0 to stop.
 * @param images_captured  Number of images captured so far.
 * @param videos_captured  Number of videos captured so far.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_capture_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cap_single_image, uint8_t record_video, uint16_t images_captured, uint16_t videos_captured)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, images_captured);
    _mav_put_uint16_t(buf, 2, videos_captured);
    _mav_put_uint8_t(buf, 12, cap_single_image);
    _mav_put_uint8_t(buf, 13, record_video);
    _mav_put_char_array(buf, 4, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#else
    mavlink_capture_parameters_t packet;
    packet.images_captured = images_captured;
    packet.videos_captured = videos_captured;
    packet.cap_single_image = cap_single_image;
    packet.record_video = record_video;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAPTURE_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
}

/**
 * @brief Pack a capture_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name.
 * @param cap_single_image  1 to capture a single still image.
 * @param record_video  1 to start/continue video recording, 0 to stop.
 * @param images_captured  Number of images captured so far.
 * @param videos_captured  Number of videos captured so far.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_capture_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *stream_name, uint8_t cap_single_image, uint8_t record_video, uint16_t images_captured, uint16_t videos_captured)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, images_captured);
    _mav_put_uint16_t(buf, 2, videos_captured);
    _mav_put_uint8_t(buf, 12, cap_single_image);
    _mav_put_uint8_t(buf, 13, record_video);
    _mav_put_char_array(buf, 4, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#else
    mavlink_capture_parameters_t packet;
    packet.images_captured = images_captured;
    packet.videos_captured = videos_captured;
    packet.cap_single_image = cap_single_image;
    packet.record_video = record_video;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAPTURE_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a capture_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_name  Stream name.
 * @param cap_single_image  1 to capture a single still image.
 * @param record_video  1 to start/continue video recording, 0 to stop.
 * @param images_captured  Number of images captured so far.
 * @param videos_captured  Number of videos captured so far.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_capture_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *stream_name,uint8_t cap_single_image,uint8_t record_video,uint16_t images_captured,uint16_t videos_captured)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, images_captured);
    _mav_put_uint16_t(buf, 2, videos_captured);
    _mav_put_uint8_t(buf, 12, cap_single_image);
    _mav_put_uint8_t(buf, 13, record_video);
    _mav_put_char_array(buf, 4, stream_name, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#else
    mavlink_capture_parameters_t packet;
    packet.images_captured = images_captured;
    packet.videos_captured = videos_captured;
    packet.cap_single_image = cap_single_image;
    packet.record_video = record_video;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAPTURE_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
}

/**
 * @brief Encode a capture_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param capture_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_capture_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_capture_parameters_t* capture_parameters)
{
    return mavlink_msg_capture_parameters_pack(system_id, component_id, msg, capture_parameters->stream_name, capture_parameters->cap_single_image, capture_parameters->record_video, capture_parameters->images_captured, capture_parameters->videos_captured);
}

/**
 * @brief Encode a capture_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param capture_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_capture_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_capture_parameters_t* capture_parameters)
{
    return mavlink_msg_capture_parameters_pack_chan(system_id, component_id, chan, msg, capture_parameters->stream_name, capture_parameters->cap_single_image, capture_parameters->record_video, capture_parameters->images_captured, capture_parameters->videos_captured);
}

/**
 * @brief Encode a capture_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param capture_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_capture_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_capture_parameters_t* capture_parameters)
{
    return mavlink_msg_capture_parameters_pack_status(system_id, component_id, _status, msg,  capture_parameters->stream_name, capture_parameters->cap_single_image, capture_parameters->record_video, capture_parameters->images_captured, capture_parameters->videos_captured);
}

/**
 * @brief Send a capture_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_name  Stream name.
 * @param cap_single_image  1 to capture a single still image.
 * @param record_video  1 to start/continue video recording, 0 to stop.
 * @param images_captured  Number of images captured so far.
 * @param videos_captured  Number of videos captured so far.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_capture_parameters_send(mavlink_channel_t chan, const char *stream_name, uint8_t cap_single_image, uint8_t record_video, uint16_t images_captured, uint16_t videos_captured)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, images_captured);
    _mav_put_uint16_t(buf, 2, videos_captured);
    _mav_put_uint8_t(buf, 12, cap_single_image);
    _mav_put_uint8_t(buf, 13, record_video);
    _mav_put_char_array(buf, 4, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PARAMETERS, buf, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
#else
    mavlink_capture_parameters_t packet;
    packet.images_captured = images_captured;
    packet.videos_captured = videos_captured;
    packet.cap_single_image = cap_single_image;
    packet.record_video = record_video;
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a capture_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_capture_parameters_send_struct(mavlink_channel_t chan, const mavlink_capture_parameters_t* capture_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_capture_parameters_send(chan, capture_parameters->stream_name, capture_parameters->cap_single_image, capture_parameters->record_video, capture_parameters->images_captured, capture_parameters->videos_captured);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PARAMETERS, (const char *)capture_parameters, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_capture_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *stream_name, uint8_t cap_single_image, uint8_t record_video, uint16_t images_captured, uint16_t videos_captured)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, images_captured);
    _mav_put_uint16_t(buf, 2, videos_captured);
    _mav_put_uint8_t(buf, 12, cap_single_image);
    _mav_put_uint8_t(buf, 13, record_video);
    _mav_put_char_array(buf, 4, stream_name, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PARAMETERS, buf, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
#else
    mavlink_capture_parameters_t *packet = (mavlink_capture_parameters_t *)msgbuf;
    packet->images_captured = images_captured;
    packet->videos_captured = videos_captured;
    packet->cap_single_image = cap_single_image;
    packet->record_video = record_video;
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAPTURE_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAPTURE_PARAMETERS UNPACKING


/**
 * @brief Get field stream_name from capture_parameters message
 *
 * @return  Stream name.
 */
static inline uint16_t mavlink_msg_capture_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 8,  4);
}

/**
 * @brief Get field cap_single_image from capture_parameters message
 *
 * @return  1 to capture a single still image.
 */
static inline uint8_t mavlink_msg_capture_parameters_get_cap_single_image(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field record_video from capture_parameters message
 *
 * @return  1 to start/continue video recording, 0 to stop.
 */
static inline uint8_t mavlink_msg_capture_parameters_get_record_video(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field images_captured from capture_parameters message
 *
 * @return  Number of images captured so far.
 */
static inline uint16_t mavlink_msg_capture_parameters_get_images_captured(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field videos_captured from capture_parameters message
 *
 * @return  Number of videos captured so far.
 */
static inline uint16_t mavlink_msg_capture_parameters_get_videos_captured(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Decode a capture_parameters message into a struct
 *
 * @param msg The message to decode
 * @param capture_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_capture_parameters_decode(const mavlink_message_t* msg, mavlink_capture_parameters_t* capture_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    capture_parameters->images_captured = mavlink_msg_capture_parameters_get_images_captured(msg);
    capture_parameters->videos_captured = mavlink_msg_capture_parameters_get_videos_captured(msg);
    mavlink_msg_capture_parameters_get_stream_name(msg, capture_parameters->stream_name);
    capture_parameters->cap_single_image = mavlink_msg_capture_parameters_get_cap_single_image(msg);
    capture_parameters->record_video = mavlink_msg_capture_parameters_get_record_video(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN;
        memset(capture_parameters, 0, MAVLINK_MSG_ID_CAPTURE_PARAMETERS_LEN);
    memcpy(capture_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
