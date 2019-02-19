#include<stdio.h>
int main(){

    int i, k;
    int j;

    printf("The number 1 is prime.\n");

    for(k=2;k<=45;k++){

        j = 0;

        for(i=1;i<=k;i++){

            if(k%i==0){
                j++;
            }

        }

        if(j==2){
            printf("The number %d is prime.\n", k);
        }

    }

    system("pause");
    return(0);

}
