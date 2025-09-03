#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade = 0;
    int categoria = 0;

    printf("Idade? ");
    scanf("%d", &idade);

    if (idade <= 13 ) 
    {
        categoria = infantil;
    } else if (idade <= 17) 
    {
        categoria = juvenil;
    } else if (idade > 17)
    {
        categoria = senior;
    }

    printf("A categoria é: %d\n", categoria);

    return 0;
}
