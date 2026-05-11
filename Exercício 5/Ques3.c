#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int multiplicacao(int a, int b)
{
    return a * b;
}

int main()
{
    int opcao;
    int num1, num2;
    int resultado;

    opcao = 0;

    while (opcao != 3)
    {

        scanf("%d", &opcao);

        if (opcao == 1)
        {
            scanf("%d %d", &num1, &num2);

            resultado = soma(num1, num2);

            printf("Resultado da soma = %d\n", resultado);
        }
        else if (opcao == 2)
        {
            scanf("%d %d", &num1, &num2);

            resultado = multiplicacao(num1, num2);

            printf("Resultado da multiplicacao = %d\n", resultado);
        }
        else if (opcao == 3)
        {
            printf("Programa encerrado\n");
        }
    }

    return 0;
}