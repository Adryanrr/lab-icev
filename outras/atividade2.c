#include <stdio.h>
#include <stdlib.h>

int NumPositivo;

int i, j, linhas, colunas;

int main(){

    printf("Informe o numero de linhas: \n");
    scanf("%d", &linhas);
    printf("Informe o numero de colunas: \n");
    scanf("%d", &colunas);
    printf("Informe os valores da matriz: \n");
    int matriz[linhas][colunas];
    for(i=0;i<linhas;i++){
            for(j=1;j<linhas;j++);
                scanf("%d",&matriz[i][j]);
    }
    for(i=0;i<colunas;i++){
        for(j=1;j<colunas;j++)
        printf("| %4d",matriz[i][j]);
        printf("| \n");
    }
}
