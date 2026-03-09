# include <stdio.h>

int main() {

// Operador de soma
    int numero1, numero2;

    int sum, subtraction, mutiplication, division;

    printf("Entre com o número 1: ");
    scanf("%d", &numero1);

    printf("Entre com o número 2: ");
    scanf("%d", &numero2);

    // Operação de soma
    sum = numero1 + numero2;

    // Operação de subtração
    subtraction = numero1 - numero2;

    // Operação de multiplicação
    mutiplication = numero1 * numero2;

    // Operação de divisão
    division = numero1 / numero2;


    printf("A soma é : %d\n", sum);
    printf("A subtração é : %d\n", subtraction);
    printf("A multiplicação é : %d\n", mutiplication);
    printf("A divisão é : %d\n", division);
}