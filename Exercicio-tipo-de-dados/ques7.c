#include <stdio.h>

int main()
{

    // variaveis
    float valor;
    int horas;
    float valortotal;

    // coleta de dados
    printf("Qual o seu valor recebido por hora? \n");
    scanf("%f", &valor);
    printf("Quantas horas trabalhadas no mes \n?");
    scanf("%d", &horas);

    // operacao
    valortotal = valor * horas;

    // resltado
    printf("Seu total a receber: %.2f \n", valortotal);

    return 0;
}