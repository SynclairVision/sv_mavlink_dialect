#pragma once
// MESSAGE CAM_TARGET_PARAMETERS PACKING

#define MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS 40015


typedef struct __mavlink_cam_target_parameters_t {
 float x; /*<  
        Normalized horizontal coordinate in the camera frame: -1 = left, 0 = center, 1 = right. Used to select a target pixel.
      */
 float y; /*<  
        Normalized vertical coordinate in the camera frame: -1 = top, 0 = center, 1 = bottom. Used to select a target pixel.
      */
 float t_latitude; /*<  
        Target latitude in degrees. When both x and y are 0, interpreted as the camera's locked target latitude.
      */
 float t_longitude; /*<  
        Target longitude in degrees. When both x and y are 0, interpreted as the camera's locked target longitude.
      */
 float t_altitude; /*<  
        Target altitude in meters. When both x and y are 0, interpreted as the camera's locked target altitude.
      */
 uint8_t cam_id; /*<  
        Camera identifier (user-controlled camera index).
      */
} mavlink_cam_target_parameters_t;

#define MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN 21
#define MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN 21
#define MAVLINK_MSG_ID_40015_LEN 21
#define MAVLINK_MSG_ID_40015_MIN_LEN 21

#define MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC 84
#define MAVLINK_MSG_ID_40015_CRC 84



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CAM_TARGET_PARAMETERS { \
    40015, \
    "CAM_TARGET_PARAMETERS", \
    6, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_cam_target_parameters_t, cam_id) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_target_parameters_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cam_target_parameters_t, y) }, \
         { "t_latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cam_target_parameters_t, t_latitude) }, \
         { "t_longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_cam_target_parameters_t, t_longitude) }, \
         { "t_altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cam_target_parameters_t, t_altitude) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CAM_TARGET_PARAMETERS { \
    "CAM_TARGET_PARAMETERS", \
    6, \
    {  { "cam_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_cam_target_parameters_t, cam_id) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_cam_target_parameters_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_cam_target_parameters_t, y) }, \
         { "t_latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_cam_target_parameters_t, t_latitude) }, \
         { "t_longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_cam_target_parameters_t, t_longitude) }, \
         { "t_altitude", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_cam_target_parameters_t, t_altitude) }, \
         } \
}
#endif

