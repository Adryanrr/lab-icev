#include <stdio.h>
#include <stdlib.h>

struct cadastroDeProdutos
{
  char nomeProduto [50];
  int codigo;
  int quantidadeDoProduto;
  float valorUnitario;
};
int main(){
  int i;
  struct cadastroDeProdutos produto[5];
  for (i=0;i<5;i++){
    printf("Qual o nome do produto?  \n");
    scanf("%s", &produto[i].nomeProduto);
    printf("Digite o codigo do produto:  \n");
    scanf("%d", &produto[i].codigo);
    printf("Qual a quantidade de produtos:  \n");
    scanf("%d", &produto[i].quantidadeDoProduto);
    printf("Digite o valor unitario do produto:  \n");
    scanf("%f", &produto[i].valorUnitario);
  }
  for ( i = 0; i < 3; i++){
    printf ("Produto: %s \n", produto[i].nomeProduto);
    printf("Codigo do produto: %d \n", &produto[i].codigo);
    printf("Quantidades de produtos disponives: %d \n", &produto[i].quantidadeDoProduto);
    printf("O valor do produto é: %2.f \n", &produto[i].valorUnitario);
    printf("Qual o nome do produto?  \n");
  }
}