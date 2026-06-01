#include <stdio.h>
#include <stdlib.h>

int main()
{

    // variaveis
    int num1;

    // entrada de dados
    printf("Digite um numero inteiro: \n");
    scanf("%d", &num1);

    // processamento e saida de dados
    abs(num1);
    printf("O valor absoluto do numero digitado e:\n%d \n", abs(num1));

    return 0;
}