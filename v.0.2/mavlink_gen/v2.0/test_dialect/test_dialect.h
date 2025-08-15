/** @file
 *  @brief MAVLink comm protocol generated from test_dialect.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_TEST_DIALECT_H
#define MAVLINK_TEST_DIALECT_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_TEST_DIALECT.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_TEST_DIALECT_XML_HASH 5167616502726359618

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{1337, 85, 13, 13, 0, 0, 0}, {1338, 19, 5, 5, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_TEST_DIALECT

// ENUM DEFINITIONS


/** @brief Indicates the health status of a sensor or module. */
#ifndef HAVE_ENUM_SENSOR_HEALTH_STATUS
#define HAVE_ENUM_SENSOR_HEALTH_STATUS
typedef enum SENSOR_HEALTH_STATUS
{
   SENSOR_HEALTH_UNKNOWN=0, /* Health status is unknown. | */
   SENSOR_HEALTH_OK=1, /* Sensor is fully operational. | */
   SENSOR_HEALTH_WARNING=2, /* Sensor is experiencing issues but still functional. | */
   SENSOR_HEALTH_ERROR=3, /* Sensor failure or critically degraded performance. | */
   SENSOR_HEALTH_STATUS_ENUM_END=4, /*  | */
} SENSOR_HEALTH_STATUS;
#endif

/** @brief Describes the operational state of a component or system. */
#ifndef HAVE_ENUM_DEVICE_WORK_STATE
#define HAVE_ENUM_DEVICE_WORK_STATE
typedef enum DEVICE_WORK_STATE
{
   DEVICE_WORK_IDLE=0, /* Device is idle or sleeping. | */
   DEVICE_WORK_ACTIVE=1, /* Device is currently performing its main function. | */
   DEVICE_WORK_STANDBY=2, /* Device is in standby, ready to activate quickly. | */
   DEVICE_WORK_FAULT=3, /* Device is in a faulted or failed state. | */
   DEVICE_WORK_STATE_ENUM_END=4, /*  | */
} DEVICE_WORK_STATE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_custom_message_1.h"
#include "./mavlink_msg_custom_message_2.h"

// base include



#if MAVLINK_TEST_DIALECT_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_CUSTOM_MESSAGE_1, MAVLINK_MESSAGE_INFO_CUSTOM_MESSAGE_2}
# define MAVLINK_MESSAGE_NAMES {{ "CUSTOM_MESSAGE_1", 1337 }, { "CUSTOM_MESSAGE_2", 1338 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_TEST_DIALECT_H
