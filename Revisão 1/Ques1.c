#include <stdio.h>

int main()
{
    // Variaveis:
    int num1;
    int dobro;

    // Entrada de dados:
    printf("Digite seu numero: \n");
    scanf("%d", &num1);

    // Calculo do dobro:
    dobro = num1 * 2;

    // Resultado:
    printf("O dobro de %d eh %d!\n", num1, dobro);

    return 0;
}