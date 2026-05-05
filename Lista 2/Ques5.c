#include <stdio.h>

int main()
{

    // variaveis:
    int num1;

    // coletando os dados:
    printf("Qual seu Numero?\n");
    scanf("%d", &num1);

    // operacoes:
    if (num1 % 3 == 0 && num1 % 5 == 0 && num1 % 7 == 0)
    {
        printf("O numero %d Divisivel por 3, 5 e 7:\n", num1);
    }
    else
    {
        if (num1 % 3 == 0)
            printf("%d Divisivel por 3\n", num1);

        if (num1 % 5 == 0)
            printf("%d Divisivel por 5\n", num1);

        if (num1 % 7 == 0)
            printf("%d Divisivel por 7\n", num1);

        if (num1 % 3 != 0)
            printf("%d Nao Divisivel por 3\n", num1);

        if (num1 % 5 != 0)
            printf("%d Nao Divisivel por 5\n", num1);

        if (num1 % 7 != 0)
            printf("%d Nao Divisivel por 7\n", num1);
    }
    return 0;
}
