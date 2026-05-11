#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int main()
{
    int num;
    int total = 0;

    scanf("%d", &num);

    while (num != 0)
    {
        total = soma(total, num);
        scanf("%d", &num);
       
    }
    printf("%d\n", total);
    return 0;
}