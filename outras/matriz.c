#include <stdio.h>
#include <stdlib.h> 

int i, j; 
int matrizA[3][3],matrizB[3][3];

int main(){
    printf("Informe o valor da matriz A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d", &matrizA[i][j]);
    }
    printf("Informe o valor da matriz B: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d", &matrizB[i][j]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("|%4d", matrizA[i][j]*matrizB[i][j]);
        printf("| \n");
    }

}

