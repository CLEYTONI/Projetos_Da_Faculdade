# include <stdio.h>;

int main() {

    /*
        Incremento (++)
        Pré-Incremento ++a
        Pós-Incremento a++
        Decremento (--)
        Pré-Decremento --a
        Pós-Descremento a--
    */

    int number1 = 1, resultado;


    printf("Antes incremento: %d\n", number1);

    // number1 = number1 + 1
    // number1 += 1;
    // number1++;
    // Pós-Incremento;
    // resultado = number1;
    // number1++
    resultado = number1++;
    // printf("Após incremento: %d\n", number1);
    printf("Após Pós-incremento - Numero1: %d - Resultado: %d\n", number1, resultado);
    
    resultado = ++number1;
    printf("Após Pré-incremento - Numero1: %d - Resultado: %d\n", number1, resultado);
    
    
    // number1 = number1 - 1;
    // number1 -= 1;
    //number1--;
    //printf("Após incremento: %d\n", number1);

    resultado = number1--;
    printf("Após Pós-Decremento - Numero1: %d - Resultado: %d\n", number1, resultado);

    resultado = --number1;
    printf("Após Pré-Decremento - Numero1: %d - Resultado: %d\n", number1, resultado);

}