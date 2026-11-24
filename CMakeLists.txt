cmake_minimum_required(VERSION 3.16)
project(music-dl-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(musicdltool
    src/main.cpp
    src/matcher.cpp
    src/downloader.cpp
    src/tags.cpp
)

target_include_directories(musicdltool PRIVATE include)

if(WIN32)
    target_link_libraries(musicdltool PRIVATE userenv)
endif()
