#include <stdio.h>

int main()
{
    int total = 0;

    for (int i = 1; i <= 50; i = i + 1)
    {
        if (i % 5 == 0)

            total = total + 1;
    }
        printf("%d eh o total de multiplos de 5 \n", total);
    
    return 0;
}