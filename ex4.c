/*escreva um procedimento que recebe 3 valores reais X, Y e Z e que verifique se esses valores podem
ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o tipo de triângulo
formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja
satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento
dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando
as seguintes definições:
• Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
• Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.
• Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
Faça um programa que leia um número indeterminado (até lado negativo) de triângulos (valores
dos 3 lados) e para cada triângulo, acione o procedimento.
Exemplo Entrada
51 52 51
37 48 37
91 23 67
8 4 8
80 80 80
-1 -1 -1
Saída Esperada:
TRIANGULO ISOSCELES
TRIANGULO ISOSCELES
NÃO TRIANGULO
TRIANGULO ISOSCELES
TRIANGULO EQUILATERO
*/
#include <stdio.h>
#include <string.h>
int main(){
int ladoa,ladob,ladoc,somaa,somab,somac;
scanf("%d%d%d",&ladoa,&ladob,&ladoc);
while (ladoa>0 || ladob>0 || ladoc>0)
{
  somaa=ladoc+ladob;
  somab=ladoa+ladoc;
  somac=ladoa+ladob;
  if(ladoa<somaa && ladob<somab && ladoc<somac){
  if (ladoa>0 && ladob>0 && ladoc>0)
  {
    if (ladoa==ladob && ladoa==ladoc)
    {
      printf("TRIANGULO EQUILATERO\n");
    }
    else if (ladoa==ladob || ladoa==ladoc || ladob==ladoc)
    {
      printf("TRIANGULO ISOSCELES\n");
    }
    else
    {
      printf("TRIANGULO ESCALENO\n");
    }
  }
  }
  else
  {
    printf("NÃO TRIANGULO\n");
  }
  scanf("%d%d%d",&ladoa,&ladob,&ladoc);
}
return 0;
}