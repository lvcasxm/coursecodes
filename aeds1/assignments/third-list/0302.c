#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 0;
    int i = 0;

    printf("X: ");
    scanf("%d", &x);

    while (i < x)
    {
        i++;
        printf("%d\n", i);

        if (i == x)
        {
            break;
        }
    }

    return 0;
}