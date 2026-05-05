#include <stdio.h>

int main()
{

    // variaveis
    int numero;

    // coleta de dados
    printf("Qual seu numero \n");
    scanf("%d", &numero);

    // operacao
    if (numero == 0)
    {
        printf("Seu numero eh 0. \n");
    }
    else
    {
        printf("Seu numero e diferente de 0. \n");
    }
    return 0;
}