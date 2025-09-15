#pragma once
// MESSAGE SV_DETECTED_ROI_PARAMETERS PACKING

#define MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS 40006


typedef struct __mavlink_sv_detected_roi_parameters_t {
 float yaw_abs; /*<  Absolute yaw.*/
 float pitch_abs; /*<  Absolute pitch.*/
 float yaw_rel; /*<  Relative yaw.*/
 float pitch_rel; /*<  Relative pitch.*/
 float latitude; /*<  Latitude (deg).*/
 float longitude; /*<  Longitude (deg).*/
 float altitude; /*<  Altitude (m).*/
 float distance; /*<  Distance (m).*/
 uint8_t index; /*<  ROI index.*/
 uint8_t score; /*<  Score (0–100 or app-defined).*/
 uint8_t total_detections; /*<  Total detections in frame.*/
} mavlink_sv_detected_roi_parameters_t;

#define MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN 35
#define MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN 35
#define MAVLINK_MSG_ID_40006_LEN 35
#define MAVLINK_MSG_ID_40006_MIN_LEN 35

#define MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC 32
#define MAVLINK_MSG_ID_40006_CRC 32



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SV_DETECTED_ROI_PARAMETERS { \
    40006, \
    "SV_DETECTED_ROI_PARAMETERS", \
    11, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_sv_detected_roi_parameters_t, index) }, \
         { "score", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_sv_detected_roi_parameters_t, score) }, \
         { "total_detections", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_sv_detected_roi_parameters_t, total_detections) }, \
         { "yaw_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_detected_roi_parameters_t, yaw_abs) }, \
         { "pitch_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sv_detected_roi_parameters_t, pitch_abs) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sv_detected_roi_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sv_detected_roi_parameters_t, pitch_rel) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sv_detected_roi_parameters_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sv_detected_roi_parameters_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sv_detected_roi_parameters_t, altitude) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_sv_detected_roi_parameters_t, distance) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SV_DETECTED_ROI_PARAMETERS { \
    "SV_DETECTED_ROI_PARAMETERS", \
    11, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_sv_detected_roi_parameters_t, index) }, \
         { "score", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_sv_detected_roi_parameters_t, score) }, \
         { "total_detections", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_sv_detected_roi_parameters_t, total_detections) }, \
         { "yaw_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_sv_detected_roi_parameters_t, yaw_abs) }, \
         { "pitch_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_sv_detected_roi_parameters_t, pitch_abs) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_sv_detected_roi_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_sv_detected_roi_parameters_t, pitch_rel) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_sv_detected_roi_parameters_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_sv_detected_roi_parameters_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_sv_detected_roi_parameters_t, altitude) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_sv_detected_roi_parameters_t, distance) }, \
         } \
}
#endif

