#include "asistencia.h"
#include <iostream>
#include <vector>
#include <string>

void registrarAsistencia_CPP() {
    struct Asistencia {
        std::string fecha;
        std::string materia;
        std::string estado;  // "Asistió", "Falta", "Tardanza"
    };

    std::vector<Asistencia> asistencias;
    int opcion;

    do {
        std::cout << "\nRegistro de Asistencia:\n";
        std::cout << "1. Registrar Asistencia\n";
        std::cout << "2. Mostrar Asistencia\n";
        std::cout << "3. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        if (opcion == 1) {
            Asistencia nuevaAsistencia;
            std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
            std::getline(std::cin, nuevaAsistencia.fecha);
            std::cout << "Ingrese el nombre de la materia: ";
            std::getline(std::cin, nuevaAsistencia.materia);
            std::cout << "Ingrese el estado (Asistió/Falta/Tardanza): ";
            std::getline(std::cin, nuevaAsistencia.estado);
            asistencias.push_back(nuevaAsistencia);
        } else if (opcion == 2) {
            std::cout << "\nListado de Asistencia:\n";
            for (const auto& asistencia : asistencias) {
                std::cout << "Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia
                          << ", Estado: " << asistencia.estado << "\n";
            }
        } else if (opcion != 3) {
            std::cout << "Opción no válida.\n";
        }
    } while (opcion != 3);

    std::cout << "Saliendo del registro de asistencia.\n";
}
