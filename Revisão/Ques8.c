#include <stdio.h>

int main()
{

    // Variaveis
    int num1;
    int resultado;

    // Entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    // Operacao

    resultado = num1;
    for (int i = 0; i < 11; i = 1 + i)
    {
        resultado = resultado * 5;
    }
    resultado = resultado / num1;
    printf("O resultado da operacao eh:\n%d\n", resultado);

    return 0;
}