cmake_minimum_required(VERSION 2.6)

# Locate GTest

find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library

add_executable(executeTests IP_Address_test.cpp) #example of testfile is complex_test.cpp

target_link_libraries(executeTests ${GTEST_LIBRARIES} pthread)
