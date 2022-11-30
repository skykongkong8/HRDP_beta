from setuptools import setup

package_name = 'hrdp_perception_beta'

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
    description='    This package is expected to collect sensor data, apply proper detection algorithms (i.e. deep learning models), and obtain useful information for the robot system.',
    license='TODO: License declaration : skykongkong8',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'face_detection = hrdp_perception_beta.vision.face_detection.face_detection:main',
            'gesture_detection = hrdp_perception_beta.vision.gesture_detection.main:main',
            'sneakers_objectron = hrdp_perception_beta.vision.sneakers_objectron.main:main',
        ],
    },
)
