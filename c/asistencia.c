#include "asistencia.h"
#include <stdio.h>
#include <string.h>

#define MAX_ASISTENCIAS 20
#define MAX_FECHA 11
#define MAX_MATERIA 50
#define MAX_ESTADO 20

void registrarAsistencia_C() {
    Asistencia asistencias[MAX_ASISTENCIAS];
    int numAsistencias = 0;
    int opcion;

    do {
        printf("\nRegistro de Asistencia:\n");
        printf("1. Registrar Asistencia\n");
        printf("2. Mostrar Asistencia\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            if (numAsistencias < MAX_ASISTENCIAS) {
                printf("Ingrese la fecha (DD/MM/AAAA): ");
                scanf("%s", asistencias[numAsistencias].fecha);
                printf("Ingrese el nombre de la materia: ");
                scanf("%s", asistencias[numAsistencias].materia);
                printf("Ingrese el estado (Asistió/Falta/Tardanza): ");
                scanf("%s", asistencias[numAsistencias].estado);
                numAsistencias++;
            } else {
                printf("No se pueden registrar más asistencias.\n");
            }
        } else if (opcion == 2) {
            printf("\nListado de Asistencia:\n");
            for (int i = 0; i < numAsistencias; i++) {
                printf("Fecha: %s, Materia: %s, Estado: %s\n",
                       asistencias[i].fecha, asistencias[i].materia, asistencias[i].estado);
            }
        } else if (opcion != 3) {
            printf("Opción no válida.\n");
        }
    } while (opcion != 3);

    printf("Saliendo del registro de asistencia.\n");
}