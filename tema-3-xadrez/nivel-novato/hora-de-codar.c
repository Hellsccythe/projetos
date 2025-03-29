#include <stdio.h>

int main (){

    int numero;
    printf("Digite qual tabuada deseja fazer: \n");
    scanf("%d", &numero);


for (int  i = 0; i <= 10; i++)
{

    int soma = numero*i;
    printf("%d x %d = %d \n",numero, i, soma);
}


}