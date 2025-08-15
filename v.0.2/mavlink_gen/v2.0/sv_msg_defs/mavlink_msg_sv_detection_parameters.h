#pragma once
// MESSAGE SV_DETECTION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS 40005


typedef struct __mavlink_sv_detection_parameters_t {
 float crop_confidence_threshold; /*<  [0..1]*/
 float var_confidence_threshold; /*<  [0..1]*/
 float crop_box_overlap; /*<  [0..1]*/
 float var_box_overlap; /*<  [0..1]*/
 uint16_t crop_box_limit; /*<  Max CROP boxes.*/
 uint16_t var_box_limit; /*<  Max VAR boxes.*/
 uint8_t mode; /*<  Detection mode.*/
 uint8_t sorting_mode; /*<  Sorting mode.*/
 uint8_t creation_score_scale; /*<  Heuristic weight.*/
 uint8_t bonus_detection_scale; /*<  Heuristic weight.*/
 uint8_t bonus_redetection_scale; /*<  Heuristic weight.*/
 uint8_t missed_detection_penalty; /*<  Heuristic penalty.*/
 uint8_t missed_redetection_penalty; /*<  Heuristic penalty.*/
} mavlink_sv_detection_parameters_t;

#define MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN 27
#define MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN 27
#define MAVLINK_MSG_ID_40005_LEN 27
#define MAVLINK_MSG_ID_40005_MIN_LEN 27

