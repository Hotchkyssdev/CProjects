#include <stdio.h>

void saludo();
void mostrarMenu();
int esMayordeEdad(int edad);

void saludo() {
    printf("Hola Mundo! Bienvenido al Sistema\n");
}

int esMayordeEdad(int edad) {
    if (edad < 0 || edad > 120) {
        return -1;
    } else if (edad >= 18) {
        return 1;
    } else {
        return 0;
    }
}

void mostrarMenu() {
    int opcion;
    int edad;
    float altura;
    char genero;
    int resultado;
    
    do {
        printf("\n1. Verificar mayoria de edad");
        printf("\n2. Verificar altura y sexo");
        printf("\n0. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: 
                printf("\nIngrese la edad: ");
                scanf("%d", &edad);
                resultado = esMayordeEdad(edad);

                if (resultado == -1) {
                    printf("Edad fuera de rango.\n");
                } else if (resultado == 1) {
                    printf("Es mayor de edad.\n");
                } else {
                    printf("Es menor de edad.\n");
                }
                break; 

            case 2:
                printf("\nIngrese la altura: ");
                scanf("%f", &altura);
                printf("Ingrese el genero (M = Masculino | F = Femenino): ");
                scanf(" %c", &genero);

                if ((altura >= 1.70 && genero == 'M') ||(altura >= 1.60 && genero == 'F')) {
                    printf("Cumple con el requisito de altura.\n");
                } else {
                    printf("No cumple con el requisito de altura.\n");
                }
                break;

            case 0:
                printf("Saliendo del programa, gracias por usarlo...");
                break;

            default:
                printf("\nOpcion invalida. Intente de nuevo.");
                break;
        }

    } while(opcion != 0);
}

int main() {
    saludo();
    mostrarMenu();
    return 0;
}