/**
 * @brief Pack a sv_detected_roi_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  ROI index.
 * @param score  Score (0–100 or app-defined).
 * @param total_detections  Total detections in frame.
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param latitude  Latitude (deg).
 * @param longitude  Longitude (deg).
 * @param altitude  Altitude (m).
 * @param distance  Distance (m).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_detected_roi_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_abs);
    _mav_put_float(buf, 4, pitch_abs);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_uint8_t(buf, 32, index);
    _mav_put_uint8_t(buf, 33, score);
    _mav_put_uint8_t(buf, 34, total_detections);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#else
    mavlink_sv_detected_roi_parameters_t packet;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
}

/**
 * @brief Pack a sv_detected_roi_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  ROI index.
 * @param score  Score (0–100 or app-defined).
 * @param total_detections  Total detections in frame.
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param latitude  Latitude (deg).
 * @param longitude  Longitude (deg).
 * @param altitude  Altitude (m).
 * @param distance  Distance (m).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_detected_roi_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_abs);
    _mav_put_float(buf, 4, pitch_abs);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_uint8_t(buf, 32, index);
    _mav_put_uint8_t(buf, 33, score);
    _mav_put_uint8_t(buf, 34, total_detections);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#else
    mavlink_sv_detected_roi_parameters_t packet;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a sv_detected_roi_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index  ROI index.
 * @param score  Score (0–100 or app-defined).
 * @param total_detections  Total detections in frame.
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param latitude  Latitude (deg).
 * @param longitude  Longitude (deg).
 * @param altitude  Altitude (m).
 * @param distance  Distance (m).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sv_detected_roi_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,uint8_t score,uint8_t total_detections,float yaw_abs,float pitch_abs,float yaw_rel,float pitch_rel,float latitude,float longitude,float altitude,float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_abs);
    _mav_put_float(buf, 4, pitch_abs);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_uint8_t(buf, 32, index);
    _mav_put_uint8_t(buf, 33, score);
    _mav_put_uint8_t(buf, 34, total_detections);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#else
    mavlink_sv_detected_roi_parameters_t packet;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
}

/**
 * @brief Encode a sv_detected_roi_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sv_detected_roi_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_detected_roi_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sv_detected_roi_parameters_t* sv_detected_roi_parameters)
{
    return mavlink_msg_sv_detected_roi_parameters_pack(system_id, component_id, msg, sv_detected_roi_parameters->index, sv_detected_roi_parameters->score, sv_detected_roi_parameters->total_detections, sv_detected_roi_parameters->yaw_abs, sv_detected_roi_parameters->pitch_abs, sv_detected_roi_parameters->yaw_rel, sv_detected_roi_parameters->pitch_rel, sv_detected_roi_parameters->latitude, sv_detected_roi_parameters->longitude, sv_detected_roi_parameters->altitude, sv_detected_roi_parameters->distance);
}

/**
 * @brief Encode a sv_detected_roi_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param sv_detected_roi_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_detected_roi_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_sv_detected_roi_parameters_t* sv_detected_roi_parameters)
{
    return mavlink_msg_sv_detected_roi_parameters_pack_chan(system_id, component_id, chan, msg, sv_detected_roi_parameters->index, sv_detected_roi_parameters->score, sv_detected_roi_parameters->total_detections, sv_detected_roi_parameters->yaw_abs, sv_detected_roi_parameters->pitch_abs, sv_detected_roi_parameters->yaw_rel, sv_detected_roi_parameters->pitch_rel, sv_detected_roi_parameters->latitude, sv_detected_roi_parameters->longitude, sv_detected_roi_parameters->altitude, sv_detected_roi_parameters->distance);
}

/**
 * @brief Encode a sv_detected_roi_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param sv_detected_roi_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sv_detected_roi_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_sv_detected_roi_parameters_t* sv_detected_roi_parameters)
{
    return mavlink_msg_sv_detected_roi_parameters_pack_status(system_id, component_id, _status, msg,  sv_detected_roi_parameters->index, sv_detected_roi_parameters->score, sv_detected_roi_parameters->total_detections, sv_detected_roi_parameters->yaw_abs, sv_detected_roi_parameters->pitch_abs, sv_detected_roi_parameters->yaw_rel, sv_detected_roi_parameters->pitch_rel, sv_detected_roi_parameters->latitude, sv_detected_roi_parameters->longitude, sv_detected_roi_parameters->altitude, sv_detected_roi_parameters->distance);
}

/**
 * @brief Send a sv_detected_roi_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param index  ROI index.
 * @param score  Score (0–100 or app-defined).
 * @param total_detections  Total detections in frame.
 * @param yaw_abs  Absolute yaw.
 * @param pitch_abs  Absolute pitch.
 * @param yaw_rel  Relative yaw.
 * @param pitch_rel  Relative pitch.
 * @param latitude  Latitude (deg).
 * @param longitude  Longitude (deg).
 * @param altitude  Altitude (m).
 * @param distance  Distance (m).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sv_detected_roi_parameters_send(mavlink_channel_t chan, uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_abs);
    _mav_put_float(buf, 4, pitch_abs);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_uint8_t(buf, 32, index);
    _mav_put_uint8_t(buf, 33, score);
    _mav_put_uint8_t(buf, 34, total_detections);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS, buf, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
#else
    mavlink_sv_detected_roi_parameters_t packet;
    packet.yaw_abs = yaw_abs;
    packet.pitch_abs = pitch_abs;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a sv_detected_roi_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_sv_detected_roi_parameters_send_struct(mavlink_channel_t chan, const mavlink_sv_detected_roi_parameters_t* sv_detected_roi_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_sv_detected_roi_parameters_send(chan, sv_detected_roi_parameters->index, sv_detected_roi_parameters->score, sv_detected_roi_parameters->total_detections, sv_detected_roi_parameters->yaw_abs, sv_detected_roi_parameters->pitch_abs, sv_detected_roi_parameters->yaw_rel, sv_detected_roi_parameters->pitch_rel, sv_detected_roi_parameters->latitude, sv_detected_roi_parameters->longitude, sv_detected_roi_parameters->altitude, sv_detected_roi_parameters->distance);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS, (const char *)sv_detected_roi_parameters, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_sv_detected_roi_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, yaw_abs);
    _mav_put_float(buf, 4, pitch_abs);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_uint8_t(buf, 32, index);
    _mav_put_uint8_t(buf, 33, score);
    _mav_put_uint8_t(buf, 34, total_detections);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS, buf, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
#else
    mavlink_sv_detected_roi_parameters_t *packet = (mavlink_sv_detected_roi_parameters_t *)msgbuf;
    packet->yaw_abs = yaw_abs;
    packet->pitch_abs = pitch_abs;
    packet->yaw_rel = yaw_rel;
    packet->pitch_rel = pitch_rel;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->altitude = altitude;
    packet->distance = distance;
    packet->index = index;
    packet->score = score;
    packet->total_detections = total_detections;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE SV_DETECTED_ROI_PARAMETERS UNPACKING


/**
 * @brief Get field index from sv_detected_roi_parameters message
 *
 * @return  ROI index.
 */
