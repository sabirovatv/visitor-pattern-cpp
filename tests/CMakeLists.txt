add_executable(test_visitor test_visitor.cpp)

target_link_libraries(test_visitor
  PRIVATE
    visitor_lib
    gtest_main
)

add_test(NAME VisitorTest COMMAND test_visitor)