/**
 * @brief Pack a cam_target_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param x  
        Normalized horizontal coordinate in the camera frame: -1 = left, 0 = center, 1 = right. Used to select a target pixel.
      
 * @param y  
        Normalized vertical coordinate in the camera frame: -1 = top, 0 = center, 1 = bottom. Used to select a target pixel.
      
 * @param t_latitude  
        Target latitude in degrees. When both x and y are 0, interpreted as the camera's locked target latitude.
      
 * @param t_longitude  
        Target longitude in degrees. When both x and y are 0, interpreted as the camera's locked target longitude.
      
 * @param t_altitude  
        Target altitude in meters. When both x and y are 0, interpreted as the camera's locked target altitude.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_target_parameters_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t cam_id, float x, float y, float t_latitude, float t_longitude, float t_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, t_latitude);
    _mav_put_float(buf, 12, t_longitude);
    _mav_put_float(buf, 16, t_altitude);
    _mav_put_uint8_t(buf, 20, cam_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#else
    mavlink_cam_target_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.t_latitude = t_latitude;
    packet.t_longitude = t_longitude;
    packet.t_altitude = t_altitude;
    packet.cam_id = cam_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
}

/**
 * @brief Pack a cam_target_parameters message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param x  
        Normalized horizontal coordinate in the camera frame: -1 = left, 0 = center, 1 = right. Used to select a target pixel.
      
 * @param y  
        Normalized vertical coordinate in the camera frame: -1 = top, 0 = center, 1 = bottom. Used to select a target pixel.
      
 * @param t_latitude  
        Target latitude in degrees. When both x and y are 0, interpreted as the camera's locked target latitude.
      
 * @param t_longitude  
        Target longitude in degrees. When both x and y are 0, interpreted as the camera's locked target longitude.
      
 * @param t_altitude  
        Target altitude in meters. When both x and y are 0, interpreted as the camera's locked target altitude.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_target_parameters_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t cam_id, float x, float y, float t_latitude, float t_longitude, float t_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, t_latitude);
    _mav_put_float(buf, 12, t_longitude);
    _mav_put_float(buf, 16, t_altitude);
    _mav_put_uint8_t(buf, 20, cam_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#else
    mavlink_cam_target_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.t_latitude = t_latitude;
    packet.t_longitude = t_longitude;
    packet.t_altitude = t_altitude;
    packet.cam_id = cam_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#endif
}

/**
 * @brief Pack a cam_target_parameters message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param x  
        Normalized horizontal coordinate in the camera frame: -1 = left, 0 = center, 1 = right. Used to select a target pixel.
      
 * @param y  
        Normalized vertical coordinate in the camera frame: -1 = top, 0 = center, 1 = bottom. Used to select a target pixel.
      
 * @param t_latitude  
        Target latitude in degrees. When both x and y are 0, interpreted as the camera's locked target latitude.
      
 * @param t_longitude  
        Target longitude in degrees. When both x and y are 0, interpreted as the camera's locked target longitude.
      
 * @param t_altitude  
        Target altitude in meters. When both x and y are 0, interpreted as the camera's locked target altitude.
      
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_cam_target_parameters_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t cam_id,float x,float y,float t_latitude,float t_longitude,float t_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, t_latitude);
    _mav_put_float(buf, 12, t_longitude);
    _mav_put_float(buf, 16, t_altitude);
    _mav_put_uint8_t(buf, 20, cam_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#else
    mavlink_cam_target_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.t_latitude = t_latitude;
    packet.t_longitude = t_longitude;
    packet.t_altitude = t_altitude;
    packet.cam_id = cam_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
}

/**
 * @brief Encode a cam_target_parameters struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param cam_target_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_target_parameters_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_cam_target_parameters_t* cam_target_parameters)
{
    return mavlink_msg_cam_target_parameters_pack(system_id, component_id, msg, cam_target_parameters->cam_id, cam_target_parameters->x, cam_target_parameters->y, cam_target_parameters->t_latitude, cam_target_parameters->t_longitude, cam_target_parameters->t_altitude);
}

/**
 * @brief Encode a cam_target_parameters struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param cam_target_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_target_parameters_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_cam_target_parameters_t* cam_target_parameters)
{
    return mavlink_msg_cam_target_parameters_pack_chan(system_id, component_id, chan, msg, cam_target_parameters->cam_id, cam_target_parameters->x, cam_target_parameters->y, cam_target_parameters->t_latitude, cam_target_parameters->t_longitude, cam_target_parameters->t_altitude);
}

/**
 * @brief Encode a cam_target_parameters struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param cam_target_parameters C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_cam_target_parameters_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_cam_target_parameters_t* cam_target_parameters)
{
    return mavlink_msg_cam_target_parameters_pack_status(system_id, component_id, _status, msg,  cam_target_parameters->cam_id, cam_target_parameters->x, cam_target_parameters->y, cam_target_parameters->t_latitude, cam_target_parameters->t_longitude, cam_target_parameters->t_altitude);
}

/**
 * @brief Send a cam_target_parameters message
 * @param chan MAVLink channel to send the message
 *
 * @param cam_id  
        Camera identifier (user-controlled camera index).
      
 * @param x  
        Normalized horizontal coordinate in the camera frame: -1 = left, 0 = center, 1 = right. Used to select a target pixel.
      
 * @param y  
        Normalized vertical coordinate in the camera frame: -1 = top, 0 = center, 1 = bottom. Used to select a target pixel.
      
 * @param t_latitude  
        Target latitude in degrees. When both x and y are 0, interpreted as the camera's locked target latitude.
      
 * @param t_longitude  
        Target longitude in degrees. When both x and y are 0, interpreted as the camera's locked target longitude.
      
 * @param t_altitude  
        Target altitude in meters. When both x and y are 0, interpreted as the camera's locked target altitude.
      
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_cam_target_parameters_send(mavlink_channel_t chan, uint8_t cam_id, float x, float y, float t_latitude, float t_longitude, float t_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN];
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, t_latitude);
    _mav_put_float(buf, 12, t_longitude);
    _mav_put_float(buf, 16, t_altitude);
    _mav_put_uint8_t(buf, 20, cam_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
#else
    mavlink_cam_target_parameters_t packet;
    packet.x = x;
    packet.y = y;
    packet.t_latitude = t_latitude;
    packet.t_longitude = t_longitude;
    packet.t_altitude = t_altitude;
    packet.cam_id = cam_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS, (const char *)&packet, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
#endif
}

/**
 * @brief Send a cam_target_parameters message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_cam_target_parameters_send_struct(mavlink_channel_t chan, const mavlink_cam_target_parameters_t* cam_target_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_cam_target_parameters_send(chan, cam_target_parameters->cam_id, cam_target_parameters->x, cam_target_parameters->y, cam_target_parameters->t_latitude, cam_target_parameters->t_longitude, cam_target_parameters->t_altitude);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS, (const char *)cam_target_parameters, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
#endif
}

#if MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_cam_target_parameters_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t cam_id, float x, float y, float t_latitude, float t_longitude, float t_altitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, x);
    _mav_put_float(buf, 4, y);
    _mav_put_float(buf, 8, t_latitude);
    _mav_put_float(buf, 12, t_longitude);
    _mav_put_float(buf, 16, t_altitude);
    _mav_put_uint8_t(buf, 20, cam_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS, buf, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
#else
    mavlink_cam_target_parameters_t *packet = (mavlink_cam_target_parameters_t *)msgbuf;
    packet->x = x;
    packet->y = y;
    packet->t_latitude = t_latitude;
    packet->t_longitude = t_longitude;
    packet->t_altitude = t_altitude;
    packet->cam_id = cam_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS, (const char *)packet, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_MIN_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_CRC);
#endif
}
#endif

#endif

// MESSAGE CAM_TARGET_PARAMETERS UNPACKING


/**
 * @brief Get field cam_id from cam_target_parameters message
 *
 * @return  
        Camera identifier (user-controlled camera index).
      
 */
