#include <stdio.h>
int main (){
    double a = 5.0;
    double b = 2.0;
    double c = 1.0;
    double d = 4.0;
    double resul, resul1, resul2, resul3;
    resul = (b-(c/d));
    resul1 = (c+(b/resul));
    resul2 = (c/resul1);
    resul3 = a + (b/resul2);
    printf("El resultado es %f\n", resul3);
    return 0;
}