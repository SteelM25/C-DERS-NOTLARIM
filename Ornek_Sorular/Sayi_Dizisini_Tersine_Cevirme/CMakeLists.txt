cmake_minimum_required(VERSION 3.16)

project(Sayi_Dizisini_Tersine_Cevirme LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Sayi_Dizisini_Tersine_Cevirme main.cpp)

include(GNUInstallDirs)
install(TARGETS Sayi_Dizisini_Tersine_Cevirme
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
