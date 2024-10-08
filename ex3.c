#include <stdio.h>

// Procedimento que ordena três valores e os exibe em ordem crescente
void exibir_ordenado(int a, int b, int c) {
    int temp;
    // Ordena os valores em ordem crescente usando a técnica de troca
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    // Exibe os valores ordenados
    printf("%d %d %d\n", a, b, c);
}

int main() {
    int N;
    scanf("%d", &N);  // Lê o número de conjuntos de valores
    
    // Loop para processar cada conjunto de três valores
    for (int i = 0; i < N; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);  // Lê os três valores
        exibir_ordenado(a, b, c);  // Chama o procedimento para exibir os valores ordenados
    }

    return 0;
}
