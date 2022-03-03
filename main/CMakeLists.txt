add_executable(RayTracer main.cpp )

target_link_libraries(RayTracer PRIVATE vector)
target_link_libraries(RayTracer PRIVATE color)
target_link_libraries(RayTracer PRIVATE ray)
target_link_libraries(RayTracer PRIVATE hittable)
target_link_libraries(RayTracer PRIVATE hittablelists)
target_link_libraries(RayTracer PRIVATE maths)
