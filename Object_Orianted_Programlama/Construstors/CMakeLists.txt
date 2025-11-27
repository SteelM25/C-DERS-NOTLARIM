cmake_minimum_required(VERSION 3.16)

project(Construstors LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Construstors main.cpp
    Otomobil.h
    Otomobil.cpp
)

include(GNUInstallDirs)
install(TARGETS Construstors
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
