cmake_minimum_required(VERSION 3.16)

project(Friend_Siniflar_ve_Fonksiyonlar LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Friend_Siniflar_ve_Fonksiyonlar FriendFonksiyonlar.cpp
    ogrenci.h ogrenci.cpp
    FriendClass.cpp)

include(GNUInstallDirs)
install(TARGETS Friend_Siniflar_ve_Fonksiyonlar
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
