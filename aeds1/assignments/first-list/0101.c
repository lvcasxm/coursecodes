#include <stdio.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int x = 0;
    int y = 0;
    int sum = 0;

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    sum = x + y;

    if (sum >= 10)
    {
        sum += 5;
    } else
    {
        sum += 7;
    }

    printf("%d\n", sum);

    return 0;
}