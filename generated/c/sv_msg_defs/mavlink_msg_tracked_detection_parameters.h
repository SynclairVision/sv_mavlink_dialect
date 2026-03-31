#pragma once
// MESSAGE TRACKED_DETECTION_PARAMETERS PACKING

#define MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS 40006


typedef struct __mavlink_tracked_detection_parameters_t {
 float yaw_global; /*<  Global yaw in radians (Tait-Bryan, vs true north).*/
 float pitch_global; /*<  Global pitch in radians (vs true north).*/
 float yaw_rel; /*<  Relative yaw in radians (vs camera center axis).*/
 float pitch_rel; /*<  Relative pitch in radians (vs camera center axis).*/
 float latitude; /*<  Detection latitude, currently 0 if not implemented.*/
 float longitude; /*<  Detection longitude, currently 0 if not implemented.*/
 float altitude; /*<  Detection altitude (m), currently 0 if not implemented.*/
 float distance; /*<  Distance to object in meters, currently 0 if not implemented.*/
 int16_t type; /*<  Detection class.*/
 uint8_t index; /*<  Requested or returned detection index (254/255 are special values).*/
 uint8_t score; /*<  Detection score.*/
 uint8_t total_detections; /*<  Number of detections returned across messages.*/
 uint8_t rel_frame_of_reference; /*<  Indicates the frame of reference for the relative yaw and pitch angles.*/
 float width; /*< Detection width on the lens in radians.*/
 float height; /*< Detection height on the lens in radians.*/
} mavlink_tracked_detection_parameters_t;

#define MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN 46
#define MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN 46
#define MAVLINK_MSG_ID_40006_LEN 46
#define MAVLINK_MSG_ID_40006_MIN_LEN 46

#define MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC 84
#define MAVLINK_MSG_ID_40006_CRC 84



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TRACKED_DETECTION_PARAMETERS { \
    40006, \
    "TRACKED_DETECTION_PARAMETERS", \
    15, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_tracked_detection_parameters_t, index) }, \
         { "score", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_tracked_detection_parameters_t, score) }, \
         { "total_detections", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_tracked_detection_parameters_t, total_detections) }, \
         { "type", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_tracked_detection_parameters_t, type) }, \
         { "yaw_global", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_tracked_detection_parameters_t, yaw_global) }, \
         { "pitch_global", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_tracked_detection_parameters_t, pitch_global) }, \
         { "rel_frame_of_reference", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_tracked_detection_parameters_t, rel_frame_of_reference) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_tracked_detection_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_tracked_detection_parameters_t, pitch_rel) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_tracked_detection_parameters_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_tracked_detection_parameters_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_tracked_detection_parameters_t, altitude) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_tracked_detection_parameters_t, distance) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 38, offsetof(mavlink_tracked_detection_parameters_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 42, offsetof(mavlink_tracked_detection_parameters_t, height) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TRACKED_DETECTION_PARAMETERS { \
    "TRACKED_DETECTION_PARAMETERS", \
    13, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_tracked_detection_parameters_t, index) }, \
         { "score", NULL, MAVLINK_TYPE_UINT8_T, 0, 35, offsetof(mavlink_tracked_detection_parameters_t, score) }, \
         { "total_detections", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_tracked_detection_parameters_t, total_detections) }, \
         { "type", NULL, MAVLINK_TYPE_INT16_T, 0, 32, offsetof(mavlink_tracked_detection_parameters_t, type) }, \
         { "yaw_global", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_tracked_detection_parameters_t, yaw_global) }, \
         { "pitch_global", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_tracked_detection_parameters_t, pitch_global) }, \
         { "rel_frame_of_reference", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_tracked_detection_parameters_t, rel_frame_of_reference) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_tracked_detection_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_tracked_detection_parameters_t, pitch_rel) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_tracked_detection_parameters_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_tracked_detection_parameters_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_tracked_detection_parameters_t, altitude) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_tracked_detection_parameters_t, distance) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 38, offsetof(mavlink_tracked_detection_parameters_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 42, offsetof(mavlink_tracked_detection_parameters_t, height) }, \
         } \
}
#endif

