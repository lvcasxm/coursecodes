#include <stdio.h>

int main()
{
    int x = 0;
    int fac = 1;
    
    printf("X: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        fac *= i;
    }

    printf("%d\n", fac);

    return 0;
}