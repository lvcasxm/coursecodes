#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double salario = 0;
    double emprestimo = 0;
    int concessao = 0;

    printf("Sálario atual: ");
    scanf("%lf", &salario);

    printf("Quanto você quer de empréstimo? ");
    scanf("%lf", &emprestimo);

    if (emprestimo > (salario * 0.20))
    {
        printf("Empréstimo negado.\n");
    } else
    {
        printf("Empréstimo concedido.\n");
    }

    return 0;
}