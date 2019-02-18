#include<stdio.h>
int main(){

    float m1, m2, m3, mf;
    int p1, p2, p3;

    printf("Enter the first media: ");
    scanf("%f", &m1);

    printf("Enter the first weight: ");
    scanf("%d", &p1);

    printf("Enter the second media: ");
    scanf("%f", &m2);

    printf("Enter the second weight: ");
    scanf("%d", &p2);

    printf("Enter the third media: ");
    scanf("%f", &m3);

    printf("Enter the third weight: ");
    scanf("%d", &p3);

    mf = ((m1*p1)+(m2*p2)+(m3*p3))/(p1+p2+p3);

    printf("The weighted average is: %f", mf);

}
