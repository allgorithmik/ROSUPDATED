from setuptools import setup

package_name = 'my_python_pkg'

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
    maintainer='vishwas',
    maintainer_email='vvishwas2@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "python_node = my_python_pkg.my_first_python_node:main",
            "publisher = my_python_pkg.Publisher:main",
            "subscriber = my_python_pkg.Subscriber:main",
            "add_two_ints = my_python_pkg.add_two_ints:main",
            "add_two_ints_no_oop = my_python_pkg.service_client:main",
            "add_two_ints_oop = my_python_pkg.service_client_oop:main"
        ],
    },
)
