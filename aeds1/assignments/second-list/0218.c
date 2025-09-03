#include <stdio.h>
#include <locale.h>

int main()
{
    int dia;

    printf("Escreva um número entre 1 e 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
        case 1:
        printf("É domingo.\n");
        break;

        case 2:
        printf("É segunda.\n");
        break;

        case 3: 
        printf("É terça.\n");
        break;

        case 4:
        printf("É quarta.\n");
        break;

        case 5:
        printf("É quinta.\n");
        break;

        case 6:
        printf("É sexta.\n");
        break;

        case 7:

        printf("É sábado.\n");
        break;

        default:
        printf("Dia inválido!\n");
        break;
    }

    return 0;
}