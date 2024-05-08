#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    printf("Digite o primeiroo numero: ");
    scanf("%d", &i);
    printf("Digite o segundo numero: ");
    scanf("%d", &j);
    printf("A soma dos numeros %d e %d eh igual a %d.", i, j, i+j);
}