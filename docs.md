# DigiView MAVLink Interface & Synclair Vision Dialect

This document describes how to control and monitor Synclair Vision’s DigiView software over MAVLink:

- Which standard MAVLink messages DigiView consumes/emits.
- The Synclair Vision MAVLink dialect messages (`SV_*`) and how to use them.
- How to use `MESSAGE_INTERVAL` to poll or stream DigiView state.

The dialect is defined in `sv_msg_defs.xml`.


---

## 1. Connection & General Behavior

### 1.1 Transport

When configured for MAVLink, DigiView listens on UDP port 14550 on the local machine for incoming MAVLink messages. Make sure your autopilot or MAVLink router forwards traffic to this port.

DigiView uses standard MAVLink 2 framing.

### 1.2 Heartbeats & Gimbal Protocol v2

DigiView implements **Gimbal Protocol v2**. It:

- Emits **one HEARTBEAT per virtual camera device**.
- Emits `GIMBAL_MANAGER_STATUS` and `GIMBAL_DEVICE_STATUS` for each virtual device.

These can be controlled via standard gimbal-manager messages and (in future) additional camera messages.


---

## 2. Standard MAVLink Messages Used by DigiView

### 2.1 Attitude / Pose Input

DigiView can use autopilot attitude for stabilization and targeting, but is not necessary. GPS position is necessary for geolocation features.

**Messages expected from the autopilot:**

| ID  | Type     | Name                      |
|-----|----------|---------------------------|
| 30  | Message  | `ATTITUDE`                |
| 31  | Message  | `ATTITUDE_QUATERNION`     |
| 33  | Message  | `GLOBAL_POSITION_INT`     |
| 242 | Message  | `HOME_POSITION`           |

*Notes:*

- Attitude messages should be provided at **>= 100 Hz** for best performance.
- `GLOBAL_POSITION_INT` feeds DigiView’s internal geolocation and altitude.
- `HOME_POSITION` is used for home altitude and correct geo-projection.
- `ATTITUDE_QUATERNION` and `ATTITUDE` are only optional.

### 2.2 Gimbal Control (Gimbal Protocol v2)

DigiView exposes its views as gimbal devices and supports:

| Number | Type     | Name                                   |
|--------|----------|----------------------------------------|
| 282    | Message  | `GIMBAL_MANAGER_SET_ATTITUDE`          |
| 287    | Message  | `GIMBAL_MANAGER_SET_PITCHYAW`          |
| 1000   | Command  | `MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW`   |
| 1001   | Command  | `MAV_CMD_DO_GIMBAL_MANAGER_CONFIGURE`  |

**Behavior:**

- `GIMBAL_MANAGER_SET_ATTITUDE`  
  DigiView converts the quaternion to Euler angles and maps this to its internal targeting system.

- `GIMBAL_MANAGER_SET_PITCHYAW` / `MAV_CMD_DO_GIMBAL_MANAGER_PITCHYAW`  
  The pitch/yaw pair is used as an orientation target.

All accepted commands produce a `COMMAND_ACK` with `MAV_RESULT_ACCEPTED`.


### 2.3 Camera Commands (planned / partial)

DigiView references, but does not fully implement yet:

| Number | Type    | Name                         |
|--------|---------|------------------------------|
| 200    | Command | `MAV_CMD_DO_CONTROL_VIDEO`   |
| 203    | Command | `MAV_CMD_DO_DIGICAM_CONTROL` |
| 214    | Command | `MAV_CMD_DO_SET_CAM_TRIGG_INTERVAL` |
| 530    | Command | `MAV_CMD_SET_CAMERA_MODE`    |
| 531    | Command | `MAV_CMD_SET_CAMERA_ZOOM`    |
| 2000   | Command | `MAV_CMD_IMAGE_START_CAPTURE`|
| 2001   | Command | `MAV_CMD_IMAGE_STOP_CAPTURE` |


### 2.4 MESSAGE_INTERVAL (GET / Streaming)

To **request DigiView state**, send a standard MAVLink:

`MESSAGE_INTERVAL`:

message_id = <ID of `SV_*` message>

interval_us = 0 for one-shot, >0 for periodic streaming

DigiView will:

