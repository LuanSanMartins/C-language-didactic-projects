#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &a);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &b);

    c = a/b;

    printf("O resultado da divis�o �: %d\n", c);

    system("pause");
    return(0);

}
