#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // variaveis
    int tamanho;
    int soma = 0;
    int *vetor;

    // Solicita ao usuário que digite o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    // Solicita ao usuário que digite os elementos do vetor
    printf("Digite os elementos do vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // Exibe a soma dos elementos do vetor
    printf("A soma dos elementos do vetor eh: %d\n", soma);

    return 0;
}