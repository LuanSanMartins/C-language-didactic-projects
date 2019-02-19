#include<stdio.h>
int main(){

    int aux;
    int a = 0;
    int s1 = 1;
    int i = 1;

    printf("The term 0 is: %d\n", s1);

    while(i<20){

        aux = a + s1;
        a = s1;
        s1 = aux;

        printf("The term %d is: %d\n", i, aux);

        i++;
    }

    system("pause");
    return(0);

}
