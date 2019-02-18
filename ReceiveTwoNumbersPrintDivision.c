#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    c = a/b;

    printf("O resultado da divisão é: %d\n", c);

    system("pause");
    return(0);

}
