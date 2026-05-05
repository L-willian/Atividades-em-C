#include <stdio.h>

int main()
{

    // Variaveis:
    int operacao;
    int num1;
    int num2;
    float resultado;
    float resultado2;
    int n;
    int x;

    printf("Digite seu primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite seu segundo numero: \n");
    scanf("%d", &num2);
    printf("Digite sua operacao da seguinte forma (1 = Soma, 2 = Subtracao, 3 = Multiplicacao, 4 = Divisao, 5 = Potencia quadrada, 6 = Raiz quadrada): \n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        resultado = num1 + num2;
        printf("Soma eh: %.2f \n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Subtracao eh: %.2f \n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Multiplicacao eh: %.2f \n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("Divisao eh: %.2f \n", resultado);
        break;
    case 5:
        resultado = (num1 * num1);
        resultado2 = (num2 * num2);

        printf("A potencia quadrada dos seus numeros eh respctivamente: %.2f e %.2f\n", resultado, resultado2);

        break;
    case 6:
        if (num1 < 0)
        {
            printf("Nao existe raiz real!\n");
        }
        else
        {
            n = num1;

            x = n / 2;

            x = (x + n / x) / 2;

            x = (x + n / x) / 2;

            x = (x + n / x) / 2;

            printf("Raiz: %d\n", x);

            n = num2;

            x = n / 2;

            x = (x + n / x) / 2;

            x = (x + n / x) / 2;

            x = (x + n / x) / 2;

            printf("Raiz: %d\n", x);
        }
        break;

    default:
        printf("Nao tem essa operacao! \n");
        break;
    }

    return 0;
}