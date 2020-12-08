cmake_minimum_required(VERSION 3.10)

project(ninjaTest VERSION 1.10.0 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
endif()


set(SOURCES main.cpp person.cpp)
set(HEADERS person.hpp)

set(QT_REQUIRED_VERSION "5.15.0")
find_package(Qt5 ${QT_REQUIRED_VERSION} CONFIG REQUIRED COMPONENTS Core LinguistTools)

add_subdirectory(translation)

set(RESOURCE_FILES translations.qrc)
add_custom_target(resources ALL DEPENDS ${RESOURCE_FILES})
add_dependencies(resources translations)


add_executable(ninjaTest ${SOURCES} ${HEADERS} ${RESOURCE_FILES})
add_dependencies(ninjaTest resources)
target_link_libraries(ninjaTest PUBLIC Qt5::Core)
