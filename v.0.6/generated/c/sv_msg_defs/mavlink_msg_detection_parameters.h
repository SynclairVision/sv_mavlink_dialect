#pragma once
// MESSAGE DETECTION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_DETECTION_PARAMETERS 40005


typedef struct __mavlink_detection_parameters_t {
 float crop_confidence_threshold; /*<  Score threshold when tracking existing objects.*/
 float var_confidence_threshold; /*<  Score threshold when scanning for new objects.*/
 float crop_box_overlap; /*<  Max allowed overlap between crop tracking boxes.*/
 float var_box_overlap; /*<  Max allowed overlap between var scan boxes.*/
 uint8_t mode; /*<  Reserved/unused mode field.*/
 uint8_t sorting_mode; /*<  Detection sorting strategy.*/
 uint8_t creation_score_scale; /*<  Initial score scaling of new detections (255 keeps old value).*/
 uint8_t bonus_detection_scale; /*<  Score bonus when found again during scanning (255 keeps old value).*/
 uint8_t bonus_redetection_scale; /*<  Score bonus when found again during tracking (255 keeps old value).*/
 uint8_t missed_detection_penalty; /*<  Score penalty when expected but not detected during scanning.*/
 uint8_t missed_redetection_penalty; /*<  Score penalty when expected but not detected during tracking.*/
} mavlink_detection_parameters_t;

#define MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN 23
#define MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN 23
#define MAVLINK_MSG_ID_40005_LEN 23
#define MAVLINK_MSG_ID_40005_MIN_LEN 23

#define MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC 192
#define MAVLINK_MSG_ID_40005_CRC 192



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DETECTION_PARAMETERS { \
    40005, \
    "DETECTION_PARAMETERS", \
    11, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_detection_parameters_t, mode) }, \
         { "sorting_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_detection_parameters_t, sorting_mode) }, \
         { "crop_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_detection_parameters_t, crop_confidence_threshold) }, \
         { "var_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_detection_parameters_t, var_confidence_threshold) }, \
         { "crop_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_detection_parameters_t, crop_box_overlap) }, \
         { "var_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_detection_parameters_t, var_box_overlap) }, \
         { "creation_score_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_detection_parameters_t, creation_score_scale) }, \
         { "bonus_detection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_detection_parameters_t, bonus_detection_scale) }, \
         { "bonus_redetection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_detection_parameters_t, bonus_redetection_scale) }, \
         { "missed_detection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_detection_parameters_t, missed_detection_penalty) }, \
         { "missed_redetection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_detection_parameters_t, missed_redetection_penalty) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DETECTION_PARAMETERS { \
    "DETECTION_PARAMETERS", \
    11, \
    {  { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_detection_parameters_t, mode) }, \
         { "sorting_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_detection_parameters_t, sorting_mode) }, \
         { "crop_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_detection_parameters_t, crop_confidence_threshold) }, \
         { "var_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_detection_parameters_t, var_confidence_threshold) }, \
         { "crop_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_detection_parameters_t, crop_box_overlap) }, \
         { "var_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_detection_parameters_t, var_box_overlap) }, \
         { "creation_score_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_detection_parameters_t, creation_score_scale) }, \
         { "bonus_detection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_detection_parameters_t, bonus_detection_scale) }, \
         { "bonus_redetection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_detection_parameters_t, bonus_redetection_scale) }, \
         { "missed_detection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_detection_parameters_t, missed_detection_penalty) }, \
         { "missed_redetection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_detection_parameters_t, missed_redetection_penalty) }, \
         } \
}
#endif

