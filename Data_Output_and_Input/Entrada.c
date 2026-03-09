# include <stdio.h>
# include <locale.h>
# include <string.h>

int main() {

    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Sergio";

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade Ã©: %d\n", idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura Ã©: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    /*O nome tem uma limitaÃ§Ã£o quando Ã© composto, o scanf tambÃ©m reconhece o caractere de espaÃ§o como finalizaÃ§Ã£o
    Assim como enter entÃ£o se uma string possui espaÃ§o, o nome apÃ³s o espaÃ§o Ã© ignorado.
    Se o usuÃ¡rio digitar "JoÃ£o da Silva", apenas "JoÃ£o" serÃ¡ armazenado em nome.
    "da Silva" serÃ¡ deixado no buffer de entrada e poderÃ¡ causar problemas em leituras subsequentes.*/
    printf("O nome Ã©: %s\n", nome);

    printf("Digite a opÃ§Ã£o: ");
    scanf(" %c", &opcao);
    /*Outra limitaÃ§Ã£o da funÃ§Ã£o scanf Ã© que o botÃ£o de enter tambÃ©m representa um caractere logo
    ao dÃ¡ enter em um input em seguido de um um char ele vai considerar o valor enter como armazenado na variavel
    a forma de contorna isso Ã© digita um espaÃ§o antes do percentual*/
    printf("A opcao Ã©: %c\n", opcao);


    // Lendo nome com espaÃ§os
    char name[50];

    printf("Digite seu nome completo: "); // fgets inclui o '\n' na string, entÃ£o podemos removÃª-lo se necessÃ¡rio
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Nome completo digitado %s\n", name);

    // fgets recebe trÃªs argumentos:
    // O array onde a string serÃ¡ armazenada.
    // O tamanho mÃ¡ximo da string (incluindo o \n e o \0).
    // O fluxo de entrada (geralmente stdin para a entrada padrÃ£o do teclado).

}