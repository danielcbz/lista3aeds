/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = 2
4 + 5
5 + 10
6 + 17
7 + 26
8 + ... + (n2 + 1)
(n + 3)
Faça um programa que leia N e imprima o valor retornado pela função.
Exemplo Entrada
3
Saída Esperada:
3.166667
*/

#include <stdio.h>

double calcular_S(int n) {
    double S = 0.0;
    for (int i = 1; i <= n; i++) {
        double numerador = i * 2 + 1;
        double denominador = i + 3;
        S += numerador / denominador;
    }
    return S;
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    double resultado = calcular_S(n);
    printf("%.6f\n", resultado);
    
    return 0;
}
