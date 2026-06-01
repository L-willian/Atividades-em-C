#include <stdio.h>
#include <string.h>

int main()
{

    // variaveis
    char palavra1[50];
    char palavra2[50];

    // entrada de dados
    printf("Digite a primeira palavra: \n");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: \n");
    scanf("%s", palavra2);

    // operacao
    strcat(palavra1, palavra2);

    // saida de dados
    printf("A palavra concatenada eh:\n%s\n", palavra1);

    return 0;
}