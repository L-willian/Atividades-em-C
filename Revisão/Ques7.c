#include <stdio.h>

int main()
{

    // variaveis
    int num1;
    int fatorial;

    // entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    // operacao
    if (num1 <= 0)
    {
        printf("Digite um numero positivo!\n");
    }
    else
    {
        for (int i = 1; i <= num1; i = 1 + i)
        {
            if (i == 1)
            {
                fatorial = i;
            }
            else
            {
                fatorial = fatorial * i;
            }

            printf("%d! = %d \n", i, fatorial);
        }
    }

    return 0;
}