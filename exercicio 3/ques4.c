#include <stdio.h>

int main()
{

    // variaveis
    int senha;
    int tentativaSenha;

    // dados
    printf("Sua senha? \n");
    scanf("%d", &senha);
    printf("Repita sua senha? \n");
    scanf("%d", &tentativaSenha);

    // operacao
    if (senha == tentativaSenha)
    {
        printf("Acesso permetido \n");
    }
    else
    {
        printf("Acesso  negado\n");
    }

    return 0;
}