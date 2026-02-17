#include <stdio.h>
#include "config.h"
#include "logger.h"
#include "http_client.h"

//Variable global
int g_debug_mode = 1;

int main(void) {
    log_info("Iniciando HTTP Monitor");

    make_request("https://example.com");

    if (g_debug_mode)
        log_debug("Modo debug activado");

    log_info("Programa finalizado");

    return 0;
}