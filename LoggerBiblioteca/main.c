#include <stdio.h>
#include "include/logger.h"

int main() {
    Logger* logger = logger_create("app.log");

    if (!logger) {
        fprintf(stderr, "Error creando logger\n");
        return 1;
    }

    logger_log(logger, "INFO", "Programa iniciado");
    logger_log(logger, "ERROR", "Esto es un error simulado");

    logger_destroy(logger);

    printf("Logs escritos en app.log\n");
    return 0;
}