cmake_minimum_required(VERSION 3.29)
project(EmployeeRecordSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(EmployeeRecordSystem
        main.cpp
        Employee.cppm
        Employee.cpp)

target_sources(EmployeeRecordSystem
    PRIVATE
    FILE_SET CXX_MODULES
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}
        FILES
            Employee.cppm
)