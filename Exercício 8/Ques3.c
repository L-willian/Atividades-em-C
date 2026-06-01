#include <stdio.h>
#include <string.h>

int main()
{

    // variaveis
    char palavra1[20];
    char palavra2[20];

    // entrada de dados
    printf("Digite a primeira palavra: \n");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: \n");
    scanf("%s", palavra2);

    // comparação das palavras
    if (strcmp(palavra1, palavra2) == 0)
    {
        printf("As palavras sao iguais!\n");
    }
    else
    {
        printf("As palavras sao diferentes!\n");
    }

    return 0;
}