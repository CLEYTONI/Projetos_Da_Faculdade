# include <stdio.h>

int main() {
    
    int idade, matricula;
    float altura;
    char aluno[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu nome: ");
    scanf("%s", &aluno);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);


    printf("Nome do aluno: %s - Matrícula: %d\n", aluno, matricula);
    printf("Idade: %d - Altura: %f\n", idade, altura);

    return 0;

}