#define MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC 217
#define MAVLINK_MSG_ID_40005_CRC 217



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_DETECTION_PARAMETERS { \
    40005, \
    "SV_DETECTION_PARAMETERS", \
    13, \
    {  { "crop_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_detection_parameters_t, crop_confidence_threshold) }, \
         { "var_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sv_detection_parameters_t, var_confidence_threshold) }, \
         { "crop_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sv_detection_parameters_t, crop_box_overlap) }, \
         { "var_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sv_detection_parameters_t, var_box_overlap) }, \
         { "crop_box_limit", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_sv_detection_parameters_t, crop_box_limit) }, \
         { "var_box_limit", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_sv_detection_parameters_t, var_box_limit) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_sv_detection_parameters_t, mode) }, \
         { "sorting_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_sv_detection_parameters_t, sorting_mode) }, \
         { "creation_score_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_sv_detection_parameters_t, creation_score_scale) }, \
         { "bonus_detection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_sv_detection_parameters_t, bonus_detection_scale) }, \
         { "bonus_redetection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_sv_detection_parameters_t, bonus_redetection_scale) }, \
         { "missed_detection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_sv_detection_parameters_t, missed_detection_penalty) }, \
         { "missed_redetection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_sv_detection_parameters_t, missed_redetection_penalty) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_DETECTION_PARAMETERS { \
    "SV_DETECTION_PARAMETERS", \
    13, \
    {  { "crop_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_detection_parameters_t, crop_confidence_threshold) }, \
         { "var_confidence_threshold", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sv_detection_parameters_t, var_confidence_threshold) }, \
         { "crop_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sv_detection_parameters_t, crop_box_overlap) }, \
         { "var_box_overlap", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sv_detection_parameters_t, var_box_overlap) }, \
         { "crop_box_limit", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_sv_detection_parameters_t, crop_box_limit) }, \
         { "var_box_limit", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_sv_detection_parameters_t, var_box_limit) }, \
         { "mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_sv_detection_parameters_t, mode) }, \
         { "sorting_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_sv_detection_parameters_t, sorting_mode) }, \
         { "creation_score_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_sv_detection_parameters_t, creation_score_scale) }, \
         { "bonus_detection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_sv_detection_parameters_t, bonus_detection_scale) }, \
         { "bonus_redetection_scale", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_sv_detection_parameters_t, bonus_redetection_scale) }, \
         { "missed_detection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_sv_detection_parameters_t, missed_detection_penalty) }, \
         { "missed_redetection_penalty", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_sv_detection_parameters_t, missed_redetection_penalty) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_detection_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param crop_confidence_threshold  [0..1]
 * @param var_confidence_threshold  [0..1]
 * @param crop_box_overlap  [0..1]
 * @param var_box_overlap  [0..1]
 * @param crop_box_limit  Max CROP boxes.
 * @param var_box_limit  Max VAR boxes.
 * @param mode  Detection mode.
 * @param sorting_mode  Sorting mode.
 * @param creation_score_scale  Heuristic weight.
 * @param bonus_detection_scale  Heuristic weight.
 * @param bonus_redetection_scale  Heuristic weight.
 * @param missed_detection_penalty  Heuristic penalty.
 * @param missed_redetection_penalty  Heuristic penalty.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint16_t crop_box_limit, uint16_t var_box_limit, uint8_t mode, uint8_t sorting_mode, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint16_t(buf, 16, crop_box_limit);
    _mav_put_uint16_t(buf, 18, var_box_limit);
    _mav_put_uint8_t(buf, 20, mode);
    _mav_put_uint8_t(buf, 21, sorting_mode);
    _mav_put_uint8_t(buf, 22, creation_score_scale);
    _mav_put_uint8_t(buf, 23, bonus_detection_scale);
    _mav_put_uint8_t(buf, 24, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 25, missed_detection_penalty);
    _mav_put_uint8_t(buf, 26, missed_redetection_penalty);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#else
    mavlink_sv_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.crop_box_limit = crop_box_limit;
    packet.var_box_limit = var_box_limit;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_detection_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param crop_confidence_threshold  [0..1]
 * @param var_confidence_threshold  [0..1]
 * @param crop_box_overlap  [0..1]
 * @param var_box_overlap  [0..1]
 * @param crop_box_limit  Max CROP boxes.
 * @param var_box_limit  Max VAR boxes.
 * @param mode  Detection mode.
 * @param sorting_mode  Sorting mode.
 * @param creation_score_scale  Heuristic weight.
 * @param bonus_detection_scale  Heuristic weight.
 * @param bonus_redetection_scale  Heuristic weight.
 * @param missed_detection_penalty  Heuristic penalty.
 * @param missed_redetection_penalty  Heuristic penalty.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint16_t crop_box_limit, uint16_t var_box_limit, uint8_t mode, uint8_t sorting_mode, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint16_t(buf, 16, crop_box_limit);
    _mav_put_uint16_t(buf, 18, var_box_limit);
    _mav_put_uint8_t(buf, 20, mode);
    _mav_put_uint8_t(buf, 21, sorting_mode);
    _mav_put_uint8_t(buf, 22, creation_score_scale);
    _mav_put_uint8_t(buf, 23, bonus_detection_scale);
    _mav_put_uint8_t(buf, 24, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 25, missed_detection_penalty);
    _mav_put_uint8_t(buf, 26, missed_redetection_penalty);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#else
    mavlink_sv_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.crop_box_limit = crop_box_limit;
    packet.var_box_limit = var_box_limit;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_detection_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param crop_confidence_threshold  [0..1]
 * @param var_confidence_threshold  [0..1]
 * @param crop_box_overlap  [0..1]
 * @param var_box_overlap  [0..1]
 * @param crop_box_limit  Max CROP boxes.
 * @param var_box_limit  Max VAR boxes.
 * @param mode  Detection mode.
 * @param sorting_mode  Sorting mode.
 * @param creation_score_scale  Heuristic weight.
 * @param bonus_detection_scale  Heuristic weight.
 * @param bonus_redetection_scale  Heuristic weight.
 * @param missed_detection_penalty  Heuristic penalty.
 * @param missed_redetection_penalty  Heuristic penalty.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float crop_confidence_threshold,float var_confidence_threshold,float crop_box_overlap,float var_box_overlap,uint16_t crop_box_limit,uint16_t var_box_limit,uint8_t mode,uint8_t sorting_mode,uint8_t creation_score_scale,uint8_t bonus_detection_scale,uint8_t bonus_redetection_scale,uint8_t missed_detection_penalty,uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint16_t(buf, 16, crop_box_limit);
    _mav_put_uint16_t(buf, 18, var_box_limit);
    _mav_put_uint8_t(buf, 20, mode);
    _mav_put_uint8_t(buf, 21, sorting_mode);
    _mav_put_uint8_t(buf, 22, creation_score_scale);
    _mav_put_uint8_t(buf, 23, bonus_detection_scale);
    _mav_put_uint8_t(buf, 24, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 25, missed_detection_penalty);
    _mav_put_uint8_t(buf, 26, missed_redetection_penalty);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#else
    mavlink_sv_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.crop_box_limit = crop_box_limit;
    packet.var_box_limit = var_box_limit;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_detection_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_detection_parameters_t* sv_detection_parameters)
{
    return mavlink_msg_sv_detection_parameters_pack(system_id, component_id, msg, sv_detection_parameters->crop_confidence_threshold, sv_detection_parameters->var_confidence_threshold, sv_detection_parameters->crop_box_overlap, sv_detection_parameters->var_box_overlap, sv_detection_parameters->crop_box_limit, sv_detection_parameters->var_box_limit, sv_detection_parameters->mode, sv_detection_parameters->sorting_mode, sv_detection_parameters->creation_score_scale, sv_detection_parameters->bonus_detection_scale, sv_detection_parameters->bonus_redetection_scale, sv_detection_parameters->missed_detection_penalty, sv_detection_parameters->missed_redetection_penalty);
}

