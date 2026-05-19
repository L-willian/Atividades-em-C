#include <stdio.h>

int contador(char *p)
{
    int cont = 0;
    while (*p != '\0')
    {
        if (*p == 'A' || *p == 'a')
        {
            cont++;
        }
        p++;
    }

    return cont;
}

int main()
{
    char str[100];
    int resultado;

    printf("Digite uma string: \n");
    scanf("%s", str);

    resultado = contador(str);

    printf("O número de vezes que a letra 'A' ou 'a' aparece na string é: %d\n", resultado);

    return 0;
}