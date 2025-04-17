#include <stdio.h>

int main(){
    
    //Declarando variáveis.
    int idade = 25;
    float altura = 1.70;
    char opcao = 'S';
    char nome[20] = "rafael";

    //Imprimindo valores.
    //printf("Idade de %s é: %d\n",nome,idade);
    printf("A idade é: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura é: %.2f\n",altura );
    printf("A opção é: %c",opcao);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);

    %d: Imprime um número inteiro no formato decimal. 
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão. 
    %e: Imprime um número de ponto flutuante na notação científica. 
    %c: Imprime um único caractere. 
    %s: Imprime uma cadeia (string) de caracteres. 

    Limitando casas decimais, ex: printf("%.2f",altura); / Aparecerá: 1.70. 

    */

}