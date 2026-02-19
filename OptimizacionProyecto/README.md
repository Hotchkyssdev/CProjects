# OptimizacionProyecto (GCC -O + Variádicas + Volatile)

## Descripción del proyecto

Este proyecto consiste en un **laboratorio práctico en lenguaje C**, cuyo objetivo es comprender el comportamiento del compilador GCC y su optimizador.

El proyecto permite practicar el uso de:

- `stdarg.h` para funciones variádicas  
- Diferentes niveles de optimización (`-O0`, `-O2`)  
- Generación de código ensamblador con `-S`  
- Uso de la palabra clave `volatile`  
- Automatización de compilación mediante `Makefile`  
- Análisis del comportamiento del compilador  

El programa implementa un **logger variádico** y un sistema de espera basado en un flag global, permitiendo observar cómo el compilador transforma el código según el nivel de optimización aplicado.

El proyecto está estructurado de forma profesional, separando:

- Logger  
- Módulo de control de flag  
- Archivo principal  
- Makefile  

---

## Objetivos del proyecto

- Comprender cómo funcionan las funciones variádicas en C  
- Analizar el impacto del optimizador de GCC  
- Comparar el comportamiento entre `-O0` y `-O2`  
- Entender el propósito y uso correcto de `volatile`  
- Generar y analizar código ensamblador  
- Automatizar compilaciones con distintos niveles de optimización  
- Aplicar estándares estrictos de compilación (`-Wall -Werror -pedantic`)  

---

## Funcionalidades

- Logger con cantidad variable de argumentos  
- Uso de `va_list`, `va_start`, `va_end`  
- Simulación de espera activa mediante flag global  
- Uso de `volatile` para evitar optimización indebida  
- Compilación con distintos niveles de optimización  
- Generación de assembly para análisis comparativo  
- Estructura modular en múltiples archivos  

---

## Estructura del proyecto

```text
OptimizacionProyecto/
├── include/
│   ├── logger.h
│   └── worker.h
├── src/
│   ├── main.c
│   ├── logger.c
│   └── worker.c
├── Makefile
└── opt_demo.exe
```

---

## Tecnologías utilizadas

- **Lenguaje:** C  
- **Compilador:** GCC (MSYS2 MinGW64)  
- **Estándar:** C90 o superior  
- **Herramientas:**  
  - `mingw32-make`  
  - `gcc`  
  - `gdb`  
  - Generación de assembly con `-S`  

---

## Requisitos (Windows 11)

Instalar MSYS2 y luego ejecutar en terminal **MINGW64**:

```bash
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-make
pacman -S mingw-w64-x86_64-gdb
```

---

## Compilación

### Compilar sin optimización

```bash
mingw32-make no_opt
```

Esto compila usando:

```bash
-O0
```

Modo recomendado para depuración.

---

### Compilar con optimización

```bash
mingw32-make opt
```

Esto compila usando:

```bash
-O2
```

Activa optimizaciones agresivas del compilador.

---

## Limpieza del proyecto

```bash
mingw32-make clean
```

---

## Ejecución

```bash
./opt_demo.exe
```

Salida esperada:

```text
[INFO] Iniciando programa...
[DEBUG] PID: 12345
[INFO] Esperando flag...
Flag detectado!
[INFO] Programa finalizado.
```

---

## Generación de Assembly

Para analizar el código generado por el compilador:

```bash
gcc -O0 -Iinclude -S src/worker.c
gcc -O2 -Iinclude -S src/worker.c
```

Esto generará el archivo:

```text
worker.s
```

Permite comparar:

- Accesos a memoria  
- Eliminación de código redundante  
- Reordenamiento de instrucciones  
- Diferencias estructurales entre niveles de optimización  

---

## Experimentos recomendados

1. Quitar la palabra clave `volatile` en `worker.c`.  
2. Compilar con `-O2`.  
3. Analizar el assembly generado.  
4. Comparar el comportamiento con `-O0`.  
5. Depurar con GDB.  
6. Observar cómo el optimizador puede asumir invariantes.  

---

## Depuración con GDB

Ejecutar:

```bash
gdb ./opt_demo.exe
```

Ejemplo de uso:

```gdb
break main
run
next
disassemble wait_for_flag
```

Esto permite:

- Inspeccionar el flujo del programa  
- Analizar funciones optimizadas  
- Observar diferencias entre compilaciones  
- Ver el código ensamblador generado  

---

## Conceptos aplicados

- Funciones variádicas con `stdarg.h`  
- Manejo dinámico de argumentos  
- Uso correcto de `volatile`  
- Optimización del compilador (`-O0`, `-O2`)  
- Generación de assembly (`-S`)  
- Modularización en C  
- Automatización con Makefile  
- Análisis de bajo nivel  

---

## Observaciones

- `volatile` impide que el compilador optimice accesos a memoria considerados constantes.  
- `-O2` puede eliminar loops considerados redundantes.  
- El assembly generado varía significativamente según el nivel de optimización.  
- El comportamiento del optimizador depende del análisis estático realizado por GCC.  
- El proyecto puede ampliarse con hilos reales para demostrar efectos más avanzados de optimización.  

---

## Autor

Autor: *Hotchkyss, Gersom Tomás*