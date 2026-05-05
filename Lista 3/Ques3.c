#include <stdio.h>

int main()
{
    // variavel
    int num;
    int resultado;

    // coletando dados
    printf("Qual seu numero? \n");
    scanf("%d", &num);

    for (int a = 1; a <= 10; a = 1 + a)
    {
        resultado = num * a;
        printf("%d * %d = %d \n", num, a, resultado);
    }

    return 0;
}