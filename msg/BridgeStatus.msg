uint8 state          # 0=INIT, 1=CONNECTING, 2=RUNNING, 3=DISCONNECTED, 4=FAULT
string state_name    # 状态名称（可读）
uint64 timestamp_ms  # 状态更新时间戳（毫秒）
string detail        # 额外描述（如故障原因）
