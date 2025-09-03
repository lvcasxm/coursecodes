#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n = 0;
    int paridade = 0;

    printf("Valor do número? ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        paridade = par;
    } else
    {
        paridade = impar;
    }

    printf("O número é %d\n", paridade);

    return 0;
}