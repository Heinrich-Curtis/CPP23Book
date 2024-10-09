# Specify the minimum required CMake version
cmake_minimum_required(VERSION 3.16)

# Set the project name and version
project(Chapter2 VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)

# Add the main.cpp file as a source file
set(SOURCE_FILES main.cpp)

# Add an executable target with the source files
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
