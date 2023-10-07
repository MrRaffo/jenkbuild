cmake_minimum_required(VERSION 3.15)
project (jenkbuild
    VERSION 1.0
    LANGUAGES C)

set (CMAKE_CXX_FLAGS "")

set (CMAKE_CXX_FLAGS_DEBUG "-DDEBUGGING -g -Wall -Og")
set (CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

set (APP_NAME "jenkbuild")

set (SOURCE_DIR "src/")

set (MAIN_SRC
    ${SOURCE_DIR}/main.c
)

add_executable(${APP_NAME} ${MAIN_SRC})
