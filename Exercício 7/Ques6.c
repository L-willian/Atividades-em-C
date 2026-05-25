#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int *vetor;
    int tamanho;

    // Solicita ao usuário que digite o tamanho do vetor
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &tamanho);

    vetor = (int *)calloc(tamanho, sizeof(int));

    // Solicita ao usuário que digite os elementos do vetor
    printf("Digite os elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    // Exibe os elementos do vetor
    printf("Elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d \n ", vetor[i]);
    }

    return 0;
}