/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função
deve retornar um valor lógico (true ou false). Faça um programa que lê N números e para cada
um deles exibe uma mensagem informando se ele é positivo ou não, dependendo se foi retornado
verdadeiro ou falso pela função.
Exemplo Entrada
5
13
23
51
0
-4*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool positivo(int n){
  bool result = false;
  if(n>0){
    result = true;
  }
  return result;
}
int main(){
  int n=0, y=0;
  bool result;
  scanf("%d", &y);
  for(int i=0; i<y; i++){
  scanf("%d", &n);
  result = positivo(n);
  if(result ==false){
    printf("NAO\n");
  }
  else{
    printf("SIM\n");
  }
  }
}