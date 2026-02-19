#include <stdio.h>
#include <stdarg.h>
#include "logger.h"

void log_message(const char *level, const char *fmt, ...) {
    va_list args;

    printf("[%s] ", level);

    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);

    printf("\n");
}