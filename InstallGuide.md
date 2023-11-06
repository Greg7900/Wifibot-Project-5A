## Setup
ROS2 Humble installation in Ubuntu 22.04.03
### Set locale
``` bash
locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings

```
### Setup sources 
``` bash
sudo apt install software-properties-common
sudo add-apt-repository universe

sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```
### install ROS2 packages
``` bash
sudo apt update
sudo apt upgrade
sudo apt install ros-humble-ros-base
```

### Environment setup
mettre le source en derniere ligne du bashrc
``` bash
source /opt/ros/humble/setup.bash
gedit ~/.bashrc
```
test en faisant ros2
``` bash
ros2
```

### colcon / sources
``` bash
sudo apt install python3-colcon-common-extensions
# dans le bashrc
gedit ~/.bashrc
# source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
```

## Workspace creation
``` bash
cd
mkdir ros2_ws
cd ros2_ws
colcon build
source ~/ros2_ws/install/setup.bash
# dans le bashrc
gedit ~/.bashrc
# source ~/ros2_ws/install/setup.bash

```
