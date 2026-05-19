#include <stdio.h>

int main()
{
    // variaveis
    int num1;
    int *p1;

    p1 = &num1;

    // entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    // operacao5
    *p1 = *p1 * 2;

    // saida de dados

    printf("%d\n", *p1);

    return 0;
}