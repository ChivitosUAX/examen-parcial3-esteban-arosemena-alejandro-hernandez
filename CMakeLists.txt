cmake_minimum_required(VERSION 3.29)
project(examen_parcial3_esteban_arosemena_alejandro_hernandez)

set(CMAKE_CXX_STANDARD 14)

add_executable(examen_parcial3_esteban_arosemena_alejandro_hernandez_CPP
        c++/asistencia.cpp
        c++/asistencia.h
        c++/estudiante.cpp
        c++/estudiante.h
        c++/materias.cpp
        c++/materias.h
        c++/main.cpp
)

add_executable(examen_parcial3_esteban_arosemena_alejandro_hernandez_C
        c/asistencia.c
        c/asistencia.h
        c/estudiante.c
        c/estudiante.h
        c/materias.c
        c/materias.h
        c/main.c
)