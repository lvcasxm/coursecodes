#include <stdio.h>
#include <locale.h>

float average(int length, int array[]);

int main()
{
    int N = 0;
    setlocale(LC_ALL, "Portuguese");

    printf("Quantas notas você deseja inserir? ");
    scanf("%d", &N);

    int notas[N];

    for (int i = 0; i < N; i++)
    {
        printf("Nota: ");
        scanf("%d", &notas[i]);
    }

float final_average = average(N, notas);

printf("A média final é: %.2f\n", final_average);

return 0;
}

float average(int length, int array[])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum / (float) length;
}
