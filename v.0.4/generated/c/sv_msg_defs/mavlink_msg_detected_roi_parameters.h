#pragma once
// MESSAGE DETECTED_ROI_PARAMETERS PACKING

#define MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS 40006


typedef struct __mavlink_detected_roi_parameters_t {
 float yaw_abs; /*<  
        Absolute yaw angle (radians, Tait-Bryan) relative to true north.
      */
 float pitch_abs; /*<  
        Absolute pitch angle (radians, Tait-Bryan) relative to true north.
      */
 float yaw_rel; /*<  
        Yaw angle (radians) relative to the camera's center axis.
      */
 float pitch_rel; /*<  
        Pitch angle (radians) relative to the camera's center axis.
      */
 float latitude; /*<  
        Estimated object latitude in degrees, range [-90.0,90.0]. Currently often unimplemented and returns 0.
      */
 float longitude; /*<  
        Estimated object longitude in degrees, range [-180.0,180.0). Currently often unimplemented and returns 0.
      */
 float altitude; /*<  
        Estimated object altitude in meters above sea level. Currently often unimplemented and returns 0.
      */
 float distance; /*<  
        Estimated distance from the camera/drone to the object in meters. Currently often unimplemented and returns 0.
      */
 uint8_t index; /*<  
        Requested detection index. Special values: 254=all detections currently visible in overlay, 255=all currently known detections.
      */
 uint8_t score; /*<  
        Score assigned to the detected object (0–255).
      */
 uint8_t total_detections; /*<  
        Total number of detections for which information has been sent in this response series.
      */
} mavlink_detected_roi_parameters_t;

#define MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN 35
#define MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN 35
#define MAVLINK_MSG_ID_40006_LEN 35
#define MAVLINK_MSG_ID_40006_MIN_LEN 35

