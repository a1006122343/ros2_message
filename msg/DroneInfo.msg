# =============================================================================
# DroneInfo — 无人机状态完整快照
#   发布节点：ai_control_node
#   发布频率：5Hz（每 10 个控制 tick 一次，控制主频 50Hz）
#   消费方：地面站 / 外部适配器（vgn 等），本仓库内**无**订阅者
#   话题：/drone/telemetry/drone_info
#
# 字段分组（共 10 段，与 PlaneInfo 头文件注释一致）：
#   1) 位置/速度/姿态基础
#   2) 4.1 Heartbeat
#   3) 4.2 罗盘航向
#   4) 4.3 Battery
#   5) 4.5 GpsRaw
#   6) 4.4 SystemStatus / 1.2.4 传感器位
#   7) 1.2.6 HK_AI_STATUS
#   8) 1.2.7 HK_MOTOR_STATUS
#   9) 飞行模式/起落/任务标志
#  10) VTOL 状态 / Home
# =============================================================================
#
# -----------------------------------------------------------------------------
# 坐标系与单位约定（**必读**）
# -----------------------------------------------------------------------------
#   * 角度统一 _rad（弧度）或 _deg（度），看后缀
#   * 百分比 0~100
#   * 经纬高：lat (deg) / lon (deg) / alt (m, AMSL, 上为正)
#   * PlaneInfo 内部把 lat/lon/alt 存为 tf2::Vector3 position，
#     顺序是 **(lon, lat, alt)**——即 position.x=lon, position.y=lat, position.z=alt；
#     在这里按人类直觉拆成 latitude_deg / longitude_deg / altitude_m 三个字段下发
#   * 速度/加速度 (_mps, _mps2)：**世界系 NED**（x=北, y=东, z=下；下降为正）
#   * 角速度 (_radps)：**机体系**（x=滚转轴, y=俯仰轴, z=偏航轴）
#   * 姿态四元数 (attitude_q*)：body→world，**XYZW 顺序，Hamilton 约定，NED 世界系**
#   * 欧拉角 (roll/pitch/yaw_rad)：body→world，**ZYX 分解**（MC 视图）
#   * FW 欧拉角 (fw_*_rad)：原始 q 右乘绕 Y 轴 +90° 旋转后再 ZYX 分解，
#     使固定翼平飞 (机头朝世界 +X) 时 fw_* ≈ 0；MC 悬停时 fw_pitch_rad ≈ -π/2
#   * camera_*: active camera→world，相机本体系 +X=前, +Y=右, +Z=下
#   * velocity_yaw/pitch_angle_rad：**世界系速度向量方向**（NOT 机体姿态、NOT 攻角/侧滑）
#   * heading_deg：罗盘航向 0~360°，0=正北、顺时针（NOT 机体 yaw_rad）
#
# 哨兵值（无数据语义）：
#   * 电机 rpm = -1
#   * 电机 temperature = -128 (INT8_MIN)
#   * 电机 thrust_pct = NaN（rosidl 默认序列化为 0；客户端应**优先按 motor_count 判断**，
#     0 也可能表示 thrust = 0）
#   * gps_hdop = 99 表示无定位
#   * relative_altitude_m = 0 在 home_valid=false 之前是**未定义值**，不是 0m
# -----------------------------------------------------------------------------

# =============================================================================
# 1) 位置 / 速度 / 姿态基础
# =============================================================================
# 经纬度 + 高度（世界 LLA）
float64 latitude_deg            # 纬度 (deg), 范围 -90~+90；PX4: VehicleGlobalPosition.lat；AP: GLOBAL_POSITION_INT.lat * 1e-7
float64 longitude_deg           # 经度 (deg), 范围 -180~+180；PX4: VehicleGlobalPosition.lon；AP: GLOBAL_POSITION_INT.lon * 1e-7
float64 altitude_m              # 海拔高度 (m, AMSL 上为正)；PX4: VehicleGlobalPosition.alt；AP: GLOBAL_POSITION_INT.alt mm → m
float64 relative_altitude_m     # 相对起飞点高度 (m, 上为正)，= altitude_m - home_altitude_m；home_valid=false 之前为 0（**未定义**）

