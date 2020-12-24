
add_subdirectory("./menubar")
add_subdirectory("./ui_windows")

target_sources(${TARGET_NAME}
    PUBLIC
    "./app_window.h"
    "./app_window.cpp"
)