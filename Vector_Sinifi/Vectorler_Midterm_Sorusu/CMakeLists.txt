cmake_minimum_required(VERSION 3.16)

project(Vectorler_Midterm_Sorusu LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Vectorler_Midterm_Sorusu main.cpp)

include(GNUInstallDirs)
install(TARGETS Vectorler_Midterm_Sorusu
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
