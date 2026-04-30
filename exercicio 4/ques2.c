#include <stdio.h>

int main()
{

    int numero;
    printf("Qual seu numero?\n");
    scanf("%d", &numero);

    printf("Todos os numeros de 1 ate %d:\n", numero);

    for (int i = 1; i <= numero; i = i + 1)
    {
        printf("%d\n", i);
    }

    return 0;
}