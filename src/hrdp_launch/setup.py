from setuptools import setup
from glob import glob
import os

package_name = 'hrdp_launch'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='skykongkong8',
    maintainer_email='kssjustin98@gmail.com',
    description='    This packages is expected to support launch files that contains multiple nodes from the distant packages.',
    license='TODO: License declaration : skykongkong8',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