# NED 速度（世界系）
float32 velocity_x_mps          # NED 北向速度 (m/s, 北为正)
float32 velocity_y_mps          # NED 东向速度 (m/s, 东为正)
float32 velocity_z_mps          # NED 下向速度 (m/s, **下降为正**)
float32 horizontal_speed_mps    # 水平地速 (m/s) = sqrt(velocity_x_mps² + velocity_y_mps²)；非真空速
float32 true_airspeed_mps       # 真空速 (m/s)；PX4: AirspeedValidated.true_airspeed_m_s；AP: VFR_HUD.airspeed；无空速管时为 0

# NED 加速度（世界系）
float32 acceleration_x_mps2     # NED 北向加速度 (m/s²)
float32 acceleration_y_mps2     # NED 东向加速度 (m/s²)
float32 acceleration_z_mps2     # NED 下向加速度 (m/s², 下降加速为正)

# 机体系角速度
float32 angular_velocity_x_radps   # 机体滚转角速度 (rad/s)
float32 angular_velocity_y_radps   # 机体俯仰角速度 (rad/s)
float32 angular_velocity_z_radps   # 机体偏航角速度 (rad/s)

# 姿态：body → world（四元数 + Euler）
float32 attitude_qx             # body→world 四元数 x 分量（XYZW 顺序, Hamilton 约定, NED）
float32 attitude_qy             # body→world 四元数 y 分量
float32 attitude_qz             # body→world 四元数 z 分量
float32 attitude_qw             # body→world 四元数 w 分量
float32 roll_rad                # MC 视图 body→world 滚转 (rad), 范围 -π~+π；body_world_euler_rad.x
float32 pitch_rad               # MC 视图 body→world 俯仰 (rad), 范围 -π/2~+π/2；body_world_euler_rad.y
float32 yaw_rad                 # MC 视图 body→world 偏航 (rad), 范围 -π~+π；body_world_euler_rad.z（**NOT** 罗盘 heading_deg）

# FW 视图姿态：q_raw 右乘绕 Y 轴 +90° 旋转后 ZYX 分解
#   用途：让 fw_*_rad 在固定翼平飞 (机头朝世界 +X) 时 ≈ 0，便于直接当欧拉角 PID 目标
#   副作用：MC 悬停时 fw_pitch_rad ≈ -π/2
float32 fw_roll_rad             # FW 视图滚转 (rad)，fw_euler_rad.x
float32 fw_pitch_rad            # FW 视图俯仰 (rad)，fw_euler_rad.y
float32 fw_yaw_rad              # FW 视图偏航 (rad)，fw_euler_rad.z

# 相机姿态：active camera → world
#   active 相机由 active_camera_index_ 决定 (0=长焦, 1=广角, ...)
#   相机本体系：+X=前, +Y=右, +Z=下
#   camera_to_world_rtt = body_to_world_rtt * cam_mount_rtt_[active]，ZYX 分解
float32 camera_roll_rad         # 相机滚转 (rad)，camera_world_euler_rad.x
float32 camera_pitch_rad        # 相机俯仰 (rad)，camera_world_euler_rad.y
float32 camera_yaw_rad          # 相机偏航 (rad)，camera_world_euler_rad.z

# 气流相关
float32 angle_of_attack_rad     # 攻角 (rad) = velocity_pitch_angle_rad - pitch_rad
float32 sideslip_angle_rad      # 侧滑角 (rad) = velocity_yaw_angle_rad - yaw_rad
float32 velocity_yaw_angle_rad  # **世界系速度向量方向**的偏航角 (rad, NED)；atan2(vy_dir, vx_dir)；NOT 机体姿态
float32 velocity_pitch_angle_rad  # **世界系速度向量方向**的俯仰角 (rad, NED)；atan2(-vz_dir, sqrt(vx²+vy²))；NOT 攻角

