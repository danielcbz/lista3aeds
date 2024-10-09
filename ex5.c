/*Faça um procedimento que recebe a média final de um aluno, identifica e exibe o seu conceito,
conforme a tabela abaixo. Faça um programa que leia a média de N alunos, acionando o proce-
dimento para cada um deles. (N deve ser lido do teclado)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int n, media;
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    scanf("%d",&media);
    if(media<=39){
      printf("F\n");
    }
    else if(media>=40 && media<=59){
      printf("E\n");
    }
    else if(media>=60 && media<=69){
      printf("D\n");
    }
    else if(media>=70 && media<=79){
      printf("C\n");
    }
    else if(media>=80 && media<=89){
      printf("B\n");
    }
    else if(media>90){
      printf("A\n");
    }
  }
}