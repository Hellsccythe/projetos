#include <stdio.h>

int main() {
    for (int i = 0; i <=10; i++)
    {
        for (int t = 0; t <=10; t++)
        {
            printf("%d X %d = %d\n", i, t, i*t);
        }
        printf("\n");
    }
    

  return 0;
}