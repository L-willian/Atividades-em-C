#include <stdio.h>

int main()
{

    // variáveis
    int senha =1234;
    int senhaDigitada;

 
    // entrada de dados e operação
    while (senhaDigitada != senha)
    {
        printf("Digite uma senha: \n");
        scanf("%d", &senhaDigitada);
    }

    printf("Acesso permitido! \n");
    return 0;
}