#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    do
    {
        printf("Digite um numero: ")
        scanf("%d", &n);
        printf("\nEste numero eh impar. \nTente novamente.\n");
    }
    while (n % 2 != 0);
    
}