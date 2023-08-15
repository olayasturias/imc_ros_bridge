from setuptools import find_packages
from setuptools import setup

setup(
    name='imc_ros_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('imc_ros_msgs', 'imc_ros_msgs.*')),
)
