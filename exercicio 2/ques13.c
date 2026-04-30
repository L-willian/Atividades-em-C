#include <stdio.h>

int main()
{

    // variaveis
    float numero;

    // dados
    printf("Qual o numero? \n");
    scanf("%f", &numero);

    // operacao
    if (numero >= 50)
    {
        printf("Maior ou igual a 50  \n");
    }
    else
    {
        printf("Menor que 50 \n");
    }

    return 0;
}