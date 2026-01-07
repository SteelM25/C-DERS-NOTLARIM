cmake_minimum_required(VERSION 3.16)

project(Banka_Hesabi_Ornek LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Banka_Hesabi_Ornek main.cpp
    Soru_Belgesi)

include(GNUInstallDirs)
install(TARGETS Banka_Hesabi_Ornek
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
