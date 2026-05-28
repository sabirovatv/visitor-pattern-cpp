# Статическая библиотека из реализации паттерна (без main)
add_library(visitor_lib STATIC
    src/Visitor.cpp
)

# Указываем путь к заголовочным файлам (для всех, кто использует библиотеку)
target_include_directories(visitor_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Демо-программа, которая использует библиотеку
add_executable(visitor_demo
    src/main_demo.cpp
)

# Линкуем демо с библиотекой
target_link_libraries(visitor_demo PRIVATE visitor_lib)
