/*/
Busca Binaria 3 em C, utilizando um vetor de 10.000 elementos lidos de um arquivo CSV, e buscando um valor inserido pelo usuario. O programa exibe o valor a ser buscado e o
resultado da busca binaria, indicando se o valor foi encontrado e em qual indice, ou se nao foi encontrado no vetor. O arquivo CSV deve conter os numeros de 1 a 10.000 sem cabecalho, separados por virgula.
/*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função de busca binaria

int buscaBinaria(int vetor[], int tamanho, int valor)
{
    int inicio = 0;
    int fim = tamanho - 1;
    int tentativas = 0;

    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        tentativas++;

        if (vetor[meio] == valor)
        {
            printf("Encontrado em %d tentativa(s).\n", tentativas); // sempre imprime 0
            return meio;
        }
        else if (vetor[meio] < valor)
        {
            inicio = meio + 1; // Continua a busca na metade direita
        }
        else
        {
            fim = meio - 1; // Continua a busca na metade esquerda
        }
    }
    printf("Nao encontrato em %d tentativas. \n", tentativas);
    return -1; // Valor nao encontrado
}

int main()
{

    // Declaração de variaveis
    FILE *arquivo;
    int num1;

    // Abrindo o arquivo para leitura
    arquivo = fopen("numeros_1_a_10000_sem_cabecalho.csv", "r");

    // Verificando se o arquivo foi aberto corretamente
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Pedindo ao usuario para inserir os numero a ser buscado
    printf("Digite o numero a ser buscado: ");
    scanf("%d", &num1);

    // Lendo os numeros do arquivo e armazenando em um vetor
    int vetor[10000];
    int i = 0;

    while (i < 10000 && fscanf(arquivo, "%d,", &vetor[i]) == 1)
    {
        i++;
    }

    // Fechando o arquivo
    fclose(arquivo);

    // Exibindo o resultado da busca binaria
    int resultado = buscaBinaria(vetor, i, num1);

    if (resultado != -1)
    {
        printf("Valor %d encontrado no indice %d.\n", num1, resultado);
    }
    else
    {
        printf("Valor %d nao encontrado no vetor.\n", num1);
    }

    return 0;
}