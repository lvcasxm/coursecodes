#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double x = 0;
    double y = 0;

    printf("X: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        y = 1;
    } else if (x <= 2)
    {
        y = 2;
    } else if (x <= 3)
    {
        y = pow(x, 2);
    } else
    {
        y = pow(x, 3);
    }

    printf("O valor de y é: %.2flf\n", y)

    return 0;
}