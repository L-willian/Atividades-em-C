#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int soma(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + soma(n - 1);
    }
}

int main()
{

    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    printf("A soma dos numeros de 1 a %d eh: %d\n", n, soma(n));

    return 0;
}