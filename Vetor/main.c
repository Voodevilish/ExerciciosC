#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetA[10], vetB[10], i, num;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &num);

        vetA[i] = num;

        if (num % 2 == 0)
        {
            vetB[i] = num * 5;
        }
        else
        {
            vetB[i] = num + 5;
        }
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("A%d[%d]\n", i, vetA[i]);
        printf("B%d[%d]\n\n", i, vetB[i]);
    }
}