
#include <stdio.h>

int main() {
    int w = 9, x = 3, y = 7, z = -2;
    
    double resultado = (x != 0 && z != 0) * (double(w) / x) - (double(y) / z);

    printf("El resultado es: %d\n", resultado);

    return 0;
}