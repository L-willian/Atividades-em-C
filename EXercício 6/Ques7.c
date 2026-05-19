#include <stdio.h>

float media_float(float vetor[], int tamanho, float *acimaMedia)
{
    float soma = 0;
    float media;
    *acimaMedia = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma = soma + vetor[i];
    }

    media = soma / tamanho;

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > media)
        {
            (*acimaMedia)++;
        }
    }

    return media;
}
int main()
{
    float vetor[5];
    float media;
    int tamanho = 5;
    float acimaMedia;

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    media = media_float(vetor, tamanho, &acimaMedia);

    printf("A media dos numeros e: %.2f\n", media);
    printf("A quantidade de numeros maiores que a media e: %.0f\n", acimaMedia);

    return 0;
}