/**
 * @brief Pack a tracked_detection_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  Requested or returned detection index (254/255 are special values).
 * @param score  Detection score.
 * @param total_detections  Number of detections returned across messages.
 * @param type  Detection class.
 * @param yaw_global  Global yaw in radians (Tait-Bryan, vs true north).
 * @param pitch_global  Global pitch in radians (vs true north).
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch angles.
 * @param yaw_rel  Relative yaw in radians (vs camera center axis).
 * @param pitch_rel  Relative pitch in radians (vs camera center axis).
 * @param latitude  Detection latitude, currently 0 if not implemented.
 * @param longitude  Detection longitude, currently 0 if not implemented.
 * @param altitude  Detection altitude (m), currently 0 if not implemented.
 * @param distance  Distance to object in meters, currently 0 if not implemented.
 * @param width  Detection width on the lens in radians.
 * @param height  Detection height on the lens in radians.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tracked_detection_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, uint8_t score, uint8_t total_detections, int16_t type, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, 
                               float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance, float width, float height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_global);
    _mav_put_float(buf, 4, pitch_global);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_int16_t(buf, 32, type);
    _mav_put_uint8_t(buf, 34, index);
    _mav_put_uint8_t(buf, 35, score);
    _mav_put_uint8_t(buf, 36, total_detections);
    _mav_put_uint8_t(buf, 37, rel_frame_of_reference);
    _mav_put_float(buf, 38, width);
    _mav_put_float(buf, 42, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#else
    mavlink_tracked_detection_parameters_t packet;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.type = type;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    packet.width = width;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
}

/**
 * @brief Pack a tracked_detection_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  Requested or returned detection index (254/255 are special values).
 * @param score  Detection score.
 * @param total_detections  Number of detections returned across messages.
 * @param type  Detection class.
 * @param yaw_global  Global yaw in radians (Tait-Bryan, vs true north).
 * @param pitch_global  Global pitch in radians (vs true north).
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch angles.
 * @param yaw_rel  Relative yaw in radians (vs camera center axis).
 * @param pitch_rel  Relative pitch in radians (vs camera center axis).
 * @param latitude  Detection latitude, currently 0 if not implemented.
 * @param longitude  Detection longitude, currently 0 if not implemented.
 * @param altitude  Detection altitude (m), currently 0 if not implemented.
 * @param distance  Distance to object in meters, currently 0 if not implemented.
 * @param width  Detection width on the lens in radians.
 * @param height  Detection height on the lens in radians.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tracked_detection_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t index, uint8_t score, uint8_t total_detections, int16_t type, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, 
                               float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance, float width, float height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_global);
    _mav_put_float(buf, 4, pitch_global);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_int16_t(buf, 32, type);
    _mav_put_uint8_t(buf, 34, index);
    _mav_put_uint8_t(buf, 35, score);
    _mav_put_uint8_t(buf, 36, total_detections);
    _mav_put_uint8_t(buf, 37, rel_frame_of_reference);
    _mav_put_float(buf, 38, width);
    _mav_put_float(buf, 42, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#else
    mavlink_tracked_detection_parameters_t packet;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.type = type;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    packet.width = width;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a tracked_detection_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index  Requested or returned detection index (254/255 are special values).
 * @param score  Detection score.
 * @param total_detections  Number of detections returned across messages.
 * @param type  Detection class.
 * @param yaw_global  Global yaw in radians (Tait-Bryan, vs true north).
 * @param pitch_global  Global pitch in radians (vs true north).
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch angles.
 * @param yaw_rel  Relative yaw in radians (vs camera center axis).
 * @param pitch_rel  Relative pitch in radians (vs camera center axis).
 * @param latitude  Detection latitude, currently 0 if not implemented.
 * @param longitude  Detection longitude, currently 0 if not implemented.
 * @param altitude  Detection altitude (m), currently 0 if not implemented.
 * @param distance  Distance to object in meters, currently 0 if not implemented.
 * @param width  Detection width on the lens in radians.
 * @param height  Detection height on the lens in radians.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_tracked_detection_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,uint8_t score,uint8_t total_detections,int16_t type,float yaw_global,float pitch_global,uint8_t rel_frame_of_reference,float yaw_rel,
                                   float pitch_rel,float latitude,float longitude,float altitude,float distance, float width, float height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_global);
    _mav_put_float(buf, 4, pitch_global);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_int16_t(buf, 32, type);
    _mav_put_uint8_t(buf, 34, index);
    _mav_put_uint8_t(buf, 35, score);
    _mav_put_uint8_t(buf, 36, total_detections);
    _mav_put_uint8_t(buf, 37, rel_frame_of_reference);
    _mav_put_float(buf, 38, width);
    _mav_put_float(buf, 42, height);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#else
    mavlink_tracked_detection_parameters_t packet;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.type = type;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    packet.width = width;
    packet.height = height;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
}

/**
 * @brief Encode a tracked_detection_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param tracked_detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tracked_detection_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_tracked_detection_parameters_t* tracked_detection_parameters)
{
    return mavlink_msg_tracked_detection_parameters_pack(system_id, component_id, msg, tracked_detection_parameters->index, tracked_detection_parameters->score, tracked_detection_parameters->total_detections, tracked_detection_parameters->type, tracked_detection_parameters->yaw_global, tracked_detection_parameters->pitch_global, 
        tracked_detection_parameters->rel_frame_of_reference, tracked_detection_parameters->yaw_rel, tracked_detection_parameters->pitch_rel, tracked_detection_parameters->latitude, tracked_detection_parameters->longitude, tracked_detection_parameters->altitude, tracked_detection_parameters->distance, tracked_detection_parameters->width, tracked_detection_parameters->height);
}

/**
 * @brief Encode a tracked_detection_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param tracked_detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tracked_detection_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_tracked_detection_parameters_t* tracked_detection_parameters)
{
    return mavlink_msg_tracked_detection_parameters_pack_chan(system_id, component_id, chan, msg, tracked_detection_parameters->index, tracked_detection_parameters->score, tracked_detection_parameters->total_detections, tracked_detection_parameters->type, tracked_detection_parameters->yaw_global, tracked_detection_parameters->pitch_global, 
        tracked_detection_parameters->rel_frame_of_reference, tracked_detection_parameters->yaw_rel, tracked_detection_parameters->pitch_rel, tracked_detection_parameters->latitude, tracked_detection_parameters->longitude, tracked_detection_parameters->altitude, tracked_detection_parameters->distance, tracked_detection_parameters->width, tracked_detection_parameters->height);
}

/**
 * @brief Encode a tracked_detection_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param tracked_detection_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_tracked_detection_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_tracked_detection_parameters_t* tracked_detection_parameters)
{
    return mavlink_msg_tracked_detection_parameters_pack_status(system_id, component_id, _status, msg,  tracked_detection_parameters->index, tracked_detection_parameters->score, tracked_detection_parameters->total_detections, tracked_detection_parameters->type, tracked_detection_parameters->yaw_global, tracked_detection_parameters->pitch_global, 
        tracked_detection_parameters->rel_frame_of_reference, tracked_detection_parameters->yaw_rel, tracked_detection_parameters->pitch_rel, tracked_detection_parameters->latitude, tracked_detection_parameters->longitude, tracked_detection_parameters->altitude, tracked_detection_parameters->distance, tracked_detection_parameters->width, tracked_detection_parameters->height);
}

/**
 * @brief Send a tracked_detection_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param index  Requested or returned detection index (254/255 are special values).
 * @param score  Detection score.
 * @param total_detections  Number of detections returned across messages.
 * @param type  Detection class.
 * @param yaw_global  Global yaw in radians (Tait-Bryan, vs true north).
 * @param pitch_global  Global pitch in radians (vs true north).
 * @param rel_frame_of_reference  Indicates the frame of reference for the relative yaw and pitch angles.
 * @param yaw_rel  Relative yaw in radians (vs camera center axis).
 * @param pitch_rel  Relative pitch in radians (vs camera center axis).
 * @param latitude  Detection latitude, currently 0 if not implemented.
 * @param longitude  Detection longitude, currently 0 if not implemented.
 * @param altitude  Detection altitude (m), currently 0 if not implemented.
 * @param distance  Distance to object in meters, currently 0 if not implemented.
 * @param width  Detection width on the lens in radians.
 * @param height  Detection height on the lens in radians.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_tracked_detection_parameters_send(mavlink_channel_t chan, uint8_t index, uint8_t score, uint8_t total_detections, int16_t type, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, 
    float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance, float width, float height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN];
    _mav_put_float(buf, 0, yaw_global);
    _mav_put_float(buf, 4, pitch_global);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_int16_t(buf, 32, type);
    _mav_put_uint8_t(buf, 34, index);
    _mav_put_uint8_t(buf, 35, score);
    _mav_put_uint8_t(buf, 36, total_detections);
    _mav_put_uint8_t(buf, 37, rel_frame_of_reference);
    _mav_put_float(buf, 38, width);
    _mav_put_float(buf, 42, height);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS, buf, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
#else
    mavlink_tracked_detection_parameters_t packet;
    packet.yaw_global = yaw_global;
    packet.pitch_global = pitch_global;
    packet.yaw_rel = yaw_rel;
    packet.pitch_rel = pitch_rel;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.altitude = altitude;
    packet.distance = distance;
    packet.type = type;
    packet.index = index;
    packet.score = score;
    packet.total_detections = total_detections;
    packet.rel_frame_of_reference = rel_frame_of_reference;
    packet.width = width;
    packet.height = height;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a tracked_detection_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_tracked_detection_parameters_send_struct(mavlink_channel_t chan, const mavlink_tracked_detection_parameters_t* tracked_detection_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_tracked_detection_parameters_send(chan, tracked_detection_parameters->index, tracked_detection_parameters->score, tracked_detection_parameters->total_detections, tracked_detection_parameters->type, tracked_detection_parameters->yaw_global, tracked_detection_parameters->pitch_global, tracked_detection_parameters->rel_frame_of_reference, tracked_detection_parameters->yaw_rel, tracked_detection_parameters->pitch_rel, tracked_detection_parameters->latitude, tracked_detection_parameters->longitude, tracked_detection_parameters->altitude, tracked_detection_parameters->distance);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS, (const char *)tracked_detection_parameters, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_tracked_detection_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, uint8_t score, uint8_t total_detections, int16_t type, float yaw_global, float pitch_global, uint8_t rel_frame_of_reference, float yaw_rel, float pitch_rel, 
    float latitude, float longitude, float altitude, float distance, float width, float height)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, yaw_global);
    _mav_put_float(buf, 4, pitch_global);
    _mav_put_float(buf, 8, yaw_rel);
    _mav_put_float(buf, 12, pitch_rel);
    _mav_put_float(buf, 16, latitude);
    _mav_put_float(buf, 20, longitude);
    _mav_put_float(buf, 24, altitude);
    _mav_put_float(buf, 28, distance);
    _mav_put_int16_t(buf, 32, type);
    _mav_put_uint8_t(buf, 34, index);
    _mav_put_uint8_t(buf, 35, score);
    _mav_put_uint8_t(buf, 36, total_detections);
    _mav_put_uint8_t(buf, 37, rel_frame_of_reference);
    _mav_put_float(buf, 38, width);
    _mav_put_float(buf, 42, height);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS, buf, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
#else
    mavlink_tracked_detection_parameters_t *packet = (mavlink_tracked_detection_parameters_t *)msgbuf;
    packet->yaw_global = yaw_global;
    packet->pitch_global = pitch_global;
    packet->yaw_rel = yaw_rel;
    packet->pitch_rel = pitch_rel;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->altitude = altitude;
    packet->distance = distance;
    packet->type = type;
    packet->index = index;
    packet->score = score;
    packet->total_detections = total_detections;
    packet->rel_frame_of_reference = rel_frame_of_reference;
    packet.width = width;
    packet.height = height;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE TRACKED_DETECTION_PARAMETERS UNPACKING


/**
 * @brief Get field index from tracked_detection_parameters message
 *
 * @return  Requested or returned detection index (254/255 are special values).
 */
