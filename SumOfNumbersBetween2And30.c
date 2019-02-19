#include<stdio.h>
int main(){

    int i, aux, a;
    int b = 0;

    for(i=2;i<=30;i++){

        if(i%2==0){

            a = i;
            aux = a + b;
            a = b;
            b = aux;

        }

    }

    printf("The sum of even numbers between 2 and 30 is: %d\n", aux);

    system("pause");
    return(0);

}
