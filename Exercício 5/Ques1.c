#include <stdio.h>

void mostrarMedia(float soma, int quantidade)
{
    float media;

    media = soma / quantidade;
}

int main()
{
    float nota;
    float soma = 0;
    int quantidade = 0;

    scanf("%f", &nota);

    while (nota >= 0)
    {
        soma = soma + nota;

        quantidade++;

        scanf("%f", &nota);
    }

    mostrarMedia(soma, quantidade);
    printf("Media da turma = %.2f\n", soma / quantidade);

    return 0;
}