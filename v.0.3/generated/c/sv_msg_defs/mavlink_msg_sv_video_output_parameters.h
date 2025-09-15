#pragma once
// MESSAGE SV_VIDEO_OUTPUT_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS 40003


typedef struct __mavlink_sv_video_output_parameters_t {
 uint16_t width; /*<  Output width (px).*/
 uint16_t height; /*<  Output height (px).*/
 uint16_t views_x[4]; /*<  View x (px).*/
 uint16_t views_y[4]; /*<  View y (px).*/
 uint16_t views_w[4]; /*<  View w (px).*/
 uint16_t views_h[4]; /*<  View h (px).*/
 uint16_t overlay_x; /*<  Overlay x (px).*/
 uint16_t overlay_y; /*<  Overlay y (px).*/
 uint16_t overlay_w; /*<  Overlay w (px).*/
 uint16_t overlay_h; /*<  Overlay h (px).*/
 uint16_t single_detection_size; /*<  Single detection size (px or units).*/
 char stream_name[16]; /*<  Stream name.*/
 uint8_t fps; /*<  Frames per second.*/
 uint8_t layout_mode; /*<  Layout mode.*/
 uint8_t detection_overlay_mode; /*<  Overlay mode.*/
} mavlink_sv_video_output_parameters_t;

#define MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN 65
#define MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN 65
#define MAVLINK_MSG_ID_40003_LEN 65
#define MAVLINK_MSG_ID_40003_MIN_LEN 65

#define MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC 69
#define MAVLINK_MSG_ID_40003_CRC 69

