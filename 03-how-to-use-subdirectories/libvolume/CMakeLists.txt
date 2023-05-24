add_library(
    libvolume
    src/volume.h
    src/volume.cpp
)

target_include_directories(libvolume PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
