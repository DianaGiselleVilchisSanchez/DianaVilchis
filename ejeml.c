/*Realiza un programa, que te diga si persona es sujeto a un credito hipotecario
Las condiciones que debe de cumplir son:
Tener minimo 5 años de antigÛedad en el trabajo
El 10% de su sueldo mensual debe ser mayor a 1000 pesos */
#include <stdio.h>

int main() {
    int anti;
    float sueldo;
    printf("Ingrese la antigüedad en años en el trabajo: ");
    scanf("%d", &anti);

    printf("Ingrese el sueldo mensual: ");
    scanf("%f", &sueldo);
    
    if (anti >= 5 && (0.1 * sueldo) > 1000) {
        printf("La persona es sujeta a un crédito hipotecario.\n");
    } else {
        printf("La persona no cumple con los requisitos para un crédito hipotecario.\n");
    }
    
    return 0;
}

