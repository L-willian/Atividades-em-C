#include <stdio.h>

int main()
{

    // variaveis
    int nota;

    // coleta de dados
    printf("Qual sua nota? \n");
    scanf("%d", &nota);

    // operacao
    if (nota >= 9)
    {
        printf("A \n");
    }
    else if (nota >= 7)
    {
        printf("B \n");
    }
    else if (nota >= 5)
    {
        printf("C \n");
    }
    else
    {
        printf("D \n");
    }

    return 0;
}