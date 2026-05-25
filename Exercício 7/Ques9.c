#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int contagemRegressiva(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        printf("%d\n", n);
        contagemRegressiva(n - 1);
    }
}

int main()
{

    int n;
    printf("Digite um numero: \n");
    scanf("%d", &n);

    printf("Contagem regressiva de %d:\n", n);
    contagemRegressiva(n);

    return 0;
}