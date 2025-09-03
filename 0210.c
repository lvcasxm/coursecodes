#include <stdio.h>
#include <locale.h>

int main()
{
    float precos;
    int folhas;

    printf("Número de folhas: ");
    scanf("%d", &folhas);

    if (folhas < 0)
    {
        printf("Insira um valor maior que 0!");
    }

    if (folhas <= 100)
    {
        precos = folhas * 0.25;
    } else 
    {
        precos = folhas * 0.20;
    }

    printf("Preço final: %.2f", precos);

    return 0;
}