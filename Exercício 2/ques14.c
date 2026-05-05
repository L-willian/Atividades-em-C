#include <stdio.h>

int main()
{

    // variaveis
    int faltas;

    // dados
    printf("Quais suas faltas? \n");
    scanf("%d", &faltas);

    // operacao
    if (faltas >= 15)
    {
        printf("Reprovado por falta. \n");
    }
    else
    {
        printf("Frequencia suficiente. \n");
    }

    return 0;
}