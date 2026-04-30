#include <stdio.h>

int main()
{

    // variaveis
    int matri[2][2];
    int i, b, d, e;

    // entrada de dados
    for (int i = 0; i < 2; i = i + 1)
    {
        for (int b = 0; b < 2; b = b + 1)
        {
            printf("Digite dois numeros: \n");
            scanf("%d", &matri[i][b]);
        }
    }
    for (int d = 0; d < 2; d = d + 1)
    {
        for (int e = 0; e < 2; e = e + 1)
        {
            printf("%d ", matri[i][b]);
        }
        printf("\n");
    }
    return 0;
}