#include "C/estudiante.h"
#include "C/materias.h"
#include "C/asistencia.h"

#include "C++/estudiante.h"
#include "C++/materias.h"
#include "C++/asistencia.h"

#include <iostream>

int main() {
    int opcion;

    std::cout << "\nSeleccione el lenguaje para ejecutar el código:\n";
    std::cout << "1. C\n";
    std::cout << "2. C++\n";
    std::cout << "Ingrese una opción: ";
    std::cin >> opcion;
    std::cin.ignore();  // Limpiar el buffer de entrada

    switch (opcion) {
        case 1:
            // Ejecutar funciones del código en C
            crearEstudiante_C();
            gestionarMaterias_C();
            registrarAsistencia_C();
            break;
        case 2:
            // Ejecutar funciones del código en C++
            crearEstudiante_CPP();
            gestionarMaterias_CPP();
            registrarAsistencia_CPP();
            break;
        default:
            std::cout << "Opción no válida." << std::endl;
        break;
    }

    return 0;
}
