#include <stdio.h>

int main()
{

    // variaveis

    float complimentoBase;
    float complimentoAltura;
    float areaTotal;

    // funcoes

    printf("Qual o comprimento da base: \n");
    scanf("%f", &complimentoBase);
    printf ("Qual o complimento da altura: \n");
    scanf ("%f", &complimentoAltura);
    
    //operacao

    areaTotal= complimentoAltura*complimentoBase;

    //resultado

    printf("Area Total eh; %2.f", areaTotal);

    return 0;
}
