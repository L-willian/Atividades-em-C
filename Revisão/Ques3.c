#include <stdio.h>

int main()
{
    // Variaveis:
    int num1;

    // Entrada de dados:
    printf("Digite seu numero inteiro: \n");
    scanf("%d", &num1);

    //operacao:
    if (num1 % 2)
    {
        printf("O numero %d eh impar!\n", num1);
    }
    else
    {
        printf("O numero %d eh par!\n", num1);
    }
    
    return 0;
}