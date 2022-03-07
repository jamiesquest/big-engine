cmake_minimum_required(VERSION 3.22)

#project name and version
project(hello VERSION 1.0)

#C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#subdirectory
add_subdirectory(HugeLib)

#executable
add_executable(hello helloworld.cpp)

#link
target_link_libraries(hello PUBLIC HugeLib)

#configs
configure_file(helloConfig.h.in helloConfig.h)

#includes
target_include_directories(hello PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/HugeLib"
                          )
