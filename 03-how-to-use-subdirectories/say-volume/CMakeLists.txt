add_executable(a.out src/main.cpp)

target_link_libraries(a.out
    PRIVATE
        libvolume
)