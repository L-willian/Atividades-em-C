#include <stdio.h>

int fatorial(int n)
{
    int resultado = 1;

    while (n > 1)
    {
        resultado = resultado * n;

        n = n - 1;
    }
    return resultado;
}

int main()
{

    int numero;
    scanf("%d", &numero);
    printf("Fatorial = %d\n", fatorial(numero));

    return 0;
}
