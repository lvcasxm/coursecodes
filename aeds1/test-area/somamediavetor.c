#include <stdio.h>
#include <locale.h>

int main()
{
    int vetor[6];
    int soma = 0, media = 0;
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 6; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &vetor[i]);

        soma += vetor[i];
    }

    media = soma / 6;

    printf("A soma dos valores é: %d\n", soma);
    printf("A média dos valores é: %d\n", media);
    return 0;
}
