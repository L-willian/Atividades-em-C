#include <stdio.h>

int main()
{

    // Variaveis:
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    // Coletando dados:
    printf("Qual sua primeira nota? \n");
    scanf("%f", &nota1);
    printf("Qual sua segunda nota? \n");
    scanf("%f", &nota2);
    printf("Qual sua terceira nota? \n");
    scanf("%f", &nota3);
    printf("Qual sua quarta nota? \n");
    scanf("%f", &nota4);

    // Operacao
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if (media >= 7)
    {
        printf("Aluno Aprovado!! \n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Aluno esta de Recuperacao!! \n");
    }
    else
    {
        printf("Aluno Reprovado!!\n");
    }

    return 0;
}