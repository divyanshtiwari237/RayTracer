add_library(
    vector
    include/vec3.hpp
    src/vec3.cpp
)

add_library(
    color 
    include/color.hpp
    src/color.cpp
)
add_library(
    ray 
    include/ray.hpp
    src/ray.cpp
)
add_library(
    hittable
    include/hittable.hpp
    src/hittable.cpp
)
target_link_libraries(color PRIVATE vector)
target_link_libraries(ray PRIVATE vector)
target_link_libraries(hittable PRIVATE ray)
target_include_directories(vector PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(color PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(ray PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(hittable PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
