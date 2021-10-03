cmake_minimum_required(VERSION 3.0.0)

set(PROJECT_NAME simple-project)
set(INCLUDES src)

project(${PROJECT_NAME} VERSION 0.1.0)


add_subdirectory(${INCLUDES})
