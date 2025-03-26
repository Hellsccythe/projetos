#include <stdio.h>

int main(){
    //exemplos de funções

    int numero1, numero2;
    int multiplicacao, soma, divisao, subtracao;

    printf("entre com o numero 1: \n");
    scanf(" %d", &numero1 );
    printf("entre com o numero 2: \n");
    scanf("%d", &numero2);

    multiplicacao = numero1 * numero2;
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    divisao = numero1 / numero2;

    printf("A soma e: %d\n", soma);
    printf("A multiplicação e: %d\n", multiplicacao);
    printf("A subtração e: %d\n", subtracao);
    printf("A divisão e: %d\n", divisao);

}