cmake_minimum_required(VERSION 3.15)
project(CryptoCalc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# headers
include_directories(${PROJECT_SOURCE_DIR}/include)

# build library + app
add_subdirectory(src)

# add GoogleTest (local submodule)
add_subdirectory(extern/googletest)
# enable CTest
enable_testing()
# add our tests
add_subdirectory(test)
