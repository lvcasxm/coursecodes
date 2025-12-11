#include <stdio.h>
#include <locale.h>

int main()
{
    int vetor[5];
    int soma = 0;
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];
    }

    printf("Soma: %d\n", soma);

    return 0;
}