# 本地 NED 缓存（来自 PX4 VehicleLocalPosition / AP LOCAL_POSITION_NED）
#   PX4：odometry.position/velocity 直接存入
#   AP：fc_local_x_/y_ 在 AP 模式下恒为 0（odometry 不会被 AP 填），fc_local_z_ 由 GLOBAL_POSITION_INT.relative_alt 取负得到
float32 fc_local_x_m            # 本地北向位置 (m)，**AP 模式下恒为 0**
float32 fc_local_y_m            # 本地东向位置 (m)，**AP 模式下恒为 0**
float32 fc_local_z_m            # 本地下向位置 (m，下为正)
float32 fc_local_vx_mps         # 本地北向速度 (m/s)
float32 fc_local_vy_mps         # 本地东向速度 (m/s)
float32 fc_local_vz_mps         # 本地下向速度 (m/s)

# =============================================================================
# 2) 4.1 Heartbeat
# =============================================================================
#   字段语义对齐 MAVLink HEARTBEAT；PX4 与 AP 端**实际能填的字段差异**：
#   - fc_vehicle_type:   PX4 填 VehicleStatus.vehicle_type；AP 填 HEARTBEAT.type
#   - fc_autopilot:      PX4 = 12 (PX4) 固定；AP 路径**当前实现有 bug**——HEARTBEAT.autopilot
#                        已缓存到 APMavlinkAdapter::hb_autopilot_ 但 get_hb_autopilot()
#                        未被 ai_control_node 调用，AP 模式下本字段会显示 12 (PX4 默认值)
#   - fc_base_mode:      AP 端未走 MAVLink 原值；当前**只置 armed bit (0x80)**
#   - fc_custom_mode:    PX4 = 0（PX4 用 nav_state, 装不进 32-bit custom_mode）；
#                        AP 路径同样**未传递**（get_hb_custom_mode 未被调用），AP 模式下恒为 0
#   - fc_system_status:  PX4 = 0（不直接提供）；AP 路径**当前为占位**，由 update_base_mode_armed
#                        写为 3 (STANDBY)，与实际状态无关
uint8  fc_vehicle_type          # MAV_TYPE 枚举
uint8  fc_autopilot             # MAV_AUTOPILOT 枚举；12=PX4, 3=ArduPilot（**AP 模式下当前为 12**）
uint8  fc_base_mode             # MAV_MODE_FLAG 位掩码；当前**仅 armed bit (0x80)**
uint32 fc_custom_mode           # 自定义模式；PX4 端未填，AP 端未传
uint8  fc_system_status         # MAV_STATE 枚举；**当前为占位**（PX4=0, AP=3 STANDBY）

# =============================================================================
# 3) 4.2 罗盘航向
# =============================================================================
#   0~360°，0=正北、顺时针增加；NED 偏航 (yaw_rad * 180/π) 归一化到 [0, 360)
#   来源：PX4 VehicleOdometry.q → yaw_rad → heading_deg；AP 走同链路
float32 heading_deg

# =============================================================================
# 4) 4.3 Battery
# =============================================================================
#   PX4: BatteryStatus；AP: BATTERY_STATUS
float32 battery_voltage_v       # 电池电压 (V)
float32 battery_current_a       # 电池电流 (A)；AP 标准规定充电为正、放电为负（与 MAVLink 一致）
float32 battery_remaining_pct   # 剩余电量百分比 (0~100)；PX4 原始 0~1 在 ai_control_node 内部 ×100
int32  battery_id               # 电池编号（多电池时区分，单电池填 0）

