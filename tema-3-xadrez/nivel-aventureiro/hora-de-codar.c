#include <stdio.h>

int main() {

    int i, j;
    char letra;

    for (i = 0; i <=5; i++)
    {
        letra = 'A';

        for (int j = 0; j <=i; j++)
        {
        printf("%c ", letra);
        letra++;
        }

        printf("\n");

    }
    

  return 0;
}