cmake_minimum_required(VERSION 3.16)

project(LambdaExpressions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(LambdaExpressions main.cpp)

include(GNUInstallDirs)
install(TARGETS LambdaExpressions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
