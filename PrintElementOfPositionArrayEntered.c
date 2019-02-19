#include<stdio.h>
int main(){

    int TAMANHO[7] = {2,4,6,8,10,12,14};
    int i;

    printf("Position Value\n");
    for(i = 0; i < 7; i++){

        printf("%d        %d\n", i, TAMANHO[i]);

    }

    system("pause");
    return(0);

}
