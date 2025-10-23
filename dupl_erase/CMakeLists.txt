# CMakeList.txt: проект CMake для OS_Colloquium_1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (dupl_erase "dupl_erase.cpp" "dupl_erase.h" "dupl_erase_main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET dupl_erase PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_link_libraries(dupl_erase factorial)