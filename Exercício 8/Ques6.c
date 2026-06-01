#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Declaração de variáveis
    FILE *origem;
    FILE *destino;
    char caracter;

    // Abrindo o arquivo
    origem = fopen("dados.txt", "r+");
    destino = fopen("Copia.txt", "w");

    // copiar o conteúdo de "dados.txt" para "Copia.txt"
    // (implementação da cópia de conteúdo)
    while ((caracter = fgetc(origem)) != EOF)
    {
        fputc(caracter, destino);
    }

    // Fechando os arquivos
    fclose(origem);
    fclose(destino);

    return 0;
}