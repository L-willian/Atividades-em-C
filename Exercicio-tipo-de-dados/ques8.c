#include <stdio.h>

int main()
{

    // variaveis
    float valor1;
    float valor2;
    float valor3;
    float resultado;

    // coleta de dados
    printf("Seu valor A? \n");
    scanf("%f", &valor1);
    printf("seu valor B? \n");
    scanf("%f", &valor2);
    printf("Seu valor C? \n");
    scanf("%f", &valor3);

    // operação
    resultado = (((valor1 + valor2) * (valor1 + valor2)) + ((valor2 + valor3) * (valor2 + valor3))) / 2;

    // resultado
    printf("Seu resultado: %.2f \n", resultado);

    return 0;
}