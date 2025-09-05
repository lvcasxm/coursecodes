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
        x++;

        if (x % 3 == 0)
        {
            i + 1;
            i++;
        }   
    } while (x != 0)

    return 0;
}