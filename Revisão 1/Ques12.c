#include <stdio.h>

int main()
{

    // Variaveis
    int tabela[3][3];
    int dobro;

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
    dobro = tabela[2][2] * 2;
    // saida
    printf("O ultimo numero digitado foi: %d\n", tabela[2][2]);
    printf("O dobro do ultimo numero digitado foi: %d\n", dobro);

    return 0;
}