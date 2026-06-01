#include <stdio.h>

int main()
{

    // declaração de variáveis

    FILE *arquivo;
    int numero;

    // abertura do arquivo
    arquivo = fopen("dados.txt", "w");

    // escrever os números no arquivo
    for (int i = 1; i <= 10; i++)
    {
        fprintf(arquivo, "%d\n", i);
    }
    // fechar o arquivo
    fclose(arquivo);

    return 0;
}