#include <stdio.h>

int main()
{
    // Variaveis:
    int numero;
    int positivos;
    int negativoss;
    int i;

    printf("Digite 5 números: \n");

    // coletando dados na primeiro momento:
    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero);

    if (numero > 0)
    {
        positivos = 1;
        negativoss =0;
    }
    if (numero < 0)
    {
        negativoss = 1;
        positivos= 0;
    }

    // Operacao e coletando dados:
    for (i = 2; i <= 5; i = i + 1)
    {
        printf("Digite o proximo numero: \n");
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivos = positivos + 1;
        }
        else
        {
            negativoss = negativoss + 1;
        }
    }

    printf("Quantidade de numeros Positivos: %d\n", positivos);
    printf("Quantidade de numeros Negativos: %d\n", negativoss);

    return 0;
}