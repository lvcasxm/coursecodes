#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int r, int x = 1, int y = 12, int z = 0;

    while (z < 5)
    {
        r = y % 3;

        if (r = 0)
        {
            x += 2;
        }

        y += 5;
        z += 1;
    }

    return 0;
}