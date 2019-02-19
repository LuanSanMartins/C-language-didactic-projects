#include<stdio.h>
int main(){

    int vetor[] = {16, 17, 18, 19, 20, 21, 18, 17, 16, 16, 17, 18, 16, 22, 25, 30, 26, 23, 24, 25, 21, 18, 19, 17, 17, 26, 29, 33, 35, 40};
    int i;
    int key;

    printf("Enter age that want search: ");
    scanf("%d", &key);

    printf("The elements equals key are: \n");
    for(i = 0; i < 30; i++){

        if(vetor[i]==key){

            printf("%d \n", vetor[i]);

        }

    }

    system("pause");
    return(0);

}
