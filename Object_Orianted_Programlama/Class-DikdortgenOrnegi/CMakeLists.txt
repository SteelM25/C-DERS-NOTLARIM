cmake_minimum_required(VERSION 3.16)

project(Class-DikdortgenOrnegi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Class-DikdortgenOrnegi main.cpp
    dikdortgen.h dikdortgen.cpp)

include(GNUInstallDirs)
install(TARGETS Class-DikdortgenOrnegi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
