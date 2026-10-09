from setuptools import find_packages
from setuptools import setup

setup(
  name='interfaces_sistema',
  version='0.0.0',
  packages=find_packages(
      include=('interfaces_sistema', 'interfaces_sistema.*')),
)
