# Sistema de Utilidades por Consola (C)

## Descripción del proyecto

Este proyecto es un **sistema de utilidades por consola desarrollado en lenguaje C**, pensado para practicar conceptos fundamentales y de control de flujo del lenguaje.

El programa analiza **números pasados por línea de comandos**, realiza operaciones básicas y demuestra el uso correcto de estructuras del proyecto en múltiples archivos.

---

## Objetivos del proyecto

- Comprender y utilizar el **preprocesador de C**
- Trabajar con **archivos de cabecera (`.h`)** y **múltiples archivos fuente (`.c`)**
- Ejecutar programas en C desde la **línea de comandos**
- Aplicar correctamente las sentencias:
  - `break`
  - `continue`
  - `goto`
- Interpretar argumentos recibidos desde `argc` y `argv`

---

## Funcionalidades

- Leer números ingresados por línea de comandos
- Ignorar valores inválidos o ceros usando `continue`
- Finalizar procesos bajo ciertas condiciones usando `break`
- Utilizar `goto` para saltos controlados (con fines didácticos)
- Mostrar mensajes de depuración mediante macros del preprocesador
- Calcular y mostrar la **suma final** de los números válidos

---

## Estructura del proyecto
```text
SistemaUtilidadesConsola/
├── main.c
├── menu.c
├── procesador.c
├── config.h
├── menu.h
├── procesador.h
└── output/
    └── sistema.exe
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

Desde la carpeta raíz del proyecto, compilar con:

```bash
gcc main.c menu.c procesador.c -o sistema
```

## Ejecución

Ejecutar el programa desde la carpeta output pasando números por línea de comandos:

```bash
./sistema 1 2 3 4
```

Ejemplo con valores ignorados:

```bash
./sistema 5 10 - 3 0 8
```

Salida esperada:

```bash
[DEBUG] Signo '-' detectado, se ignora
[DEBUG] Se encontro un cero, se ignora
Suma final: 26
```

## Observaciones

* El programa procesa argumentos desde la línea de comandos
* Se utilizan break, continue y goto con fines didácticos
* El preprocesador se usa para macros de depuración
* El código está separado en múltiples archivos para una mejor organización
* Proyecto orientado a práctica, no a uso productivo

## Autor

Autor: *Hotchkyss, Gersom Tomás*