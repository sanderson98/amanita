cmake_minimum_required(VERSION 3.21.4)

project(AMANITA)

set (AMANITA_VERSION_MAJOR 0)
set (AMANITA_VERSION_MINOR 1)

configure_file(
	"${PROJECT_SOURCE_DIR}/AMANITAConfig.h.in"
	"${PROJECT_BINARY_DIR}/AMANITAConfig.h"

)

include_directories(
	"${PROJECT_BINARY_DIR}"
)

add_executable(${PROJECT_NAME} src/main.cpp)


