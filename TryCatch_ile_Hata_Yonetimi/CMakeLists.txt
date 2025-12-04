cmake_minimum_required(VERSION 3.16)

project(TryCatch_ile_Hata_Yonetimi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TryCatch_ile_Hata_Yonetimi main.cpp
    Test.cpp
    hatasinifi.h hatasinifi.cpp)

include(GNUInstallDirs)
install(TARGETS TryCatch_ile_Hata_Yonetimi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
