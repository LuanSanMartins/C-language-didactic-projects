#include<stdio.h>
int main(){

    int a;
    int b;
    int c;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &a);

    fflush(stdin);

    printf("Digite o segundo n�mero: ");
    scanf("&d", &b);

    c = a*b;

    printf("O resultado da multiplica��o �: %d", c);

    system("pause");
    return(0);

}