#define MAVLINK_MSG_SV_VIDEO_OUTPUT_PARAMETERS_FIELD_VIEWS_X_LEN 4
#define MAVLINK_MSG_SV_VIDEO_OUTPUT_PARAMETERS_FIELD_VIEWS_Y_LEN 4
#define MAVLINK_MSG_SV_VIDEO_OUTPUT_PARAMETERS_FIELD_VIEWS_W_LEN 4
#define MAVLINK_MSG_SV_VIDEO_OUTPUT_PARAMETERS_FIELD_VIEWS_H_LEN 4
#define MAVLINK_MSG_SV_VIDEO_OUTPUT_PARAMETERS_FIELD_STREAM_NAME_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_VIDEO_OUTPUT_PARAMETERS { \
    40003, \
    "SV_VIDEO_OUTPUT_PARAMETERS", \
    15, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 16, 46, offsetof(mavlink_sv_video_output_parameters_t, stream_name) }, \
         { "width", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_sv_video_output_parameters_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_sv_video_output_parameters_t, height) }, \
         { "fps", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_sv_video_output_parameters_t, fps) }, \
         { "layout_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_sv_video_output_parameters_t, layout_mode) }, \
         { "detection_overlay_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_sv_video_output_parameters_t, detection_overlay_mode) }, \
         { "views_x", NULL, MAVLINK_TYPE_UINT16_T, 4, 4, offsetof(mavlink_sv_video_output_parameters_t, views_x) }, \
         { "views_y", NULL, MAVLINK_TYPE_UINT16_T, 4, 12, offsetof(mavlink_sv_video_output_parameters_t, views_y) }, \
         { "views_w", NULL, MAVLINK_TYPE_UINT16_T, 4, 20, offsetof(mavlink_sv_video_output_parameters_t, views_w) }, \
         { "views_h", NULL, MAVLINK_TYPE_UINT16_T, 4, 28, offsetof(mavlink_sv_video_output_parameters_t, views_h) }, \
         { "overlay_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_sv_video_output_parameters_t, overlay_x) }, \
         { "overlay_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_sv_video_output_parameters_t, overlay_y) }, \
         { "overlay_w", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_sv_video_output_parameters_t, overlay_w) }, \
         { "overlay_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_sv_video_output_parameters_t, overlay_h) }, \
         { "single_detection_size", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_sv_video_output_parameters_t, single_detection_size) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_VIDEO_OUTPUT_PARAMETERS { \
    "SV_VIDEO_OUTPUT_PARAMETERS", \
    15, \
    {  { "stream_name", NULL, MAVLINK_TYPE_CHAR, 16, 46, offsetof(mavlink_sv_video_output_parameters_t, stream_name) }, \
         { "width", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_sv_video_output_parameters_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_sv_video_output_parameters_t, height) }, \
         { "fps", NULL, MAVLINK_TYPE_UINT8_T, 0, 62, offsetof(mavlink_sv_video_output_parameters_t, fps) }, \
         { "layout_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 63, offsetof(mavlink_sv_video_output_parameters_t, layout_mode) }, \
         { "detection_overlay_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_sv_video_output_parameters_t, detection_overlay_mode) }, \
         { "views_x", NULL, MAVLINK_TYPE_UINT16_T, 4, 4, offsetof(mavlink_sv_video_output_parameters_t, views_x) }, \
         { "views_y", NULL, MAVLINK_TYPE_UINT16_T, 4, 12, offsetof(mavlink_sv_video_output_parameters_t, views_y) }, \
         { "views_w", NULL, MAVLINK_TYPE_UINT16_T, 4, 20, offsetof(mavlink_sv_video_output_parameters_t, views_w) }, \
         { "views_h", NULL, MAVLINK_TYPE_UINT16_T, 4, 28, offsetof(mavlink_sv_video_output_parameters_t, views_h) }, \
         { "overlay_x", NULL, MAVLINK_TYPE_UINT16_T, 0, 36, offsetof(mavlink_sv_video_output_parameters_t, overlay_x) }, \
         { "overlay_y", NULL, MAVLINK_TYPE_UINT16_T, 0, 38, offsetof(mavlink_sv_video_output_parameters_t, overlay_y) }, \
         { "overlay_w", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_sv_video_output_parameters_t, overlay_w) }, \
         { "overlay_h", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_sv_video_output_parameters_t, overlay_h) }, \
         { "single_detection_size", NULL, MAVLINK_TYPE_UINT16_T, 0, 44, offsetof(mavlink_sv_video_output_parameters_t, single_detection_size) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_video_output_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name.
 * @param width  Output width (px).
 * @param height  Output height (px).
 * @param fps  Frames per second.
 * @param layout_mode  Layout mode.
 * @param detection_overlay_mode  Overlay mode.
 * @param views_x  View x (px).
 * @param views_y  View y (px).
 * @param views_w  View w (px).
 * @param views_h  View h (px).
 * @param overlay_x  Overlay x (px).
 * @param overlay_y  Overlay y (px).
 * @param overlay_w  Overlay w (px).
 * @param overlay_h  Overlay h (px).
 * @param single_detection_size  Single detection size (px or units).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *stream_name, uint16_t width, uint16_t height, uint8_t fps, uint8_t layout_mode, uint8_t detection_overlay_mode, const uint16_t *views_x, const uint16_t *views_y, const uint16_t *views_w, const uint16_t *views_h, uint16_t overlay_x, uint16_t overlay_y, uint16_t overlay_w, uint16_t overlay_h, uint16_t single_detection_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, width);
    _mav_put_uint16_t(buf, 2, height);
    _mav_put_uint16_t(buf, 36, overlay_x);
    _mav_put_uint16_t(buf, 38, overlay_y);
    _mav_put_uint16_t(buf, 40, overlay_w);
    _mav_put_uint16_t(buf, 42, overlay_h);
    _mav_put_uint16_t(buf, 44, single_detection_size);
    _mav_put_uint8_t(buf, 62, fps);
    _mav_put_uint8_t(buf, 63, layout_mode);
    _mav_put_uint8_t(buf, 64, detection_overlay_mode);
    _mav_put_uint16_t_array(buf, 4, views_x, 4);
    _mav_put_uint16_t_array(buf, 12, views_y, 4);
    _mav_put_uint16_t_array(buf, 20, views_w, 4);
    _mav_put_uint16_t_array(buf, 28, views_h, 4);
    _mav_put_char_array(buf, 46, stream_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#else
    mavlink_sv_video_output_parameters_t packet;
    packet.width = width;
    packet.height = height;
    packet.overlay_x = overlay_x;
    packet.overlay_y = overlay_y;
    packet.overlay_w = overlay_w;
    packet.overlay_h = overlay_h;
    packet.single_detection_size = single_detection_size;
    packet.fps = fps;
    packet.layout_mode = layout_mode;
    packet.detection_overlay_mode = detection_overlay_mode;
    mav_array_memcpy(packet.views_x, views_x, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_y, views_y, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_w, views_w, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_h, views_h, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_video_output_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param stream_name  Stream name.
 * @param width  Output width (px).
 * @param height  Output height (px).
 * @param fps  Frames per second.
 * @param layout_mode  Layout mode.
 * @param detection_overlay_mode  Overlay mode.
 * @param views_x  View x (px).
 * @param views_y  View y (px).
 * @param views_w  View w (px).
 * @param views_h  View h (px).
 * @param overlay_x  Overlay x (px).
 * @param overlay_y  Overlay y (px).
 * @param overlay_w  Overlay w (px).
 * @param overlay_h  Overlay h (px).
 * @param single_detection_size  Single detection size (px or units).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const char *stream_name, uint16_t width, uint16_t height, uint8_t fps, uint8_t layout_mode, uint8_t detection_overlay_mode, const uint16_t *views_x, const uint16_t *views_y, const uint16_t *views_w, const uint16_t *views_h, uint16_t overlay_x, uint16_t overlay_y, uint16_t overlay_w, uint16_t overlay_h, uint16_t single_detection_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, width);
    _mav_put_uint16_t(buf, 2, height);
    _mav_put_uint16_t(buf, 36, overlay_x);
    _mav_put_uint16_t(buf, 38, overlay_y);
    _mav_put_uint16_t(buf, 40, overlay_w);
    _mav_put_uint16_t(buf, 42, overlay_h);
    _mav_put_uint16_t(buf, 44, single_detection_size);
    _mav_put_uint8_t(buf, 62, fps);
    _mav_put_uint8_t(buf, 63, layout_mode);
    _mav_put_uint8_t(buf, 64, detection_overlay_mode);
    _mav_put_uint16_t_array(buf, 4, views_x, 4);
    _mav_put_uint16_t_array(buf, 12, views_y, 4);
    _mav_put_uint16_t_array(buf, 20, views_w, 4);
    _mav_put_uint16_t_array(buf, 28, views_h, 4);
    _mav_put_char_array(buf, 46, stream_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#else
    mavlink_sv_video_output_parameters_t packet;
    packet.width = width;
    packet.height = height;
    packet.overlay_x = overlay_x;
    packet.overlay_y = overlay_y;
    packet.overlay_w = overlay_w;
    packet.overlay_h = overlay_h;
    packet.single_detection_size = single_detection_size;
    packet.fps = fps;
    packet.layout_mode = layout_mode;
    packet.detection_overlay_mode = detection_overlay_mode;
    mav_array_memcpy(packet.views_x, views_x, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_y, views_y, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_w, views_w, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_h, views_h, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_video_output_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param stream_name  Stream name.
 * @param width  Output width (px).
 * @param height  Output height (px).
 * @param fps  Frames per second.
 * @param layout_mode  Layout mode.
 * @param detection_overlay_mode  Overlay mode.
 * @param views_x  View x (px).
 * @param views_y  View y (px).
 * @param views_w  View w (px).
 * @param views_h  View h (px).
 * @param overlay_x  Overlay x (px).
 * @param overlay_y  Overlay y (px).
 * @param overlay_w  Overlay w (px).
 * @param overlay_h  Overlay h (px).
 * @param single_detection_size  Single detection size (px or units).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *stream_name,uint16_t width,uint16_t height,uint8_t fps,uint8_t layout_mode,uint8_t detection_overlay_mode,const uint16_t *views_x,const uint16_t *views_y,const uint16_t *views_w,const uint16_t *views_h,uint16_t overlay_x,uint16_t overlay_y,uint16_t overlay_w,uint16_t overlay_h,uint16_t single_detection_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, width);
    _mav_put_uint16_t(buf, 2, height);
    _mav_put_uint16_t(buf, 36, overlay_x);
    _mav_put_uint16_t(buf, 38, overlay_y);
    _mav_put_uint16_t(buf, 40, overlay_w);
    _mav_put_uint16_t(buf, 42, overlay_h);
    _mav_put_uint16_t(buf, 44, single_detection_size);
    _mav_put_uint8_t(buf, 62, fps);
    _mav_put_uint8_t(buf, 63, layout_mode);
    _mav_put_uint8_t(buf, 64, detection_overlay_mode);
    _mav_put_uint16_t_array(buf, 4, views_x, 4);
    _mav_put_uint16_t_array(buf, 12, views_y, 4);
    _mav_put_uint16_t_array(buf, 20, views_w, 4);
    _mav_put_uint16_t_array(buf, 28, views_h, 4);
    _mav_put_char_array(buf, 46, stream_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#else
    mavlink_sv_video_output_parameters_t packet;
    packet.width = width;
    packet.height = height;
    packet.overlay_x = overlay_x;
    packet.overlay_y = overlay_y;
    packet.overlay_w = overlay_w;
    packet.overlay_h = overlay_h;
    packet.single_detection_size = single_detection_size;
    packet.fps = fps;
    packet.layout_mode = layout_mode;
    packet.detection_overlay_mode = detection_overlay_mode;
    mav_array_memcpy(packet.views_x, views_x, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_y, views_y, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_w, views_w, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_h, views_h, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_video_output_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_video_output_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_video_output_parameters_t* sv_video_output_parameters)
{
    return mavlink_msg_sv_video_output_parameters_pack(system_id, component_id, msg, sv_video_output_parameters->stream_name, sv_video_output_parameters->width, sv_video_output_parameters->height, sv_video_output_parameters->fps, sv_video_output_parameters->layout_mode, sv_video_output_parameters->detection_overlay_mode, sv_video_output_parameters->views_x, sv_video_output_parameters->views_y, sv_video_output_parameters->views_w, sv_video_output_parameters->views_h, sv_video_output_parameters->overlay_x, sv_video_output_parameters->overlay_y, sv_video_output_parameters->overlay_w, sv_video_output_parameters->overlay_h, sv_video_output_parameters->single_detection_size);
}

/**
 * @brief Encode a sv_video_output_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_video_output_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_video_output_parameters_t* sv_video_output_parameters)
{
    return mavlink_msg_sv_video_output_parameters_pack_chan(system_id, component_id, chan, msg, sv_video_output_parameters->stream_name, sv_video_output_parameters->width, sv_video_output_parameters->height, sv_video_output_parameters->fps, sv_video_output_parameters->layout_mode, sv_video_output_parameters->detection_overlay_mode, sv_video_output_parameters->views_x, sv_video_output_parameters->views_y, sv_video_output_parameters->views_w, sv_video_output_parameters->views_h, sv_video_output_parameters->overlay_x, sv_video_output_parameters->overlay_y, sv_video_output_parameters->overlay_w, sv_video_output_parameters->overlay_h, sv_video_output_parameters->single_detection_size);
}

/**
 * @brief Encode a sv_video_output_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_video_output_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_video_output_parameters_t* sv_video_output_parameters)
{
    return mavlink_msg_sv_video_output_parameters_pack_status(system_id, component_id, _status, msg,  sv_video_output_parameters->stream_name, sv_video_output_parameters->width, sv_video_output_parameters->height, sv_video_output_parameters->fps, sv_video_output_parameters->layout_mode, sv_video_output_parameters->detection_overlay_mode, sv_video_output_parameters->views_x, sv_video_output_parameters->views_y, sv_video_output_parameters->views_w, sv_video_output_parameters->views_h, sv_video_output_parameters->overlay_x, sv_video_output_parameters->overlay_y, sv_video_output_parameters->overlay_w, sv_video_output_parameters->overlay_h, sv_video_output_parameters->single_detection_size);
}

/**
 * @brief Send a sv_video_output_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param stream_name  Stream name.
 * @param width  Output width (px).
 * @param height  Output height (px).
 * @param fps  Frames per second.
 * @param layout_mode  Layout mode.
 * @param detection_overlay_mode  Overlay mode.
 * @param views_x  View x (px).
 * @param views_y  View y (px).
 * @param views_w  View w (px).
 * @param views_h  View h (px).
 * @param overlay_x  Overlay x (px).
 * @param overlay_y  Overlay y (px).
 * @param overlay_w  Overlay w (px).
 * @param overlay_h  Overlay h (px).
 * @param single_detection_size  Single detection size (px or units).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_video_output_parameters_send(mavlink_channel_t chan, const char *stream_name, uint16_t width, uint16_t height, uint8_t fps, uint8_t layout_mode, uint8_t detection_overlay_mode, const uint16_t *views_x, const uint16_t *views_y, const uint16_t *views_w, const uint16_t *views_h, uint16_t overlay_x, uint16_t overlay_y, uint16_t overlay_w, uint16_t overlay_h, uint16_t single_detection_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN];
    _mav_put_uint16_t(buf, 0, width);
    _mav_put_uint16_t(buf, 2, height);
    _mav_put_uint16_t(buf, 36, overlay_x);
    _mav_put_uint16_t(buf, 38, overlay_y);
    _mav_put_uint16_t(buf, 40, overlay_w);
    _mav_put_uint16_t(buf, 42, overlay_h);
    _mav_put_uint16_t(buf, 44, single_detection_size);
    _mav_put_uint8_t(buf, 62, fps);
    _mav_put_uint8_t(buf, 63, layout_mode);
    _mav_put_uint8_t(buf, 64, detection_overlay_mode);
    _mav_put_uint16_t_array(buf, 4, views_x, 4);
    _mav_put_uint16_t_array(buf, 12, views_y, 4);
    _mav_put_uint16_t_array(buf, 20, views_w, 4);
    _mav_put_uint16_t_array(buf, 28, views_h, 4);
    _mav_put_char_array(buf, 46, stream_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS, buf, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
#else
    mavlink_sv_video_output_parameters_t packet;
    packet.width = width;
    packet.height = height;
    packet.overlay_x = overlay_x;
    packet.overlay_y = overlay_y;
    packet.overlay_w = overlay_w;
    packet.overlay_h = overlay_h;
    packet.single_detection_size = single_detection_size;
    packet.fps = fps;
    packet.layout_mode = layout_mode;
    packet.detection_overlay_mode = detection_overlay_mode;
    mav_array_memcpy(packet.views_x, views_x, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_y, views_y, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_w, views_w, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.views_h, views_h, sizeof(uint16_t)*4);
    mav_array_memcpy(packet.stream_name, stream_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_video_output_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_video_output_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_video_output_parameters_t* sv_video_output_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_video_output_parameters_send(chan, sv_video_output_parameters->stream_name, sv_video_output_parameters->width, sv_video_output_parameters->height, sv_video_output_parameters->fps, sv_video_output_parameters->layout_mode, sv_video_output_parameters->detection_overlay_mode, sv_video_output_parameters->views_x, sv_video_output_parameters->views_y, sv_video_output_parameters->views_w, sv_video_output_parameters->views_h, sv_video_output_parameters->overlay_x, sv_video_output_parameters->overlay_y, sv_video_output_parameters->overlay_w, sv_video_output_parameters->overlay_h, sv_video_output_parameters->single_detection_size);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS, (const char *)sv_video_output_parameters, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_video_output_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *stream_name, uint16_t width, uint16_t height, uint8_t fps, uint8_t layout_mode, uint8_t detection_overlay_mode, const uint16_t *views_x, const uint16_t *views_y, const uint16_t *views_w, const uint16_t *views_h, uint16_t overlay_x, uint16_t overlay_y, uint16_t overlay_w, uint16_t overlay_h, uint16_t single_detection_size)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, width);
    _mav_put_uint16_t(buf, 2, height);
    _mav_put_uint16_t(buf, 36, overlay_x);
    _mav_put_uint16_t(buf, 38, overlay_y);
    _mav_put_uint16_t(buf, 40, overlay_w);
    _mav_put_uint16_t(buf, 42, overlay_h);
    _mav_put_uint16_t(buf, 44, single_detection_size);
    _mav_put_uint8_t(buf, 62, fps);
    _mav_put_uint8_t(buf, 63, layout_mode);
    _mav_put_uint8_t(buf, 64, detection_overlay_mode);
    _mav_put_uint16_t_array(buf, 4, views_x, 4);
    _mav_put_uint16_t_array(buf, 12, views_y, 4);
    _mav_put_uint16_t_array(buf, 20, views_w, 4);
    _mav_put_uint16_t_array(buf, 28, views_h, 4);
    _mav_put_char_array(buf, 46, stream_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS, buf, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
#else
    mavlink_sv_video_output_parameters_t *packet = (mavlink_sv_video_output_parameters_t *)msgbuf;
    packet->width = width;
    packet->height = height;
    packet->overlay_x = overlay_x;
    packet->overlay_y = overlay_y;
    packet->overlay_w = overlay_w;
    packet->overlay_h = overlay_h;
    packet->single_detection_size = single_detection_size;
    packet->fps = fps;
    packet->layout_mode = layout_mode;
    packet->detection_overlay_mode = detection_overlay_mode;
    mav_array_memcpy(packet->views_x, views_x, sizeof(uint16_t)*4);
    mav_array_memcpy(packet->views_y, views_y, sizeof(uint16_t)*4);
    mav_array_memcpy(packet->views_w, views_w, sizeof(uint16_t)*4);
    mav_array_memcpy(packet->views_h, views_h, sizeof(uint16_t)*4);
    mav_array_memcpy(packet->stream_name, stream_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_VIDEO_OUTPUT_PARAMETERS UNPACKING


/**
 * @brief Get field stream_name from sv_video_output_parameters message
 *
 * @return  Stream name.
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_stream_name(const mavlink_message_t* msg, char *stream_name)
{
    return _MAV_RETURN_char_array(msg, stream_name, 16,  46);
}

/**
 * @brief Get field width from sv_video_output_parameters message
 *
 * @return  Output width (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field height from sv_video_output_parameters message
 *
 * @return  Output height (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field fps from sv_video_output_parameters message
 *
 * @return  Frames per second.
 */
static inline uint8_t mavlink_msg_sv_video_output_parameters_get_fps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  62);
}

/**
 * @brief Get field layout_mode from sv_video_output_parameters message
 *
 * @return  Layout mode.
 */
static inline uint8_t mavlink_msg_sv_video_output_parameters_get_layout_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  63);
}

