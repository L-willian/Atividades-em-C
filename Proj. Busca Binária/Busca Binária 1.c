/*/
Busca Binaria em C, Pedindo ao usuario para inserir o tamanho do vetor, os elementos do vetor e o valor a ser buscado.
O programa entao exibe o vetor, o valor a ser buscado e o resultado da busca binaria.
/*/

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor)
{
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == valor)
        {
            return meio; // Valor encontrado, retorna o indice
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

    return -1; // Valor nao encontrado
}

int main()
{
    // Variaveis
    int vetor[1000];
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;

    // Entrada de dados
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("Digite os elementos do vetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    // Saida de dados
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\nDigite o valor a ser buscado: ");
    scanf("%d", &valor);
    printf("\nValor a ser buscado: %d\n", valor);

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
