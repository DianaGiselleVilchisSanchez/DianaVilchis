#include <stdio.h>

int main (){
    int num;
    int i;
    printf ("Ingresa un numero para ver su tabla de multiplicar");
    scanf ("%d ", &num);
    
    printf("La tabla de multiplicar ascentente es:\n");
    for (i=0; i<=1000; i++){
        printf("%d x %d = %d ", num, i, num*i);
    }
    printf("La tabla de multiplicar descentente es:");
    for (i = 1000; i>0; i--){
        printf("%d x %d = %d ", num, i, i*num);
    }
    return 0;
}