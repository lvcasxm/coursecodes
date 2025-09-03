#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int maior = 0;

    printf("Primeiro número: ");
    scanf("%d", &n1);

    printf("Segundo número: ");
    scanf("%d", &n2);

    printf("Terceiro número: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
}