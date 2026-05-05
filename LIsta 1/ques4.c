#include <stdio.h>

int main()
{

    // Variaveis
    float salario;
    float salarioaumento;

    // coleta de daods
    printf("Qual seu salario? \n");
    scanf("%f", &salario);

    // operacao
    salarioaumento = (salario) * (1.2);

    // resultado
    printf("Seu saumento de 20 porcento: %.2f \n", salarioaumento);

    return 0;
}