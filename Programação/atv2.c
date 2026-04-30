#include <stdio.h>

int main()
{

    // variaveis

   int variavel1;
   int variavel2;
   int somaVariavel;

    // funcoes

    printf("Sua primeira variavel: \n");
    scanf("%d", &variavel1);
    printf ("Sua segunda variavel: \n");
    scanf ("%d", &variavel2);
    
    //operacao

    somaVariavel= variavel1+variavel2;

    //resultado

    printf("Soma das variaveis: %d", somaVariavel);

    return 0;
}
