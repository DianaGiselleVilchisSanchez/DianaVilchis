#include <stdio.h>

int main (){
    float cantidad;
    int num;
    printf("Ingresa tu cantidad en pesos:");
    scanf("%f", &cantidad);
    printf("Si eres cliente, presiona 1, sino presiona 0\n");
    scanf("%d", &num);

    float des= (num==1)? cantidad*0.20 : cantidad*0.05;
    float descuento = cantidad-des;
    
    printf ("Tu descuento es de %f:", des);
    printf("Tu pago es de: %f:", descuento);
    return 0;
}