#include <stdio.h>

int main()
{

    // variavel
    int num1;
    int contador = 0;

    for (int i = 1; i <= 8; i = i + 1)
    {
        printf("Digite o numero: \n");
        scanf("%d", &num1);

        if (num1 > 0)
        {
            contador = contador + 1;
        }
    }
    printf("Quantidade de numeros positivos:\n%d\n", contador);

    return 0;
}