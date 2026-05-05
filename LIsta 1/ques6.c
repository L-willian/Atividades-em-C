#include <stdio.h>

int main()
{

    // variaveis
    char sexo;
    int idade;
    float altura;

    // coleta de dados
    printf("Qual seu sexo? \n");
    scanf("%c", &sexo);
    printf("Qual sua idade? \n");
    scanf("%d", &idade);
    printf("Qual sua altura? \n");
    scanf("%f", &altura);

    // resultado
    printf("Seu sexo: %c \n", sexo);
    printf("sua idade: %d \n", idade);
    printf("sua altura: %.2f \n", altura);

    return 0;
}