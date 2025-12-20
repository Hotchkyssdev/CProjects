# Menú Interactivo Básico

## Descripción

Este proyecto consiste en el desarrollo de un programa en **lenguaje C** que implementa un **menú interactivo por consola**, cuyo objetivo es aplicar los conceptos fundamentales del lenguaje vistos en clase.

El programa permite:

* Mostrar un mensaje de bienvenida (“Hola Mundo”)
* Verificar si una persona es mayor de edad
* Evaluar una condición combinando altura y género
* Repetir el menú hasta que el usuario decida salir

---

## Objetivo del proyecto

Aplicar correctamente los siguientes temas:

* Funciones
* Variables y tipos de datos
* Condicionales
* Operadores lógicos
* Bucles

---

## Funcionalidades

### Saludo inicial

Al iniciar el programa se muestra un mensaje de bienvenida mediante una función independiente.

### Menú interactivo

El programa presenta un menú con las siguientes opciones:

* Verificar mayoría de edad
* Verificar condición de altura y género
* Salir del programa

El menú se repite hasta que el usuario elige la opción de salida.

### Verificación de mayoría de edad

* Se solicita la edad al usuario.
* Se valida que esté dentro de un rango lógico.
* Se informa si la persona es mayor o menor de edad.

### Verificación de altura y género

* Se solicita la altura y el género del usuario.
* Se evalúa una condición utilizando operadores lógicos (`&&` y `||`).
* Se informa si cumple o no con el requisito.

---

## Temas utilizados

* **Funciones**: modularización del programa.
* **Tipos de datos**: `int`, `float`, `char`.
* **Condicionales**: `if`, `else`, `switch`.
* **Operadores lógicos**: AND (`&&`), OR (`||`).
* **Bucles**: `do-while`.

---

## Requisitos

* Compilador compatible con estándar **C89/C90**.
* Librería utilizada:

  * `<stdio.h>`

---

## Ejecución

Compilar el programa desde la terminal con:

```bash
gcc main.c -o programa
```

Ejecutar con:

```bash
./programa
```

---

## Observaciones

* El programa valida datos ingresados por el usuario.
* No utiliza arreglos ni estructuras.
* El código se encuentra organizado en funciones para facilitar su lectura y mantenimiento.

---

## Autor

Autor: *Hotchkyss, Gersom Tomás*

