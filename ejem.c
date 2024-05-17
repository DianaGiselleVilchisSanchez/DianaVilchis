#include <stdio.h>

int main(){
    int numero = 135;
    if (numero < 100){
        printf ("el numero es menor que 100\n");
        if (numero > 50){
            printf ("y mayor que 50\n");
        }
        printf ("Fin del programa\n");
        return 0;
    }
}