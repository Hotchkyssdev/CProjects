# HTTP Monitor (Windows + MSYS2)

## Descripción del proyecto

Este proyecto consiste en un **monitor HTTP desarrollado en lenguaje C**, cuyo objetivo es practicar el uso de:

- `pkg-config` para gestionar dependencias externas
- `Makefile` para automatizar la compilación
- `GDB` para depuración
- Variables globales
- Uso de `extern`
- Modularización en múltiples archivos

El programa realiza una **petición HTTP utilizando `libcurl`**, mostrando mensajes informativos y de depuración en consola.

El proyecto está estructurado de forma profesional, separando:

- Configuración global
- Logger
- Cliente HTTP
- Archivo principal
- Makefile

---

## Objetivos del proyecto

- Utilizar `pkg-config` para compilar con bibliotecas externas
- Automatizar la compilación mediante `Makefile`
- Comprender el uso de variables globales
- Aplicar correctamente la palabra clave `extern`
- Depurar el programa con `GDB`
- Compilar con estándares estrictos (`-Wall -Werror -pedantic`)
- Generar ejecutables en entorno Windows usando MSYS2

---

## Funcionalidades

- Realizar una petición HTTP usando `libcurl`
- Mostrar mensajes informativos (`INFO`)
- Mostrar mensajes de depuración (`DEBUG`)
- Controlar el modo debug mediante una variable global
- Separar el código en módulos independientes
- Permitir inspección y modificación de variables con GDB

---

## Estructura del proyecto

```text
MonitorSistema/
├── include/
│   ├── config.h
│   ├── logger.h
│   └── http_client.h
├── src/
│   ├── main.c
│   ├── logger.c
│   └── http_client.c
├── Makefile
└── http_monitor.exe
```

---

## Tecnologías utilizadas

- **Lenguaje:** C
- **Compilador:** GCC (MSYS2 MinGW64)
- **Estándar:** C89 / C90 o superior
- **Biblioteca externa:**
  - `libcurl`
- **Herramientas:**
  - `pkg-config`
  - `mingw32-make`
  - `gdb`

---

## Requisitos (Windows 11)

Instalar MSYS2 y luego ejecutar en terminal **MINGW64**:

```bash
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-make
pacman -S mingw-w64-x86_64-gdb
pacman -S mingw-w64-x86_64-curl
pacman -S mingw-w64-x86_64-pkgconf
```

---

## Compilación

Desde la carpeta raíz del proyecto, en terminal **MINGW64**:

```bash
mingw32-make
```

Esto:

1. Compila cada archivo `.c` en archivos objeto `.o`
2. Enlaza contra `libcurl` usando `pkg-config`
3. Genera el ejecutable `http_monitor.exe`

---

## Limpieza del proyecto

```bash
mingw32-make clean
```

---

## Ejecución

```bash
./http_monitor.exe
```

Salida esperada:

```text
[INFO] Iniciando HTTP Monitor
[INFO] Request realizada correctamente
[DEBUG] Modo debug activado
[INFO] Programa finalizado
```

---

## Depuración con GDB

Ejecutar:

```bash
gdb ./http_monitor.exe
```

Ejemplo de uso:

```gdb
break log_debug
run
print g_debug_mode
set g_debug_mode = 0
next
```

Esto permite:

- Inspeccionar variables globales
- Modificar variables en tiempo real
- Analizar el flujo del programa
- Observar el comportamiento de `extern`

---

## Conceptos aplicados

- Modularización en C
- Separación en archivos `.h` y `.c`
- Variables globales
- Uso de `extern`
- Linking dinámico con biblioteca externa
- Uso de `pkg-config`
- Automatización con Makefile
- Depuración con GDB
- Inspección y modificación de memoria en runtime

---

## Observaciones

- La variable `g_debug_mode` se define en `main.c`
- Se declara como `extern` en `config.h`
- Es utilizada en otros módulos como `logger.c`
- `libcurl` puede generar threads internos durante la ejecución
- El proyecto está preparado para ampliarse con argumentos de línea de comandos o logging a archivo

---

## Autor

Autor: *Hotchkyss, Gersom Tomás*