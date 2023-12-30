project(SurfaceEditor)

include(FetchContent)


#-------GLFW-------#
set(GLFW_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/glfw)
set(GLFW_BINARY_DIR ${CMAKE_CURRENT_LIST_DIR}/glfw)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw
    SOURCE_DIR ${GLFW_SOURCE_DIR}
    BINARY_DIR ${GLFW_BINARY_DIR}
)

FetchContent_GetProperties(glfw)
if(NOT glfw_POPULATED)
    FetchContent_Populate(glfw)

    set(GLFW_BUILD_EXAMPLES OFF CACHE INTERNAL "Build the GLFW example programs")
    set(GLFW_BUILD_TESTS OFF CACHE INTERNAL "Build the GLFW test programs")
    set(GLFW_BUILD_DOCS OFF CACHE INTERNAL "Build the GLFW documentation")
    set(GLFW_INSTALL ON CACHE INTERNAL "Generate installation target")

    add_subdirectory(${glfw_SOURCE_DIR} ${glfw_BINARY_DIR})

endif()

#-------glm-------#
set(GLM_SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/glm)

FetchContent_Declare(
	glm
	GIT_REPOSITORY https://github.com/g-truc/glm
    SOURCE_DIR ${GLM_SOURCE_DIR}
)

FetchContent_GetProperties(glm)
if(NOT glm_POPULATED)
	FetchContent_Populate(glm)
endif()