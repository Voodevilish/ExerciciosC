#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;

    printf("Por favor, digite um numero: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("O numero %d eh par.", n);
    }
    else
    {
        printf("O numero %d eh impar.", n);
    }
}