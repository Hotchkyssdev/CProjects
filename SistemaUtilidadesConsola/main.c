#include <stdio.h>
#include "menu.h"
#include "procesador.h"

int main(int argc, char *argv[]) {

    if (argc < 2) {
        mostrarMenu();
        return 1;
    }

    procesarNumeros(argc, argv);

    return 0;
}