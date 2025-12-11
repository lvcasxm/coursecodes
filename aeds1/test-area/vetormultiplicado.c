#include <stdio.h>
#include <locale.h>

int main()
{
    int tamanho = 0;
    int multiplicacao = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Qual o tamanho do array? ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &vetor[tamanho]);

        multiplicacao = vetor[i] * 2;
    }

    printf("%d\n", multiplicacao);
    return 0;
}
