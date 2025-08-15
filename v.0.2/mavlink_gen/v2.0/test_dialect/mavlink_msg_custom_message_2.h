#pragma once
// MESSAGE CUSTOM_MESSAGE_2 PACKING

#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_2 1338


typedef struct __mavlink_custom_message_2_t {
 uint32_t uptime_ms; /*< [ms] Time since power-on or reset.*/
 uint8_t work_state; /*<  Current work mode of the device.*/
} mavlink_custom_message_2_t;

#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN 5
#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN 5
#define MAVLINK_MSG_ID_1338_LEN 5
#define MAVLINK_MSG_ID_1338_MIN_LEN 5

#define MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC 19
#define MAVLINK_MSG_ID_1338_CRC 19



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_CUSTOM_MESSAGE_2 { \
    1338, \
    "CUSTOM_MESSAGE_2", \
    2, \
    {  { "uptime_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_custom_message_2_t, uptime_ms) }, \
         { "work_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_custom_message_2_t, work_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_CUSTOM_MESSAGE_2 { \
    "CUSTOM_MESSAGE_2", \
    2, \
    {  { "uptime_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_custom_message_2_t, uptime_ms) }, \
         { "work_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_custom_message_2_t, work_state) }, \
         } \
}
#endif

/**
 * @brief Pack a custom_message_2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param uptime_ms [ms] Time since power-on or reset.
 * @param work_state  Current work mode of the device.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_message_2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t uptime_ms, uint8_t work_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN];
    _mav_put_uint32_t(buf, 0, uptime_ms);
    _mav_put_uint8_t(buf, 4, work_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#else
    mavlink_custom_message_2_t packet;
    packet.uptime_ms = uptime_ms;
    packet.work_state = work_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_MESSAGE_2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
}

/**
 * @brief Pack a custom_message_2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param uptime_ms [ms] Time since power-on or reset.
 * @param work_state  Current work mode of the device.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_message_2_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t uptime_ms, uint8_t work_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN];
    _mav_put_uint32_t(buf, 0, uptime_ms);
    _mav_put_uint8_t(buf, 4, work_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#else
    mavlink_custom_message_2_t packet;
    packet.uptime_ms = uptime_ms;
    packet.work_state = work_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_MESSAGE_2;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#endif
}

/**
 * @brief Pack a custom_message_2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param uptime_ms [ms] Time since power-on or reset.
 * @param work_state  Current work mode of the device.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_custom_message_2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t uptime_ms,uint8_t work_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN];
    _mav_put_uint32_t(buf, 0, uptime_ms);
    _mav_put_uint8_t(buf, 4, work_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#else
    mavlink_custom_message_2_t packet;
    packet.uptime_ms = uptime_ms;
    packet.work_state = work_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_CUSTOM_MESSAGE_2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
}

/**
 * @brief Encode a custom_message_2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param custom_message_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_message_2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_custom_message_2_t* custom_message_2)
{
    return mavlink_msg_custom_message_2_pack(system_id, component_id, msg, custom_message_2->uptime_ms, custom_message_2->work_state);
}

/**
 * @brief Encode a custom_message_2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param custom_message_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_message_2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_custom_message_2_t* custom_message_2)
{
    return mavlink_msg_custom_message_2_pack_chan(system_id, component_id, chan, msg, custom_message_2->uptime_ms, custom_message_2->work_state);
}

/**
 * @brief Encode a custom_message_2 struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param custom_message_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_custom_message_2_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_custom_message_2_t* custom_message_2)
{
    return mavlink_msg_custom_message_2_pack_status(system_id, component_id, _status, msg,  custom_message_2->uptime_ms, custom_message_2->work_state);
}

/**
 * @brief Send a custom_message_2 message
 * @param chan MAVLink channel to send the message
 *
 * @param uptime_ms [ms] Time since power-on or reset.
 * @param work_state  Current work mode of the device.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_custom_message_2_send(mavlink_channel_t chan, uint32_t uptime_ms, uint8_t work_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN];
    _mav_put_uint32_t(buf, 0, uptime_ms);
    _mav_put_uint8_t(buf, 4, work_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2, buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
#else
    mavlink_custom_message_2_t packet;
    packet.uptime_ms = uptime_ms;
    packet.work_state = work_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2, (const char *)&packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
#endif
}

/**
 * @brief Send a custom_message_2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_custom_message_2_send_struct(mavlink_channel_t chan, const mavlink_custom_message_2_t* custom_message_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_custom_message_2_send(chan, custom_message_2->uptime_ms, custom_message_2->work_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2, (const char *)custom_message_2, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
#endif
}

#if MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_custom_message_2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t uptime_ms, uint8_t work_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, uptime_ms);
    _mav_put_uint8_t(buf, 4, work_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2, buf, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
#else
    mavlink_custom_message_2_t *packet = (mavlink_custom_message_2_t *)msgbuf;
    packet->uptime_ms = uptime_ms;
    packet->work_state = work_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2, (const char *)packet, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_MIN_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_CRC);
#endif
}
#endif

#endif

// MESSAGE CUSTOM_MESSAGE_2 UNPACKING


/**
 * @brief Get field uptime_ms from custom_message_2 message
 *
 * @return [ms] Time since power-on or reset.
 */
static inline uint32_t mavlink_msg_custom_message_2_get_uptime_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field work_state from custom_message_2 message
 *
 * @return  Current work mode of the device.
 */
static inline uint8_t mavlink_msg_custom_message_2_get_work_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a custom_message_2 message into a struct
 *
 * @param msg The message to decode
 * @param custom_message_2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_custom_message_2_decode(const mavlink_message_t* msg, mavlink_custom_message_2_t* custom_message_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    custom_message_2->uptime_ms = mavlink_msg_custom_message_2_get_uptime_ms(msg);
    custom_message_2->work_state = mavlink_msg_custom_message_2_get_work_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN? msg->len : MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN;
        memset(custom_message_2, 0, MAVLINK_MSG_ID_CUSTOM_MESSAGE_2_LEN);
    memcpy(custom_message_2, _MAV_PAYLOAD(msg), len);
#endif
}
