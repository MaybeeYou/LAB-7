cmake_minimum_required(VERSION 3.10...3.27)
project(MyProject)

# Use dynamic linking (matches NixOS package)
set(SFML_STATIC_LIBRARIES OFF)

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)
find_package(TGUI REQUIRED)

add_executable(app src/main.cpp src/Objects.cpp)
target_link_libraries(app PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
    tgui
)

target_include_directories(app PRIVATE
    ${SFML_INCLUDE_DIR}
    ${TGUI_INCLUDE_DIR}
)
