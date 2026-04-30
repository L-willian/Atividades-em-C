#include <stdio.h>

int main()
{

    // variaveis
    char letra;

    // coletando dados
    printf("Qual a sua letra? \n");
    scanf("%c", &letra);

    // operacao
    switch (letra)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

        printf("eh uma Vogal \n");

        break;

    default:
        printf(" eh uma cossoante \n");
        break;
    }

    return 0;
}