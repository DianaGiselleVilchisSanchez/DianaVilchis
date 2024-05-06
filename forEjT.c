#include <stdio.h>
int main (){
    int m, n;
    printf("ingresa un numero de filas: \n");
    scanf("%d", &m);
    printf("Ingresa el numero de columnas: \n");
    scanf("%d", &n);

    int i, j;
    for (i =1; i <=m; i++){
        for(j=1; j<=n;++j){
            printf("%d\t",i*j);
        }        
        printf("\n");
    }
    return 0;   
}