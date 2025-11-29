cmake_minimum_required(VERSION 3.16)

project(Inheritance LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Inheritance main.cpp


    hayvan.h hayvan.cpp
    kedi.h kedi.cpp
    kopek.h kopek.cpp
    kus.h kus.cpp)

include(GNUInstallDirs)
install(TARGETS Inheritance
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
