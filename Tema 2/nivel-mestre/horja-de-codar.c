#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main (){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparação;


    //Gerar número aleatório
    srand(time(0));
    numeroComputador = rand()%100+1; // número entre 1 e 100

    //inicio do jogo
    printf("Bem-Vindo ao jogo maior, menor ou igual! \n");
    printf("você deve escolher um número e o tipo de comparação.\n");
    printf("M- Maior\n");
    printf("N- Menor\n");
    printf("I- Igual\n");


    printf("Escolha a comparação: \n");
    scanf("%c", &tipoComparação);

    printf("Digite seu número (Entre 1 e 100): \n");
    scanf("%d", &numeroJogador);

    //exibir o número do computador
    
    switch (tipoComparação)
    {
    case 'M':
    case 'm':
    printf("Você escolheu a opção Maior.\n");
        resultado = numeroJogador > numeroComputador ? 1:0;

        printf("\nO número do computador é: %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
        break;

    case 'N':
    case 'n':
    printf("\nVocê escolheu a opção Menor.\n");
        resultado = numeroJogador < numeroComputador ? 1:0;

        printf("\nO número do computador é: %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
    break;

    case 'I':
    case 'i':
    printf("\nVocê escolheu a opção Igual.\n");
        resultado = numeroJogador == numeroComputador ? 1:0;
        
        printf("\nO número do computador é: %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
    break;
    
    default:
    printf("\nOpção de jogo inválida.\n");
        break;
    }

    if (resultado==1)
    {
        printf("\nVocê Venceu!\n");
    } else{
        printf("\nVocê Perdeu!\n");
    }
    

}