/**
 * @brief Encode a sv_detection_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_detection_parameters_t* sv_detection_parameters)
{
    return mavlink_msg_sv_detection_parameters_pack_chan(system_id, component_id, chan, msg, sv_detection_parameters->crop_confidence_threshold, sv_detection_parameters->var_confidence_threshold, sv_detection_parameters->crop_box_overlap, sv_detection_parameters->var_box_overlap, sv_detection_parameters->crop_box_limit, sv_detection_parameters->var_box_limit, sv_detection_parameters->mode, sv_detection_parameters->sorting_mode, sv_detection_parameters->creation_score_scale, sv_detection_parameters->bonus_detection_scale, sv_detection_parameters->bonus_redetection_scale, sv_detection_parameters->missed_detection_penalty, sv_detection_parameters->missed_redetection_penalty);
}

/**
 * @brief Encode a sv_detection_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_detection_parameters_t* sv_detection_parameters)
{
    return mavlink_msg_sv_detection_parameters_pack_status(system_id, component_id, _status, msg,  sv_detection_parameters->crop_confidence_threshold, sv_detection_parameters->var_confidence_threshold, sv_detection_parameters->crop_box_overlap, sv_detection_parameters->var_box_overlap, sv_detection_parameters->crop_box_limit, sv_detection_parameters->var_box_limit, sv_detection_parameters->mode, sv_detection_parameters->sorting_mode, sv_detection_parameters->creation_score_scale, sv_detection_parameters->bonus_detection_scale, sv_detection_parameters->bonus_redetection_scale, sv_detection_parameters->missed_detection_penalty, sv_detection_parameters->missed_redetection_penalty);
}

/**
 * @brief Send a sv_detection_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param crop_confidence_threshold  [0..1]
 * @param var_confidence_threshold  [0..1]
 * @param crop_box_overlap  [0..1]
 * @param var_box_overlap  [0..1]
 * @param crop_box_limit  Max CROP boxes.
 * @param var_box_limit  Max VAR boxes.
 * @param mode  Detection mode.
 * @param sorting_mode  Sorting mode.
 * @param creation_score_scale  Heuristic weight.
 * @param bonus_detection_scale  Heuristic weight.
 * @param bonus_redetection_scale  Heuristic weight.
 * @param missed_detection_penalty  Heuristic penalty.
 * @param missed_redetection_penalty  Heuristic penalty.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_detection_parameters_send(mavlink_channel_t chan, float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint16_t crop_box_limit, uint16_t var_box_limit, uint8_t mode, uint8_t sorting_mode, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint16_t(buf, 16, crop_box_limit);
    _mav_put_uint16_t(buf, 18, var_box_limit);
    _mav_put_uint8_t(buf, 20, mode);
    _mav_put_uint8_t(buf, 21, sorting_mode);
    _mav_put_uint8_t(buf, 22, creation_score_scale);
    _mav_put_uint8_t(buf, 23, bonus_detection_scale);
    _mav_put_uint8_t(buf, 24, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 25, missed_detection_penalty);
    _mav_put_uint8_t(buf, 26, missed_redetection_penalty);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS, buf, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
#else
    mavlink_sv_detection_parameters_t packet;
    packet.crop_confidence_threshold = crop_confidence_threshold;
    packet.var_confidence_threshold = var_confidence_threshold;
    packet.crop_box_overlap = crop_box_overlap;
    packet.var_box_overlap = var_box_overlap;
    packet.crop_box_limit = crop_box_limit;
    packet.var_box_limit = var_box_limit;
    packet.mode = mode;
    packet.sorting_mode = sorting_mode;
    packet.creation_score_scale = creation_score_scale;
    packet.bonus_detection_scale = bonus_detection_scale;
    packet.bonus_redetection_scale = bonus_redetection_scale;
    packet.missed_detection_penalty = missed_detection_penalty;
    packet.missed_redetection_penalty = missed_redetection_penalty;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_detection_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_detection_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_detection_parameters_t* sv_detection_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_detection_parameters_send(chan, sv_detection_parameters->crop_confidence_threshold, sv_detection_parameters->var_confidence_threshold, sv_detection_parameters->crop_box_overlap, sv_detection_parameters->var_box_overlap, sv_detection_parameters->crop_box_limit, sv_detection_parameters->var_box_limit, sv_detection_parameters->mode, sv_detection_parameters->sorting_mode, sv_detection_parameters->creation_score_scale, sv_detection_parameters->bonus_detection_scale, sv_detection_parameters->bonus_redetection_scale, sv_detection_parameters->missed_detection_penalty, sv_detection_parameters->missed_redetection_penalty);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS, (const char *)sv_detection_parameters, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_detection_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float crop_confidence_threshold, float var_confidence_threshold, float crop_box_overlap, float var_box_overlap, uint16_t crop_box_limit, uint16_t var_box_limit, uint8_t mode, uint8_t sorting_mode, uint8_t creation_score_scale, uint8_t bonus_detection_scale, uint8_t bonus_redetection_scale, uint8_t missed_detection_penalty, uint8_t missed_redetection_penalty)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, crop_confidence_threshold);
    _mav_put_float(buf, 4, var_confidence_threshold);
    _mav_put_float(buf, 8, crop_box_overlap);
    _mav_put_float(buf, 12, var_box_overlap);
    _mav_put_uint16_t(buf, 16, crop_box_limit);
    _mav_put_uint16_t(buf, 18, var_box_limit);
    _mav_put_uint8_t(buf, 20, mode);
    _mav_put_uint8_t(buf, 21, sorting_mode);
    _mav_put_uint8_t(buf, 22, creation_score_scale);
    _mav_put_uint8_t(buf, 23, bonus_detection_scale);
    _mav_put_uint8_t(buf, 24, bonus_redetection_scale);
    _mav_put_uint8_t(buf, 25, missed_detection_penalty);
    _mav_put_uint8_t(buf, 26, missed_redetection_penalty);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS, buf, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
#else
    mavlink_sv_detection_parameters_t *packet = (mavlink_sv_detection_parameters_t *)msgbuf;
    packet->crop_confidence_threshold = crop_confidence_threshold;
    packet->var_confidence_threshold = var_confidence_threshold;
    packet->crop_box_overlap = crop_box_overlap;
    packet->var_box_overlap = var_box_overlap;
    packet->crop_box_limit = crop_box_limit;
    packet->var_box_limit = var_box_limit;
    packet->mode = mode;
    packet->sorting_mode = sorting_mode;
    packet->creation_score_scale = creation_score_scale;
    packet->bonus_detection_scale = bonus_detection_scale;
    packet->bonus_redetection_scale = bonus_redetection_scale;
    packet->missed_detection_penalty = missed_detection_penalty;
    packet->missed_redetection_penalty = missed_redetection_penalty;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_DETECTION_PARAMETERS UNPACKING


/**
 * @brief Get field crop_confidence_threshold from sv_detection_parameters message
 *
 * @return  [0..1]
 */
