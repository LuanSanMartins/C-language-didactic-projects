#include<stdio.h>
int main(){

    int vetorAge[] = {16, 17, 18, 19, 20, 21, 18, 17, 16, 16, 17, 18, 16, 22, 25, 30, 26, 23, 24, 25, 21, 18, 19, 17, 17, 26, 29, 33, 35, 40};
    int i;
    int j = 0;

    for(i = 0; i < 30; i++){

        if(vetorAge[i] < 18){

            j++;

        }

    }

    printf("The amount of student minor are: %d\n", j);

    system("pause");
    return(0);

}
