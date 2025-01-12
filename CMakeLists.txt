cmake_minimum_required(VERSION 3.19)
project(NCC)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)

FIND_PACKAGE(OpenMP REQUIRED)
if (OPENMP_FOUND)
    message("OPENMP FOUND")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif ()


set(CMAKE_CXX_FLAGS_RELEASE "/MD")
set(CMAKE_CXX_FLAGS_DEBUG "/MTd")

#OPENCV
set(OpenCV_DIR D:\\opencv\\opencv\\build\\build\\install\\x64\\vc15\\lib)
find_package(OpenCV REQUIRED)
INCLUDE_DIRECTORIES(D:\\opencv\\opencv\\build\\build\\install\\include)

#QT
set(CMAKE_PREFIX_PATH "F:/Qt5.9.5/5.9.5/msvc2017_64/lib/cmake")
find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)
find_package(Qt5Sql)
find_package(Qt5Network)
find_package(Qt5SerialPort)
find_package(Qt5Test REQUIRED)
find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)
include_directories(${Qt5_INCLUDE_DIRS})

add_executable(NCC main.cpp NCC.cpp matcher.cpp Solution.cpp Solution.h)

target_link_libraries(NCC ${OpenCV_LIBS}  ${CUDA_LIBRARIES} )
target_link_libraries(NCC Qt5::Core Qt5::Widgets Qt5::Gui Qt5::Sql Qt5::Test Qt5::Network Qt5::SerialPort)