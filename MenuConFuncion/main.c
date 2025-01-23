#include <stdio.h>

// Prototipo de la funcion
void mostrarMensaje();

int main() {

    int opcion;
    int num1;
    int num2;
    int suma;

    do {
        //Menu
        printf("----- Menu -----\n");
        printf("1. Mostrar mensaje\n");
        printf("2. Sumar dos numeros\n");
        printf("3. Salir\n");
        printf("Elige una opcion:");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                mostrarMensaje();
                break;

            case 2: {
                printf("Ingresa el primer numero: ");
                scanf("%d", &num1);
                printf("Ingresa el segundo numero: ");
                scanf("%d", &num2);
                suma = num1 + num2;
                printf("La suma es: %d\n", suma);
                break;
            }

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n");
        }
    } while(opcion != 3);

    return 0;
}

// Definición de la funcion
void mostrarMensaje() {
    printf("Hola,este es un mensaje desde una funcion.\n");
}
