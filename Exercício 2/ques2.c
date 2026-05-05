#include <stdio.h>

int main()
{

    // variaveis
    int numero;

    // coleta de dados
    printf("Qual seu numero? \n");
    scanf("%d", &numero);

    // operacao
    if (numero >= 100)
    {
        printf("Seu numero eh maior que 100 \n");
    }
    else
    {
        printf("seu numero eh menor que 100 \n");
    }

    return 0;
}