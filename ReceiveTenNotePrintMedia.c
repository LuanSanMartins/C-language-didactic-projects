#include<stdio.h>
int main(){

    float notas, total, media, soma;
    int c = 0;

    while(c<=9){

        printf("Enter the note");
        scanf("%f", &notas);

        soma = soma + notas;

        c++;

    }

    media = soma/10;

    printf("Final media: %f", media);

    system("pause");
    return(0);

}
