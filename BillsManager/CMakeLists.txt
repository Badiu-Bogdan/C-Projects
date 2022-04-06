cmake_minimum_required(VERSION 3.21)
project(Test1Lab1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Test1Lab1 main.cpp Source/Domain/Bill.cpp Header/Domain/Bill.h Source/View/UI.cpp Header/View/UI.h Source/Controller/Service.cpp Header/Controller/Service.h)
