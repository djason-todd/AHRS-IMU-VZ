# SBG ROS 2 Data Bagger & Visualizer

This repository contains a customized ROS 2 Humble workspace for working with the SBG Systems Ellipse-A IMU using the `sbg_ros2_driver`. It extends the original driver with tools for:

* Real-time TF visualization using `/sbg/ekf_euler`
* Periodic bag recording (every 10 minutes) of selected SBG topics
* Live IMU orientation visualization in RViz2
* Integration with `imu_tools` and custom bridges for `sensor_msgs/Imu`

---

## Contents

```
ros2_ws/
├── src/
│   ├── sbg_ros2_driver/           # Forked original driver from SBG Systems
│   ├── sbg_imu_bridge/            # Custom Python node publishing TF and Imu messages
│   └── ...
├── scripts/
│   └── timed_bag_recorder.py      # Python script to record rosbags in 10-min chunks
```

---

## Getting Started

### 1. Clone and build workspace

```bash
cd ~/ros2_ws/src
git clone https://github.com/djason-todd/sbg_ros2_baggernvisualizer.git
cd ~/ros2_ws
colcon build
source install/setup.bash
```

> WARNING: If using your own clone, ensure `sbg_ros2_driver` is placed inside `src/`

---

### 2. Configure Serial Port (Optional)

Update the SBG device config file (usually under `sbg_ros2_driver/config/`) to match your actual serial port and baud rate:

```yaml
output_port: /dev/ttyUSB0
baud_rate: 115200
```

---

### 3. Launch SBG Driver + Timed Bagger

Ensure this is in your launch file (`sbg_device_launch.py` or similar):

```python
from launch.actions import ExecuteProcess

timed_bag = ExecuteProcess(
    cmd=['python3', os.path.expanduser('~/ros2_ws/scripts/timed_bag_recorder.py')],
    shell=False,
    output='screen'
)
```

Then launch everything:

```bash
ros2 launch sbg_driver sbg_device_launch.py
```

---

### 4. Run IMU to TF Bridge

```bash
ros2 run sbg_imu_bridge sbg_imu_bridge
```

This publishes:

* TF from `map → imu_link_ned`
* A `sensor_msgs/Imu` message on `/imu/data`

---

### 5. Visualize in RViz2

```bash
rviz2
```

#### Add these displays:

* **TF**: Set `Fixed Frame` to `map`
* **IMU**: Add `/imu/data` as a `IMU` display
* Optional: Add `TF` arrows for visual orientation feedback

---

## Bagging

Your bags will be saved every 10 minutes in:

```
~/rosbags/
└── sbg_bag_YYYY_MM_DD-HH_MM_SS/
```

Topics recorded include:

* `/sbg/imu_data`
* `/sbg/imu_short`
* `/sbg/ekf_quat`
* `/sbg/ekf_nav`
* `/sbg/status`

You can add more to `timed_bag_recorder.py`.

---

## Packages & Tools Used

* [`sbg_ros2_driver`](https://github.com/SBG-Systems/sbg_ros2_driver)
* `imu_tools`
* `tf2_ros`, `geometry_msgs`, `sensor_msgs`
* `rclpy`, `subprocess`, `datetime`, `math`

---

## License

not reaaly entirely sure what to put here???

---

## Author

Developed by Daniel Jason Martins [`@djason-todd`](https://github.com/djason-todd)
