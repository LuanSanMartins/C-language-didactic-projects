#include<stdio.h>
#include<math.h>
int main(){

    float r, A;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    A = (M_PI)*r*r;

    printf("The area of the circle is: %f", A);

    system("pause");
    return(0);

}
