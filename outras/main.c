#include <stdio.h>
#include <stdlib.h>

int i, j, numL, numC;

int main(){

    printf("Informe o numero de linhas: \n");
    scanf("%d", &numL);
    printf("Informe o numero de colunas: \n");
    scanf("%d", &numC);
    printf("Informe os valores da matriz: \n");
    int matriz[numL][numL];
    for(i=0;i<numL;i++){
            for(j=0;j<numL;j++)
                scanf("%d",&matriz[i][j]);
    }
    for(i=0;i<numC;i++){
        for(j=0;j<numC;j++)
        printf("| %4d",matriz[i][j]);
        printf("| \n");
    }
}
