#include <stdio.h>

int main()
{

    // variaveis
    int idade;

    // coleta de dados
    printf("Qual sua idade ? \n");
    scanf("%d", &idade);

    // operacao
    if (idade >= 16)
    {
        printf("Voce pode votar. \n");
    }
    else
    {
        printf("Voce nao pode votar. \n");
    }
    return 0;
}