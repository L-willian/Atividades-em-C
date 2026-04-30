#include <stdio.h>

int main()
{

    // Variaveis
    int lista[5];

    // Entrada de dados
    printf("Digite um  numeros: \n");
    scanf("%d", &lista[0]);
    for (int i = 1; i < 5; i = 1 + i)
    {
        printf("Digite outro numero: \n");
        scanf("%d", &lista[i]);
    }
    // resultado
    printf("Os numeros armaZenados foram:\n");
    for (int j = 0; j < 5; j = j + 1)
    {
        printf("%d\n", lista[j]);
    }

    return 0;
}
