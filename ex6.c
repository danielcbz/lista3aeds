/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de
S, calculado segundo a fórmula abaixo.
S = 1 + 1
1! + 1
2! + 1
3! + ... + 1
N !
Faça um programa que leia N e imprima o valor retornado pela função.
Exemplo Entrada
14
Saída Esperada:
2.718282*/

#include <stdio.h>

double calcularS(int N) {
    double S = 1.0;
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }
    return S;
}

int main() {
    int N;

    // Lê o valor de N
    scanf("%d", &N);

    // Calcula o valor de S
    double resultado = calcularS(N);

    // Exibe o resultado com 6 casas decimais
    printf("%f\n", resultado);

    return 0;
}
