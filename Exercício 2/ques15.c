#include <stdio.h>

int main()
{

    // variaveis
    float preco;

    // dados
    printf("Qual preco da compra? \n");
    scanf("%f", &preco);

    // operacao
    if (preco >= 100)
    {
        printf("Desconto aplicado. \n");
    }
    else
    {
        printf("Sem desconto. \n");
    }

    return 0;
}