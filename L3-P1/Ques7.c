#include <stdio.h>

int main()
{
    // Variaveis:
    int num1;
    int num2;
    int fiboProxima;
    int fiboAnterior;
    int fiboAtual;

    // Coleta de dados:
    printf("Qual seu primeiro numero? \n");
    scanf("%d", &num1);
    printf("Qual seu segundo numero? \n");
    scanf("%d", &num2);

    // Operacao:
    if (num1 > num2)
    {
        printf("Erro!\n");
    }
    else
    {
        for (int i = 0; i <= num2; i = i + 1)
        {
            if (i == 0)
            {
                fiboAnterior = 0;
                fiboAtual = 1;
            }

            if (i >= num1 && i <= num2)
            {
                printf("%d \n", fiboAnterior);
            }

            fiboProxima = fiboAnterior + fiboAtual;
            fiboAnterior = fiboAtual;
            fiboAtual = fiboProxima;
        }
    }

    return 0;
}