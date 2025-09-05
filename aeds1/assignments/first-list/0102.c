#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ano_atual = 0;
    int ano_pessoa = 0;
    int aprovacao = 0;
    char aniversario;

    printf("Qual o ano atual? ");
    scanf("%d", &ano_atual);

    printf("Você nasceu em qual ano? ");
    scanf("%d", &ano_pessoa);

    printf("Você já fez aniversário esse ano? (S/N): ");
    scanf(" %c", &aniversario);

    aprovacao = ano_atual - ano_pessoa;

    if (aprovacao == 18 && aniversario == 'N')
    {
        printf("Não tem idade pra tirar carteira!\n");
    } else if(aprovacao >= 18)
    {
        printf("Tem idade pra tirar carteira!\n");
    } else 
    {
        printf("Não tem idade pra tirar carteira!\n");
    }

    return 0;
}