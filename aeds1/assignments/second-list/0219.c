#include <stdio.h>
#include <locale.h>

int main()
{
    int n1 = 0;
    int n2 = 0;
    int soma = 0;

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if (soma >= 10)
    {
        soma += 5;
    } else 
    {
        soma += 7;
    }

    printf("A soma é: %d\n" soma);

    return 0;
}