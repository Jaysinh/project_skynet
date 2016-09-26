cmake_minimum_required(VERSION 2.8)
project(smartHome)
SET(CMAKE_CXX_FLAGS "-ggdb")

add_executable(smartHome
	main
)

target_link_libraries(smartHome
	wiringPi
)

ADD_DEFINITIONS(
	-std=c++11
)