- Validate the message ID.
- Return the corresponding `SV_*` message once or at the requested interval.
- Respond to the request with `COMMAND_ACK` (`MAV_RESULT_ACCEPTED`) when valid.

If unknown IDs are used, DigiView ignores the request.


---

## 3. Synclair Vision MAVLink Dialect

All dialect messages use MAVLink 2 and ID range **40000–40013**.

### 3.1 Common Concepts

**stream_name**

`char[8]` identifying a specific DigiView pipeline/stream.

**cam_id**

`uint8_t` referencing a user-view inside a stream. Range: `0 … num_user_views-1`.

### 3.2 Enums

**SV_LAYOUT_MODE:**
- `0` - SV_LAYOUT_SINGLE
- `1` - SV_LAYOUT_2_STACKED
- `2` - SV_LAYOUT_2_SIDE_BY_SIDE
- `3` - SV_LAYOUT_2_SIDE_BY_SIDE_1_STACKED
- `4` - SV_LAYOUT_4
- `5` - SV_LAYOUT_3_SIDE_BY_SIDE_1_STACKED

**SV_DETECTION_OVERLAY_MODE:**
- `0` - SV_DET_OVERLAY_NONE
- `1` - SV_DET_OVERLAY_SINGLE_TOP_RIGHT
- `2` - SV_DET_OVERLAY_COLUMN_RIGHT
- `3` - SV_DET_OVERLAY_COLUMN_LEFT
- `4` - SV_DET_OVERLAY_ROW_TOP
- `5` - SV_DET_OVERLAY_ROW_BOTTOM

**SV_DETECTION_MODE:**
- `0` - SV_DET_MODE_STANDARD

**SV_SORTING_MODE:**
- `0` - SV_SORT_STANDARD

**SV_TARGETING_MODE:**
- `0` - SV_TRG_DIRECTIONAL
- `1` - SV_TRG_COORDINAL
- `2` - SV_TRG_DETECTION
- `3` - SV_TRG_SINGLE_TARGET_TRACKING

**SV_CROP_MODE:**
- `0` - SV_CROP_NONE
- `1` - SV_CROP_CARTESIAN
- `2` - SV_CROP_PANORAMA

**SV_DEPTH_ESTIMATION_MODE:**
- `0` - SV_DEPTH_OFF

---

## 4. Dialect Message Reference

The following messages can be directly **SET** by sending the MAVLink message, and can be **GET**/streamed using `MESSAGE_INTERVAL` with their ID.

---

### 4.1 `SV_SYSTEM_STATUS_PARAMETERS` (ID 40000)

Reports DigiView system status and errors.

| Field       | Type    | Description                      |
|-------------|---------|----------------------------------|
| status      | uint8_t | Status code.                     |
| error       | uint8_t | Error code.                      |
| jetson_temp | float   | Jetson module temperature (deg C). |

**Usage:**

Read-only; used for monitoring.


---

### 4.2 `SV_AI_PARAMETERS` (ID 40001)

AI runtime and model selection.

| Field            | Type     | Description                              |
|------------------|----------|------------------------------------------|
| run_ai           | uint8_t  | 1=run, 0=stop AI                         |
| track_model_name | char[16] | Tracking model name         |
| scan_model_name  | char[16] | Detection model name                |

**SET:** Enable/disable AI, change models.

**GET:** Retrieve AI status and current models.


---

### 4.3 `SV_MODEL_PARAMETERS` (ID 40002)

Generic model configuration.

| Field      | Type     | Description     |
|------------|----------|-----------------|
| model_name | char[16] | Active model    |

**SET:** Ignored.

**GET:** Retrieves all available models (one per message).

---

### 4.4 `SV_VIDEO_OUTPUT_PARAMETERS` (ID 40003)

Video layout, resolution and overlay configuration.

| Field                         | Type        | Description                          |
|-------------------------------|-------------|--------------------------------------|
| stream_name                   | char[8]     | Stream identifier, see Common Concepts |
| width, height                 | uint16_t    | Output resolution                    |
| fps                           | uint8_t     | Output framerate                     |
| layout_mode                   | uint8_t     | Layout mode, see Enums               |
| detection_overlay_mode        | uint8_t     | Detection overlay mode, see Enums    |
| num_user_views                | uint8_t     | Number of active user views          |
| views_x[4], views_y[4]        | uint16_t    | View positions on output             |
| views_w[4], views_h[4]        | uint16_t    | View sizes on output                 |
| detection_overlay_x,y,w,h     | uint16_t    | Overlay position and size            |
| single_detection_size         | uint16_t    | Size of single detection overlay     |

