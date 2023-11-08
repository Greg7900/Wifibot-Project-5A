from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def generate_launch_description():

    arbotix_cfg_path = PathJoinSubstitution(
        [FindPackageShare("Test_pkg"), "config", "test.yaml"]
    )

    roswifibot_params_file_argument = DeclareLaunchArgument(
        "arbotix_params_file",
        default_value=arbotix_cfg_path,
        description="test node",
    )

    arbotix_node = Node(
        package="arbotix_python",
        executable="arbotix_driver",
        parameters=[LaunchConfiguration("arbotix_params_file")],
        output="screen",
        emulate_tty="true",
    )

    actions = [roswifibot_params_file_argument, arbotix_node]

    return LaunchDescription(actions)
