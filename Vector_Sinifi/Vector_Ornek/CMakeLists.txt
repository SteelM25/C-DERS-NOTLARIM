cmake_minimum_required(VERSION 3.16)

project(Vector_Ornek LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vector_Ornek main.cpp)

include(GNUInstallDirs)
install(TARGETS Vector_Ornek
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
