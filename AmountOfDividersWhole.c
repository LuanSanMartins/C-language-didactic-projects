#include<stdio.h>
int main(){

    int num, i;
    int j = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=2;i<num;i++){

        if(num%i==0){
            j++;
        }

    }

    printf("The number entered have %d whole dividers\n", j);

    system("pause");
    return(0);

}
