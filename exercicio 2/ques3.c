#include <stdio.h>

int main()
{

    // variaveis
    int numero1;
    int numero2;

    // coletando dados
    printf("Qual o seu primeiro numero? \n");
    scanf("%d", &numero1);
    printf("Qual seu segundo numero? \n");
    scanf("%d", &numero2);
    // operacaoo
    if (numero1 <= numero2)
    {
        printf("Seu primeiro numero eh menor. \n");
    }
    else
    {
        printf("Seu segundo numero eh monor. \n");
    }
    return 0;
}