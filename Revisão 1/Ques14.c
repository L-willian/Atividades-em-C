#include <stdio.h>

int main()
{

    // Variaveis
    int tabela[3][3];
    int reusultado;

    // Entrada de dados
    for (int i = 0; i < 3; i = i + 1)
    {
        for (int j = 0; j < 3; j = j + 1)
        {
            printf("Digite um numero: \n");
            scanf("%d", &tabela[i][j]);
        }
    }
    reusultado = tabela[0][0] * tabela[1][1] * tabela[2][2];
    printf("O resultado da multiplicacao eh: %d\n", reusultado);

    return 0;
}