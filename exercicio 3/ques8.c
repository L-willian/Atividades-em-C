#include <stdio.h>

int main()
{

    // variaveis
    int pedido;

    // coletando dados
    printf("Qual seu pedido? \nDigite 1 para hanburge, 2 para Pizza, 3 para salada e 4 para refrigerante.\n");
    scanf("%d", &pedido);

    // operacao
    if (pedido == 1)
    {
        printf("Seu pedido foi um hamburgue!\n");
    }
     else if (pedido==2)
    {
        printf("Seu pidido foi uma Pizza!\n");
    }
    else if (pedido == 3)
    {
        printf("Seu pedido foi uma salada!\n");
    }
    else if (pedido == 4)
    {
        printf("Seu pedido foi um refrigerante!\n");
    }
    else
    {
        printf("Seu pedido nao foi resistrado!\n");
    }

    return 0;
}