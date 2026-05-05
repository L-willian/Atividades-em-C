#include <stdio.h>

int main()
{
    // variaveis
    int num1;
    int num2;
    int resultado;
    char operacao;

    // coleta de dados
    printf("Digite a operacao (+, -, *, /): \n");
    scanf(" %c", &operacao);

    printf("Digite dois numeros: \n");
    scanf("%d %d", &num1, &num2);

    // operacao
    switch (operacao)
    {
    case '+':
        resultado = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, resultado);
        break;
    case '-':
        resultado = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, resultado);
        break;
    case '/':
        resultado = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, resultado);
        break;
    case '*':
        resultado = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, resultado);
        break;

    default:
        break;
        printf("Operacao invalida!");
    }

    return 0;
}