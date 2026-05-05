#include <stdio.h>

int main()
{
    int contador = 1;
    int i = 1;

    while (i <= 10)
    {
        printf("%d\n", i);
        i++;

        contador = contador + 1;
    }

    printf("O total eh: %d\n", contador);
    return 0;
}