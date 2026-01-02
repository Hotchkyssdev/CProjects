#include <stdio.h>
#include "menu.h"
#include "config.h"

void mostrarMenu() {
    printf("Analizador de Numeros - Version %s\n", VERSION);
    printf("Uso:\n");
    printf("./programa <numeros>\n");
    printf("Ejemplo:\n");
    printf("./programa 5 10 - 3 0 8\n\n");
}