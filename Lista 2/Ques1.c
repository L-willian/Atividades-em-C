#include <stdio.h>

int main()
{

    // Variaveis
    int lado1;
    int lado2;
    int lado3;
    float semiPerimetro;
    float n; // n equivalente ao meu radicando.
    float x; // x equivalente a minha raiz.

    // Coletando os dados:
    printf("Informe o tamanho do primeiro lado: \n");
    scanf("%d", &lado1);
    printf("Informe o tamanho do segundo lado: \n");
    scanf("%d", &lado2);
    printf("Informe o tamanho do terceiro lado: \n");
    scanf("%d", &lado3);

    // Descobrindo qual o triangulo:
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

    // Descobrindo qual a area:
    semiPerimetro = (lado1 + lado2 + lado3) / 2.0;

    n = (semiPerimetro * (semiPerimetro - lado1) * (semiPerimetro - lado2) * (semiPerimetro - lado3));

    x = n / 2;

    x = (x + n / x) / 2;
    x = (x + n / x) / 2;
    x = (x + n / x) / 2;
    x = (x + n / x) / 2;
    x = (x + n / x) / 2;

    // Resultado:
    printf("Com Area de: %.2f\n", x);

    return 0;
}