# =============================================================================
# 5) 4.5 GpsRaw
# =============================================================================
#   PX4: SensorGps；AP: GPS_RAW_INT
uint8  gps_satellites           # 可见卫星数；AP=GPS_RAW_INT.satellites_visible
float32 gps_hdop                # 水平精度因子；PX4=SensorGps.hdop (无量纲)，**AP 模式下填的是 GPS_RAW_INT.eph (m)，与 PX4 含义不同**
uint8  gps_fix_type             # 定位类型：0=无, 1=无, 2=2D, 3=3D, 4=RTK 固定, 5=RTK 浮点, 6=估计
uint64 gps_time_utc_usec        # GPS UTC 时间戳 (微秒, Unix epoch)；0=无 GPS 时间 (冷启动/未锁定)

# =============================================================================
# 6) 4.4 SystemStatus / 1.2.4 传感器位
# =============================================================================
#   标准 MAVLink SYS_STATUS 位掩码（MAV_SYS_STATUS_SENSOR_*），客户端按位检查。
#   常用位（见 mavlink/common/common.h）：
#     3D_GYRO=1, 3D_ACCEL=2, 3D_MAG=4, ABS_PRESS=8, DIFF_PRESS=16, GPS=32,
#     OPTICAL_FLOW=64, ... , 3D_GYRO2=0x20000, 3D_ACCEL2=0x40000, 3D_MAG2=0x80000
#   客户端用法：
#     drone.sensors_health & 1   # 陀螺仪健康
#     drone.sensors_health & 16  # 空速管健康
#   数据源：
#     AP:   MAVLink SYS_STATUS.onboard_control_sensors_present / _health 直接转发
#     PX4:  按 SensorsStatusImu.accel_healthy[]/gyro_healthy[]、
#           SensorBaro.error_count/device_id、
#           DifferentialPressure.error_count/device_id、
#           VehicleGlobalPosition.eph < 10m 派生能感知的位
uint32 sensors_present          # 传感器在位位掩码（MAV_SYS_STATUS_SENSOR_*）
uint32 sensors_health           # 传感器健康位掩码（MAV_SYS_STATUS_SENSOR_*）
float32 fc_load_pct             # 飞控 CPU 负载百分比 (0~100)；**当前实现下恒为 0**——
                                #   AP 端 sys_load_pct_ 缓存了 SYS_STATUS.load 但 get_load_pct() 未被 ai_control_node 调用；
                                #   PX4 端无等价位（不订阅 cpuload / health_report）

# =============================================================================
# 7) 1.2.6 HK_AI_STATUS
# =============================================================================
#   HK_AI_STATUS (mavlink 50000 系列) **未实现**；ai_status / ai_fault_code 是占位字段
#   ai_model_name / ai_model_version 来自策略静态字段（vehicle_strategy.h），
#   不进 PlaneInfo，由 ai_control_node 直接转发
uint8   ai_status               # **[保留字段, 默认 0]**：HK_AI_STATUS 未实现，**不读不写**
uint16  ai_fault_code           # **[保留字段, 默认 0]**：故障码占位
uint16  ai_response_time_ms     # AI 决策周期 (ms) = 1000 / control_rate；**不是**测得的端到端时延
string  ai_model_name           # 策略静态，默认 "SWARM-AI-v2"；可由 ROS param `ai_model_name` 覆盖
string  ai_model_version        # 策略静态，默认 "2.1.0"；可由 ROS param `ai_model_version` 覆盖

# =============================================================================
# 8) 1.2.7 HK_MOTOR_STATUS — 固定 12 槽（与 px4_msgs EscStatus.esc[12] 对齐）
# =============================================================================
#   槽位填充差异：
#     PX4: 槽 0..11 全部由 /fmu/out/esc_status + /fmu/out/actuator_outputs 填充
#     AP:   槽 0..3   推力由 ACTUATOR_OUTPUT_STATUS.actuator[i] 填充；rpm/temp/status 保持哨兵
#           槽 4..7   由 ESC_TELEMETRY_5_TO_8 + ACTUATOR_OUTPUT_STATUS.actuator[i] 填充
#           槽 8..11  AP 不订阅 ESC_TELEMETRY_9_TO_12，全部保持哨兵
#   客户端应先看 motor_count > 索引再读数组，避免把哨兵当真值。
uint8   motor_count             # 实际有数据的电机数（不是 12；AP 模式下最多 8）
int32[12]  motor_rpm            # RPM；-1 表示无数据
int8[12]   motor_temperature    # °C；-128 (INT8_MIN) 表示无数据
float32[12] motor_thrust_pct    # 0~100 %；NaN 表示无数据（rosidl 默认序列化为 0）
bool[12]   motor_status         # true=在线, false=离线/故障

