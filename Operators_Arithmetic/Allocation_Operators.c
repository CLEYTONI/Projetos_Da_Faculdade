# include <stdio.h>;


int main() {

    /*
        Atribução Simples(=)
        Atribuição com Soma(+=)
        Atribuição com Subtração(-=)
        Atribuição com Multiplicação (*=)
        Atribuição com Divisão (/=)
    
    */


    int number1 = 10, number2, resultado;

    resultado = 10;

    printf("Resultado: %d\n", resultado);

    // resultado = reaultado + 20
    resultado += 20;
    printf("Resultado: %d\n", resultado);

    // Resultado = resultado - numero1;
    resultado -= number1;

    printf("Reaultado: %d\n", resultado);

    // resultafdo = resultado * 5;
    resultado *= 5;
    printf("Reaultado: %d\n", resultado);

    // resultado = resultado / 2;
    resultado /= 2;
    printf("Reaultado: %d\n", resultado);
}