cmake_minimum_required(VERSION 3.16)

project(Ogrenci_Bilgi_Sistemi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ogrenci_Bilgi_Sistemi main.cpp
    ogrenci.h ogrenci.cpp)

include(GNUInstallDirs)
install(TARGETS Ogrenci_Bilgi_Sistemi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
