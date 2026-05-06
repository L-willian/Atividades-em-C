#include <stdio.h>

int main()
{

    // variáveis
    int num1;
    int soma = 0;

    // entrada de dados e operação
    while (num1 != 0)
    {
        printf("Digite um número inteiro: \n");
        scanf("%d", &num1);

        soma = soma + num1;
    }

    // resultado
    printf("A soma dos números digitados é: %d \n", soma);
    return 0;
}