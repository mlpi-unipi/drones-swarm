from setuptools import find_packages
from setuptools import setup

setup(
    name='scripts',
    version='3.7.0',
    packages=find_packages(
        include=('scripts', 'scripts.*')),
)
