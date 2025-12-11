#include <stdio.h>
#include <locale.h>

int main()
{
    int matriz[2][2];
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Insira um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz: %d\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
