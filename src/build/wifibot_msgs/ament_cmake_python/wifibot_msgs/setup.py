from setuptools import find_packages
from setuptools import setup

setup(
    name='wifibot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('wifibot_msgs', 'wifibot_msgs.*')),
)
