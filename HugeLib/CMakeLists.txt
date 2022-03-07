add_library(HugeLib hugelib.cpp)
target_include_directories(HugeLib
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )