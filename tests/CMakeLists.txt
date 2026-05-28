add_executable(test_visitor test_visitor.cpp)

# Теперь линкуем тест с библиотекой visitor_lib, а не с исполняемым файлом
target_link_libraries(test_visitor PRIVATE visitor_lib)

# Указываем путь к заголовкам (хотя библиотека и так public, но для ясности)
target_include_directories(test_visitor PRIVATE ${CMAKE_SOURCE_DIR}/visitor/include)

add_test(NAME VisitorTest COMMAND test_visitor)
