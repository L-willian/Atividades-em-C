#include <stdio.h>

int main()
{

    // variaveis
    int idade;

    // coleta de dados
    printf("Qual sua idade? \n");
    scanf("%d", &idade);

    // operacao
    if (idade >=18)
    {
        printf("Voce eh maior de idade. \n");
    }
    else
    {
        printf("Voce eh menor de idade. \n");
    }
    return 0;
}