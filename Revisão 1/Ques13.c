#include <stdio.h>

int main()
{

    // Variaveis
    int vetor[6];

    // Entrada de dados
    for (int i = 0; i < 6; i = i + 1)
    {
        printf("Digite um numero: \n");
        scanf("%d", &vetor[i]);
    }
    // operacao
    printf("O seu verto de tras para frente eh: \n");
    for (int j = 6; j > 0; j = j - 1)
    {
        printf("%d\n", vetor[j - 1]);
    }
    return 0;
}