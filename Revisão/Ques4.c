#include <stdio.h>

int main()
{

    // Variaveis:
    int num1;
    int num2;
    int resultado1;
    int resultado2;

    // Entrada de dados:
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    // operacao:
    resultado1 = (num1 * num1) / 2;
    resultado2 = (num2 * num2) / 2;
    if (resultado1 >= resultado2)
    {
        printf("O primeiro numero eh maior sendo %d.\n", resultado1);
    }
    else
    {
        printf("O segundo numero eh maior sendo %d.\n", resultado2);
    }

    return 0;
}