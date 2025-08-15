#pragma once
// MESSAGE CUSTOM_MESSAGE_1 PACKING

#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_1 1337


typedef struct __mavlink_custom_message_1_t {
 uint64_t timestamp; /*< [us] System time in microseconds.*/
 float reading; /*< [unit] Sensor reading of arbitrary unit.*/
 uint8_t sensor_status; /*<  Health status of the reporting sensor.*/
} mavlink_custom_message_1_t;

#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN 13
#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN 13
#define MAVLINK_MSG_ID_1337_LEN 13
#define MAVLINK_MSG_ID_1337_MIN_LEN 13

#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC 85
#define MAVLINK_MSG_ID_1337_CRC 85



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CUSTOM_MESSAGE_1 { \
    1337, \
    "CUSTOM_MESSAGE_1", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_custom_message_1_t, timestamp) }, \
         { "reading", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_custom_message_1_t, reading) }, \
         { "sensor_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_custom_message_1_t, sensor_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CUSTOM_MESSAGE_1 { \
    "CUSTOM_MESSAGE_1", \
    3, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_custom_message_1_t, timestamp) }, \
         { "reading", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_custom_message_1_t, reading) }, \
         { "sensor_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_custom_message_1_t, sensor_status) }, \
         } \
}
#endif

/**
 * @brief Pack a custom_message_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] System time in microseconds.
 * @param reading [unit] Sensor reading of arbitrary unit.
 * @param sensor_status  Health status of the reporting sensor.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_message_1_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float reading, uint8_t sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, reading);
    _mav_put_uint8_t(buf, 12, sensor_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#else
    mavlink_custom_message_1_t packet;
    packet.timestamp = timestamp;
    packet.reading = reading;
    packet.sensor_status = sensor_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_MESSAGE_1;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
}

/**
 * @brief Pack a custom_message_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp [us] System time in microseconds.
 * @param reading [unit] Sensor reading of arbitrary unit.
 * @param sensor_status  Health status of the reporting sensor.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_message_1_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, float reading, uint8_t sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, reading);
    _mav_put_uint8_t(buf, 12, sensor_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#else
    mavlink_custom_message_1_t packet;
    packet.timestamp = timestamp;
    packet.reading = reading;
    packet.sensor_status = sensor_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_MESSAGE_1;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#endif
}

/**
 * @brief Pack a custom_message_1 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp [us] System time in microseconds.
 * @param reading [unit] Sensor reading of arbitrary unit.
 * @param sensor_status  Health status of the reporting sensor.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_message_1_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float reading,uint8_t sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, reading);
    _mav_put_uint8_t(buf, 12, sensor_status);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#else
    mavlink_custom_message_1_t packet;
    packet.timestamp = timestamp;
    packet.reading = reading;
    packet.sensor_status = sensor_status;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_MESSAGE_1;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
}

/**
 * @brief Encode a custom_message_1 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param custom_message_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_message_1_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_custom_message_1_t* custom_message_1)
{
    return mavlink_msg_custom_message_1_pack(system_id, component_id, msg, custom_message_1->timestamp, custom_message_1->reading, custom_message_1->sensor_status);
}

/**
 * @brief Encode a custom_message_1 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param custom_message_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_message_1_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_custom_message_1_t* custom_message_1)
{
    return mavlink_msg_custom_message_1_pack_chan(system_id, component_id, chan, msg, custom_message_1->timestamp, custom_message_1->reading, custom_message_1->sensor_status);
}

/**
 * @brief Encode a custom_message_1 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param custom_message_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_message_1_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_custom_message_1_t* custom_message_1)
{
    return mavlink_msg_custom_message_1_pack_status(system_id, component_id, _status, msg,  custom_message_1->timestamp, custom_message_1->reading, custom_message_1->sensor_status);
}

/**
 * @brief Send a custom_message_1 message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp [us] System time in microseconds.
 * @param reading [unit] Sensor reading of arbitrary unit.
 * @param sensor_status  Health status of the reporting sensor.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_custom_message_1_send(mavlink_channel_t chan, uint64_t timestamp, float reading, uint8_t sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, reading);
    _mav_put_uint8_t(buf, 12, sensor_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1, buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
#else
    mavlink_custom_message_1_t packet;
    packet.timestamp = timestamp;
    packet.reading = reading;
    packet.sensor_status = sensor_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1, (const char *)&packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
#endif
}

/**
 * @brief Send a custom_message_1 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_custom_message_1_send_struct(mavlink_channel_t chan, const mavlink_custom_message_1_t* custom_message_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_custom_message_1_send(chan, custom_message_1->timestamp, custom_message_1->reading, custom_message_1->sensor_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1, (const char *)custom_message_1, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
#endif
}

#if MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_custom_message_1_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float reading, uint8_t sensor_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, reading);
    _mav_put_uint8_t(buf, 12, sensor_status);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1, buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
#else
    mavlink_custom_message_1_t *packet = (mavlink_custom_message_1_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->reading = reading;
    packet->sensor_status = sensor_status;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1, (const char *)packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_CRC);
#endif
}
#endif

#endif

// MESSAGE CUSTOM_MESSAGE_1 UNPACKING


/**
 * @brief Get field timestamp from custom_message_1 message
 *
 * @return [us] System time in microseconds.
 */
static inline uint64_t mavlink_msg_custom_message_1_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field reading from custom_message_1 message
 *
 * @return [unit] Sensor reading of arbitrary unit.
 */
static inline float mavlink_msg_custom_message_1_get_reading(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field sensor_status from custom_message_1 message
 *
 * @return  Health status of the reporting sensor.
 */
static inline uint8_t mavlink_msg_custom_message_1_get_sensor_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Decode a custom_message_1 message into a struct
 *
 * @param msg The message to decode
 * @param custom_message_1 C-struct to decode the message contents into
 */
static inline void mavlink_msg_custom_message_1_decode(const mavlink_message_t* msg, mavlink_custom_message_1_t* custom_message_1)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    custom_message_1->timestamp = mavlink_msg_custom_message_1_get_timestamp(msg);
    custom_message_1->reading = mavlink_msg_custom_message_1_get_reading(msg);
    custom_message_1->sensor_status = mavlink_msg_custom_message_1_get_sensor_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN? msg->len : MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN;
        memset(custom_message_1, 0, MAVLINK_MSG_ID_CUSTOM_MESSAGE_1_LEN);
    memcpy(custom_message_1, _MAV_PAYLOAD(msg), len);
#endif
}
