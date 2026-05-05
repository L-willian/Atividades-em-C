#include <stdio.h>

int main()
{
    // variavel
    float num;
    float resultado;

    // coletando dados
    printf("Qual seu numero? \n");
    scanf("%f", &num);

    for (int a = 1; a <= 10; a = 1 + a)
    {
        if (num == 0)
        {
            printf("%.0f / %d = 0\n", num, a);
        }
        else 
        {
            resultado = num / a;
            printf("%.0f / %d = %.2f \n",num,a, resultado);
        }
    
    }
        return 0;
    
}