#include<stdio.h>
int main(){

    int year, age;

    printf("Enter the year of birth: ");
    scanf("%d", &year);

    age = 2019 - year;

    printf("Your age is: %d", age);

    system("pause");
    return(0);

}
