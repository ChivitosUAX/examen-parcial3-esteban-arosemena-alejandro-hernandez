#include "estudiante.h"
#include <iostream>
#include <string>

void crearEstudiante_CPP() {
    // Definir un estudiante
    Estudiante estudiante;

    // Solicitar y asignar valores al estudiante
    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, estudiante.nombre);
    std::cout << "Ingrese la edad del estudiante: ";
    std::cin >> estudiante.edad;
    std::cout << "Ingrese el promedio del estudiante: ";
    std::cin >> estudiante.promedio;
    std::cin.ignore();  // Limpiar el buffer de entrada

    // Mostrar la información del estudiante
    mostrarEstudiante_CPP(estudiante);
}

void mostrarEstudiante_CPP(const Estudiante& estudiante) {
    std::cout << "\nInformación del Estudiante:\n";
    std::cout << "Nombre: " << estudiante.nombre << "\n";
    std::cout << "Edad: " << estudiante.edad << "\n";
    std::cout << "Promedio: " << estudiante.promedio << "\n";
}
