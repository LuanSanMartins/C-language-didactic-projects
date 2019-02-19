#include<stdio.h>
int main(){

    int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int key = 9;
    int i;

    for(i = 0; i < 8; i++){

        if(vetor[7 - i] >= key){

            printf("The key is before of medium\n");

        } else {

            printf("The key is after of medium\n");

        }

    }

    system("pause");
    return(0);

}
