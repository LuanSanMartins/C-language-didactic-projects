#include<stdio.h>
int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("The number entered is pair");
    } else {
        printf("The number entered is odd");
    }

    system("pause");
    return(0);

}
