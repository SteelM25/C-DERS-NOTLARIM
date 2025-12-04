cmake_minimum_required(VERSION 3.16)

project(autoKullanimi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(autoKullanimi main.cpp)

include(GNUInstallDirs)
install(TARGETS autoKullanimi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
