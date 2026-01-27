/** @file
 *  @brief MAVLink comm protocol generated from sv_msg_defs.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_SV_MSG_DEFS_H
#define MAVLINK_SV_MSG_DEFS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_SV_MSG_DEFS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_SV_MSG_DEFS_XML_HASH 4662015631266616051

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{40000, 174, 6, 6, 0, 0, 0}, {40001, 48, 33, 33, 0, 0, 0}, {40002, 109, 16, 16, 0, 0, 0}, {40003, 161, 58, 58, 0, 0, 0}, {40004, 174, 14, 14, 0, 0, 0}, {40005, 192, 23, 23, 0, 0, 0}, {40006, 224, 36, 36, 0, 0, 0}, {40007, 85, 44, 44, 0, 0, 0}, {40008, 66, 15, 15, 0, 0, 0}, {40009, 226, 33, 33, 0, 0, 0}, {40010, 225, 20, 20, 0, 0, 0}, {40011, 180, 14, 14, 0, 0, 0}, {40012, 70, 42, 42, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SV_MSG_DEFS

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_system_status_parameters.h"
#include "./mavlink_msg_ai_parameters.h"
#include "./mavlink_msg_model_parameters.h"
#include "./mavlink_msg_video_output_parameters.h"
#include "./mavlink_msg_capture_parameters.h"
#include "./mavlink_msg_detection_parameters.h"
#include "./mavlink_msg_detected_roi_parameters.h"
#include "./mavlink_msg_cam_targeting_parameters.h"
#include "./mavlink_msg_cam_optics_and_control_parameters.h"
#include "./mavlink_msg_cam_offset_parameters.h"
#include "./mavlink_msg_sensor_parameters.h"
#include "./mavlink_msg_cam_depth_estimation_parameters.h"
#include "./mavlink_msg_single_target_tracking_parameters.h"

// base include



#if MAVLINK_SV_MSG_DEFS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_SYSTEM_STATUS_PARAMETERS, MAVLINK_MESSAGE_INFO_AI_PARAMETERS, MAVLINK_MESSAGE_INFO_MODEL_PARAMETERS, MAVLINK_MESSAGE_INFO_VIDEO_OUTPUT_PARAMETERS, MAVLINK_MESSAGE_INFO_CAPTURE_PARAMETERS, MAVLINK_MESSAGE_INFO_DETECTION_PARAMETERS, MAVLINK_MESSAGE_INFO_DETECTED_ROI_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_TARGETING_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_OPTICS_AND_CONTROL_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_OFFSET_PARAMETERS, MAVLINK_MESSAGE_INFO_SENSOR_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_DEPTH_ESTIMATION_PARAMETERS, MAVLINK_MESSAGE_INFO_SINGLE_TARGET_TRACKING_PARAMETERS}
# define MAVLINK_MESSAGE_NAMES {{ "AI_PARAMETERS", 40001 }, { "CAM_DEPTH_ESTIMATION_PARAMETERS", 40011 }, { "CAM_OFFSET_PARAMETERS", 40009 }, { "CAM_OPTICS_AND_CONTROL_PARAMETERS", 40008 }, { "CAM_TARGETING_PARAMETERS", 40007 }, { "CAPTURE_PARAMETERS", 40004 }, { "DETECTED_ROI_PARAMETERS", 40006 }, { "DETECTION_PARAMETERS", 40005 }, { "MODEL_PARAMETERS", 40002 }, { "SENSOR_PARAMETERS", 40010 }, { "SINGLE_TARGET_TRACKING_PARAMETERS", 40012 }, { "SYSTEM_STATUS_PARAMETERS", 40000 }, { "VIDEO_OUTPUT_PARAMETERS", 40003 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SV_MSG_DEFS_H
