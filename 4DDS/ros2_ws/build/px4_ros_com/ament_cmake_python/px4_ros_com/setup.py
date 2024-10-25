from setuptools import find_packages
from setuptools import setup

setup(
    name='px4_ros_com',
    version='0.1.0',
    packages=find_packages(
        include=('px4_ros_com', 'px4_ros_com.*')),
)
