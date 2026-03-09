# include <stdio.h>
# include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Sergio";

    //printf("A idade do %s é: %d\n", nome, idade); // O \n serve para a quebra de linha
    // printf("A altura é: %f\n", altura);
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n", altura); // Limitando a exibição do número de ponto flutuante a dus casa decimais apenas
    printf("A opcao é: %c\n", opcao);


    /*
        printf("%formato1, %formato2, formato3", variavel1, variavel2, variavel3)

        %d: Imprime um interiro no formato decimal
        %i: Equivalende a %d
        %f: Imprime um número de ponto flutuante no formato padrão
        %e: Imprime um número de ponto flutuante na notação cinetífica
        %c: Imprime um único caractere
        %s: Imprime uma cadeia (string) de caractere

    */



}