static inline uint8_t mavlink_msg_tracked_detection_parameters_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field score from tracked_detection_parameters message
 *
 * @return  Detection score.
 */
static inline uint8_t mavlink_msg_tracked_detection_parameters_get_score(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  35);
}

/**
 * @brief Get field total_detections from tracked_detection_parameters message
 *
 * @return  Number of detections returned across messages.
 */
static inline uint8_t mavlink_msg_tracked_detection_parameters_get_total_detections(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field type from tracked_detection_parameters message
 *
 * @return  Detection class.
 */
static inline int16_t mavlink_msg_tracked_detection_parameters_get_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  32);
}

/**
 * @brief Get field yaw_global from tracked_detection_parameters message
 *
 * @return  Global yaw in radians (Tait-Bryan, vs true north).
 */
static inline float mavlink_msg_tracked_detection_parameters_get_yaw_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch_global from tracked_detection_parameters message
 *
 * @return  Global pitch in radians (vs true north).
 */
static inline float mavlink_msg_tracked_detection_parameters_get_pitch_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rel_frame_of_reference from tracked_detection_parameters message
 *
 * @return  Indicates the frame of reference for the relative yaw and pitch angles.
 */
static inline uint8_t mavlink_msg_tracked_detection_parameters_get_rel_frame_of_reference(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field yaw_rel from tracked_detection_parameters message
 *
 * @return  Relative yaw in radians (vs camera center axis).
 */
static inline float mavlink_msg_tracked_detection_parameters_get_yaw_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch_rel from tracked_detection_parameters message
 *
 * @return  Relative pitch in radians (vs camera center axis).
 */
static inline float mavlink_msg_tracked_detection_parameters_get_pitch_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field latitude from tracked_detection_parameters message
 *
 * @return  Detection latitude, currently 0 if not implemented.
 */
static inline float mavlink_msg_tracked_detection_parameters_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field longitude from tracked_detection_parameters message
 *
 * @return  Detection longitude, currently 0 if not implemented.
 */
static inline float mavlink_msg_tracked_detection_parameters_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field altitude from tracked_detection_parameters message
 *
 * @return  Detection altitude (m), currently 0 if not implemented.
 */
static inline float mavlink_msg_tracked_detection_parameters_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field distance from tracked_detection_parameters message
 *
 * @return  Distance to object in meters, currently 0 if not implemented.
 */
static inline float mavlink_msg_tracked_detection_parameters_get_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get detection width from tracked_detection_parameters message
 *
 * @return  Width of detection in radians.
 */
static inline float mavlink_msg_tracked_detection_parameters_get_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  38);
}

