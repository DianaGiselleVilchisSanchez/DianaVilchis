//hacer un programa que haga calculos preevistos y ponga los resuldados en pantalla

#include <stdio.h>
#include <stdlib.h>
int main (){
    double a = 1.0;
    double b = 3.0;
    double c = 5.0;
    double d = 30.0;
    double e = 23.0;
    double resultado = a/b+b/c+a/d/(e/d);
    printf ("La respuesta es %f\n", resultado);
    return 0;
}