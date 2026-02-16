#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/logger.h"

struct Logger {
    FILE* file;
};

Logger* logger_create(const char* filename) {
    Logger* logger = malloc(sizeof(Logger));
    if (!logger) return NULL;

    logger->file = fopen(filename, "a");
    if (!logger->file) {
        free(logger);
        return NULL;
    }

    return logger;
}

void logger_log(Logger* logger, const char* level, const char* message) {
    if (!logger || !level || !message) return;

    char buffer[256];

    //sprintf (inseguro, solo demostración)
    char temp[128];
    sprintf(temp, "[%s]", level);

    //snprintf (seguro)
    snprintf(buffer, sizeof(buffer), "%s %s\n", temp, message);

    //fprintf al archivo
    fprintf(logger->file, "%s", buffer);
    fflush(logger->file);
}

void logger_destroy(Logger* logger) {
    if (!logger) return;

    fclose(logger->file);
    free(logger);
}