Controls how output frames are composed.

**SET:** Configure output. Only stream_name, width, height, fps, layout_mode, detection_overlay_mode are used; view and overlay fields are read-only.

**GET:** Retrieve current output configuration.

---

### 4.5 `SV_CAPTURE_PARAMETERS` (ID 40004)

Still image and video recording.

| Field            | Type     | Description                           |
|------------------|----------|---------------------------------------|
| stream_name      | char[8]  | Stream identifier, see Common Concepts |
| cap_single_image | uint8_t  | Trigger still image capture           |
| record_video     | uint8_t  | Toggle video recording                |
| images_captured  | uint16_t | Number of images captured             |
| videos_captured  | uint16_t | Number of videos recorded             |

**SET:**
- Trigger stills
- Toggle video recording

**GET:**
- Counters for images/videos

---

### 4.6 `SV_DETECTION_PARAMETERS` (ID 40005)

Detection/AI thresholds and heuristic weight configuration.

| Field                      | Type    | Description                                   |
|----------------------------|---------|-----------------------------------------------|
| mode                       | uint8_t | Detection mode, see Enums                     |
| sorting_mode               | uint8_t | Sorting mode, see Enums                       |
| track_confidence_threshold | float   | Confidence threshold when tracking            |
| scan_confidence_threshold  | float   | Confidence threshold when scanning            |
| track_box_overlap          | float   | Max overlap between track boxes               |
| scan_box_overlap           | float   | Max overlap between scan boxes                |
| creation_score_scale       | uint8_t | Score scaling for detection creation          |
| bonus_detection_scale      | uint8_t | Score bonus when found during scanning        |
| bonus_redetection_scale    | uint8_t | Score bonus when found during tracking        |
| missed_detection_penalty   | uint8_t | Penalty when expected but missed in scanning  |
| missed_redetection_penalty | uint8_t | Penalty when expected but missed in tracking  |

Controls the behavior of the detection engine.
**SET:** Configure detection behavior.

**GET:** Retrieve current detection configuration.

**Note:** Only confidence thresholds are recommended to be changed.

---

### 4.7 `SV_DETECTED_ROI_PARAMETERS` (ID 40006)

ROI/detection export: orientation and geolocation.

| Field                  | Type    | Description                                      |
|------------------------|---------|--------------------------------------------------|
| index                  | uint8_t | Detection index (255 for all detections)     |
| score                  | uint8_t | Detection score                                  |
| total_detections       | uint8_t | Number of detections returned across messages    |
| type                   | int16_t | Detection class                                  |
| yaw_global             | float   | Global yaw in radians (vs true north)            |
| pitch_global           | float   | Global pitch in radians (vs true north)          |
| rel_frame_of_reference | uint8_t | Frame of reference for relative yaw/pitch        |
| yaw_rel                | float   | Relative yaw in radians (vs camera center axis)  |
| pitch_rel              | float   | Relative pitch in radians (vs camera center axis)|
| latitude               | float   | Detection latitude            |
| longitude              | float   | Detection longitude           |
| altitude               | float   | Detection altitude (m)         |
| distance               | float   | Distance to object (m, currently unused)         |

**GET only** (streamable).
One message per detection; zero-detection case returns one message with `total_detections=0`. Use index 255 for all detections; use a 1-based index to retrieve a specific detection.

---

### 4.8 `SV_CAM_TARGETING_PARAMETERS` (ID 40007)

High-level user camera targeting.

