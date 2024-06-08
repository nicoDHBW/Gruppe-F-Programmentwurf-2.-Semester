cmake_minimum_required(VERSION 3.20)
project(Gruppe-F-Programmentwurf-2.-Semester)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")

include_directories(src)

add_library(developer_lib
    src/developer.cpp
    src/junior_developer.cpp
    src/senior_developer.cpp
)
# add the includes to the library
target_include_directories(developer_lib PUBLIC include)


add_executable(main_app src/main.cpp)
target_link_libraries(main_app developer_lib)

enable_testing()
add_subdirectory(tests)
