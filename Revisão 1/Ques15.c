#include <stdio.h>

int main()
{

    // Variaveis
    int tabela[3][3];
    int determinante;

    // Entrada de dados
    for (int i = 0; i < 3; i = i + 1)
    {
        for (int j = 0; j < 3; j = j + 1)
        {
            printf("Digite um numero: \n");
            scanf("%d", &tabela[i][j]);
        }
    }

    // operacao
    determinante = tabela[0][0] * (tabela[1][1] * tabela[2][2] - tabela[1][2] * tabela[2][1])
                 - tabela[0][1] * (tabela[1][0] * tabela[2][2] - tabela[1][2] * tabela[2][0])
                 + tabela[0][2] * (tabela[1][0] * tabela[2][1] - tabela[1][1] * tabela[2][0]);
   
                 printf("O resultado do determinante eh: %d\n", determinante);
    return 0;
}
