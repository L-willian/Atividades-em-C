#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct para armazenar as informações de um aluno
struct Aluno
{
    char nome[50];
    float nota;
};

int main()
{
    struct Aluno p1, p2[3];
    int media = 0;

    // Solicita ao usuário que digite o nome do aluno
    printf("Digite o nome do aluno: ");
    fgets(p1.nome, sizeof(p1.nome), stdin);
    p1.nome[strcspn(p1.nome, "\n")] = '\0';

    for (int i = 0; i < 3; i = i + 1)
    {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &p2[i].nota);
        media = media + p2[i].nota;
    };

    // Exibe o nome do aluno e a média das notas
    printf("Nome do aluno: %s\n", p1.nome);
    printf("Media das notas: %.2f\n", (float)media / 3);

    return 0;
}