#include <stdio.h>

int main()
{

    // Variaveis:
    int num;
    int resultado;
    int resto;

    // coleta de dados:
    printf("Qual o seu numero? \n");
    scanf("%d", &num);

    // operacao:
    for (int i = 1; i <= 100; i = i + 1)
    {
        resto = num % 2;
        resultado = num / 2;

        printf("Divisão %d: %d / 2 = %d \nResto = %d \n", i, num, resultado, resto);
        if (resto != 0)
        {
            i = 100;
        }
        if (resto == 0)
        {

            resto = num % 2;
            num = num / 2;
        }
    }

    return 0;
}