/**
 * @brief Get field detection_overlay_mode from sv_video_output_parameters message
 *
 * @return  Overlay mode.
 */
static inline uint8_t mavlink_msg_sv_video_output_parameters_get_detection_overlay_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field views_x from sv_video_output_parameters message
 *
 * @return  View x (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_views_x(const mavlink_message_t* msg, uint16_t *views_x)
{
    return _MAV_RETURN_uint16_t_array(msg, views_x, 4,  4);
}

/**
 * @brief Get field views_y from sv_video_output_parameters message
 *
 * @return  View y (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_views_y(const mavlink_message_t* msg, uint16_t *views_y)
{
    return _MAV_RETURN_uint16_t_array(msg, views_y, 4,  12);
}

/**
 * @brief Get field views_w from sv_video_output_parameters message
 *
 * @return  View w (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_views_w(const mavlink_message_t* msg, uint16_t *views_w)
{
    return _MAV_RETURN_uint16_t_array(msg, views_w, 4,  20);
}

/**
 * @brief Get field views_h from sv_video_output_parameters message
 *
 * @return  View h (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_views_h(const mavlink_message_t* msg, uint16_t *views_h)
{
    return _MAV_RETURN_uint16_t_array(msg, views_h, 4,  28);
}

/**
 * @brief Get field overlay_x from sv_video_output_parameters message
 *
 * @return  Overlay x (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_overlay_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  36);
}

/**
 * @brief Get field overlay_y from sv_video_output_parameters message
 *
 * @return  Overlay y (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_overlay_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  38);
}

/**
 * @brief Get field overlay_w from sv_video_output_parameters message
 *
 * @return  Overlay w (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_overlay_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  40);
}

/**
 * @brief Get field overlay_h from sv_video_output_parameters message
 *
 * @return  Overlay h (px).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_overlay_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field single_detection_size from sv_video_output_parameters message
 *
 * @return  Single detection size (px or units).
 */
static inline uint16_t mavlink_msg_sv_video_output_parameters_get_single_detection_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  44);
}

