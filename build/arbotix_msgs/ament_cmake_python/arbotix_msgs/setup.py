from setuptools import find_packages
from setuptools import setup

setup(
    name='arbotix_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('arbotix_msgs', 'arbotix_msgs.*')),
)
