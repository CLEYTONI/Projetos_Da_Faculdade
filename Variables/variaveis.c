# include <stdio.h>

int main() {
    // Seria como caixas para armazernar informação futuras
    // Quando iniciado um variavel é um espaço na memoria reservado
    // Variaveis deve ter nome significativo
    // Variaveis não podem comecçar com número
    // A liguagem é case sensitive ou seja diferencia minuscuas e maiusculas
    // Não épossivel usar palavras reservadas ou seja palavras qque já são usadas no C
    
    
    // Declaração de variavel
    int idade; // Int é valor inteiro 123456789
    int Idade; // diferente de idade com minusculo
    int quantidade;
    float altura; // Float é para número decimal
    double peso; // Double é para número decimais porém de maior valor
    char letra; // Armazerna caracteres desde letras e caracteres especiais
    char nome[20] = "sergio"; // Array uma para guarda uma sequencia de caratcres
    // [20] defini a quantidade de valor que será armazenado nesse array
    // Tomar cuidado com buffer overflows (escrever além dos limites do array)
    int _teste; //  Variaveis poem começar com _




    // inicialização de variavel
    idade = 25;
    quantidade = 1;
    altura = 1.75;
    peso = 90.3;
    letra = 'A';
    Idade = 48;
    _teste = 4;
    



    // Reescrevendo o valor da variavel
    quantidade = 10;

}