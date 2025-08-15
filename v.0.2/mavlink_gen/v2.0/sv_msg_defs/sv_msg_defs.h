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

#define MAVLINK_SV_MSG_DEFS_XML_HASH -2596088919838826809

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{40000, 123, 2, 2, 0, 0, 0}, {40001, 147, 33, 33, 0, 0, 0}, {40002, 193, 16, 16, 0, 0, 0}, {40003, 196, 57, 57, 0, 0, 0}, {40004, 174, 14, 14, 0, 0, 0}, {40005, 217, 27, 27, 0, 0, 0}, {40006, 32, 35, 35, 0, 0, 0}, {40007, 136, 44, 44, 0, 0, 0}, {40008, 204, 15, 15, 0, 0, 0}, {40009, 34, 33, 33, 0, 0, 0}, {40010, 152, 16, 16, 0, 0, 0}, {40011, 184, 14, 14, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_SV_MSG_DEFS

// ENUM DEFINITIONS


/** @brief Layout mode; high nibble often encodes view count. */
#ifndef HAVE_ENUM_SV_LAYOUT_MODE
#define HAVE_ENUM_SV_LAYOUT_MODE
typedef enum SV_LAYOUT_MODE
{
   SV_LAYOUT_SINGLE=0, /*  | */
   SV_LAYOUT_2VIEWS=16, /*  | */
   SV_LAYOUT_3VIEWS=32, /*  | */
   SV_LAYOUT_4VIEWS=48, /*  | */
   SV_LAYOUT_MODE_ENUM_END=49, /*  | */
} SV_LAYOUT_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SV_DETECTION_OVERLAY_MODE
#define HAVE_ENUM_SV_DETECTION_OVERLAY_MODE
typedef enum SV_DETECTION_OVERLAY_MODE
{
   SV_DET_OVERLAY_NONE=0, /*  | */
   SV_DET_OVERLAY_BOXES=1, /*  | */
   SV_DET_OVERLAY_HEATMAP=2, /*  | */
   SV_DETECTION_OVERLAY_MODE_ENUM_END=3, /*  | */
} SV_DETECTION_OVERLAY_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SV_DETECTION_MODE
#define HAVE_ENUM_SV_DETECTION_MODE
typedef enum SV_DETECTION_MODE
{
   SV_DET_OFF=0, /*  | */
   SV_DET_CROP=1, /*  | */
   SV_DET_VAR=2, /*  | */
   SV_DET_CROP_AND_VAR=3, /*  | */
   SV_DETECTION_MODE_ENUM_END=4, /*  | */
} SV_DETECTION_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SV_SORTING_MODE
#define HAVE_ENUM_SV_SORTING_MODE
typedef enum SV_SORTING_MODE
{
   SV_SORT_NONE=0, /*  | */
   SV_SORT_SCORE=1, /*  | */
   SV_SORT_DISTANCE=2, /*  | */
   SV_SORTING_MODE_ENUM_END=3, /*  | */
} SV_SORTING_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SV_TARGETING_MODE
#define HAVE_ENUM_SV_TARGETING_MODE
typedef enum SV_TARGETING_MODE
{
   SV_TGT_OFF=0, /*  | */
   SV_TGT_MANUAL=1, /*  | */
   SV_TGT_ROI=2, /*  | */
   SV_TGT_GPS=3, /*  | */
   SV_TARGETING_MODE_ENUM_END=4, /*  | */
} SV_TARGETING_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SV_CROP_MODE
#define HAVE_ENUM_SV_CROP_MODE
typedef enum SV_CROP_MODE
{
   SV_CROP_OFF=0, /*  | */
   SV_CROP_CENTER=1, /*  | */
   SV_CROP_ROI=2, /*  | */
   SV_CROP_MODE_ENUM_END=3, /*  | */
} SV_CROP_MODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_SV_DEPTH_ESTIMATION_MODE
#define HAVE_ENUM_SV_DEPTH_ESTIMATION_MODE
typedef enum SV_DEPTH_ESTIMATION_MODE
{
   SV_DEPTH_OFF=0, /*  | */
   SV_DEPTH_FIXED=1, /*  | */
   SV_DEPTH_STEREO=2, /*  | */
   SV_DEPTH_ESTIMATION_MODE_ENUM_END=3, /*  | */
} SV_DEPTH_ESTIMATION_MODE;
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
#include "./mavlink_msg_sv_system_status_parameters.h"
#include "./mavlink_msg_sv_ai_parameters.h"
#include "./mavlink_msg_sv_model_parameters.h"
#include "./mavlink_msg_sv_video_output_parameters.h"
#include "./mavlink_msg_sv_capture_parameters.h"
#include "./mavlink_msg_sv_detection_parameters.h"
#include "./mavlink_msg_sv_detected_roi_parameters.h"
#include "./mavlink_msg_sv_cam_targeting_parameters.h"
#include "./mavlink_msg_sv_cam_optics_and_control_parameters.h"
#include "./mavlink_msg_sv_cam_offset_parameters.h"
#include "./mavlink_msg_sv_sensor_parameters.h"
#include "./mavlink_msg_sv_cam_depth_estimation_parameters.h"

// base include



#if MAVLINK_SV_MSG_DEFS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_SV_SYSTEM_STATUS_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_AI_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_MODEL_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_VIDEO_OUTPUT_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_CAPTURE_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_DETECTION_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_DETECTED_ROI_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_CAM_TARGETING_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_CAM_OPTICS_AND_CONTROL_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_CAM_OFFSET_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_SENSOR_PARAMETERS, MAVLINK_MESSAGE_INFO_SV_CAM_DEPTH_ESTIMATION_PARAMETERS}
# define MAVLINK_MESSAGE_NAMES {{ "SV_AI_PARAMETERS", 40001 }, { "SV_CAM_DEPTH_ESTIMATION_PARAMETERS", 40011 }, { "SV_CAM_OFFSET_PARAMETERS", 40009 }, { "SV_CAM_OPTICS_AND_CONTROL_PARAMETERS", 40008 }, { "SV_CAM_TARGETING_PARAMETERS", 40007 }, { "SV_CAPTURE_PARAMETERS", 40004 }, { "SV_DETECTED_ROI_PARAMETERS", 40006 }, { "SV_DETECTION_PARAMETERS", 40005 }, { "SV_MODEL_PARAMETERS", 40002 }, { "SV_SENSOR_PARAMETERS", 40010 }, { "SV_SYSTEM_STATUS_PARAMETERS", 40000 }, { "SV_VIDEO_OUTPUT_PARAMETERS", 40003 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_SV_MSG_DEFS_H
