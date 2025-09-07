#include <stdio.h>
#include <math.h>

int main()
{
    double p = 0;
    double  a = 0;
    double imc = 0;

    printf("Peso: ");
    scanf("%lf", &p);

    printf("Altura: ");
    scanf("%lf", &a);

    imc = p / pow(a, 2);

    printf("%lf\n", imc);

    return 0;
}