#include <stdio.h>

int main()
{

    // variaveis
    int num;
    int primo;
    int i;
    int a;

    printf("Numeros primos entre 2 e 29: \n");

    // operacao
    for (i = 2; i <= 29; i = 1 + i)
    {
        primo = 1;

        for (a = 2; a < i; a = 1 + a)
        {
            if (i % a == 0)
            {
                primo = 0;
            }
        }
        if (primo == 1)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}