from setuptools import setup

package_name = 'hrdp_human_interface_beta'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='r1mini',
    maintainer_email='kssjustin98@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'user_voice_listener = hrdp_human_interface_beta.nodes.user_voice_listener.main:main'
        ],
    },
)
