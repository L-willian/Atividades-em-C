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

    // MOstra os elementos do vetor
    printf("Elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d \n ", vetor[i]);
    }
    printf("\n");

    return 0;
}