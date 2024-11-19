#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#define MAX_NOMBRE 50

// Definición de la estructura Estudiante
typedef struct {
    char nombre[MAX_NOMBRE];
    int edad;
    float promedio;
} Estudiante;

// Declaraciones de funciones en C
void crearEstudiante_C();
void mostrarEstudiante_C(Estudiante estudiante);

#endif // ESTUDIANTE_H
