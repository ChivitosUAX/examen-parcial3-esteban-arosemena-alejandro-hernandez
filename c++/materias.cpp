#include "materias.h"
#include <iostream>
#include <vector>
#include <string>

void gestionarMaterias_CPP() {
    // Definir un vector para almacenar las materias
    std::vector<std::string> materias;
    char opcion;

    do {
        std::cout << "\nMenú de Materias:\n";
        std::cout << "1. Agregar Materia\n";
        std::cout << "2. Eliminar Materia\n";
        std::cout << "3. Mostrar Materias\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;
        std::cin.ignore();  // Limpiar el buffer de entrada

        switch (opcion) {
            case '1': {
                std::string materia;
                std::cout << "Ingrese el nombre de la materia: ";
                std::getline(std::cin, materia);
                materias.push_back(materia);
                break;
            }
            case '2': {
                if (!materias.empty()) {
                    materias.pop_back();
                    std::cout << "Materia eliminada correctamente.\n";
                } else {
                    std::cout << "No hay materias para eliminar.\n";
                }
                break;
            }
            case '3': {
                std::cout << "\nMaterias inscritas:\n";
                for (const auto& materia : materias) {
                    std::cout << "- " << materia << "\n";
                }
                break;
            }
            case '4':
                std::cout << "Saliendo del menú de materias.\n";
            break;
            default:
                std::cout << "Opción no válida.\n";
            break;
        }
    } while (opcion != '4');
}
