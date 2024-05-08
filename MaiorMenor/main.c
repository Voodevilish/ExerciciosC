#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, maior, menor, soma, buffer;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &buffer);

        if (i == 0)
        {
            maior = buffer;
            menor = buffer;
        }
        else
        {
            if (buffer > maior)
            {
                maior = buffer;
            }

            if (buffer < menor)
            {
                menor = buffer;
            }
        }
    }

    soma = menor + maior;

    printf("Menor valor: %d", menor);
    printf("\nMaior valor: %d", maior);
    printf("\nA soma dos valor eh igual a %d", soma);
}