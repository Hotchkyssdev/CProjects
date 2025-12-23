#include <stdio.h>
#include <stdlib.h>

typedef enum {
    DNI, 
    PASAPORTE, 
    LIBRETA
} TipoDocumento;

typedef union {
    int nroDNI;
    int nroPasaporte;
    int nroLibretaUniversitaria;
} Documento;

typedef struct {
    char nombre[40];
    int edad;
    float promedio;
    TipoDocumento tipoDoc;
    Documento nroDocumento;
} Alumno;

void menuPrincipal();
void cargarAlumnos(Alumno **alumnos, int *cantidad);
void mostrarAlumno(Alumno *alumnos, int cantidad);
void mostrarAlumnos(Alumno *alumnos, int cantidad);
void mostrarPromedio(Alumno *alumnos, int cantidad);
void liberarMemoria(Alumno *alumnos);


void menuPrincipal() {
    Alumno *alumnos = NULL;
    int cantidad = 0;    
    int opcion;

    do {
        printf("\n1. Cargar alumnos");
        printf("\n2. Mostrar un alumno");
        printf("\n3. Mostrar todos los alumnos");
        printf("\n4. Mostrar promedio general");
        printf("\n0. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                cargarAlumnos(&alumnos, &cantidad);
                break;

            case 2:
                mostrarAlumno(alumnos, cantidad);
                break;
            
            case 3:
                mostrarAlumnos(alumnos, cantidad);
                break;
            
            case 4:
                mostrarPromedio(alumnos, cantidad);
                break;

            case 0:
                liberarMemoria(alumnos);
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } while (opcion != 0);
}

void cargarAlumnos(Alumno **alumnos, int *cantidad) {
    int i;
    printf("\nCuantos alumnos va a cargar?: ");
    scanf("%d", cantidad);
    *alumnos = malloc(*cantidad * sizeof(Alumno));

    if (*alumnos == NULL) {
        printf("Error al reservar memoria.\n");
        *cantidad = 0;
        return;
    }

    for (i = 0; i < *cantidad; i++) {
        Alumno *a = *alumnos + i;
        printf("\nAlumno %d\n", i+1);
        
        printf("Nombre: ");
        scanf(" %[^\n]", a->nombre);

        printf("Edad: ");
        scanf("%d", &a->edad);

        printf("Promedio: ");
        scanf("%f", &a->promedio);

        printf("Tipo de documento (0 = DNI, 1 = Pasaporte, 2 = Libreta): ");
        scanf("%d", (int *)&a->tipoDoc);

        switch (a->tipoDoc) {
            case DNI:
                printf("Numero de DNI: ");
                scanf("%d", &a->nroDocumento.nroDNI);
                break;

            case PASAPORTE:
                printf("Numero de Pasaporte: ");
                scanf("%d", &a->nroDocumento.nroPasaporte);
                break;
            
            case LIBRETA:
                printf("Numero de Libreta: ");
                scanf("%d", &a->nroDocumento.nroLibretaUniversitaria);
                break;
        }
    }
}

void mostrarAlumno(Alumno *alumnos, int cantidad) {
    int indice;

    if (alumnos == NULL || cantidad == 0) {
        printf("\nNo hay alumnos cargados.\n");
        return;
    }

    printf("\nIngrese el numero de alumno (1 a %d): ", cantidad);
    scanf("%d", &indice);

    if (indice < 1 || indice > cantidad) {
        printf("Indice invalido.\n");
        return;
    }

    Alumno *a = alumnos + (indice - 1);

    printf("\nNombre: %s", a->nombre);
    printf("\nEdad: %d", a->edad);
    printf("\nPromedio: %.2f", a->promedio);

    switch (a->tipoDoc) {
        case DNI:
            printf("\nDocumento: DNI %d", a->nroDocumento.nroDNI);
            break;

        case PASAPORTE:
            printf("\nDocumento: Pasaporte %d", a->nroDocumento.nroPasaporte);
            break;
            
        case LIBRETA:
            printf("\nDocumento: Libreta %d", a->nroDocumento.nroLibretaUniversitaria);
            break;
    }
    printf("\n");
}

void mostrarAlumnos(Alumno *alumnos, int cantidad) {
    int i;

    if (alumnos == NULL || cantidad == 0) {
        printf("\nNo hay alumnos cargados.\n");
        return;
    }

    for (i = 0; i < cantidad; i++) {
        Alumno *a = alumnos + i;
        printf("\nAlumno %d: %s - Promedio %.2f", i + 1, a->nombre, a->promedio);
    }

    printf("\n");
}

void mostrarPromedio(Alumno *alumnos, int cantidad) {
    int i;
    float suma = 0;

    if (alumnos == NULL || cantidad == 0) {
        printf("\nNo hay alumnos cargados.\n");
        return;
    }

    for (i = 0; i < cantidad; i++) {
        suma += (alumnos + i)->promedio;
    }

    printf("\nPromedio General: %.2f\n", suma / cantidad);
}

void liberarMemoria(Alumno *alumnos) {
    if (alumnos != NULL) {
        free(alumnos);
    }
}

int main() {
    printf("Bienvenido al Sistema de Gestion de Alumnos!\n");
    menuPrincipal();
    return 0;

}
