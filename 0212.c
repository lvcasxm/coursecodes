#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1 = 0;
    int n2 = 0;
    int maior = 0;

    printf("Valor de n1? ");
    scanf("%d", &n1);

    printf("Valor de n2? ");
    scanf("%d", &n2);

    if (n1 == n2)
    {
        printf("Eles são iguais.\n");
    } else if (n1 > n2)
    {
        maior = n1;
    } else
    {
        maior = n2;
    }

    printf("Maior é: %d", maior);

    return 0;
}