| Field            | Type    | Description                                  |
|------------------|---------|----------------------------------------------|
| stream_name      | char[8] | Stream identifier, see Common Concepts       |
| cam_id           | uint8_t | Camera ID, see Common Concepts               |
| targeting_mode   | uint8_t | Targeting mode, see Enums                    |
| euler_delta      | uint8_t | 1=relative, 0=absolute Euler angles          |
| yaw, pitch, roll | float   | Euler angles (radians)                       |
| lock_flags       | uint8_t | Axis lock flags (bit 0=roll, 1=pitch, 2=yaw) |
| x_offset,y_offset| float   | Normalized view offsets [-1.0, 1.0]          |
| target_latitude  | float   | Target latitude                              |
| target_longitude | float   | Target longitude                             |
| target_altitude  | float   | Target altitude (m)                          |

**SET:** Configure camera targeting.

**GET:** Retrieve current targeting configuration.

---

### 4.9 `SV_CAM_OPTICS_AND_CONTROL_PARAMETERS` (ID 40008)

Zoom, FOV, crop mode.

| Field      | Type    | Description                                   |
|------------|---------|-----------------------------------------------|
| stream_name| char[8] | Stream identifier, see Common Concepts        |
| cam_id     | uint8_t | Camera ID, see Common Concepts                |
| zoom       | int8_t  | Zoom control (degrees delta)        |
| fov        | float   | Field of view (radians)                       |
| crop_mode  | uint8_t | Crop mode, see Enums                          |

---

### 4.10 `SV_CAM_OFFSET_PARAMETERS` (ID 40009)

Currently disabled.
---

### 4.11 `SV_SENSOR_PARAMETERS` (ID 40010)

Sensor exposure and gain configuration.

| Field            | Type     | Description                              |
|------------------|----------|------------------------------------------|
| min_exposure     | uint32_t | Minimum exposure time (microseconds)     |
| max_exposure     | uint32_t | Maximum exposure time (microseconds)     |
| min_gain         | uint32_t | Minimum gain                             |
| max_gain         | uint32_t | Maximum gain                             |
| target_brightness| float    | Target brightness level                  |
---

### 4.12 `SV_CAM_DEPTH_ESTIMATION_PARAMETERS` (ID 40011)

Depth estimation mode and depth parameter.

| Field                 | Type    | Description                                  |
|-----------------------|---------|----------------------------------------------|
| stream_name           | char[8] | Stream identifier, see Common Concepts       |
| cam_id                | uint8_t | Camera ID, see Common Concepts               |
| depth_estimation_mode | uint8_t | Depth estimation mode, see Enums             |
| depth                 | float   | Depth value / parameter (implementation-specific) |

---

### 4.13 `SV_SINGLE_TARGET_TRACKING_PARAMETERS` (ID 40012)

Single target tracking control and current state.

| Field                  | Type    | Description                                  |
|------------------------|---------|----------------------------------------------|
| command                | uint8_t | Tracking command        |
| stream_name            | char[8] | Stream identifier, see Common Concepts       |
| cam_id                 | uint8_t | Camera ID, see Common Concepts               |
| x_offset               | float   | Normalized horizontal offset [-1.0, 1.0]     |
| y_offset               | float   | Normalized vertical offset [-1.0, 1.0]       |
| detection_id           | uint8_t | Detection ID to follow when relevant         |
| zoom_level             | uint16_t | Tracking zoom level          |
| confidence             | float   | System confidence in current target          |
| yaw_global             | float   | Global yaw in radians                        |
| pitch_global           | float   | Global pitch in radians                      |
| rel_frame_of_reference | uint8_t | Frame of reference for relative yaw/pitch    |
| yaw_rel                | float   | Relative yaw in radians                      |
| pitch_rel              | float   | Relative pitch in radians                    |

---

### 4.14 `SV_CALIBRATION_PARAMETERS` (ID 40013)

Camera calibration command and status.

| Field         | Type    | Description           |
|---------------|---------|-----------------------|
| cam_id        | uint8_t | Camera index          |
| calib_command | uint8_t | Calibration command   |
| calib_status  | uint8_t | Calibration status    |

---

## 5. Integrating DigiView via MAVLink

1. **Connect** via UDP port 14550.
2. **Control gimbal** using Gimbal Protocol v2 or `SV_CAM_TARGETING_PARAMETERS`.
3. **Configure DigiView** using the `SV_*` dialect messages.
4. **Poll/stream state** using `MESSAGE_INTERVAL` with any `SV_*` message ID.

This provides a full MAVLink-native control and telemetry system for DigiView.
