# CMakeList.txt: проект CMake для workflow; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable(workflow main.cpp writefile.cpp writefile.h readFile.cpp readFile.h grep.cpp grep.h dump.cpp dump.h sort.cpp sort.h replace.cpp replace.h count.cpp count.h worker.cpp worker.h reader.cpp reader.h workflow.cpp workflow.h factory.cpp factory.h)




# TODO: Добавьте тесты и целевые объекты, если это необходимо.
