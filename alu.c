/*Ejercicio:
Escribe un programa que reciba del teclado la calificacion del examen 
de un alumno e imprima el siguiente texto unicamente si la calificacion fue aprobatoria
Mensaje: ¡Felicidades aprobatoria.
calificacion minima aprobatoria: 70*/
#include <stdio.h>

int main (){
    int cal;
    scanf ("%d", &cal);
    if (cal>70){
        printf ("Felicidades aprobaste el curso");
    }
    printf ("Fin del programa\n");
    return 0;
}