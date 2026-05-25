#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct para armazenar as coordenadas de um ponto
struct Ponto
{
    float x;
    float y;
};

int main()
{
    // declaração de duas variáveis do tipo struct Ponto
    struct Ponto p1, p2;

    // solicita ao usuário que digite as coordenadas do ponto
    printf("Digite as coordenadas do ponto(x y): \n");
    scanf("%f %f", &p1.x, &p1.y);

    // exibe as coordenadas do ponto
    printf("As coordenadas de X são: (%.2f)\n", p1.x);
    printf("As coordenadas de Y são: (%.2f)\n", p1.y);

    return 0;
}
