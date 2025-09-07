#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 0;
    int i = 0;

    do
    {
        printf("Números: ");
        scanf("%d", &x);

        if (x != 0 && x % 3 == 0)
        {
            i++;
        }   
    } while (x != 0);

    printf("%d\n", i);

    return 0;
}