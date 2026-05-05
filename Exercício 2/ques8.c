#include <stdio.h>

int main()
{

    // variaveis
    int salario;

    // coleta de dados
    printf("Qual o seu salario \n");
    scanf("%d", &salario);

    // operacao
    if (salario >= 1500)
    {
        printf("Seu salario eh adequado. \n");
    }
    else
    {
        printf("Seu salario eh baixo. \n");
    }
    return 0;
}