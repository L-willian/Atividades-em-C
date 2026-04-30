#include <stdio.h>

int main()
{

    // variaveis
    float valorCompra;

    // dados
    printf("Qual o valor de compra? \n");
    scanf("%f", &valorCompra);

    // operacao
    if (valorCompra >= 500)
    {
        printf("20%% \n");
    }
    else if (valorCompra >= 200)
    {
        printf("10%% \n");
    }
    else
    {
        printf("5%% \n");
    }

    return 0;
}