from setuptools import find_packages
from setuptools import setup

setup(
    name='servo_service',
    version='0.0.0',
    packages=find_packages(
        include=('servo_service', 'servo_service.*')),
)
