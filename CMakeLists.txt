cmake_minimum_required(VERSION 3.16)
project(MyProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Создаём библиотеку из utils
add_library(core
    src/utils/file_reader.cpp
)
target_include_directories(core PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/utils)

add_library(common INTERFACE)
target_include_directories(common INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src)

# 2. Явно добавляем исполняемые файлы
# Здесь ты контролируешь, какие main собираем
add_executable(app1 src/main1.cpp)
target_link_libraries(app1 PRIVATE core)

add_executable(app2 src/main2.cpp)
target_link_libraries(app2 PRIVATE core)


add_executable(app3 src/main3.cpp)
target_link_libraries(app3 PRIVATE core)

# Чтобы не собирать main_test.cpp, просто не создаём для него add_executable