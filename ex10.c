/*
Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse
nadador de acordo com a tabela abaixo.
Idade (Anos) Categoria
5 a 7 F
8 a 10 E
11 a 13 D
14 a 15 C
16 a 17 B
Acima de 18 A
Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela função.
Exemplo Entrada
5
41
17
9
15
11
Saída Esperada:
A
B
E
C
D*/
#include <stdio.h>
#include <string.h>

char* categoria_nadador(int idade){
    if(idade >= 5 && idade <= 7) return "F";
    if(idade >= 8 && idade <= 10) return "E";
    if(idade >= 11 && idade <= 13) return "D";
    if(idade >= 14 && idade <= 15) return "C";
    if(idade >= 16 && idade <= 17) return "B";
    else return "A";
}
int main(){
  int idade,n;
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
  scanf("%d", &idade);
  printf("%s\n", categoria_nadador(idade));
  }
  return 0;
}