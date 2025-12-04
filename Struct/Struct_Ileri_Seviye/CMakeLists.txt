cmake_minimum_required(VERSION 3.16)

project(Struct_Ileri_Seviye LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Struct_Ileri_Seviye main.cpp
    Ornek.cpp)

include(GNUInstallDirs)
install(TARGETS Struct_Ileri_Seviye
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
