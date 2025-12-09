#include <stdio.h>
#include <locale.h>

int main()
{
    int vetor[10];
    int soma = 0;
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("Soma dos números: %d\n", soma);

    return 0;
}
