#include<stdio.h>
int main(){

    float note, sum, media;
    int i=0;

    while(note<=10){

        printf("Enter the note of student: ");
        scanf("%f", &note);

        if(note<=10){

            sum = sum + note;
            i++;

        }

    }

    media = sum/i;

    printf("The final media is: %f", media);

    system("pause");
    return(0);

}
