#include "materias.h"
#include <stdio.h>
#include <string.h>

#define MAX_MATERIAS 10
#define MAX_NOMBRE 50

void gestionarMaterias_C() {
    char materias[MAX_MATERIAS][MAX_NOMBRE];
    int numMaterias = 0;
    int opcion;

    do {
        printf("\nGestión de Materias:\n");
        printf("1. Agregar Materia\n");
        printf("2. Eliminar Materia\n");
        printf("3. Mostrar Materias\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                if (numMaterias < MAX_MATERIAS) {
                    printf("Ingrese el nombre de la materia: ");
                    scanf("%s", materias[numMaterias]);
                    numMaterias++;
                } else {
                    printf("No se pueden agregar más materias.\n");
                }
            break;
            case 2:
                if (numMaterias > 0) {
                    numMaterias--;
                    printf("Materia eliminada correctamente.\n");
                } else {
                    printf("No hay materias para eliminar.\n");
                }
            break;
            case 3:
                printf("\nMaterias inscritas:\n");
            for (int i = 0; i < numMaterias; i++) {
                printf("- %s\n", materias[i]);
            }
            break;
            case 4:
                printf("Saliendo del menú de materias.\n");
            break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 4);
}
