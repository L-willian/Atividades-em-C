#include <stdio.h>

int main()
{
    // Variaveis:
    int numero;
    int pares;
    int impas;
    int i;

    printf("Digite 5 números: \n");

    // coletando dados na primeiro momento:
    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        pares = 1;
        impas = 0;
    }
    else
    {
        pares = 0;
        impas = 1;
    }

    // Operacao e coletando dados:
    for (i = 2; i <= 5; i = i + 1)
    {
        printf("Digite o proximo numero: \n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares = pares + 1;
        }
        else
        {
            impas = impas + 1;
        }
    }

    printf("Quantidade de numeros Pares: %d\n", pares);
    printf("Quantidade de numeros Impas: %d\n", impas);

    return 0;
}