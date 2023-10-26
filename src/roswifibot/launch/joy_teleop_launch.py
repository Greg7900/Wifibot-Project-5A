from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.actions import IncludeLaunchDescription
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    joy2twist_pkg = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('joy2twist'), 'launch', 'joy2twist.launch.py')
        )
        )

    roswifibot_cfg_path = PathJoinSubstitution(
        [FindPackageShare("roswifibot"), "config", "wifibot.yaml"]
    )

    roswifibot_params_file_argument = DeclareLaunchArgument(
        "roswifibot_params_file",
        default_value=roswifibot_cfg_path,
        description="ROS2 parameters file to use with roswifibot node",
    )

    roswifibot_node = Node(
        package="roswifibot",
        executable="roswifibot_node",
        parameters=[LaunchConfiguration("roswifibot_params_file")],
        output="screen",
        emulate_tty="true",
    )

    actions = [roswifibot_params_file_argument, roswifibot_node,joy2twist_pkg]

    return LaunchDescription(actions)
