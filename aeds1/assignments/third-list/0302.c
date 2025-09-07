#include <stdio.h>
#include <locale.h>

int main()
{
    int i = 0;
    int x = 0;

    printf("X: ");
    scanf("%d", &x);

    while (i < x)
    {
        i++;
        printf("%d\n", i);
    }

    return 0;
}