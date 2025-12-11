#include <stdio.h>
#include <locale.h>

int main()
{
    float notas[3];
    float soma = 0.0;
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 3; i++)
    {
        printf("Nota: ");
        scanf("%d", &notas[i]);

        soma += notas[i];
    }

    float media = soma / 3;

    printf("Média: %d\n", media);

    return 0;
}
