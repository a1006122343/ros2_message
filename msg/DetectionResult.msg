# X4 AI target recognition result.
# This message carries the best selected result from the dual-stream AI pipeline.

# AI state constants.
uint8 STATUS_INIT=0
uint8 STATUS_DETECTING=1
uint8 STATUS_RECOGNIZED=2
uint8 STATUS_TRACKING=3

# Camera index constants.
uint8 CAMERA_TELEPHOTO=0
uint8 CAMERA_WIDE=1
uint8 CAMERA_UNKNOWN=2

# Error code constants.
uint16 ERROR_OK=0
uint16 ERROR_INIT_FAILED=100
uint16 ERROR_ROS2_INIT_FAILED=101
uint16 ERROR_CAMERA_UNHEALTHY=200
uint16 ERROR_CAMERA_READ_TIMEOUT=201
uint16 ERROR_MODEL_LOAD_FAILED=300
uint16 ERROR_INFERENCE_FAILED=301
uint16 ERROR_ROS2_PUBLISH_FAILED=400
uint16 ERROR_UNKNOWN=900

# Protocol/version information. Current value: "x5-ai-v2.0".
string protocol_version

# Current AI state. Recommended control input is status == STATUS_TRACKING.
uint8 status
string status_label

# Result source camera. Normal detection results should be CAMERA_TELEPHOTO or CAMERA_WIDE.
uint8 camera_index

# Message level. Current fixed value: 6.
uint8 level

# Short human-readable message, usually the stream name.
string message

# Internal AI state, for example: "search", "candidate", "locked", "soft_recovery", "recovery".
string ai_state
string runtime_state

# System health fields.
bool ai_running
bool has_error
uint16 error_code
string error_code_name
string error_message
string error_source

# Stream/camera descriptive fields.
# Examples: stream_name="telephoto", fov_type="telephoto"; stream_name="wide_angle", fov_type="wide".
string stream_name
string fov_type

# Detection/tracking quality.
bool tracked
float32 confidence
float32 track_score

# Line-of-sight angles in radians.
# Horizontal: image center is 0, left negative, right positive.
# Vertical: image center is 0, down negative, up positive.
float32 horizontal_angle_rad
float32 vertical_angle_rad

# Estimated target distance in meters.
float32 distance_m

# Camera mounting parameters [x, y, z, yaw]. Engineering reference values.
float32[4] camera_position

# Target bounding box in pixels: [x1, y1, x2, y2].
float32[4] box

# Unix timestamp in milliseconds.
uint64 timestamp_ms
