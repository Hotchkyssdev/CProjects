# Sistema de Gestión de Alumnos (C)

## Descripción

Este proyecto consiste en el desarrollo de un **sistema de gestión de alumnos en lenguaje C**, cuyo objetivo es aplicar conceptos avanzados del lenguaje vistos en clase, tales como **punteros**, **estructuras**, **uniones**, **enumeraciones**, **typedef**, **arrays** y **memoria dinámica**.

El programa funciona mediante un **menú interactivo por consola** que permite administrar la información de los alumnos.

El programa permite:

* Cargar alumnos de forma dinámica
* Mostrar los datos de un alumno específico
* Mostrar todos los alumnos cargados
* Calcular el promedio general
* Liberar correctamente la memoria utilizada

---

## Objetivo del proyecto

Aplicar correctamente los siguientes temas:

* Punteros
* Arrays y memoria dinámica
* Estructuras (`struct`)
* Uniones (`union`)
* Enumeraciones (`enum`)
* `typedef`
* Funciones
* Bucles
* Menú interactivo

---

## Funcionalidades

### Menú interactivo

El programa presenta un menú con las siguientes opciones:

* Cargar alumnos
* Mostrar un alumno
* Mostrar todos los alumnos
* Mostrar promedio general
* Salir del programa

El menú se repite hasta que el usuario elige la opción de salida.

### Carga de alumnos

* Se solicita al usuario la cantidad de alumnos a cargar.
* Se reserva memoria dinámicamente para almacenar los alumnos.
* Se ingresan los datos de cada alumno:
  * Nombre
  * Edad
  * Promedio
  * Tipo de documento
  * Número de documento

### Mostrar un alumno

* Se solicita el número de alumno a mostrar.
* Se valida que el índice ingresado sea correcto.
* Se muestran todos los datos del alumno seleccionado.

### Mostrar todos los alumnos

* Se recorren los alumnos cargados utilizando punteros.
* Se muestran los datos principales de cada alumno.

### Cálculo del promedio general

* Se calcula el promedio general a partir de los promedios individuales.
* Se muestra el resultado por pantalla.

---

## Temas utilizados

* **Punteros**: acceso y manipulación de datos mediante el operador `->`.
* **Estructuras**: definición del tipo `Alumno`.
* **Uniones**: almacenamiento del número de documento.
* **Enumeraciones**: definición del tipo de documento.
* **Memoria dinámica**: uso de `malloc` y `free`.
* **Funciones**: modularización del programa.
* **Condicionales y bucles**: control del flujo del programa.

---

## Requisitos

* Compilador compatible con estándar **C89/C90** o superior.
* Librerías utilizadas:

  * `<stdio.h>`
  * `<stdlib.h>`

---

## Ejecución

Compilar el programa desde la terminal con:

```bash
gcc main.c -o alumnos
```

Ejecutar con:

```bash
& .\'main.exe'
```

---

## Observaciones

* El programa valida los datos ingresados por el usuario.
* Utiliza estructuras, uniones, enumeraciones y punteros.
* La memoria dinámica es reservada y liberada correctamente.
* No se utilizan variables globales.
* El código se encuentra organizado en funciones para facilitar su lectura y mantenimiento.

---

## Autor

Autor: *Hotchkyss, Gersom Tomás*