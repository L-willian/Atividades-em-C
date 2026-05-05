#include <stdio.h>

int main()
{

    // variaveis
    int lista[10];
    int negativos = 0;
    int positivos = 0;
    int zeros = 0;

    // entrada de dados
    printf("Digite um numero: \n");
    scanf("%d", &lista[0]);
    for (int i = 1; i < 10; i = 1 + i)
    {
        printf("Digite outro numero: \n");
        scanf("%d", &lista[i]);
    }
    // operacao
    for (int j = 0; j < 10; j = j + 1)
    {
        if (lista[j] == 0)
        {
            zeros = zeros + 1;
        }

        else if (lista[j] < 0)
        {
            negativos = negativos + 1;
        }
        else if (lista[j] > 0)
        {
            positivos = positivos + 1;
        }
    }
    // resultado
    printf("O Total de numeros Zeros: %d\n", zeros);
    printf("O Total de numeros Negativos: %d\n", negativos);
    printf("O Total de numeros Positivos: %d\n", positivos);

    return 0;
}