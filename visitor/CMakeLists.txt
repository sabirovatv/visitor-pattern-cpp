add_library(visitor_lib STATIC
    src/Visitor.cpp
)

target_include_directories(visitor_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(visitor_demo
    src/main_demo.cpp
)

target_link_libraries(visitor_demo PRIVATE visitor_lib)
