cmake_minimum_required(VERSION 3.10)
project(VisitorPattern VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(visitor)


enable_testing()
add_subdirectory(tests)

include(CPack)
set(CPACK_PACKAGE_NAME "visitor-pattern-cpp")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Visitor design pattern example in C++")
set(CPACK_PACKAGE_VENDOR "YourName")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "your_email@example.com")
set(CPACK_GENERATOR "DEB")
install(TARGETS visitor_demo DESTINATION bin)
