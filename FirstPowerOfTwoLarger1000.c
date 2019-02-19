#include<stdio.h>
int main(){

    int p = 0;

    while(pow(2,p)<=1000){

        p++;

    }

    printf("The exponent is: %d", p);

    system("pause");
    return(0);

}
