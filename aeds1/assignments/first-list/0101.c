#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a = 0, b = 0;
    int soma = 0;

    printf("Número 1: ");
    scanf("%d", &a);

    printf("Número 2: ");
    scanf("%d", &b);

    soma = a + b;

    if (soma >= 10)
    {
        soma += 5;
    } else 
    {
        soma += 7;
    }

    printf("O resultado é: %d", soma);

    return 0;
}
