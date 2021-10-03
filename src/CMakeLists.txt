set(SOURCE main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})

target_sources(${PROJECT_NAME}
    PRIVATE
     test-lib.cpp
    PUBLIC
     ${CMAKE_CURRENT_LIST_DIR}/test-lib.hpp
)
