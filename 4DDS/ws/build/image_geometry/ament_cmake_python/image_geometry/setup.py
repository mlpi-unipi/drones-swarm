from setuptools import find_packages
from setuptools import setup

setup(
    name='image_geometry',
    version='3.2.1',
    packages=find_packages(
        include=('image_geometry', 'image_geometry.*')),
)