/**
 * @brief Pack a detection_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode  Reserved/unused mode field.
 * @param sorting_mode  Detection sorting strategy.
 * @param crop_confidence_threshold  Score threshold when tracking existing objects.
 * @param var_confidence_threshold  Score threshold when scanning for new objects.
 * @param crop_box_overlap  Max allowed overlap between crop tracking boxes.
 * @param var_box_overlap  Max allowed overlap between var scan boxes.
 * @param creation_score_scale  Initial score scaling of new detections (255 keeps old value).
 * @param bonus_detection_scale  Score bonus when found again during scanning (255 keeps old value).
 * @param bonus_redetection_scale  Score bonus when found again during tracking (255 keeps old value).
 * @param missed_detection_penalty  Score penalty when expected but not detected during scanning.
 * @param missed_redetection_penalty  Score penalty when expected but not detected during tracking.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detection_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t mode, uint8_t sorting_mode, float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint8_t(buf, 16, mode);
    _mav_put_uint8_t(buf, 17, sorting_mode);
    _mav_put_uint8_t(buf, 18, creation_score_scale);
    _mav_put_uint8_t(buf, 19, bonus_detection_scale);
    _mav_put_uint8_t(buf, 20, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 21, missed_detection_penalty);
    _mav_put_uint8_t(buf, 22, missed_redetection_penalty);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#else
    mavlink_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
}

/**
 * @brief Pack a detection_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mode  Reserved/unused mode field.
 * @param sorting_mode  Detection sorting strategy.
 * @param crop_confidence_threshold  Score threshold when tracking existing objects.
 * @param var_confidence_threshold  Score threshold when scanning for new objects.
 * @param crop_box_overlap  Max allowed overlap between crop tracking boxes.
 * @param var_box_overlap  Max allowed overlap between var scan boxes.
 * @param creation_score_scale  Initial score scaling of new detections (255 keeps old value).
 * @param bonus_detection_scale  Score bonus when found again during scanning (255 keeps old value).
 * @param bonus_redetection_scale  Score bonus when found again during tracking (255 keeps old value).
 * @param missed_detection_penalty  Score penalty when expected but not detected during scanning.
 * @param missed_redetection_penalty  Score penalty when expected but not detected during tracking.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detection_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t mode, uint8_t sorting_mode, float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint8_t(buf, 16, mode);
    _mav_put_uint8_t(buf, 17, sorting_mode);
    _mav_put_uint8_t(buf, 18, creation_score_scale);
    _mav_put_uint8_t(buf, 19, bonus_detection_scale);
    _mav_put_uint8_t(buf, 20, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 21, missed_detection_penalty);
    _mav_put_uint8_t(buf, 22, missed_redetection_penalty);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#else
    mavlink_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a detection_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mode  Reserved/unused mode field.
 * @param sorting_mode  Detection sorting strategy.
 * @param crop_confidence_threshold  Score threshold when tracking existing objects.
 * @param var_confidence_threshold  Score threshold when scanning for new objects.
 * @param crop_box_overlap  Max allowed overlap between crop tracking boxes.
 * @param var_box_overlap  Max allowed overlap between var scan boxes.
 * @param creation_score_scale  Initial score scaling of new detections (255 keeps old value).
 * @param bonus_detection_scale  Score bonus when found again during scanning (255 keeps old value).
 * @param bonus_redetection_scale  Score bonus when found again during tracking (255 keeps old value).
 * @param missed_detection_penalty  Score penalty when expected but not detected during scanning.
 * @param missed_redetection_penalty  Score penalty when expected but not detected during tracking.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detection_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t mode,uint8_t sorting_mode,float crop_confidence_threshold,float var_confidence_threshold,float crop_box_overlap,float var_box_overlap,uint8_t creation_score_scale,uint8_t bonus_detection_scale,uint8_t bonus_redetection_scale,uint8_t missed_detection_penalty,uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint8_t(buf, 16, mode);
    _mav_put_uint8_t(buf, 17, sorting_mode);
    _mav_put_uint8_t(buf, 18, creation_score_scale);
    _mav_put_uint8_t(buf, 19, bonus_detection_scale);
    _mav_put_uint8_t(buf, 20, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 21, missed_detection_penalty);
    _mav_put_uint8_t(buf, 22, missed_redetection_penalty);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#else
    mavlink_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
}

/**
 * @brief Encode a detection_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detection_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_detection_parameters_t* detection_parameters)
{
    return mavlink_msg_detection_parameters_pack(system_id, component_id, msg, detection_parameters->mode, detection_parameters->sorting_mode, detection_parameters->crop_confidence_threshold, detection_parameters->var_confidence_threshold, detection_parameters->crop_box_overlap, detection_parameters->var_box_overlap, detection_parameters->creation_score_scale, detection_parameters->bonus_detection_scale, detection_parameters->bonus_redetection_scale, detection_parameters->missed_detection_penalty, detection_parameters->missed_redetection_penalty);
}

/**
 * @brief Encode a detection_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detection_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_detection_parameters_t* detection_parameters)
{
    return mavlink_msg_detection_parameters_pack_chan(system_id, component_id, chan, msg, detection_parameters->mode, detection_parameters->sorting_mode, detection_parameters->crop_confidence_threshold, detection_parameters->var_confidence_threshold, detection_parameters->crop_box_overlap, detection_parameters->var_box_overlap, detection_parameters->creation_score_scale, detection_parameters->bonus_detection_scale, detection_parameters->bonus_redetection_scale, detection_parameters->missed_detection_penalty, detection_parameters->missed_redetection_penalty);
}

/**
 * @brief Encode a detection_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detection_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_detection_parameters_t* detection_parameters)
{
    return mavlink_msg_detection_parameters_pack_status(system_id, component_id, _status, msg,  detection_parameters->mode, detection_parameters->sorting_mode, detection_parameters->crop_confidence_threshold, detection_parameters->var_confidence_threshold, detection_parameters->crop_box_overlap, detection_parameters->var_box_overlap, detection_parameters->creation_score_scale, detection_parameters->bonus_detection_scale, detection_parameters->bonus_redetection_scale, detection_parameters->missed_detection_penalty, detection_parameters->missed_redetection_penalty);
}

/**
 * @brief Send a detection_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param mode  Reserved/unused mode field.
 * @param sorting_mode  Detection sorting strategy.
 * @param crop_confidence_threshold  Score threshold when tracking existing objects.
 * @param var_confidence_threshold  Score threshold when scanning for new objects.
 * @param crop_box_overlap  Max allowed overlap between crop tracking boxes.
 * @param var_box_overlap  Max allowed overlap between var scan boxes.
 * @param creation_score_scale  Initial score scaling of new detections (255 keeps old value).
 * @param bonus_detection_scale  Score bonus when found again during scanning (255 keeps old value).
 * @param bonus_redetection_scale  Score bonus when found again during tracking (255 keeps old value).
 * @param missed_detection_penalty  Score penalty when expected but not detected during scanning.
 * @param missed_redetection_penalty  Score penalty when expected but not detected during tracking.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_detection_parameters_send(mavlink_channel_t chan, uint8_t mode, uint8_t sorting_mode, float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint8_t(buf, 16, mode);
    _mav_put_uint8_t(buf, 17, sorting_mode);
    _mav_put_uint8_t(buf, 18, creation_score_scale);
    _mav_put_uint8_t(buf, 19, bonus_detection_scale);
    _mav_put_uint8_t(buf, 20, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 21, missed_detection_penalty);
    _mav_put_uint8_t(buf, 22, missed_redetection_penalty);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTION_PARAMETERS, buf, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
#else
    mavlink_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a detection_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_detection_parameters_send_struct(mavlink_channel_t chan, const mavlink_detection_parameters_t* detection_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_detection_parameters_send(chan, detection_parameters->mode, detection_parameters->sorting_mode, detection_parameters->crop_confidence_threshold, detection_parameters->var_confidence_threshold, detection_parameters->crop_box_overlap, detection_parameters->var_box_overlap, detection_parameters->creation_score_scale, detection_parameters->bonus_detection_scale, detection_parameters->bonus_redetection_scale, detection_parameters->missed_detection_penalty, detection_parameters->missed_redetection_penalty);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTION_PARAMETERS, (const char *)detection_parameters, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_detection_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t mode, uint8_t sorting_mode, float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint8_t(buf, 16, mode);
    _mav_put_uint8_t(buf, 17, sorting_mode);
    _mav_put_uint8_t(buf, 18, creation_score_scale);
    _mav_put_uint8_t(buf, 19, bonus_detection_scale);
    _mav_put_uint8_t(buf, 20, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 21, missed_detection_penalty);
    _mav_put_uint8_t(buf, 22, missed_redetection_penalty);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTION_PARAMETERS, buf, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
#else
    mavlink_detection_parameters_t *packet = (mavlink_detection_parameters_t *)msgbuf;
    packet->crop_confidence_threshold = crop_confidence_threshold;
    packet->var_confidence_threshold = var_confidence_threshold;
    packet->crop_box_overlap = crop_box_overlap;
    packet->var_box_overlap = var_box_overlap;
    packet->mode = mode;
    packet->sorting_mode = sorting_mode;
    packet->creation_score_scale = creation_score_scale;
    packet->bonus_detection_scale = bonus_detection_scale;
    packet->bonus_redetection_scale = bonus_redetection_scale;
    packet->missed_detection_penalty = missed_detection_penalty;
    packet->missed_redetection_penalty = missed_redetection_penalty;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE DETECTION_PARAMETERS UNPACKING


/**
 * @brief Get field mode from detection_parameters message
 *
 * @return  Reserved/unused mode field.
 */
