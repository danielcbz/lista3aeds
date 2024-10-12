/*Faça uma função que lê um número indeterminado de notas de alunos, calcula e retorna a média
das notas dos alunos aprovados (nota maior ou igual a 6). Faça um programa que lê o número
de alunos e imprime a média retornada pela função.
Exemplo Entrada
5
6.4
6.0
9.2
3.7
5.9
Saída Esperada:
7.2*/
#include <stdio.h>
#include <string.h>
float media(float somanota, float nnotas){
  return somanota/nnotas;
}
int main(){
  float notas, naprove,notasaprove;
  int nalunos;
  scanf("%d", &nalunos);
  for(int i=0; i<nalunos; i++){
    scanf("%f", &notas);
    if(notas >= 6.0){
      naprove++;
      notasaprove += notas;
    }
  }
  printf("%.1f\n", media(notasaprove, naprove));
}