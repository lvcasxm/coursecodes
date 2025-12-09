#include <stdio.h>
#include <locale.h>

int main()
{
    int matriz[10][3];
    int j, int k;
    int media_aluno = 0;
    int media_turma = 0;
    setlocale(LC_ALL, "Portuguese");

    for (j = 0; j < 10; j++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("Nota do aluno: ");
            scanf("&d", &matriz[i]);
        }

        media_turma += matriz[i];
    }

    media_aluno = matriz[i] / i;

    return 0;
}