static inline uint8_t mavlink_msg_detection_parameters_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field sorting_mode from detection_parameters message
 *
 * @return  Detection sorting strategy.
 */
static inline uint8_t mavlink_msg_detection_parameters_get_sorting_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field crop_confidence_threshold from detection_parameters message
 *
 * @return  Score threshold when tracking existing objects.
 */
static inline float mavlink_msg_detection_parameters_get_crop_confidence_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field var_confidence_threshold from detection_parameters message
 *
 * @return  Score threshold when scanning for new objects.
 */
static inline float mavlink_msg_detection_parameters_get_var_confidence_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field crop_box_overlap from detection_parameters message
 *
 * @return  Max allowed overlap between crop tracking boxes.
 */
static inline float mavlink_msg_detection_parameters_get_crop_box_overlap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field var_box_overlap from detection_parameters message
 *
 * @return  Max allowed overlap between var scan boxes.
 */
static inline float mavlink_msg_detection_parameters_get_var_box_overlap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field creation_score_scale from detection_parameters message
 *
 * @return  Initial score scaling of new detections (255 keeps old value).
 */
static inline uint8_t mavlink_msg_detection_parameters_get_creation_score_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field bonus_detection_scale from detection_parameters message
 *
 * @return  Score bonus when found again during scanning (255 keeps old value).
 */
