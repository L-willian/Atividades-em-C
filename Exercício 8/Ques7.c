#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Declaração de variáveis
    FILE *arquivo;
    char data[11]; // Formato: DD/MM/AAAA
    char dataMaior[11];
    char dataMenor[11];
    float valor;
    float valorMaior = 0.0;
    float valorMenor = 0.0;

    // Abrir o arquivo para leitura
    arquivo = fopen("Electric_Production.csv", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // ignorar a primeira linha (cabeçalho)
    fscanf(arquivo, "%*[^\n]\n");

    // Ler a primeira data para inicializar as variáveis de comparação
    fscanf(arquivo, "%10[^,],%*[^\n]\n", data);
    strcpy(dataMaior, data);
    strcpy(dataMenor, data);

    // Ler a primeira linha de dados para inicializar os valores de comparação
    if (fscanf(arquivo, "%10[^,],%f%*[^\n]\n", data, &valor) == 2)
    {
        valorMaior = valor;
        valorMenor = valor;
        strcpy(dataMaior, data);
        strcpy(dataMenor, data);
    }

    // Ler o arquivo linha por linha
    while (fscanf(arquivo, "%10[^,],%f%*[^\n]\n", data, &valor) == 2)
    {
        // Comparar a data atual com a maior e menor data encontradas
        if (valor > valorMaior)
        {
            valorMaior = valor;
            strcpy(dataMaior, data);
        }
        if (valor < valorMenor)
        {
            valorMenor = valor;
            strcpy(dataMenor, data);
        }
    }
    // Fechar o arquivo
    fclose(arquivo);

    // Exibir os resultados
    printf("Maior valor: %f\n", valorMaior);
    printf("Data do maior valor: %s\n", dataMaior);

    printf("Menor valor: %f\n", valorMenor);
    printf("Data do menor valor: %s\n", dataMenor);

    return 0;
}