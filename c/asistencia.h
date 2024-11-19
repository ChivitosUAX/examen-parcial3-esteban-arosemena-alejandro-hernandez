#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#define MAX_FECHA 11
#define MAX_MATERIA 50
#define MAX_ESTADO 20

// Definición de la estructura Asistencia en C
typedef struct {
    char fecha[MAX_FECHA];
    char materia[MAX_MATERIA];
    char estado[MAX_ESTADO];  // "Asistió", "Falta", "Tardanza"
} Asistencia;

// Declaración de funciones para el registro de asistencia en C
void registrarAsistencia_C();

#endif // ASISTENCIA_H
