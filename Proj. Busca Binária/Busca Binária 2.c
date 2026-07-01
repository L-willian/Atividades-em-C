/*/
Busca Binaria em C, utilizando um vetor predefinido de 70 elementos ordenados de 1 a 70.
O programa exibe o vetor, o valor a ser buscado e o resultado da busca binaria, indicando se o valor foi encontrado e em qual indice, ou se nao foi encontrado no vetor.
/*/

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor)
{
    int inicio = 0;
    int fim = tamanho - 1;
    int tentativas = 0;

    while (inicio <= fim)
    {
        tentativas++;
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == valor)
        {
            printf("Encontrado em %d tentativa(s).\n", tentativas);
            return meio;
        }
        else if (vetor[meio] < valor)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

       return -1;
}

int main()
{
    // Variaveis
    int vetor[70] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                     41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                     51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
                     61, 62, 63, 64, 65, 66, 67, 68, 69,
                     70};

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;

    printf("Digite o numero Buscado:");
    scanf("%d", &valor);

    // Saida de dados
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    int resultado = buscaBinaria(vetor, tamanho, valor);

    if (resultado != -1)
    {
        printf("Valor %d encontrado no indice %d.\n", valor, resultado);
    }
    else
    {
        printf("Valor %d nao encontrado no vetor.\n", valor);
    }

    return 0;
}
