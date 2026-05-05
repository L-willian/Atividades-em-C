#include <stdio.h>

int main()
{

    // variaveis
    int mes;
    int dias;

    // coleta de dados
    printf("Qual o mes? \n");
    scanf("%d", &mes);

    // operacao
    switch (mes)
    {

    case 2:
        printf("28 dias(ano bissextos 29) \n");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 dias\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 dias\n");
        break;

    default:
        printf("Informacao invalida!\n");
        break;
    }

    return 0;
}