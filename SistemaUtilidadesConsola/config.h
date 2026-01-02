#ifndef CONFIG_H
#define CONFIG_H

#define VERSION "1.0"
#define MAX_NUMEROS 100

#define DEBUG 1

#if DEBUG
    #define LOG(msg) printf("[DEBUG] %s\n", msg)
#else
    #define LOG(msg)
#endif

#endif