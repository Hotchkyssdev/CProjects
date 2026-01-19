# Gestor de Permisos de Usuario (C)

## Descripción del proyecto

Este proyecto consiste en un **gestor de permisos de usuario desarrollado en lenguaje C**, cuyo objetivo es practicar el uso de **manipulación de bits**, **máscaras de bits** y **manejo de archivos**, junto con la interacción por consola mediante `printf` y `scanf`.

Los permisos de un usuario se representan utilizando **bits dentro de una variable**, donde cada bit indica si un permiso está activo o no.  
La información puede guardarse y cargarse desde un archivo de texto.

---

## Objetivos del proyecto

- Aplicar **manipulación de bits** para representar estados
- Utilizar **máscaras de bits** mediante macros del preprocesador
- Leer y escribir información en **archivos**
- Usar correctamente `printf` y `scanf`
- Implementar un **menú interactivo por consola**
- Reforzar el uso de operadores bit a bit

---

## Funcionalidades

- Activar permisos mediante máscaras de bits
- Desactivar permisos usando operadores bit a bit
- Mostrar los permisos activos de un usuario
- Guardar los permisos en un archivo
- Cargar los permisos desde un archivo
- Representar múltiples permisos en una sola variable

---

## Permisos disponibles

Cada permiso se representa con un bit:

| Bit | Permiso        |
|----:|---------------|
| 0   | Leer           |
| 1   | Escribir       |
| 2   | Ejecutar       |
| 3   | Administrador  |

Ejemplo:  
`00001101` → Leer + Ejecutar + Administrador

---

## Estructura del proyecto

```text
GestorPermisosUsuario/
├── main.c
└── output/
    └── main.exe
```

---

## Tecnologías utilizadas

- **Lenguaje:** C
- **Compilador:** GCC
- **Estándar:** C89 / C90 o superior
- **Librerías estándar:**
  - `<stdio.h>`
  - `<stdlib.h>`

---

## Compilación

Desde la carpeta del proyecto, compilar con:

```bash
gcc main.c -o permisos
```

## Ejecución

Ejecutar el programa desde la carpeta output pasando números por línea de comandos:

```bash
./permisos
```

## Observaciones

* Los permisos se almacenan usando una sola variable mediante bits
* Se utilizan máscaras de bits definidas con #define
* El programa guarda y lee datos desde un archivo de texto
* Ideal para práctica de operadores bit a bit y archivos

## Autor

Autor: *Hotchkyss, Gersom Tomás*