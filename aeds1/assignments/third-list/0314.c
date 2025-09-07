#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double salario = 0;
    double media_salario = 0;
    int estudo = 0;
    int media_estudo = 0;
    int pessoas = 0;

    printf("Quantas pessoas foram entrevistadas? ");
    scanf("%d", &pessoas);

    for (int i = 0; i < pessoas; i++)
    {
        printf("Salário: ");
        scanf("%lf", &salario);

        printf("Anos de estudos: ");
        scanf("%d", &estudo);

    }
    
    do
    
        printf("Qual o salário da pessoa? ");
        scanf("%lf", &salario);

        if (salario < 0)
        {
            break;
        }

        media_salario += salario;
        media_estudo += estudo;


        printf("Quantos anos de estudo a pessoa tem? ");
        scanf("%d", &estudo);
    } while (1);
}