# X4 AI recognition runtime status.
# This message carries init/runtime state, health, and dual-stream scheduling details.

# Message kind constants.
uint8 KIND_INIT_STATUS=0
uint8 KIND_RUNTIME_STATUS=1

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

# Message kind: KIND_INIT_STATUS or KIND_RUNTIME_STATUS.
uint8 message_kind

# Current AI state.
uint8 status
string status_label
string ai_state
string state

# Initialization fields.
bool initialization_success
bool camera_healthy
uint8 camera_index
uint8 level
string message

# System health fields.
bool ai_running
bool has_error
uint16 error_code
string error_code_name
string error_message
string error_source

# Stream scheduling state. Use -1 when no stream is selected.
int8 main_stream_index
int8 candidate_stream_index
int8 switch_stream_index

# Lock quality: "none", "weak", or "strong".
string lock_quality

# ROI state.
bool roi_enabled
int8 roi_stream_index
uint16 detect_interval
uint16 telephoto_guard_remaining

# Cross-stream ROI state.
bool cross_roi_enabled
float32 cross_roi_expand_ratio

# Mapping parameters [dx, dy, scale, scale_x, scale_y].
float32[5] cross_roi_wide_to_tele
float32[5] cross_roi_tele_to_wide

# Per-stream detection scheduling.
# detect_enabled_streams order: [telephoto, wide].
bool[] detect_enabled_streams

# Per-stream modes such as "full", "roi", "cross-roi", "idle".
string[] detect_stream_modes

# ROI regions flattened as [s0_x1, s0_y1, s0_x2, s0_y2, s1_x1, s1_y1, s1_x2, s1_y2].
# Use -1 for an unavailable ROI.
int32[] detect_roi_regions_flat

# Cross ROI source/target indexes. Use -1 when unavailable.
int8 cross_roi_source_index
int8 cross_roi_target_index

# Cross ROI region [x1, y1, x2, y2]. Use -1 for unavailable values.
int32[4] cross_roi_region

# Current best result summary.
string best_stream_name
bool best_tracked
float32 best_confidence

# Latest subscribed input snapshots. These are optional debug/trace fields.
string[] subscription_topics
string[] subscription_payloads

# Unix timestamp in milliseconds.
uint64 timestamp_ms
