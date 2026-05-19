#include <stdio.h>

void divisao_inteira(int dividendo, int divisor, int *quociente, int *resto)
{

    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
}
int main()
{
    int dividendo, divisor;
    int quociente, resto;

    printf("Digite o dividendo: \n");
    scanf("%d", &dividendo);

    printf("Digite o divisor: \n");
    scanf("%d", &divisor);

    divisao_inteira(dividendo, divisor, &quociente, &resto);

    printf("O resultado da divisão inteira é: %d\n", quociente);
    printf("O resto da divisão é: %d\n", resto);

    return 0;
}