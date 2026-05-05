#include <stdio.h>

int main()
{

    // variavel
    int temperatura;

    // dados
    printf("Qual a temperatura? \n");
    scanf("%d", &temperatura);

    // operacao
    if (temperatura < 15)
    {
        printf("Frio!\n");
    }
    else if (temperatura > 15 && temperatura < 25)
    {
        printf("agradavel\n");
    }
    else
    {
        printf("Quente\n");
    }

    return 0;
}