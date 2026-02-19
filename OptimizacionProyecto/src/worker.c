#include <stdio.h>
#include "worker.h"

/*Si prescindo del volatile y compilo con -O2 el optimizador puede asumir que esta variable
no cambia "externamente" y eliminar el loop.*/

volatile int ready_flag = 0;

void wait_for_flag(void) {
    while (!ready_flag) {
        //Espera activa
    }

    printf("Flag detectado!\n");
}

void trigger_flag(void) {
    ready_flag = 1;
}