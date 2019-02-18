#include<stdio.h>
int main(){

    int a;
    int b;
    int c;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    fflush(stdin);

    printf("Digite o segundo número: ");
    scanf("&d", &b);

    c = a*b;

    printf("O resultado da multiplicação é: %d", c);

    system("pause");
    return(0);

}
