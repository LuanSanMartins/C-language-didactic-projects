#include<stdio.h>
int main(){

    int num;
    int i;
    int j = 0;

    printf("Enter a number less than 1000: ");
    scanf("%d", &num);

    if(num!=1){

        for(i=1;i<=num;i++){

            if(num%i==0){
                j++;
            }

        }

        if(j==2){
            printf("The number you enter is prime.");
        } else {
            printf("The number you enter is not prime.");
        }

    } else {
        printf("The number you enter is prime.");
    }

    system("pause");
    return(0);

}
