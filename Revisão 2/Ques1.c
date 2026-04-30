#include <stdio.h>

int main()
{

    // variaveis
    int num;
    int resultado;

    // entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &num);

    // operação
    resultado = 0;
    for (int i = 0; i <= num; i = i + 1)
    {
        resultado = resultado + i;
    }
    printf("O resultado eh: %d\n", resultado);
}