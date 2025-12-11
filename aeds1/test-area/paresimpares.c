#include <stdio.h>
#include <locale.h>

int main()
{
    int vetor[8];
    int pares = 0, impares = 0;
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares++;
        } else
        {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    return 0;
}
