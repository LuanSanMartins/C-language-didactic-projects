#include <stdio.h>
int main(){

    int m;
    int n;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &m);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &n);

    if(m>n){
        printf("O primeiro n�mero digitado � maior");
    } else if(m<n){
        printf("O segundo n�mero digitado � maior");
    } else {
        printf("Os n�meros digitados s�o iguais");
    }

    system("pause");
    return(0);

}
