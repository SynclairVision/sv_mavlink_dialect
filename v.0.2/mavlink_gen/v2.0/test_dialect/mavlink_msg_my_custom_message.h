#pragma once
// MESSAGE MY_CUSTOM_MESSAGE PACKING

#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE 1337


typedef struct __mavlink_my_custom_message_t {
 uint64_t timestamp; /*<  Time since boot (microseconds)*/
 float temperature; /*<  Measured temperature in Celsius*/
 float voltage; /*<  Measured voltage in Volts*/
 uint8_t sensor_id; /*<  ID of the sensor*/
} mavlink_my_custom_message_t;

#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN 17
#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN 17
#define MAVLINK_MSG_ID_1337_LEN 17
#define MAVLINK_MSG_ID_1337_MIN_LEN 17

#define MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC 108
#define MAVLINK_MSG_ID_1337_CRC 108



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MY_CUSTOM_MESSAGE { \
    1337, \
    "MY_CUSTOM_MESSAGE", \
    4, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_my_custom_message_t, timestamp) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_my_custom_message_t, temperature) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_my_custom_message_t, voltage) }, \
         { "sensor_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_my_custom_message_t, sensor_id) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MY_CUSTOM_MESSAGE { \
    "MY_CUSTOM_MESSAGE", \
    4, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_my_custom_message_t, timestamp) }, \
         { "temperature", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_my_custom_message_t, temperature) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_my_custom_message_t, voltage) }, \
         { "sensor_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_my_custom_message_t, sensor_id) }, \
         } \
}
#endif

/**
 * @brief Pack a my_custom_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Time since boot (microseconds)
 * @param temperature  Measured temperature in Celsius
 * @param voltage  Measured voltage in Volts
 * @param sensor_id  ID of the sensor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_custom_message_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float temperature, float voltage, uint8_t sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, voltage);
    _mav_put_uint8_t(buf, 16, sensor_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#else
    mavlink_my_custom_message_t packet;
    packet.timestamp = timestamp;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.sensor_id = sensor_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
}

/**
 * @brief Pack a my_custom_message message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Time since boot (microseconds)
 * @param temperature  Measured temperature in Celsius
 * @param voltage  Measured voltage in Volts
 * @param sensor_id  ID of the sensor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_custom_message_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint64_t timestamp, float temperature, float voltage, uint8_t sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, voltage);
    _mav_put_uint8_t(buf, 16, sensor_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#else
    mavlink_my_custom_message_t packet;
    packet.timestamp = timestamp;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.sensor_id = sensor_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif
}

/**
 * @brief Pack a my_custom_message message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Time since boot (microseconds)
 * @param temperature  Measured temperature in Celsius
 * @param voltage  Measured voltage in Volts
 * @param sensor_id  ID of the sensor
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_my_custom_message_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float temperature,float voltage,uint8_t sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, voltage);
    _mav_put_uint8_t(buf, 16, sensor_id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#else
    mavlink_my_custom_message_t packet;
    packet.timestamp = timestamp;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.sensor_id = sensor_id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
}

/**
 * @brief Encode a my_custom_message struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param my_custom_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_custom_message_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_my_custom_message_t* my_custom_message)
{
    return mavlink_msg_my_custom_message_pack(system_id, component_id, msg, my_custom_message->timestamp, my_custom_message->temperature, my_custom_message->voltage, my_custom_message->sensor_id);
}

/**
 * @brief Encode a my_custom_message struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param my_custom_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_custom_message_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_my_custom_message_t* my_custom_message)
{
    return mavlink_msg_my_custom_message_pack_chan(system_id, component_id, chan, msg, my_custom_message->timestamp, my_custom_message->temperature, my_custom_message->voltage, my_custom_message->sensor_id);
}

/**
 * @brief Encode a my_custom_message struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param my_custom_message C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_my_custom_message_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_my_custom_message_t* my_custom_message)
{
    return mavlink_msg_my_custom_message_pack_status(system_id, component_id, _status, msg,  my_custom_message->timestamp, my_custom_message->temperature, my_custom_message->voltage, my_custom_message->sensor_id);
}

/**
 * @brief Send a my_custom_message message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Time since boot (microseconds)
 * @param temperature  Measured temperature in Celsius
 * @param voltage  Measured voltage in Volts
 * @param sensor_id  ID of the sensor
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_my_custom_message_send(mavlink_channel_t chan, uint64_t timestamp, float temperature, float voltage, uint8_t sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, voltage);
    _mav_put_uint8_t(buf, 16, sensor_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#else
    mavlink_my_custom_message_t packet;
    packet.timestamp = timestamp;
    packet.temperature = temperature;
    packet.voltage = voltage;
    packet.sensor_id = sensor_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, (const char *)&packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#endif
}

/**
 * @brief Send a my_custom_message message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_my_custom_message_send_struct(mavlink_channel_t chan, const mavlink_my_custom_message_t* my_custom_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_my_custom_message_send(chan, my_custom_message->timestamp, my_custom_message->temperature, my_custom_message->voltage, my_custom_message->sensor_id);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, (const char *)my_custom_message, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#endif
}

#if MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_my_custom_message_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float temperature, float voltage, uint8_t sensor_id)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, temperature);
    _mav_put_float(buf, 12, voltage);
    _mav_put_uint8_t(buf, 16, sensor_id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, buf, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#else
    mavlink_my_custom_message_t *packet = (mavlink_my_custom_message_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->temperature = temperature;
    packet->voltage = voltage;
    packet->sensor_id = sensor_id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE, (const char *)packet, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_MIN_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_CRC);
#endif
}
#endif

#endif

// MESSAGE MY_CUSTOM_MESSAGE UNPACKING


/**
 * @brief Get field timestamp from my_custom_message message
 *
 * @return  Time since boot (microseconds)
 */
static inline uint64_t mavlink_msg_my_custom_message_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field temperature from my_custom_message message
 *
 * @return  Measured temperature in Celsius
 */
static inline float mavlink_msg_my_custom_message_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field voltage from my_custom_message message
 *
 * @return  Measured voltage in Volts
 */
static inline float mavlink_msg_my_custom_message_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field sensor_id from my_custom_message message
 *
 * @return  ID of the sensor
 */
static inline uint8_t mavlink_msg_my_custom_message_get_sensor_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Decode a my_custom_message message into a struct
 *
 * @param msg The message to decode
 * @param my_custom_message C-struct to decode the message contents into
 */
static inline void mavlink_msg_my_custom_message_decode(const mavlink_message_t* msg, mavlink_my_custom_message_t* my_custom_message)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    my_custom_message->timestamp = mavlink_msg_my_custom_message_get_timestamp(msg);
    my_custom_message->temperature = mavlink_msg_my_custom_message_get_temperature(msg);
    my_custom_message->voltage = mavlink_msg_my_custom_message_get_voltage(msg);
    my_custom_message->sensor_id = mavlink_msg_my_custom_message_get_sensor_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN? msg->len : MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN;
        memset(my_custom_message, 0, MAVLINK_MSG_ID_MY_CUSTOM_MESSAGE_LEN);
    memcpy(my_custom_message, _MAV_PAYLOAD(msg), len);
#endif
}
