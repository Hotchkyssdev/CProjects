#include <stdio.h>
#include "config.h"
#include "logger.h"

void log_info(const char *msg) {
    printf("[INFO] %s\n", msg);
}

void log_debug(const char *msg) {
    if (g_debug_mode)
        printf("[DEBUG] %s\n", msg);
}