static inline float mavlink_msg_sv_detection_parameters_get_crop_confidence_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field var_confidence_threshold from sv_detection_parameters message
 *
 * @return  [0..1]
 */
static inline float mavlink_msg_sv_detection_parameters_get_var_confidence_threshold(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field crop_box_overlap from sv_detection_parameters message
 *
 * @return  [0..1]
 */
static inline float mavlink_msg_sv_detection_parameters_get_crop_box_overlap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field var_box_overlap from sv_detection_parameters message
 *
 * @return  [0..1]
 */
static inline float mavlink_msg_sv_detection_parameters_get_var_box_overlap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field crop_box_limit from sv_detection_parameters message
 *
 * @return  Max CROP boxes.
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_get_crop_box_limit(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field var_box_limit from sv_detection_parameters message
 *
 * @return  Max VAR boxes.
 */
static inline uint16_t mavlink_msg_sv_detection_parameters_get_var_box_limit(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field mode from sv_detection_parameters message
 *
 * @return  Detection mode.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field sorting_mode from sv_detection_parameters message
 *
 * @return  Sorting mode.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_sorting_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field creation_score_scale from sv_detection_parameters message
 *
 * @return  Heuristic weight.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_creation_score_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field bonus_detection_scale from sv_detection_parameters message
 *
 * @return  Heuristic weight.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_bonus_detection_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  23);
}

/**
 * @brief Get field bonus_redetection_scale from sv_detection_parameters message
 *
 * @return  Heuristic weight.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_bonus_redetection_scale(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field missed_detection_penalty from sv_detection_parameters message
 *
 * @return  Heuristic penalty.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_missed_detection_penalty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field missed_redetection_penalty from sv_detection_parameters message
 *
 * @return  Heuristic penalty.
 */
static inline uint8_t mavlink_msg_sv_detection_parameters_get_missed_redetection_penalty(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Decode a sv_detection_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_detection_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_detection_parameters_decode(const mavlink_message_t* msg, mavlink_sv_detection_parameters_t* sv_detection_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_detection_parameters->crop_confidence_threshold = mavlink_msg_sv_detection_parameters_get_crop_confidence_threshold(msg);
    sv_detection_parameters->var_confidence_threshold = mavlink_msg_sv_detection_parameters_get_var_confidence_threshold(msg);
    sv_detection_parameters->crop_box_overlap = mavlink_msg_sv_detection_parameters_get_crop_box_overlap(msg);
    sv_detection_parameters->var_box_overlap = mavlink_msg_sv_detection_parameters_get_var_box_overlap(msg);
    sv_detection_parameters->crop_box_limit = mavlink_msg_sv_detection_parameters_get_crop_box_limit(msg);
    sv_detection_parameters->var_box_limit = mavlink_msg_sv_detection_parameters_get_var_box_limit(msg);
    sv_detection_parameters->mode = mavlink_msg_sv_detection_parameters_get_mode(msg);
    sv_detection_parameters->sorting_mode = mavlink_msg_sv_detection_parameters_get_sorting_mode(msg);
    sv_detection_parameters->creation_score_scale = mavlink_msg_sv_detection_parameters_get_creation_score_scale(msg);
    sv_detection_parameters->bonus_detection_scale = mavlink_msg_sv_detection_parameters_get_bonus_detection_scale(msg);
    sv_detection_parameters->bonus_redetection_scale = mavlink_msg_sv_detection_parameters_get_bonus_redetection_scale(msg);
    sv_detection_parameters->missed_detection_penalty = mavlink_msg_sv_detection_parameters_get_missed_detection_penalty(msg);
    sv_detection_parameters->missed_redetection_penalty = mavlink_msg_sv_detection_parameters_get_missed_redetection_penalty(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN;
        memset(sv_detection_parameters, 0, MAVLINK_MSG_ID_SV_DETECTION_PARAMETERS_LEN);
    memcpy(sv_detection_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
