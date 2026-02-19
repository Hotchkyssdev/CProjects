#include <stdio.h>
#include <stdlib.h>
#include <windows.h>   //Para llamar a la funcion Sleep de Windows
#include "logger.h"
#include "worker.h"

int main(void) {
    log_message("INFO", "Iniciando programa...");
    log_message("DEBUG", "PID: %d", GetCurrentProcessId());

    log_message("INFO", "Esperando flag...");

    //Simulacion de evento externo
    Sleep(2000);

    trigger_flag();
    wait_for_flag();

    log_message("INFO", "Programa finalizado.");

    return 0;
}