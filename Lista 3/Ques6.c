#include <stdio.h>

int main()
{
    // Variaveis:
    int num;
    int fatorial;

    // Coleta de dados:
    printf("Qual o seu numero?\n");
    scanf("%d", &num);

    // Operacao:
    if (num < 0)
    {
        printf("Nao tem fatorial!\n");
    }
    else
    {
        for (int i = 1; i <= num; i = i + 1)
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
        return 0;
    }
}