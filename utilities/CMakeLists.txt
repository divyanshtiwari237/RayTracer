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
target_link_libraries(color PRIVATE vector)
target_include_directories(vector PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_include_directories(color PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
