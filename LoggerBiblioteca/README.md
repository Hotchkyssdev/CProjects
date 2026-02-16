# LoggerBiblioteca 

## Descripción del proyecto

Este proyecto consiste en la implementación de una **biblioteca de logging desarrollada en lenguaje C**, cuyo objetivo es practicar la **modularización de código**, la **creación de bibliotecas estáticas**, y el proceso de **compilación y linking manual con GCC**.

La biblioteca permite crear un logger que escribe mensajes en un archivo de texto, soportando distintos niveles de log (por ejemplo: `INFO`, `ERROR`).

El proyecto está estructurado de forma profesional, separando:

- Interfaz pública (`.h`)
- Implementación (`.c`)
- Biblioteca compilada (`.a`)
- Programa cliente (`main.c`)

---

## Objetivos del proyecto

- Crear una **biblioteca modular en C**
- Separar correctamente interfaz e implementación
- Compilar una **biblioteca estática (`.a`)**
- Entender el proceso de **compilación y linking**
- Utilizar buenas prácticas de estructura de proyecto
- Compilar con estándares estrictos (`-Wall -Werror -pedantic`)

---

## Funcionalidades

- Crear un logger asociado a un archivo
- Escribir mensajes con distintos niveles (`INFO`, `ERROR`, etc.)
- Cerrar correctamente el logger y liberar memoria
- Generar un archivo de log persistente
- Separar lógica en biblioteca reutilizable

---

## Estructura del proyecto

```text
LoggerBiblioteca/
├── include/
│   └── logger.h
├── src/
│   └── logger.c
├── build/
│   └── liblogger.a
├── output/
│   └── app.exe
├── main.c
└── app.log
```

---

## Tecnologías utilizadas

- **Lenguaje:** C
- **Compilador:** GCC
- **Estándar:** C89 / C90 o superior
- **Librerías estándar:**
  - `<stdio.h>`
  - `<stdlib.h>`
  - `<string.h>`

---

## Compilación de la biblioteca

### 1️⃣ Compilar el archivo fuente

```bash
gcc -Wall -Werror -pedantic -Iinclude -c src/logger.c -o build/logger.o
```

### 2️⃣ Crear la biblioteca estática

```bash
ar rcs build/liblogger.a build/logger.o
```

---

## Compilación del programa principal

```bash
gcc -Wall -Werror -pedantic -Iinclude main.c build/liblogger.a -o output/app.exe
```

---

## Ejecución

Desde la carpeta raíz del proyecto:

```bash
output/app.exe
```

Al ejecutarse, el programa generará el archivo:

```text
app.log
```

con los mensajes registrados.

---

## Conceptos aplicados

- Modularización en C
- Encapsulamiento mediante archivos `.h`
- Creación de bibliotecas estáticas (`.a`)
- Proceso de compilación en múltiples etapas
- Linking manual con GCC
- Manejo de archivos en C
- Gestión dinámica de memoria

---

## Observaciones

- El proyecto está estructurado como una biblioteca reutilizable.
- El archivo `logger.h` define la interfaz pública.
- La implementación está completamente encapsulada en `logger.c`.
- Se compila bajo estándares estrictos para garantizar código limpio.
- El proyecto puede ampliarse para soportar timestamps, niveles definidos por `enum` o incluso bibliotecas dinámicas (`.dll` / `.so`).

---

## Autor

Autor: *Hotchkyss, Gersom Tomás*