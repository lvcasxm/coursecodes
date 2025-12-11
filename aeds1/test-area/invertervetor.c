#include <stdio.h>
#include <locale.h>

int main()
{
    int vetor[5];
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 5; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
        printf("\n");
    }

    return 0;
}
