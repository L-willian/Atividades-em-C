#include <stdio.h>

int main()
{

    // variaveis
    int numero;
    int dobro;

    // coleta de dados
    printf("Digite seu numero: \n");
    scanf("%d", &numero);

    // operaçao
    dobro = numero * 2;

    // resultado
    printf("O dobro do seu numero: %d \n", dobro);
    return 0;
}
