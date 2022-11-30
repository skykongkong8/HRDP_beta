from setuptools import setup

package_name = 'hrdp_actuators_beta'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='skykongkong8',
    maintainer_email='kssjustin98@gmail.com',
    description='    This package is expected to collect all the signals from robot-perception-in-the-loop and human controlling interfaces and formulate the optimal actuation strategy.',
    license='TODO: License declaration: skykongkong8',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "keyboard_control = hrdp_actuators_beta.dynamixel.control_dynamixel_with_keyboard.main:main",
            "voice_control = hrdp_actuators_beta.dynamixel.control_dynamixel_with_voice.main:main"
        ],
    },
)
