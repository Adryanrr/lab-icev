#include <stdio.h>
#include <stdlib.h> 

struct  dadosPessoa
{
  int idade;
  float altura;
  float peso;
  char nome [50];
};
int main(){
  int i;
  struct dadosPessoa alunos [10];
  for (i=0;i <10; i++){
    printf("Digite a idade da pessoa %d: ", i);
    scanf("%d", &alunos[i].idade);
  }
}