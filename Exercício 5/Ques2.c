#include <stdio.h>

void verificarPar(int numero)
{
    if (numero % 2 == 0)
    {
        printf("%d eh par\n", numero);
    }
    else
    {
        printf("%d eh impar\n", numero);
    }
}

int main()
{
    int num;
    char continuar = 'S';

    while (continuar == 'S')
    {
        scanf("%d", &num);

        verificarPar(num);

        scanf(" '%c'", &continuar);
    }

    return 0;
}