static inline uint8_t mavlink_msg_sv_detected_roi_parameters_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field score from sv_detected_roi_parameters message
 *
 * @return  Score (0–100 or app-defined).
 */
static inline uint8_t mavlink_msg_sv_detected_roi_parameters_get_score(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field total_detections from sv_detected_roi_parameters message
 *
 * @return  Total detections in frame.
 */
static inline uint8_t mavlink_msg_sv_detected_roi_parameters_get_total_detections(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field yaw_abs from sv_detected_roi_parameters message
 *
 * @return  Absolute yaw.
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_yaw_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch_abs from sv_detected_roi_parameters message
 *
 * @return  Absolute pitch.
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_pitch_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field yaw_rel from sv_detected_roi_parameters message
 *
 * @return  Relative yaw.
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_yaw_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch_rel from sv_detected_roi_parameters message
 *
 * @return  Relative pitch.
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_pitch_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field latitude from sv_detected_roi_parameters message
 *
 * @return  Latitude (deg).
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field longitude from sv_detected_roi_parameters message
 *
 * @return  Longitude (deg).
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field altitude from sv_detected_roi_parameters message
 *
 * @return  Altitude (m).
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field distance from sv_detected_roi_parameters message
 *
 * @return  Distance (m).
 */
static inline float mavlink_msg_sv_detected_roi_parameters_get_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a sv_detected_roi_parameters message into a struct
 *
 * @param msg The message to decode
 * @param sv_detected_roi_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_sv_detected_roi_parameters_decode(const mavlink_message_t* msg, mavlink_sv_detected_roi_parameters_t* sv_detected_roi_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    sv_detected_roi_parameters->yaw_abs = mavlink_msg_sv_detected_roi_parameters_get_yaw_abs(msg);
    sv_detected_roi_parameters->pitch_abs = mavlink_msg_sv_detected_roi_parameters_get_pitch_abs(msg);
    sv_detected_roi_parameters->yaw_rel = mavlink_msg_sv_detected_roi_parameters_get_yaw_rel(msg);
    sv_detected_roi_parameters->pitch_rel = mavlink_msg_sv_detected_roi_parameters_get_pitch_rel(msg);
    sv_detected_roi_parameters->latitude = mavlink_msg_sv_detected_roi_parameters_get_latitude(msg);
    sv_detected_roi_parameters->longitude = mavlink_msg_sv_detected_roi_parameters_get_longitude(msg);
    sv_detected_roi_parameters->altitude = mavlink_msg_sv_detected_roi_parameters_get_altitude(msg);
    sv_detected_roi_parameters->distance = mavlink_msg_sv_detected_roi_parameters_get_distance(msg);
    sv_detected_roi_parameters->index = mavlink_msg_sv_detected_roi_parameters_get_index(msg);
    sv_detected_roi_parameters->score = mavlink_msg_sv_detected_roi_parameters_get_score(msg);
    sv_detected_roi_parameters->total_detections = mavlink_msg_sv_detected_roi_parameters_get_total_detections(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN;
        memset(sv_detected_roi_parameters, 0, MAVLINK_MSG_ID_SV_DETECTED_ROI_PARAMETERS_LEN);
    memcpy(sv_detected_roi_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