# =============================================================================
# 9) 飞行模式 / 起落 / 任务标志
# =============================================================================
# flight_mode: PX4 uORB nav_state (uint8)；与 px4_msgs::msg::VehicleStatus 枚举一致：
#   0=MANUAL, 1=ALTCTL, 2=POSCTL, 3=AUTO_LOITER, 4=AUTO_MISSION, 5=AUTO_RTL,
#   6=ACRO, 7=OFFBOARD, 8=STAB, 9=AUTO_TAKEOFF, 10=AUTO_LAND, 11=AUTO_FOLLOW_TARGET,
#   12=AUTO_PRECLAND, 13=ORBIT, 14=AUTO_VTOL_TAKEOFF, 15..22=EXTERNAL1..8
#   AP 模式由 APMavlinkAdapter::handle_heartbeat 翻译成同样的编号
uint8  flight_mode              # PX4 nav_state（详见上方枚举）；AP 模式翻译后用同一编号
bool   is_armed                 # 飞控是否解锁；PX4: arming_state==2；AP: MAV_MODE_FLAG_SAFETY_ARMED bit
uint8  land_state               # 0=UNKNOWN, 1=ON_GROUND, 2=IN_AIR；**AP 模式下无源**（adapter 无 EXTENDED_SYS_STATE handler）
bool   need_attack              # 策略 need_attack_ 标志；由 /qgc/target_info 或 /set_attack_target 触发
bool   task_finished            # 任务结束标志（策略状态机置位）
uint8  current_task_state       # TaskState 枚举（types.h），与策略状态机完全一致：
                                #   0=WAIT_ATTACK, 1=FLY_TO_TARGET, 2=ADJUST_PATH,
                                #   3=ADJUST_ANGLE, 4=CIRCLE_SEARCH, 5=TURN_BACK, 6=WAIT_AUTHORITY
uint8  guidance_mode            # GuidanceMode 枚举（types.h）：制导律选择
                                #   0=TRACKING_ONLY（仅跟踪不输出控制）, 1=PURE_PURSUIT（纯追踪）, 2=PROPORTIONAL_NAVIGATION（比例导引）
                                #   由 ROS 服务 /set_guidance_mode（mode=1/2）远程切换

# =============================================================================
# 10) VTOL 状态 / Home
# =============================================================================
# vtol_state 来自 px4_msgs::msg::VtolVehicleStatus.vehicle_vtol_state：
#   0=UNDEFINED / 1=TRANSITION_TO_FW / 2=TRANSITION_TO_MC / 3=MULTIROTOR / 4=FIXEDWING
#   AP 端由 APMavlinkAdapter 翻译（pure copter modes→3 MC, 否则→4 FW）
uint8   vtol_state              # 0=未定义, 1=转FW中, 2=转MC中, 3=MC, 4=FW
float64 home_latitude_deg       # Home 纬度 (deg)；**home_valid=true 后才有效**（只锁一次）
float64 home_longitude_deg      # Home 经度 (deg)
float64 home_altitude_m         # Home 海拔 (m, AMSL)
bool    home_valid              # Home 是否已锁定（true 后 home_* 不再变）

# =============================================================================
# 元信息
# =============================================================================
#   发送时刻的本机 ROS 时间（ai_control_node::now() 派生），
#   供下游做 staleness 判断；**与 PX4 飞控时间不同步**
uint64 timestamp_ms
