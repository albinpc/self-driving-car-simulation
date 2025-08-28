# Webots TurtleBot Installation Report

## 📌 Objective

To install and configure the `webots_ros2_turtlebot` simulation package with ROS 2 and Webots, enabling realistic autonomous robot simulation as part of a broader learning roadmap targeting autonomous driving systems and robotics applications.

---

## ⚙️ System Requirements

- **OS**: Ubuntu 22.04 LTS (Jammy Jellyfish)
- **Processor**: Multi-core x86_64 (Intel/AMD)
- **RAM**: Minimum 8 GB (16 GB recommended)
- **GPU**: Optional but useful for graphics acceleration
- **Python**: 3.10+ (included with Ubuntu 22.04)
- **ROS 2 Distribution**: ROS 2 Iron Irwini
- **Simulator**: Webots 2025a

---

## 🚀 Why ROS 2 Iron instead of Humble?

- ROS 2 Iron supports **Python 3.10+**, the default on Ubuntu 22.04, whereas **ROS 2 Humble officially supports Python 3.10 only partially**.
- Iron includes newer features, better QoS support, and more stable integrations with `rclpy`, `colcon`, and Webots packages on Ubuntu 22.04.
- Webots' ROS 2 integration packages are also actively tested against Iron.

---

## 🌍 Why Webots?

- Webots is a modern open-source 3D robotics simulator supporting ROS 2.
- Offers easy robot model customization, environment editing, and strong ROS 2 integration.
- Used in both academic and industrial R&D, making it ideal for training toward **drone/robotics/automobile**.

---

## 🎯 End Goal

- Build a **mini autonomous stack** using Webots + ROS 2 + TurtleBot:
  - SLAM, path planning, object tracking, reinforcement learning
  - Full pipeline: sensor fusion → perception → control
- Gain experience in **ROS 2, Webots, RL, OpenCV, ObjectDetection**, etc.
- Develop skills needed for roles in **autonomous vehicles, mobile robotics, or embedded systems**.

---

## ❌ Problems Faced

### 1. Missing Packages and Build Failures
- `webots_ros2_importer`, `webots_ros2_msgs`, and others were not building due to incorrect directory structure and missing files.
- **Error**: `error: package directory 'webots_ros2_importer/urdf2webots/urdf2webots' does not exist`

✅ **Fix**:
- Reorganize directories inside `webots_ros2_importer` using:
  ```bash
  mv urdf2webots urdf2webots_tmp
  mkdir -p urdf2webots/urdf2webots
  mv urdf2webots_tmp/* urdf2webots/urdf2webots/
  rm -rf urdf2webots_tmp
  ```

---

### 2. `setup.py` Missing or Deprecated

- `setup.py` not found: `can't open file '.../setup.py': [Errno 2] No such file or directory`
- Old `setup.py install` behavior was deprecated.

✅ **Fix**:
- Added minimal `setup.py` and `__init__.py` manually for compatibility.

---

### 3. Environment Setup Not Working

- Aliases like `webenv` were not taking effect due to incorrect paths.
- Colcon failed with warnings about missing `AMENT_PREFIX_PATH` or `CMAKE_PREFIX_PATH`.

✅ **Fix**:
- Cleaned and sourced environment consistently:
  ```bash
  source /opt/ros/iron/setup.bash
  source ~/webots_ws/install/local_setup.bash
  ```

---

## ✅ Final Status

- ✅ `webots_ros2_msgs` built successfully.
- ✅ `webots_ros2_importer` builds successfully after directory fix.
- ✅ Environment now loads properly.
- ❌ GUI launch failed initially due to missing package. Fixed after full workspace build.

```bash
ros2 launch webots_ros2_turtlebot robot_launch.py
```

---

## 📦 Next Steps

1. Launch simulation and visualize in Webots GUI
2. Integrate RViz2 for real-time data
3. Add YOLO + SLAM + RL training in steps
4. Document every stage for GitHub portfolio

---

*Prepared by: Albin Paul Chenginiyaden*
