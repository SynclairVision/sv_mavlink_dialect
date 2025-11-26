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

#define MAVLINK_SV_MSG_DEFS_XML_HASH 8681662015212196294

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{40000, 83, 2, 2, 0, 0, 0}, {40001, 239, 42, 42, 0, 0, 0}, {40002, 109, 16, 16, 0, 0, 0}, {40003, 44, 57, 57, 0, 0, 0}, {40004, 238, 6, 6, 0, 0, 0}, {40005, 118, 27, 27, 0, 0, 0}, {40006, 38, 35, 35, 0, 0, 0}, {40007, 126, 1, 1, 0, 0, 0}, {40008, 101, 14, 14, 0, 0, 0}, {40009, 248, 2, 2, 0, 0, 0}, {40010, 141, 2, 2, 0, 0, 0}, {40011, 75, 2, 2, 0, 0, 0}, {40012, 241, 2, 2, 0, 0, 0}, {40013, 25, 25, 25, 0, 0, 0}, {40014, 117, 5, 5, 0, 0, 0}, {40015, 84, 21, 21, 0, 0, 0}, {40016, 174, 20, 20, 0, 0, 0}, {40017, 25, 6, 6, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SV_MSG_DEFS

// ENUM DEFINITIONS


/** @brief Parameter type identifiers, mirroring DigiView's PARAM_TYPE: each value selects which parameter block is encoded in the data payload. */
#ifndef HAVE_ENUM_PARAM_TYPE
#define HAVE_ENUM_PARAM_TYPE
typedef enum PARAM_TYPE
{
   SYSTEM_STATUS=0, /* System status: indicates whether the system is idle, running, finished, or in error. | */
   GENERAL_SETTINGS=1, /* General system settings such as resolution, ROI, FPS, and AI enable flag. | */
   PARAM_MODEL=2, /* Model names available to the system (used by GENERAL_SETTINGS for scanning / tracking models). | */
   VIDEO_OUTPUT=3, /* Video output configuration: total output resolution, layout, overlay, and view bounding boxes. | */
   SCAPTURE=4, /* Capture control and counters (single image / video capture). | */
   DETECTION=5, /* AI post-processing parameters and scoring/overlap settings for detections. | */
   DETECTED_ROI=6, /* Information about one or more detected regions of interest (ROIs). | */
   SLENS=7, /* Which lens parameters to use when doing undistortion calculations. | */
   CAM_EULER=8, /* User camera direction in Euler angles relative to the world. | */
   CAM_ZOOM=9, /* Digital zoom control for user-controlled cameras. | */
   CAM_LOCK_FLAGS=10, /* Lock flags for user-controlled cameras' roll/pitch/yaw. | */
   CAM_CONTROL_MODE=11, /* Gimbal / control mode for user-controlled cameras. | */
   CAM_CROP_MODE=12, /* Output cropping mode for user-controlled cameras. | */
   CAM_OFFSET=13, /* Utility for translating a normalized frame position to Euler angles and offsets. | */
   CAM_FOV=14, /* Field-of-view configuration for user-controlled cameras. | */
   CAM_TARGET=15, /* Geographic targeting (lat/lon/alt) or frame-relative targeting for user-controlled cameras. | */
   CAM_SENSOR=16, /* Camera sensor exposure/gain limits and target brightness. | */
   CAM_DEPTH_ESTIMATION=17, /* Depth estimation configuration and current estimated depth. | */
   PARAM_TYPE_ENUM_END=18, /*  | */
} PARAM_TYPE;
#endif

/** @brief Application-level message type, mirroring DigiView's MESSAGE_TYPE. Chooses whether a packet is a GET/SET/CURRENT_PARAMETERS, etc. */
#ifndef HAVE_ENUM_MESSAGE_TYPE
#define HAVE_ENUM_MESSAGE_TYPE
typedef enum MESSAGE_TYPE
{
   EMPTY=0, /* Empty message (no parameters). | */
   GET_PARAMETERS=1, /* Request current parameters from DigiView for the specified PARAM_TYPE. | */
   SET_PARAMETERS=2, /* Instructs DigiView to set parameters for the specified PARAM_TYPE. | */
   CURRENT_PARAMETERS=3, /* Response flag used by DigiView, indicating the message contains the current parameters in use. | */
   ACKNOWLEDGEMENT=4, /* Indicates that a previous SET_PARAMETERS request was successfully applied. | */
   CHECKSUM_ERROR=5, /* The checksum of the previous message did not match the transmitted checksum. | */
   DATA_ERROR=6, /* DigiView could not interpret the data received (invalid payload format or values). | */
   FORBIDDEN=7, /* The sender does not have permission to perform the requested action(s). | */
   UNKNOWN=8, /* The supplied message or parameter type is unknown to DigiView. | */
   QUIT=255, /* Instructs DigiView to stop execution and terminate. | */
   MESSAGE_TYPE_ENUM_END=256, /*  | */
} MESSAGE_TYPE;
#endif

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
#include "./mavlink_msg_general_settings_parameters.h"
#include "./mavlink_msg_model_parameters.h"
#include "./mavlink_msg_video_output_parameters.h"
#include "./mavlink_msg_capture_parameters.h"
#include "./mavlink_msg_detection_parameters.h"
#include "./mavlink_msg_detected_roi_parameters.h"
#include "./mavlink_msg_lens_parameters.h"
#include "./mavlink_msg_cam_euler_parameters.h"
#include "./mavlink_msg_cam_zoom_parameters.h"
#include "./mavlink_msg_cam_lock_flags_parameters.h"
#include "./mavlink_msg_cam_control_mode_parameters.h"
#include "./mavlink_msg_cam_crop_mode_parameters.h"
#include "./mavlink_msg_cam_offset_parameters.h"
#include "./mavlink_msg_cam_fov_parameters.h"
#include "./mavlink_msg_cam_target_parameters.h"
#include "./mavlink_msg_cam_sensor_parameters.h"
#include "./mavlink_msg_cam_depth_estimation_parameters.h"

// base include



#if MAVLINK_SV_MSG_DEFS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_SYSTEM_STATUS_PARAMETERS, MAVLINK_MESSAGE_INFO_GENERAL_SETTINGS_PARAMETERS, MAVLINK_MESSAGE_INFO_MODEL_PARAMETERS, MAVLINK_MESSAGE_INFO_VIDEO_OUTPUT_PARAMETERS, MAVLINK_MESSAGE_INFO_CAPTURE_PARAMETERS, MAVLINK_MESSAGE_INFO_DETECTION_PARAMETERS, MAVLINK_MESSAGE_INFO_DETECTED_ROI_PARAMETERS, MAVLINK_MESSAGE_INFO_LENS_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_EULER_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_ZOOM_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_LOCK_FLAGS_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_CONTROL_MODE_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_CROP_MODE_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_OFFSET_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_FOV_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_TARGET_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_SENSOR_PARAMETERS, MAVLINK_MESSAGE_INFO_CAM_DEPTH_ESTIMATION_PARAMETERS}
# define MAVLINK_MESSAGE_NAMES {{ "CAM_CONTROL_MODE_PARAMETERS", 40011 }, { "CAM_CROP_MODE_PARAMETERS", 40012 }, { "CAM_DEPTH_ESTIMATION_PARAMETERS", 40017 }, { "CAM_EULER_PARAMETERS", 40008 }, { "CAM_FOV_PARAMETERS", 40014 }, { "CAM_LOCK_FLAGS_PARAMETERS", 40010 }, { "CAM_OFFSET_PARAMETERS", 40013 }, { "CAM_SENSOR_PARAMETERS", 40016 }, { "CAM_TARGET_PARAMETERS", 40015 }, { "CAM_ZOOM_PARAMETERS", 40009 }, { "CAPTURE_PARAMETERS", 40004 }, { "DETECTED_ROI_PARAMETERS", 40006 }, { "DETECTION_PARAMETERS", 40005 }, { "GENERAL_SETTINGS_PARAMETERS", 40001 }, { "LENS_PARAMETERS", 40007 }, { "MODEL_PARAMETERS", 40002 }, { "SYSTEM_STATUS_PARAMETERS", 40000 }, { "VIDEO_OUTPUT_PARAMETERS", 40003 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SV_MSG_DEFS_H
