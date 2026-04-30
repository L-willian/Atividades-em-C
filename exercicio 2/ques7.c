#include <stdio.h>

int main()
{

    // variaveis
    int temperatura;

    // coleta de dados
    printf("Qual a temperatura? \n");
    scanf("%d", &temperatura);

    // operacao
    if (temperatura <= 15)
    {
        printf("Esta frio. \n");
    }
    else
    {
        printf("Esta quente. \n");
    }
    return 0;
}