#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *vetor;

    vetor = (int *)malloc(5 * sizeof(int));

    vetor = (int *)realloc(vetor, 10 * sizeof(int));
    {
    }

    return 0;
}