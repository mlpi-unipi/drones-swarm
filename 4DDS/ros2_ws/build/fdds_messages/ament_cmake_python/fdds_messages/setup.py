from setuptools import find_packages
from setuptools import setup

setup(
    name='fdds_messages',
    version='0.0.0',
    packages=find_packages(
        include=('fdds_messages', 'fdds_messages.*')),
)