/**
 * @brief Decode a sv_video_output_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_video_output_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_video_output_parameters_decode(const mavlink_message_t* msg, mavlink_sv_video_output_parameters_t* sv_video_output_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_video_output_parameters->width = mavlink_msg_sv_video_output_parameters_get_width(msg);
    sv_video_output_parameters->height = mavlink_msg_sv_video_output_parameters_get_height(msg);
    mavlink_msg_sv_video_output_parameters_get_views_x(msg, sv_video_output_parameters->views_x);
    mavlink_msg_sv_video_output_parameters_get_views_y(msg, sv_video_output_parameters->views_y);
    mavlink_msg_sv_video_output_parameters_get_views_w(msg, sv_video_output_parameters->views_w);
    mavlink_msg_sv_video_output_parameters_get_views_h(msg, sv_video_output_parameters->views_h);
    sv_video_output_parameters->overlay_x = mavlink_msg_sv_video_output_parameters_get_overlay_x(msg);
    sv_video_output_parameters->overlay_y = mavlink_msg_sv_video_output_parameters_get_overlay_y(msg);
    sv_video_output_parameters->overlay_w = mavlink_msg_sv_video_output_parameters_get_overlay_w(msg);
    sv_video_output_parameters->overlay_h = mavlink_msg_sv_video_output_parameters_get_overlay_h(msg);
    sv_video_output_parameters->single_detection_size = mavlink_msg_sv_video_output_parameters_get_single_detection_size(msg);
    mavlink_msg_sv_video_output_parameters_get_stream_name(msg, sv_video_output_parameters->stream_name);
    sv_video_output_parameters->fps = mavlink_msg_sv_video_output_parameters_get_fps(msg);
    sv_video_output_parameters->layout_mode = mavlink_msg_sv_video_output_parameters_get_layout_mode(msg);
    sv_video_output_parameters->detection_overlay_mode = mavlink_msg_sv_video_output_parameters_get_detection_overlay_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN;
        memset(sv_video_output_parameters, 0, MAVLINK_MSG_ID_SV_VIDEO_OUTPUT_PARAMETERS_LEN);
    memcpy(sv_video_output_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
