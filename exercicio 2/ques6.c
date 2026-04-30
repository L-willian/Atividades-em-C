#include <stdio.h>

int main()
{

    // variaveis
    int numero1;
    int numero2;

    // coleta de dados
    printf("Qual seu primeiro numero? \n");
    scanf("%d", &numero1);
    printf("Qual seu segundo numero? \n");
    scanf("%d", &numero2);

    // operacao
    if (numero1 == numero2)
    {
        printf("Seus numeros sao iguais. \n");
    }
    else
    {
        printf("Seus numeros sao diferentes. \n");
    }
    return 0;
}