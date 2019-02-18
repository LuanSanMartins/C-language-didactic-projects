#include<stdio.h>
#include<math.h>
int main(){

    float num;

    printf("Enter a number greater than zero: ");
    scanf("%f", &num);

    if(num>0){

        printf("The number entered squared is: %f", pow(num,2));
        printf("The number entered in the cube is: %f", pow(num,3));
        printf("The square root of the number entered is: %f", sqrt(num));
        printf("The cube root of the number entered is: %f", cbrt(num));

    } else {

        printf("The number entered is not greater than zero");

    }

    system("pause");
    return(0);
}
