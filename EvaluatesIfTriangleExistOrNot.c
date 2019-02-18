#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;

    printf("Enter the first side (a) of the triangle: ");
    scanf("%d", &a);

    printf("Enter the second side (b) of the triangle: ");
    scanf("%d", &b);

    printf("Enter the third side (c) of the triangle: ");
    scanf("%d", &c);

    if(abs(b-c)<a && abs(b-c)<(b+c) && a<(b+c) && abs(a-c)<b && abs(a-c)<(a+c) && abs(a-b)<c && abs(a-c)<(a+b) && c<(a+c)){

        if(a==b && a==c && b==c){
            printf("The triangle is equilateral");
        } else if (a==b && a!=c && b!=c) {
            printf("The triangle is isosceles");
        } else if (a!=b && a!=c && b!=c){
            printf("The triangle is scalene");
        }

    } else {
        printf("The triangle not exist");
    }

    system("pause");
    return(0);

}
