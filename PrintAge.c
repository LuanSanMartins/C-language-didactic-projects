#include<stdio.h>
int main(){

    int year_birth, current_year, age, age_2027;

    printf("Enter the current year: ");
    scanf("%d", &current_year);

    printf("Enter the year of birth: ");
    scanf("%d", &year_birth);

    age = current_year - year_birth;
    age_2027 = 2027 - year_birth

    printf("Your age is: %d", age);
    printf("Your age in 2017 will be: %d", age_2027);

    system("pause");
    return(0);

}
