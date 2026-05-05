#include <stdio.h>

int main()
{

    // variaveis
    int totalSegundos;
    int segundos;
    int minutos;
    int horas;

    // coleta de dados
    printf("Informe o total de segundos: \n");
    scanf("%d", &totalSegundos);

    // operacao
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    // resultado
    printf("%.2d:%.2d:%.2d", horas, minutos, segundos);

    return 0;
}