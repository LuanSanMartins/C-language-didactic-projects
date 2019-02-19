#include<stdio.h>
int main(){

    int vetor [10] = {0,1,2,3,4,5,6,7,8,9};

    int i;

    printf("Element Value");
    for(i = 0;i < 10; i++){

        printf("\n%d       %d", i, vetor[i]);

    }

    printf("\n");

    system("pause");
    return(0);

}
