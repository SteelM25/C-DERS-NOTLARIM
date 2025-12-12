cmake_minimum_required(VERSION 3.16)

project(Ornek_Ogrenci_Yonetim_Sistemi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ornek_Ogrenci_Yonetim_Sistemi main.cpp)

include(GNUInstallDirs)
install(TARGETS Ornek_Ogrenci_Yonetim_Sistemi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
