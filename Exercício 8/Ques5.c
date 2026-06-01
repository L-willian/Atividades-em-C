#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Declaração de variáveis
    FILE *arquivo;
    char caractere;
    int linha = 0;

    // Abrir o arquivo para leitura
    arquivo = fopen("dados.txt", "r");

    //
    while ((caractere = fgetc(arquivo)) != EOF)
    {
        if (caractere == '\n')
        {
            linha++;
        }
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Exibir o número de linhas
    printf("O número de linhas no arquivo é: %d\n", linha);

    return 0;
}