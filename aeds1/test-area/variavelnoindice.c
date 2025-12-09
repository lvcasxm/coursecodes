#include <stdio.h>
#include <locale.h>

int main()
{
    int n = 0;
    int soma = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        printf("Número: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("Soma: %d\n", soma);

    return 0;
}
