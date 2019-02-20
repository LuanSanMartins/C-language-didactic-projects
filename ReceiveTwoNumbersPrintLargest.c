#include <stdio.h>
int main(){

    int m;
    int n;

    printf("Digite o primeiro número: ");
    scanf("%d", &m);

    printf("Digite o segundo número: ");
    scanf("%d", &n);

    if(m>n){
        printf("O primeiro número digitado é maior");
    } else if(m<n){
        printf("O segundo número digitado é maior");
    } else {
        printf("Os números digitados são iguais");
    }

    system("pause");
    return(0);

}
