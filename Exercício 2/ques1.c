#include <stdio.h>

int main()
{

    // variaveis
    int numero;

    // coleta de dados
    printf("Qual seu numero? \n");
    scanf("%d", &numero);

    // operacao
    if (numero % 5 == 0)
    {
        printf("multiplo de 5 \n");
    }
    else
    {
        printf("Nao eh multiplo de 5 \n");
    }

    return 0;
}