#define MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC 38
#define MAVLINK_MSG_ID_40006_CRC 38



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DETECTED_ROI_PARAMETERS { \
    40006, \
    "DETECTED_ROI_PARAMETERS", \
    11, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_detected_roi_parameters_t, index) }, \
         { "score", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_detected_roi_parameters_t, score) }, \
         { "total_detections", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_detected_roi_parameters_t, total_detections) }, \
         { "yaw_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_detected_roi_parameters_t, yaw_abs) }, \
         { "pitch_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_detected_roi_parameters_t, pitch_abs) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_detected_roi_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_detected_roi_parameters_t, pitch_rel) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_detected_roi_parameters_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_detected_roi_parameters_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_detected_roi_parameters_t, altitude) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_detected_roi_parameters_t, distance) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DETECTED_ROI_PARAMETERS { \
    "DETECTED_ROI_PARAMETERS", \
    11, \
    {  { "index", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_detected_roi_parameters_t, index) }, \
         { "score", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_detected_roi_parameters_t, score) }, \
         { "total_detections", NULL, MAVLINK_TYPE_UINT8_T, 0, 34, offsetof(mavlink_detected_roi_parameters_t, total_detections) }, \
         { "yaw_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_detected_roi_parameters_t, yaw_abs) }, \
         { "pitch_abs", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_detected_roi_parameters_t, pitch_abs) }, \
         { "yaw_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_detected_roi_parameters_t, yaw_rel) }, \
         { "pitch_rel", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_detected_roi_parameters_t, pitch_rel) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_detected_roi_parameters_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_detected_roi_parameters_t, longitude) }, \
         { "altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_detected_roi_parameters_t, altitude) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_detected_roi_parameters_t, distance) }, \
         } \
}
#endif

/**
 * @brief Pack a detected_roi_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  
        Requested detection index. Special values: 254=all detections currently visible in overlay, 255=all currently known detections.
      
 * @param score  
        Score assigned to the detected object (0–255).
      
 * @param total_detections  
        Total number of detections for which information has been sent in this response series.
      
 * @param yaw_abs  
        Absolute yaw angle (radians, Tait-Bryan) relative to true north.
      
 * @param pitch_abs  
        Absolute pitch angle (radians, Tait-Bryan) relative to true north.
      
 * @param yaw_rel  
        Yaw angle (radians) relative to the camera's center axis.
      
 * @param pitch_rel  
        Pitch angle (radians) relative to the camera's center axis.
      
 * @param latitude  
        Estimated object latitude in degrees, range [-90.0,90.0]. Currently often unimplemented and returns 0.
      
 * @param longitude  
        Estimated object longitude in degrees, range [-180.0,180.0). Currently often unimplemented and returns 0.
      
 * @param altitude  
        Estimated object altitude in meters above sea level. Currently often unimplemented and returns 0.
      
 * @param distance  
        Estimated distance from the camera/drone to the object in meters. Currently often unimplemented and returns 0.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detected_roi_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#else
    mavlink_detected_roi_parameters_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
}

/**
 * @brief Pack a detected_roi_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  
        Requested detection index. Special values: 254=all detections currently visible in overlay, 255=all currently known detections.
      
 * @param score  
        Score assigned to the detected object (0–255).
      
 * @param total_detections  
        Total number of detections for which information has been sent in this response series.
      
 * @param yaw_abs  
        Absolute yaw angle (radians, Tait-Bryan) relative to true north.
      
 * @param pitch_abs  
        Absolute pitch angle (radians, Tait-Bryan) relative to true north.
      
 * @param yaw_rel  
        Yaw angle (radians) relative to the camera's center axis.
      
 * @param pitch_rel  
        Pitch angle (radians) relative to the camera's center axis.
      
 * @param latitude  
        Estimated object latitude in degrees, range [-90.0,90.0]. Currently often unimplemented and returns 0.
      
 * @param longitude  
        Estimated object longitude in degrees, range [-180.0,180.0). Currently often unimplemented and returns 0.
      
 * @param altitude  
        Estimated object altitude in meters above sea level. Currently often unimplemented and returns 0.
      
 * @param distance  
        Estimated distance from the camera/drone to the object in meters. Currently often unimplemented and returns 0.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detected_roi_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#else
    mavlink_detected_roi_parameters_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a detected_roi_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index  
        Requested detection index. Special values: 254=all detections currently visible in overlay, 255=all currently known detections.
      
 * @param score  
        Score assigned to the detected object (0–255).
      
 * @param total_detections  
        Total number of detections for which information has been sent in this response series.
      
 * @param yaw_abs  
        Absolute yaw angle (radians, Tait-Bryan) relative to true north.
      
 * @param pitch_abs  
        Absolute pitch angle (radians, Tait-Bryan) relative to true north.
      
 * @param yaw_rel  
        Yaw angle (radians) relative to the camera's center axis.
      
 * @param pitch_rel  
        Pitch angle (radians) relative to the camera's center axis.
      
 * @param latitude  
        Estimated object latitude in degrees, range [-90.0,90.0]. Currently often unimplemented and returns 0.
      
 * @param longitude  
        Estimated object longitude in degrees, range [-180.0,180.0). Currently often unimplemented and returns 0.
      
 * @param altitude  
        Estimated object altitude in meters above sea level. Currently often unimplemented and returns 0.
      
 * @param distance  
        Estimated distance from the camera/drone to the object in meters. Currently often unimplemented and returns 0.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_detected_roi_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t index,uint8_t score,uint8_t total_detections,float yaw_abs,float pitch_abs,float yaw_rel,float pitch_rel,float latitude,float longitude,float altitude,float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN];
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#else
    mavlink_detected_roi_parameters_t packet;
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

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
}

/**
 * @brief Encode a detected_roi_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param detected_roi_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detected_roi_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_detected_roi_parameters_t* detected_roi_parameters)
{
    return mavlink_msg_detected_roi_parameters_pack(system_id, component_id, msg, detected_roi_parameters->index, detected_roi_parameters->score, detected_roi_parameters->total_detections, detected_roi_parameters->yaw_abs, detected_roi_parameters->pitch_abs, detected_roi_parameters->yaw_rel, detected_roi_parameters->pitch_rel, detected_roi_parameters->latitude, detected_roi_parameters->longitude, detected_roi_parameters->altitude, detected_roi_parameters->distance);
}

/**
 * @brief Encode a detected_roi_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param detected_roi_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detected_roi_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_detected_roi_parameters_t* detected_roi_parameters)
{
    return mavlink_msg_detected_roi_parameters_pack_chan(system_id, component_id, chan, msg, detected_roi_parameters->index, detected_roi_parameters->score, detected_roi_parameters->total_detections, detected_roi_parameters->yaw_abs, detected_roi_parameters->pitch_abs, detected_roi_parameters->yaw_rel, detected_roi_parameters->pitch_rel, detected_roi_parameters->latitude, detected_roi_parameters->longitude, detected_roi_parameters->altitude, detected_roi_parameters->distance);
}

/**
 * @brief Encode a detected_roi_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param detected_roi_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_detected_roi_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_detected_roi_parameters_t* detected_roi_parameters)
{
    return mavlink_msg_detected_roi_parameters_pack_status(system_id, component_id, _status, msg,  detected_roi_parameters->index, detected_roi_parameters->score, detected_roi_parameters->total_detections, detected_roi_parameters->yaw_abs, detected_roi_parameters->pitch_abs, detected_roi_parameters->yaw_rel, detected_roi_parameters->pitch_rel, detected_roi_parameters->latitude, detected_roi_parameters->longitude, detected_roi_parameters->altitude, detected_roi_parameters->distance);
}

/**
 * @brief Send a detected_roi_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param index  
        Requested detection index. Special values: 254=all detections currently visible in overlay, 255=all currently known detections.
      
 * @param score  
        Score assigned to the detected object (0–255).
      
 * @param total_detections  
        Total number of detections for which information has been sent in this response series.
      
 * @param yaw_abs  
        Absolute yaw angle (radians, Tait-Bryan) relative to true north.
      
 * @param pitch_abs  
        Absolute pitch angle (radians, Tait-Bryan) relative to true north.
      
 * @param yaw_rel  
        Yaw angle (radians) relative to the camera's center axis.
      
 * @param pitch_rel  
        Pitch angle (radians) relative to the camera's center axis.
      
 * @param latitude  
        Estimated object latitude in degrees, range [-90.0,90.0]. Currently often unimplemented and returns 0.
      
 * @param longitude  
        Estimated object longitude in degrees, range [-180.0,180.0). Currently often unimplemented and returns 0.
      
 * @param altitude  
        Estimated object altitude in meters above sea level. Currently often unimplemented and returns 0.
      
 * @param distance  
        Estimated distance from the camera/drone to the object in meters. Currently often unimplemented and returns 0.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_detected_roi_parameters_send(mavlink_channel_t chan, uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN];
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS, buf, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
#else
    mavlink_detected_roi_parameters_t packet;
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a detected_roi_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_detected_roi_parameters_send_struct(mavlink_channel_t chan, const mavlink_detected_roi_parameters_t* detected_roi_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_detected_roi_parameters_send(chan, detected_roi_parameters->index, detected_roi_parameters->score, detected_roi_parameters->total_detections, detected_roi_parameters->yaw_abs, detected_roi_parameters->pitch_abs, detected_roi_parameters->yaw_rel, detected_roi_parameters->pitch_rel, detected_roi_parameters->latitude, detected_roi_parameters->longitude, detected_roi_parameters->altitude, detected_roi_parameters->distance);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS, (const char *)detected_roi_parameters, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_detected_roi_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t index, uint8_t score, uint8_t total_detections, float yaw_abs, float pitch_abs, float yaw_rel, float pitch_rel, float latitude, float longitude, float altitude, float distance)
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS, buf, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
#else
    mavlink_detected_roi_parameters_t *packet = (mavlink_detected_roi_parameters_t *)msgbuf;
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

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE DETECTED_ROI_PARAMETERS UNPACKING


/**
 * @brief Get field index from detected_roi_parameters message
 *
 * @return  
        Requested detection index. Special values: 254=all detections currently visible in overlay, 255=all currently known detections.
      
 */
static inline uint8_t mavlink_msg_detected_roi_parameters_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field score from detected_roi_parameters message
 *
 * @return  
        Score assigned to the detected object (0–255).
      
 */
static inline uint8_t mavlink_msg_detected_roi_parameters_get_score(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field total_detections from detected_roi_parameters message
 *
 * @return  
        Total number of detections for which information has been sent in this response series.
      
 */
static inline uint8_t mavlink_msg_detected_roi_parameters_get_total_detections(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  34);
}

/**
 * @brief Get field yaw_abs from detected_roi_parameters message
 *
 * @return  
        Absolute yaw angle (radians, Tait-Bryan) relative to true north.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_yaw_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch_abs from detected_roi_parameters message
 *
 * @return  
        Absolute pitch angle (radians, Tait-Bryan) relative to true north.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_pitch_abs(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field yaw_rel from detected_roi_parameters message
 *
 * @return  
        Yaw angle (radians) relative to the camera's center axis.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_yaw_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field pitch_rel from detected_roi_parameters message
 *
 * @return  
        Pitch angle (radians) relative to the camera's center axis.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_pitch_rel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field latitude from detected_roi_parameters message
 *
 * @return  
        Estimated object latitude in degrees, range [-90.0,90.0]. Currently often unimplemented and returns 0.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field longitude from detected_roi_parameters message
 *
 * @return  
        Estimated object longitude in degrees, range [-180.0,180.0). Currently often unimplemented and returns 0.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field altitude from detected_roi_parameters message
 *
 * @return  
        Estimated object altitude in meters above sea level. Currently often unimplemented and returns 0.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field distance from detected_roi_parameters message
 *
 * @return  
        Estimated distance from the camera/drone to the object in meters. Currently often unimplemented and returns 0.
      
 */
static inline float mavlink_msg_detected_roi_parameters_get_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a detected_roi_parameters message into a struct
 *
 * @param msg The message to decode
 * @param detected_roi_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_detected_roi_parameters_decode(const mavlink_message_t* msg, mavlink_detected_roi_parameters_t* detected_roi_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    detected_roi_parameters->yaw_abs = mavlink_msg_detected_roi_parameters_get_yaw_abs(msg);
    detected_roi_parameters->pitch_abs = mavlink_msg_detected_roi_parameters_get_pitch_abs(msg);
    detected_roi_parameters->yaw_rel = mavlink_msg_detected_roi_parameters_get_yaw_rel(msg);
    detected_roi_parameters->pitch_rel = mavlink_msg_detected_roi_parameters_get_pitch_rel(msg);
    detected_roi_parameters->latitude = mavlink_msg_detected_roi_parameters_get_latitude(msg);
    detected_roi_parameters->longitude = mavlink_msg_detected_roi_parameters_get_longitude(msg);
    detected_roi_parameters->altitude = mavlink_msg_detected_roi_parameters_get_altitude(msg);
    detected_roi_parameters->distance = mavlink_msg_detected_roi_parameters_get_distance(msg);
    detected_roi_parameters->index = mavlink_msg_detected_roi_parameters_get_index(msg);
    detected_roi_parameters->score = mavlink_msg_detected_roi_parameters_get_score(msg);
    detected_roi_parameters->total_detections = mavlink_msg_detected_roi_parameters_get_total_detections(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN;
        memset(detected_roi_parameters, 0, MAVLINK_MSG_ID_DETECTED_ROI_PARAMETERS_LEN);
    memcpy(detected_roi_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