static inline uint8_t mavlink_msg_cam_target_parameters_get_cam_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field x from cam_target_parameters message
 *
 * @return  
        Normalized horizontal coordinate in the camera frame: -1 = left, 0 = center, 1 = right. Used to select a target pixel.
      
 */
static inline float mavlink_msg_cam_target_parameters_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from cam_target_parameters message
 *
 * @return  
        Normalized vertical coordinate in the camera frame: -1 = top, 0 = center, 1 = bottom. Used to select a target pixel.
      
 */
static inline float mavlink_msg_cam_target_parameters_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field t_latitude from cam_target_parameters message
 *
 * @return  
        Target latitude in degrees. When both x and y are 0, interpreted as the camera's locked target latitude.
      
 */
static inline float mavlink_msg_cam_target_parameters_get_t_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field t_longitude from cam_target_parameters message
 *
 * @return  
        Target longitude in degrees. When both x and y are 0, interpreted as the camera's locked target longitude.
      
 */
static inline float mavlink_msg_cam_target_parameters_get_t_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field t_altitude from cam_target_parameters message
 *
 * @return  
        Target altitude in meters. When both x and y are 0, interpreted as the camera's locked target altitude.
      
 */
static inline float mavlink_msg_cam_target_parameters_get_t_altitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a cam_target_parameters message into a struct
 *
 * @param msg The message to decode
 * @param cam_target_parameters C-struct to decode the message contents into
 */
static inline void mavlink_msg_cam_target_parameters_decode(const mavlink_message_t* msg, mavlink_cam_target_parameters_t* cam_target_parameters)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    cam_target_parameters->x = mavlink_msg_cam_target_parameters_get_x(msg);
    cam_target_parameters->y = mavlink_msg_cam_target_parameters_get_y(msg);
    cam_target_parameters->t_latitude = mavlink_msg_cam_target_parameters_get_t_latitude(msg);
    cam_target_parameters->t_longitude = mavlink_msg_cam_target_parameters_get_t_longitude(msg);
    cam_target_parameters->t_altitude = mavlink_msg_cam_target_parameters_get_t_altitude(msg);
    cam_target_parameters->cam_id = mavlink_msg_cam_target_parameters_get_cam_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN? msg->len : MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN;
        memset(cam_target_parameters, 0, MAVLINK_MSG_ID_CAM_TARGET_PARAMETERS_LEN);
    memcpy(cam_target_parameters, _MAV_PAYLOAD(msg), len);
#endif
}
