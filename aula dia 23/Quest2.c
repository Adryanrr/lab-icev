#include <stdio.h>
#include <stdlib.h>

struct dadosAluno{
  char nome[50];
  float notaMat;
  float notaEngS;
  float notaIngles;
  float notaLog;
};

int main(){
  int i;
  float media;
  struct dadosAluno aluno[5];
  system("clear");

    printf("Qual o nome do aluno? \n");
    scanf("%s", &aluno[i].nome);
    printf("Qual a nota de matematica matemática? \n");
    scanf("%f", &aluno[i].notaMat);
    printf("Qual a nota de Engenharia de Software? \n");
    scanf("%f", &aluno[i].notaEngS);
    printf("Qual a nota de Inglês? \n");
    scanf("%f", &aluno[i].notaIngles);
    printf("Qual a nota de logica e programação? \n");
    scanf("%f", &aluno[i].notaLog);

    system("clear");
  media = (aluno->notaEngS + aluno->notaIngles + aluno->notaLog + aluno->notaMat)/2;
  printf("o Aluno %s tem a media de: %f \n", aluno->nome, media);
}

