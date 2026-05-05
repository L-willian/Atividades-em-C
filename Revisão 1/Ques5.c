#include <stdio.h>

int main()
{

    // Variaveis:
    int num1;
    int resultado;
    int resto;

    // Entrada de dados:
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    // operacao:
    resultado = num1 / 2;
    printf("O resultado da divisao por 2 eh: %d\n", resultado);

    resto = resultado % 2;
    printf("O resto da divisao por 2 eh: %d\n", resto);

    if (resto == 0)
    {
        printf("O resto da divisao final eh 0.\n");
    }
    else
    {
        printf("O resto da divisao final nao eh 0.\n");
    }

    return 0;
}