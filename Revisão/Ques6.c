#include <stdio.h>

int main()
{

    // variaveis
    int num1;

    // entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    // operacao
    if (num1 % 3 == 0)
    {
        printf("O numero %d eh divisivel por 3.\n", num1);
    }
    else
    {
        printf("O numero %d nao eh divisivel por 3.\n", num1);
    }

    if (num1 % 5 == 0)
    {
        printf("O numero %d eh divisivel por 5.\n", num1);
    }
    else
    {
        printf("O numero %d nao eh divisivel por 5.\n", num1);
    }
    if (num1 % 7 == 0)
    {
        printf("O numero %d eh divisivel por 7.\n", num1);
    }
    else
    {
        printf("O numero %d nao eh divisivel por 7.\n", num1);
    }
    if (num1 % 9 == 0)
    {
        printf("O numero %d eh divisivel por 9.\n", num1);
    }
    else
    {
        printf("O numero %d nao eh divisivel por 9.\n", num1);
    }

    return 0;
}