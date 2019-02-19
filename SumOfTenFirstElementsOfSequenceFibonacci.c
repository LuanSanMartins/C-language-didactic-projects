#include<stdio.h>
int main(){

    int s = 0;
    int i;
    int vetorf[10] = {1,1,2,3,5,8,13,21,34,55};


    for(i = 0; i < 10; i++){

        s = s + vetorf[i];

    }

    printf("The sum is: %d\n", s);

    system("pause");
    return(0);

}
