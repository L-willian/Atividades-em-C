#include <stdio.h>

int main()
{

    // variaveis
    int numero1;

    // coleta de dados
    printf("Qual seu numero? \n");
    scanf("%d", &numero1);

    // operacao
    if (numero1 % 10 == 0)
    {
        printf("Seu numero eh divisivel por 10\n");
    }
    else
    {
        printf("Seu numero nao eh divisivel por 10. \n");
    }
    return 0;
}