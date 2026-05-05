#include <stdio.h>

int main()
{

    // variaveis
    float valorcheque;
    float imposto;

    // coleta de dados
    printf("Qual o valor do seu cheque? \n");
    scanf("%f", &valorcheque);

    // operacao
    imposto = valorcheque * 3 / 10;

    // resultado
    printf("Valor do desconto: %.2f \n", imposto);

    return 0;
}