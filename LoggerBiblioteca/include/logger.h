#ifndef LOGGER_H
#define LOGGER_H

typedef struct Logger Logger; //Tipo de dato opaco

Logger* logger_create(const char* filename);
void logger_log(Logger* logger, const char* level, const char* message);
void logger_destroy(Logger* logger);

#endif