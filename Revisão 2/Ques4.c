#include <stdio.h>

// variavel
int totalSoma;

int main()
{
    printf("Numeros pares de 1 a 100:\n");
    for (int i = 1; i <= 100; i = i + 1)
    {
        if (i % 2 == 0)
        {
            totalSoma = totalSoma + i;
        }
    }
    printf("Soma total: %d\n", totalSoma);
    return 0;
}