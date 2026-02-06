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
target_include_directories(common INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src/)

add_library(mymath INTERFACE)
target_include_directories(mymath INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/functions/)

add_library(counter 
        classes/counter.h
        classes/counter.cpp)
target_include_directories(counter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/classes/)



add_library(shapes
        classes/triangles.cpp
        classes/triangles.h
        classes/quadrilaterals.h
        classes/quadrilaterals.cpp
        )
target_include_directories(shapes PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/classes/)


# 2. Явно добавляем исполняемые файлы
# Здесь ты контролируешь, какие main собираем
add_executable(11 src/enum_and_structs/11.cpp)
target_link_libraries(11 PRIVATE common)

add_executable(12 src/enum_and_structs/12.cpp)
target_link_libraries(12 PRIVATE common)


add_executable(13 src/enum_and_structs/13.cpp)
target_link_libraries(13 PRIVATE common)

add_executable(21 src/class_and_objects/21.cpp)
target_link_libraries(21 PRIVATE common)


add_executable(22 src/class_and_objects/22.cpp)
target_link_libraries(22 PRIVATE common)

add_executable(31 src/OOP_abstraction_incapsulation/31.cpp)
target_link_libraries(31 PRIVATE common)

add_executable(32 src/OOP_abstraction_incapsulation/32.cpp)
target_link_libraries(32 PRIVATE common)

add_executable(41 src/OOP_inheritance_and_polymorphism/41.cpp)
target_link_libraries(41 PRIVATE common)

add_executable(42 src/OOP_inheritance_and_polymorphism/42.cpp)
target_link_libraries(42 PRIVATE common)

add_executable(43 src/OOP_inheritance_and_polymorphism/43.cpp)
target_link_libraries(43 PRIVATE common)


add_executable(51 
        src/many_files_projects/51.cpp
        functions/mymath.cpp
                    )
target_link_libraries(51 PRIVATE common)
target_link_libraries(51 PRIVATE mymath)


add_executable(52 
        src/many_files_projects/52.cpp
        )       
target_link_libraries(52 PRIVATE common)
target_link_libraries(52 PRIVATE counter) 


add_executable(53
        src/many_files_projects/53.cpp
        )
    target_link_libraries(53 PRIVATE common
                                    shapes)

# Чтобы не собирать main_test.cpp, просто не создаём для него add_executable