/**
 * @brief Get detection height from tracked_detection_parameters message
 *
 * @return  Height of detection in radians.
 */
static inline float mavlink_msg_tracked_detection_parameters_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  42);
}

/**
 * @brief Decode a tracked_detection_parameters message into a struct
 *
 * @param msg The message to decode
 * @param tracked_detection_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_tracked_detection_parameters_decode(const mavlink_message_t* msg, mavlink_tracked_detection_parameters_t* tracked_detection_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    tracked_detection_parameters->yaw_global = mavlink_msg_tracked_detection_parameters_get_yaw_global(msg);
    tracked_detection_parameters->pitch_global = mavlink_msg_tracked_detection_parameters_get_pitch_global(msg);
    tracked_detection_parameters->yaw_rel = mavlink_msg_tracked_detection_parameters_get_yaw_rel(msg);
    tracked_detection_parameters->pitch_rel = mavlink_msg_tracked_detection_parameters_get_pitch_rel(msg);
    tracked_detection_parameters->latitude = mavlink_msg_tracked_detection_parameters_get_latitude(msg);
    tracked_detection_parameters->longitude = mavlink_msg_tracked_detection_parameters_get_longitude(msg);
    tracked_detection_parameters->altitude = mavlink_msg_tracked_detection_parameters_get_altitude(msg);
    tracked_detection_parameters->distance = mavlink_msg_tracked_detection_parameters_get_distance(msg);
    tracked_detection_parameters->type = mavlink_msg_tracked_detection_parameters_get_type(msg);
    tracked_detection_parameters->index = mavlink_msg_tracked_detection_parameters_get_index(msg);
    tracked_detection_parameters->score = mavlink_msg_tracked_detection_parameters_get_score(msg);
    tracked_detection_parameters->total_detections = mavlink_msg_tracked_detection_parameters_get_total_detections(msg);
    tracked_detection_parameters->rel_frame_of_reference = mavlink_msg_tracked_detection_parameters_get_rel_frame_of_reference(msg);
    tracked_detection_parameters->width = mavlink_msg_tracked_detection_parameters_get_width(msg);
    tracked_detection_parameters->width = mavlink_msg_tracked_detection_parameters_get_height(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN;
        memset(tracked_detection_parameters, 0, MAVLINK_MSG_ID_TRACKED_DETECTION_PARAMETERS_LEN);
    memcpy(tracked_detection_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
