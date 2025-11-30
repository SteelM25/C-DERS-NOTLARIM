cmake_minimum_required(VERSION 3.16)

project(Polymorphism_ve_Virtual_Fonksiyon LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Polymorphism_ve_Virtual_Fonksiyon main.cpp)

include(GNUInstallDirs)
install(TARGETS Polymorphism_ve_Virtual_Fonksiyon
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
