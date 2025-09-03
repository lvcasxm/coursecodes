#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Valor de n: ");
    scanf("%d", &n);

    if (n >= 100 && n <= 200)
    {
        printf("Ele está no intervalo.\n");
    } else
    {
        printf("Ele não está no intervalo.\n");
    }

    return 0;
}