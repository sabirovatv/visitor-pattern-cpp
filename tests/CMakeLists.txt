add_executable(test_visitor test_visitor.cpp)

target_link_libraries(test_visitor PRIVATE visitor_lib)

target_include_directories(test_visitor PRIVATE ${CMAKE_SOURCE_DIR}/visitor/include)

add_test(NAME VisitorTest COMMAND test_visitor)
