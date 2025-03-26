#include <stdio.h>

int main (){
    float nota1, nota2, nota3;
    float media;

    printf("***Calculo de Média*** \n");

    printf("Digite a sua Primeira nota: \n");
    scanf(" %f", &nota1);

    printf("Digite a sua Segunda nota: \n");
    scanf(" %f", &nota2);

    printf("Digite a sua Terceira nota: \n");
    scanf(" %f", &nota3);

    media = (nota1+nota2+nota3) / 3;

    printf("A média é: %.2f", media);

    return 0;
}