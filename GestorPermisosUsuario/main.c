#include <stdio.h>
#include <stdlib.h>

#define PERM_LEER 0x01 //0001
#define PERM_ESCRIBIR 0x02 //0010
#define PERM_EJECUTAR 0x04 //0100
#define PERM_ADMIN 0x08 //1000

void mostrarPermisos(unsigned char permisos);
void guardarPermisos(unsigned char permisos);
unsigned char cargarPermisos(void);

int main() {
    unsigned char permisos = 0;
    int opcion;

    do {
        printf("\n--- Gestor de Permisos ---\n");
        printf("1. Activar permiso\n");
        printf("2. Desactivar permiso\n");
        printf("3. Mostrar permisos\n");
        printf("4. Guardar en archivo\n");
        printf("5. Cargar desde archivo\n");
        printf("0. Salir\n");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                printf("1- Leer\n");
                printf("2- Escribir\n");
                printf("3- Ejecutar\n");
                printf("4- Admin\n");
                scanf("%d", &opcion);

                if (opcion == 1) {
                    permisos |= PERM_LEER;
                }

                if (opcion == 2) {
                    permisos |= PERM_ESCRIBIR;
                }

                if (opcion == 3) {
                    permisos |= PERM_EJECUTAR;
                }

                if (opcion == 4) {
                    permisos |= PERM_ADMIN;
                }
            
                break;

            case 2:
                printf("1- Leer\n");
                printf("2- Escribir\n");
                printf("3- Ejecutar\n");
                printf("4- Admin\n");
                scanf("%d", &opcion);

                if (opcion == 1) {
                    permisos &= ~PERM_LEER;
                }

                if (opcion == 2) {
                    permisos &= ~PERM_ESCRIBIR;
                }

                if (opcion == 3) {
                    permisos &= ~PERM_EJECUTAR;
                }

                if (opcion == 4) {
                    permisos &= ~PERM_ADMIN;
                }
            
                break;

            case 3:
                mostrarPermisos(permisos);
                break;

            case 4:
                guardarPermisos(permisos);
                break;
            
            case 5:
                permisos = cargarPermisos();
                break;

            case 0:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while (opcion != 0 );

    return 0;
}

void mostrarPermisos(unsigned char permisos) {
    printf("\nPermisos activos:\n");

    if (permisos & PERM_LEER) {
        printf("- Leer\n");
    }

    if (permisos & PERM_ESCRIBIR) {
        printf("- Escribir\n");
    }

    if (permisos & PERM_EJECUTAR) {
        printf("- Ejecutar\n");
    }

    if (permisos & PERM_ADMIN) {
        printf("- Administrador\n");
    }

    if (permisos == 0) {
        printf("- Ninguno\n");
    }
}

void guardarPermisos(unsigned char permisos) {
    FILE *archivo = fopen("permisos.txt", "w");

    if (archivo == NULL) {
        printf("Error al abrir al archivo\n");
        return;
    }

    fprintf(archivo, "%d", permisos);
    fclose(archivo);

    printf("Permisos guardados en archivo\n");
}

unsigned char cargarPermisos(void) {
    FILE *archivo = fopen("permisos.txt", "w");
    int permisos = 0;

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 0;
    }

    fscanf(archivo, "%d", &permisos);
    fclose(archivo);

    printf("Permisos cargados desde archivo\n");
    return (unsigned char)permisos;
}