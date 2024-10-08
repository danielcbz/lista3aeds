/*
A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre
o salário e número de filhos. Faça um procedimento que leia esses dados para um número não
determinado de pessoas, calcule e exiba a média de salário da população (a condição de parada
deve ser um flag com salário negativo). Faça um programa que acione o procedimento.
Exemplo Entrada
3665.00 4
7870.00 8
33599.00 5
2750.00 9
-1 -1
Saída Esperada:
11971.00
*/
#include <stdio.h>

// Function to calculate the average salary
float media(float total_salario, float total_pessoas) {
    return total_salario / total_pessoas;
}

int main() {
    float nsalario = 0, npessoas = 0;  // Initialize the total salary and number of people
    float salario;
    int nfilhos;

    while (1) {
        scanf("%f", &salario);  // Read the salary
        if (salario < 0) break;  // Stop the loop if the salary is negative (flag)

        scanf("%d", &nfilhos);  // Read the number of children (not used in the average)
        
        nsalario += salario;    // Add the salary to the total salary
        npessoas++;             // Increment the people count
    }

    // Calculate and print the average salary
    if (npessoas > 0) {
        printf("%.2f\n", media(nsalario, npessoas));  // Display result with 2 decimal places
    } else {
        printf("No valid data provided.\n");  // In case no valid salary was entered
    }

    return 0;
}
