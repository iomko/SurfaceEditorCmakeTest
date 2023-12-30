cmake_minimum_required(VERSION 3.28.1)
project(SurfaceEditor)

add_subdirectory(external)
add_executable(${PROJECT_NAME} main.cpp)


target_include_directories(${PROJECT_NAME} PRIVATE external/glm)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)


install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION "${CMAKE_CURRENT_LIST_DIR}/install/bin"
)

# Check if GLFW is built as a shared library
get_target_property(target_type glfw TYPE)
if (target_type STREQUAL "SHARED_LIBRARY")

    install(TARGETS glfw
        DESTINATION ${CMAKE_CURRENT_LIST_DIR}/install/bin
    )
    
endif()