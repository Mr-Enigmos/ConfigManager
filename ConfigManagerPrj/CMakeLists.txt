﻿# CMakeList.txt: проект CMake для ConfigManagerPrj; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (ConfigManagerPrj "ConfigManagerPrj.cpp" "ConfigManagerPrj.h" "include/ConfigCore.h" "src/ConfigCore.cpp" "src/value.cpp" "include/value.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ConfigManagerPrj PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
