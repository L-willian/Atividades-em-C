#include <stdio.h>

int main(){

    //variaveis
    int num;
    int media;

    //entrada de dados
    media = 0;
    for(int i = 0; i < 5; i = i + 1){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        media = media + num;
    }
    media = media / 5;
    printf("A media eh: %d\n", media);
    return 0;
}

