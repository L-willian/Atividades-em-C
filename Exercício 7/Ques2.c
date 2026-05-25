#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct para armazenar as informações de um produto
struct Produto
{
    char nome[100];
    float preco;
};
int main()
{
    struct Produto produtos[3];

    // Solicita ao usuário que digite as informações dos produtos
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome do produto %d: ", i + 1);
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Digite o preço do produto %d: ", i + 1);
        scanf("%f", &produtos[i].preco);
        getchar(); // Limpa o buffer de entrada
    }

    // Exibe os produtos cadastrados
    printf("\nProdutos cadastrados:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Produto %d: %s - R$ %.2f\n", i + 1, produtos[i].nome, produtos[i].preco);
    }

    return 0;
}
