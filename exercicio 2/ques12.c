#include <stdio.h>

int main()
{

    // variaveis
    float altura;

    // dados
    printf("Qual sua Altura? \n");
    scanf("%f", &altura);

    // operacao
    if (altura >= 1.71)
    {
        printf("Pessoa alta. \n");
    }
    else
    {
        printf("Pessoa baixa. \n");
    }

    return 0;
}