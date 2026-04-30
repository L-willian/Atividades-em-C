#include <stdio.h>

int main()
{

    // variaveis
    float numero1;
    float numero2;
    float resultado;

    // Coleta de dados
    printf("Seu primeiro numero: \n");
    scanf("%f", &numero1);
    printf("Seu segundo numero: \n");
    scanf("%f", &numero2);

    // operacao
    resultado = numero1 * numero2;

    // resultado
    printf("Sua mutiplicacao tem como resultado: %.2f \n", resultado);

    return 0;
}