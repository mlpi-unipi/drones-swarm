from setuptools import find_packages
from setuptools import setup

setup(
    name='stigmergy',
    version='0.0.0',
    packages=find_packages(
        include=('stigmergy', 'stigmergy.*')),
)
