#include<stdio.h>
int main(){

    int i = 0;
    int j = 0;
    int student;

    while((i+j)<10){

        printf("Enter the code of student: ");
        scanf("%d", &student);

        if(student == 1){

            i++;

        } else if(student == 2) {

            j++;

        }

    }

    printf("The number of student approved is: %d\n", i);
    printf("The number of student dispproved is: %d\n", j);

    system("pause");
    return(0);

}
