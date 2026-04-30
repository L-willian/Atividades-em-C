#include <stdio.h>

int main()
{

    int numero;
    int resultado;

    printf("Qual seu numero?\n");
    scanf("%d", &numero);

    printf("Taboada do numero %d:\n", numero);

    for (int i = 0; i <= 10; i = i + 1)
    {
        resultado = numero * i;
        printf("%d\n", resultado);
    }

    return 0;
}