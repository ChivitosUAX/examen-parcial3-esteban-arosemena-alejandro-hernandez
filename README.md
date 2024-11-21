# examen-parcial3-esteban-arosemena-alejandro-hernandez

https://github.com/ChivitosUAX/examen-parcial3-esteban-arosemena-alejandro-hernandez.git

***

### Mas abajo luego de las preguntas opcion multiple esta la explicacion del codigo.
## **Parte 1: Preguntas de elección múltiple (20%)**

```
**¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?**
Respuesta: `b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.`
Justificacion: `En C, las funciones de entrada y salida como printf y scanf son parte de la biblioteca estándar <stdio.h>.
En C++, se usan objetos como std::cout y std::cin para entrada y salida, que son parte de la biblioteca de flujo de entrada/salida <iostream>`

**¿Qué es un espacio de nombres en C++?**
Respuesta: 
`a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.`
Justificacion: 
`Un espacio de nombres (namespace) en C++ organiza y encapsula identificadores para evitar conflictos, especialmente en proyectos grandes o al usar bibliotecas externas.`

**En programación orientada a objetos en C++, ¿qué es una clase?**
Respuesta: 
`d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).`
Justificacion: 
`Una clase es un concepto fundamental en la programación orientada a objetos. Sirve como una plantilla que define las propiedades.`

**¿Qué son los templates en C++?**
Respuesta: 
`b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.` 
Justificacion: 
`Los templates (plantillas) en C++ permiten definir funciones y clases de manera genérica, lo que facilita escribir código que funcione con cualquier tipo de datos sin necesidad de duplicarlo para cada tipo. Son especialmente útiles para estructuras de datos y algoritmos reutilizables.`
```

***

## EXPLICACION DEL CODIGO
**La estructura del proyecto está organizada de la siguiente manera:**

```
root
├── CMakeLists.txt          # Archivo de configuración para CMake
├── c/                      # Archivos fuente en C
│   ├── asistencia.c        # Implementación de la gestión de asistencia
│   ├── asistencia.h        # Declaración de funciones y estructura de asistencia
│   ├── estudiante.c        # Implementación de la creación y visualización del estudiante
│   ├── estudiante.h        # Declaración de funciones y estructura de estudiante
│   ├── materias.c          # Implementación de la gestión de materias
│   ├── materias.h          # Declaración de funciones y estructura de materias
│   └── main.c              # Función principal en C
└── c++/                    # Archivos fuente en C++
    ├── asistencia.cpp      # Implementación de la gestión de asistencia en C++
    ├── asistencia.h        # Declaración de funciones y estructura de asistencia en C++
    ├── estudiante.cpp      # Implementación de la creación y visualización del estudiante en C++
    ├── estudiante.h        # Declaración de funciones y estructura de estudiante en C++
    ├── materias.cpp        # Implementación de la gestión de materias en C++
    ├── materias.h          # Declaración de funciones y estructura de materias en C++
    └── main.cpp            # Función principal en C++
```

**Descripción de Archivos:**
`C:` En la carpeta c/ se encuentran las implementaciones del programa utilizando el lenguaje C. Los archivos .c contienen la lógica de las funciones y las estructuras necesarias para gestionar las asistencias, estudiantes y materias.

`C++:` En la carpeta c++/ se encuentran las implementaciones utilizando C++. Los archivos .cpp implementan las mismas funcionalidades que en C, pero utilizando características de C++ como std::vector y std::string para manejar colecciones de datos y cadenas de caracteres.

***

## Funcionalidad
**El programa gestiona tres áreas principales:**

**1. Gestión de Estudiantes:**
Funcionalidad: Permite crear un estudiante y mostrar sus datos: nombre, edad y promedio.
Proceso:
Se solicita al usuario el nombre, edad y promedio del estudiante.
Luego se muestra esta información.
Uso en C: La creación del estudiante y su visualización se realiza en crearEstudiante_C() y mostrarEstudiante_C() en estudiante.c.
Uso en C++: Se utiliza la misma funcionalidad pero en crearEstudiante_CPP() y mostrarEstudiante_CPP() en estudiante.cpp, aprovechando el uso de std::string.


**2. Gestión de Materias:**
Funcionalidad: Permite agregar, eliminar y mostrar las materias de un estudiante.
Proceso:
El usuario puede agregar nuevas materias, eliminarlas y mostrar la lista actual de materias.
Uso en C: La funcionalidad se maneja en gestionarMaterias_C() en materias.c, utilizando arrays estáticos.
Uso en C++: En C++, se usa std::vector<std::string> para gestionar dinámicamente las materias en gestionarMaterias_CPP() en materias.cpp.


**3. Gestión de Asistencia:**
Funcionalidad: Permite registrar y mostrar las asistencias de los estudiantes a sus clases.
Proceso:
El usuario puede registrar asistencias con fecha, materia y estado (asistió, falta o tardanza).
También puede ver la lista de todas las asistencias registradas.
Uso en C: La funcionalidad está implementada en registrarAsistencia_C() en asistencia.c, usando arrays estáticos para almacenar las asistencias.
Uso en C++: Se utiliza std::vector<Asistencia> para almacenar las asistencias, lo que permite un manejo más flexible en registrarAsistencia_CPP() en asistencia.cpp.

***

## División entre C y C++

**Enfoque de C:**
El código en C usa estructuras de datos simples (como arrays y structs) para gestionar la información. No se emplean características avanzadas como las clases o los contenedores de la STL de C++.
Las funciones principales para gestionar estudiantes, materias y asistencias están implementadas utilizando funciones que operan sobre arrays y cadenas de caracteres simples.

**Enfoque de C++:**
En C++, el programa hace uso de clases (o estructuras de datos como std::vector y std::string) para gestionar la información de manera más flexible.
Se aprovechan las ventajas de C++ como la capacidad de usar tipos dinámicos (como std::vector para listas de materias y asistencias) y la manipulación de cadenas de caracteres con std::string, que facilita el trabajo con texto.

**Beneficios de la división:**
C: La implementación en C es más simple y ligera, adecuada para entornos de programación de bajo nivel o en sistemas con recursos limitados.
C++: La implementación en C++ es más moderna, aprovechando características como la gestión automática de memoria (por ejemplo, con std::vector), lo que simplifica la programación y reduce el código necesario para manejar colecciones de datos.

***

## Cómo Compilar y Ejecutar

**Requisitos:**
**CMake:** Asegúrate de tener CMake instalado para gestionar la construcción del proyecto.
**Compilador:** Necesitarás un compilador compatible con C++14 (por ejemplo, g++ o clang++) y un compilador de C (como gcc).

**Para Compilar:**
1. Clona o descarga este repositorio en tu máquina.
2. Abre una terminal o línea de comandos en el directorio del proyecto.
3. Crea un directorio de compilación:
4. Ejecuta CMake para generar los archivos de construcción:
5. Compila el proyecto.

**Para Ejecutar:**
1. En cpp: ./examen_parcial3_esteban_arosemena_alejandro_hernandez_CPP
2. En c: ./examen_parcial3_esteban_arosemena_alejandro_hernandez_C

# HASTA LUEGO RUBEN!!
