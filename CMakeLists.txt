cmake_minimum_required(VERSION 3.16.0)

set(PROJECT_NAME simple-project)
set(EXECUTABLE driver)
set(MAIN src/main.cpp)
set(HEADERS include/test-lib)
set(USAGE test-lib)

project(${PROJECT_NAME} VERSION 0.1.0)

include_directories(${CMAKE_CURRENT_LIST_DIR}/${HEADERS})

add_library(${USAGE} STATIC
    src/test-lib/test-lib.cpp
)

add_executable(${EXECUTABLE} ${MAIN})

target_link_libraries(${EXECUTABLE} ${USAGE})
