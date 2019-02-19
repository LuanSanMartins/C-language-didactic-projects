#include<stdio.h>
int main(){

    int num;
    int i = 1;
    int j = 0;

    printf("Enter a whole number smaller than 1000: ");
    scanf("%d", &num);

    if(num!=1){

    if(num<1000){

        while(i<=num){

            if(num%i==0){
                j++;
            }

            i++;
        }

    } else {
        printf("The number entered is bigger or equals than 1000\n");
    }

    } else {
        printf("The number you enter is prime\n"); //Se for o número 1, é primo.
    }

    if(j==2){
        printf("The number you enter is prime\n");
    } else if(num!=1){
        printf("The number you enter is not prime\n");
    }

    system("pause");
    return(0);

}
