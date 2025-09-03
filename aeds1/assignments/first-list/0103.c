#include <stdio.h>
#include <locale.h>

double get_positive_grade(void);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double nota = 0;

    nota = get_positive_grade();

    if (nota >= 8 && nota <= 10)
    {
        printf("Ótimo.\n");
    } else if (nota >= 7 && nota < 8)
    {
        printf("Bom.\n");
    } else if (nota >= 5 && nota < 7)
    {
        printf("Regular.\n");
    } else
    {
        printf("Insatisfatório");
    }

    return 0;
}

double get_positive_grade(void)
{
   double nota = -1;

    do
    {
        printf("Nota? ");
        scanf("%lf", &nota);
    } while (n < 0);

    return nota;
}

