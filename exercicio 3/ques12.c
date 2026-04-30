#include <stdio.h>

int main()
{

    // variaveis
    int opcao;
    float numero;
    float resultado;

    // coletando dados
    printf("Escolha uma opcao entre 1 e 4:\n1 -> cm para m\n2 -> m para cm\n3 -> kg para g\n4 -> g para kg\n");
    printf("Qual sua opcao?\n");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido:\n");
    scanf("%f", &numero);

    // operacao
    switch (opcao)
    {
    case 1:

        resultado = numero / 100.0;
        printf("%.2f cm eh %.2f m\n", numero, resultado);
        break;
    case 2:

        resultado = numero * 100.0;
        printf("%.2f m eh %.2f cm\n", numero, resultado);
        break;
    case 3:

        resultado = numero * 1000.0;
        printf("%.2f kg eh %.2f g\n", numero, resultado);
        break;
    case 4:

        resultado = numero / 1000.0;
        printf("%.2f g eh %.2f kg\n", numero, resultado);
        break;
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}