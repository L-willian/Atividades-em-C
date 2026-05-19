#include <stdio.h>

int main()
{
    int vetor[5];
    int *p;
    p = vetor;

    for (int i = 0; i < 5; i = i + 1)
    {
        scanf("%d", p + i);
    }
    for (int i = 4; i >= 0; i = i - 1)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}