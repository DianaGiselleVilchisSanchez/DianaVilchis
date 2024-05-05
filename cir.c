#include <stdio.h>
#define PI 3.1416

int main (){
    
    float radio1, radio2, radio3;
    printf("Ingresa el radio del primer circulo: ");
    scanf("%f", &radio1);

    printf("Ingresa el radio del segundo circulo: ");
    scanf("%f", &radio2);
    
    printf("Ingresa el radio del tercer circulo: ");
    scanf("%f", &radio3);

    float area1 = PI*radio1*radio1; 
    float area2 = PI*radio2*radio2;
    float area3 = PI*radio3*radio3;

    printf("Area1 es: %f\n", area1);
    printf("Area2 es: %f\n", area2);
    printf("Area3 es: %f\n", area3);
    return 0;

}