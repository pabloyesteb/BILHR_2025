from setuptools import find_packages, setup

package_name = 'ainex_motion'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='swl',
    maintainer_email='wenlan.shen@tum.de',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'joint_controller = ainex_motion.joint_controller:main',
            'joint_visualization_node = ainex_motion.joint_visualization_node:main',
            "keyboard_node = ainex_motion.keyboard_input_node:main",
            "ainex_motion_node = ainex_motion.ainex_motion_node:main"
        ],
    },
)
