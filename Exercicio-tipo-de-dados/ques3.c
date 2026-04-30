#include <stdio.h>

int main()
{

    // variaveis
    float nota1;
    float nota2;
    float nota3;
    float media;

    // coleta de dados
    printf("Qual sua primeira nota? \n");
    scanf("%f", &nota1);
    printf("Qual sua segunda nota? \n");
    scanf("%f", &nota2);
    printf("Qual sua terceira nota? \n");
    scanf("%f", &nota3);

    // operacao
    media = (nota1 + nota2 + nota3) / 3;

    // resultado
    printf("Aqui esta sua media %.2f \n", media);

    return 0;
}