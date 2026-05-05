#include <stdio.h>

int main()
{

    // variaveis
    int jogador;
    int computador = 1;

    // coletando os dados
    printf("Meno do jogo:\n1 - Pedra\n2 - Tessoura\n3 - Papel\n");
    printf("Digite sua jogada:\n");
    scanf("%d", &jogador);

    // jogadas
    printf("O computador escolheu Pedra!\n");
    printf("voce escolheu:\n");
    switch (jogador)
    {
    case 1:
        printf("Pedra\n");
        break;
    case 2:
        printf("Papel\n");
        break;
    case 3:
        printf("Tesoura\n");
        break;
    }
    // resultado
    if (jogador == computador)
    {
        printf("Empate!\n");
    }
    else if (jogador == 3)
    {
        printf("Voce ganhou!\n");
    }
    else if (jogador == 2)
    {
        printf("Voce perdeu!\n");
    }
    else
    {
        printf("Jogada invalida!\n");
    }

    return 0;
}