#include <stdio.h>

int main()
{

    // Variaveis:
    int Nun1;
    int Num2;
    int Quadrado1;
    int Quadrado2;

    // Coletando os dados:
    printf("Qual seu Primeiro numero? \n");
    scanf("%d", &Nun1);
    printf("Qual seu Segundo numero? \n");
    scanf("%d", &Num2);

    // Operacao:
    Quadrado1 = Nun1 * Nun1;
    Quadrado2 = Num2 * Num2;
    if (Quadrado1 > Quadrado2)
    {
        printf("O Quadrado do Primeiro Numero eh a maior! \n");
    }
    else if (Quadrado1 < Quadrado2)
    {
        printf("O Quadrado do Segundo Numero eh a maior! \n");
    }
    else
    {
        printf("Os quadrados sao iguais!! \n");
    }

    return 0;
}