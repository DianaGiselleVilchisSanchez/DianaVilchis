#include <stdio.h>

int main (){
    float hipotenusa, lado2, lado3;
    printf("Ingresa la medida de la hipotenusa:");
    scanf ("%f", &hipotenusa);
    printf("ingresa la medida del cateto adyacente:");
    scanf("%f", &lado2);
    printf("Ingresa la medida del cateto opuesto:");
    scanf("%f", &lado3);
    float res = (hipotenusa*hipotenusa);
    float res2 = (lado2*lado2)+(lado3*lado3);
    if (res==res2){
        printf("Tu triangulo es rectangulo");
    }
        printf("Tu triangulo no es rectangulo");
    return 0;
}