#include <stdio.h>

int main()
{

    // variaveis
    int numero1;
    int numero2;

    // coleta de dados
    printf("Qual seu primeiro numero? \n");
    scanf("%d", &numero1);
    printf("Qual o seu segundo numero? \n");
    scanf("%d", &numero2);
    // operacao
    if (numero2 != 0)
    {
        printf("Seu numero eh divisivel \n");
    }
    else
    {
        printf("Seu numero nao eh divisivel. \n");
    }
    return 0;
}