#include <stdio.h>

int main()
{

    // variaveis
    int ano;

    // coletando dados
    printf("Qual o ano?\n");
    scanf("%d", &ano);

    if(ano / 4){
        printf("E bisexto! \n");
    }
    else{
        printf("E ano comum!\n");
    }

    return 0;
}