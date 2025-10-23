# CMakeList.txt: проект CMake для OS_Colloquium_1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (OS_Colloquium_1 "factorial.cpp" "factorial.h" "factorial_main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET OS_Colloquium_1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
add_library(factorial factorial.cpp factorial.h)
target_include_directories(factorial PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})