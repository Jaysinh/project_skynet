cmake_minimum_required(VERSION 2.8)
project(smartHome)
SET(CMAKE_CXX_FLAGS "-ggdb")

add_executable(smartHome
	main
	boost_server/connection_manager
	boost_server/connection
	boost_server/header
	boost_server/mime_types
	boost_server/reply
	boost_server/request_handler
	boost_server/request_parser
	boost_server/request
	boost_server/server
	tools/Utils
)

target_link_libraries(smartHome
	wiringPi
	boost_system
	pthread
)

ADD_DEFINITIONS(
	-std=c++11
)

