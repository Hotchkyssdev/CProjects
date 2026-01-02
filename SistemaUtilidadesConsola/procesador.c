#include <stdio.h>
#include <stdlib.h>
#include "procesador.h"
#include "config.h"

void procesarNumeros(int argc, char *argv[]) {
    int i;
    int numero;
    int suma = 0;
    
    for (i = 1; i < argc; i++) {
        numero = atoi(argv[i]);

        if (argv[i][0] == '-' && argv[i][1] == '\0') {
            LOG("Signo '-' detectado, se ignora");
            continue;
        }

        if (numero == 0) {
            LOG("Se encontro un cero, se ignora");
            continue;
        }

        if (numero < 0) {
            LOG("Numero negativo detectado, se corta el proceso");
            goto fin;
        }

        suma += numero;

        if (suma > 100) {
            LOG("Suma mayor a 100, se corta el bucle");
            break;
        }
    }
fin:
    printf("Suma final: %d\n", suma);
} 