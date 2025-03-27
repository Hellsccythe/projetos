#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", idade);

    if (idade>60){
        printf("Você é um idoso!");
    } else if (idade <=60 && idade>=18){
        printf("você é um adulto!");
    } else {
        printf("você é uma cirança!");
    }
    
return 0;
}