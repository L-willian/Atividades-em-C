#include <stdio.h>

int main()
{

    // variaveis
    int lado1;
    int lado2;
    int lado3;

    // coleta de dados
    printf("Informe o tamanho do primeiro lado: \n");
    scanf("%d", &lado1);
    printf("Informe o tamanho do segundo lado: \n");
    scanf("%d", &lado2);
    printf("Informe o tamanho do terceiro lado: \n");
    scanf("%d", &lado3);
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("Equilatero \n");
        }
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
        {
            printf("Isósceles \n");
        }
        else
        {
            printf("Escaleno \n");
        }
    }
    else
    {
        printf("Nao forma triangulo \n");
    }
    return 0;
}