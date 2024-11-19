#include "estudiante.h"
#include <stdio.h>
#include <string.h>

void crearEstudiante_C() {
    Estudiante estudiante;

    // Solicitar y asignar valores al estudiante
    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", estudiante.nombre);
    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiante.edad);
    printf("Ingrese el promedio del estudiante: ");
    scanf("%f", &estudiante.promedio);

    // Mostrar la información del estudiante
    mostrarEstudiante_C(estudiante);
}

void mostrarEstudiante_C(Estudiante estudiante) {
    printf("\nInformación del Estudiante:\n");
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}
