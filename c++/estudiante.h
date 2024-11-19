#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

// Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

// Declaraciones de funciones específicas de C++
void crearEstudiante_CPP();
void mostrarEstudiante_CPP(const Estudiante& estudiante);

#endif // ESTUDIANTE_H
