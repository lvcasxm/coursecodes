#include <stdio.h
#include <locale.h>

int menu(void);
int operations(int menu, int x, int y);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    return 0;
}

int menu(void)
{

    int menu = 0;

    do
    {
       printf("1. soma\n"
              "2. subtração\n"
              "3. multiplicação\n"
              "4. divisão\n"
              "5. módulo\n");
       printf("Escolha: ");
       scanf("%d", &menu);
    } while (menu < 1 || menu > 5);
}

int switch(int menu, int x, int y)
{
    switch(menu)
    {
        case 1:
        int sum = 0;

        printf("Valor de x: ");
        scanf("%d", &x);

        printf("Valor de y: ");
        scanf("%d", &y);

        sum = x + y;

        printf("Soma é: %d\n", sum);
        break;

        case 2:

        int x = 0;
    }

}