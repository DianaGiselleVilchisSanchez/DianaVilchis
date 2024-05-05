#include <stdio.h>
int main (){
    int num=0;
    printf("Ingresa un numero");
    scanf("%d", &num);

    int i;
    int j;
    int x;
    for (i=1; i<=num; i++){
        for (j=0;j<num-i;++j){
            printf(" ");
        }
        for(int k=0; k<i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}