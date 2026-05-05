#include <stdio.h>

int main()
{

    // variveis
    float salario;
    float imposto;

    printf("Seu salario? \n");
    scanf("%f", &salario);

    // operacao
    if (salario <= 2000)
    {
        printf("Insento \n");
    }
    else if (salario <= 5000)
    {
        imposto = salario * 0.10;
    }
    else
    {
        imposto = salario * 0.20;
    }

    printf("Imposto: %.2f\n", imposto);

    return 0;
}