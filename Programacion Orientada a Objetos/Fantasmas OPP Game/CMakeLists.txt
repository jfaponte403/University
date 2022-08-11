cmake_minimum_required(VERSION 3.21)
project(Juego_Naves_OOP_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Juego_Naves_OOP_main
        Alarm.h
        Background.h
        Bala.h
        Enemigo.h
        main.cpp
        Nave.h)
