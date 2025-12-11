#include <stdio.h>
#include <locale.h>

int main()
{
    int vetor[6];
    int x = 0;
    int encontrado = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("X: ");
    scanf("%d", &x);

    for (int i = 0; i < 6; i++)
    {
    printf("Insira um número: ");
    scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (vetor[i] == x)
        {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
    {
        printf("X está no array\n");
    } else
    {
        printf("X não está no array\n");
    }

    return 0;
}
