#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double distancia = 0;
    double combustivel = 0;
    int consumo = 0;

    printf("Distância percorrida: ");
    scanf("%lf", &distancia);

    printf("Combustível gasto: ");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("O consumo do carro é %.2lfkm/l\n", consumo);

    return 0;
}