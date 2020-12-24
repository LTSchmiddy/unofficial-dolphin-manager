cmake_minimum_required(VERSION 3.0.0)
project(primehack-manager VERSION 0.1.0)
cmake_policy(SET CMP0076 NEW)
set (CMAKE_CXX_STANDARD 17)

set(TARGET_NAME dolphin-manager)

set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF) 

find_package(Boost 1.45.0 COMPONENTS filesystem REQUIRED) 
find_package(SDL2 CONFIG REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
find_package(cpr CONFIG REQUIRED)

include_directories(${Sdl2_INCLUDE_DIRS}) 
include_directories(${OpenGL_INCLUDE_DIRS}) 
include_directories(${Glew_INCLUDE_DIRS}) 
include_directories(${Imgui_INCLUDE_DIRS}) 
include_directories(${Boost_INCLUDE_DIRS}) 
include_directories(${Nlohmann_json_INCLUDE_DIRS}) 
include_directories(${Cpr_INCLUDE_DIRS}) 
include_directories(./src)

if (CMAKE_HOST_WIN32)
    add_executable(${TARGET_NAME} WIN32)
else()
    add_executable(${TARGET_NAME} )
endif()

# Adding Sources
add_subdirectory(./src)

target_link_libraries(${TARGET_NAME} SDL2::SDL2main SDL2::SDL2)
target_link_libraries(${TARGET_NAME} ${OpenGL_LIBRARIES})
target_link_libraries(${TARGET_NAME} GLEW::GLEW)
target_link_libraries(${TARGET_NAME} imgui::imgui)
target_link_libraries(${TARGET_NAME} ${Boost_LIBRARIES})
target_link_libraries(${TARGET_NAME} nlohmann_json nlohmann_json::nlohmann_json)
target_link_libraries(${TARGET_NAME} cpr)

set_target_properties(${TARGET_NAME}
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "./arc/"
    LIBRARY_OUTPUT_DIRECTORY "./lib/"
    RUNTIME_OUTPUT_DIRECTORY "./bin/"
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})


# add_custom_command(
#         TARGET ${TARGET_NAME} POST_BUILD
#         COMMAND makedirs ${CMAKE_CURRENT_BINARY_DIR}/debug-working-directory
# )