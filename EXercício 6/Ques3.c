#include <stdio.h>

// Função para trocar os valores de dois números usando ponteiros
void troca_valores(int *p1, int *p2)
{
    int valor1 = *p1;
    *p1 = *p2;
    *p2 = valor1;
}
int main()
{
    //variaveis
    int num1, num2;

    //entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Valores antes da troca: %d e %d \n", num1, num2);

    troca_valores(&num1, &num2);

    //exibindo os resultados

    printf("Apos a troca: %d e %d \n", num1, num2);

    return 0;
}