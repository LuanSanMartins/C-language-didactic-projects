#include<stdio.h>
#include<math.h>
int main(){

    int n;
    float f;
    float s = 0;

    printf("Enter a value to n: ");
    scanf("%d", &n);

    while(n>0){

        f = (1.0/n);

        s = s + f;

        n--;

    }

    printf("The result of sum is: %f\n", s);

    system("pause");
    return(0);

}
