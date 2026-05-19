#include <stdio.h>

// 
int Zerar(int *p)
{
    *p = 0;
    return *p;
}

int main()
{

    int num1;
    printf("Digite um numero: \n");
    scanf("%d", &num1);

    Zerar(&num1);
    printf("%d\n", num1);

    return 0;
}