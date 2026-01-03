# General info
cmake_minimum_required(VERSION 3.30)

# Setup
include(${CMAKE_SOURCE_DIR}/Automation/CMAKE/CMakeHelpers.cmake)

# Common options
set(PROJECT_NAME CMakeLearning)
project(${PROJECT_NAME} VERSION 1.0.0)
message("------------- Project files generation for ${PROJECT_NAME} -------------")

set(STARTUP_PROJECT_NAME FightClubGame)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${STARTUP_PROJECT_NAME})
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set(CMAKE_SUPPRESS_REGENERATION TRUE)

# Cpp options
set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /FA")

option(SKIP_GAME_OPT "Skip game" OFF)
if(SKIP_GAME_OPT)
    target_compile_definitions(${PROJECT_NAME} PUBLIC SKIP_GAME)
endif()

# Find libs
include_directories(Source)

add_subdirectory(Source/Utils)
add_subdirectory(Source/FightClubGame)

# Others
system_info()