static inline uint8_t mavlink_msg_detection_parameters_get_bonus_detection_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field bonus_redetection_scale from detection_parameters message
 *
 * @return  Score bonus when found again during tracking (255 keeps old value).
 */
static inline uint8_t mavlink_msg_detection_parameters_get_bonus_redetection_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field missed_detection_penalty from detection_parameters message
 *
 * @return  Score penalty when expected but not detected during scanning.
 */
static inline uint8_t mavlink_msg_detection_parameters_get_missed_detection_penalty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field missed_redetection_penalty from detection_parameters message
 *
 * @return  Score penalty when expected but not detected during tracking.
 */
static inline uint8_t mavlink_msg_detection_parameters_get_missed_redetection_penalty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Decode a detection_parameters message into a struct
 *
 * @param msg The message to decode
 * @param detection_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_detection_parameters_decode(const mavlink_message_t* msg, mavlink_detection_parameters_t* detection_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    detection_parameters->crop_confidence_threshold = mavlink_msg_detection_parameters_get_crop_confidence_threshold(msg);
    detection_parameters->var_confidence_threshold = mavlink_msg_detection_parameters_get_var_confidence_threshold(msg);
    detection_parameters->crop_box_overlap = mavlink_msg_detection_parameters_get_crop_box_overlap(msg);
    detection_parameters->var_box_overlap = mavlink_msg_detection_parameters_get_var_box_overlap(msg);
    detection_parameters->mode = mavlink_msg_detection_parameters_get_mode(msg);
    detection_parameters->sorting_mode = mavlink_msg_detection_parameters_get_sorting_mode(msg);
    detection_parameters->creation_score_scale = mavlink_msg_detection_parameters_get_creation_score_scale(msg);
    detection_parameters->bonus_detection_scale = mavlink_msg_detection_parameters_get_bonus_detection_scale(msg);
    detection_parameters->bonus_redetection_scale = mavlink_msg_detection_parameters_get_bonus_redetection_scale(msg);
    detection_parameters->missed_detection_penalty = mavlink_msg_detection_parameters_get_missed_detection_penalty(msg);
    detection_parameters->missed_redetection_penalty = mavlink_msg_detection_parameters_get_missed_redetection_penalty(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN;
        memset(detection_parameters, 0, MAVLINK_MSG_ID_DETECTION_PARAMETERS_LEN);
    memcpy(detection_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
