#include<stdio.h>
int main(){

    char vetor_one[10];
    char vetor_two[10];
    int i;
    int p = 0;


    printf("Enter with the phrase: ");
    scanf("%[^\n]s", vetor_one);
    fflush(stdin);

    printf("The phrase entered is: %s\n", vetor_one);

    for(i = 0; i < 9; i++){

        p = i + 1;
        printf("Enter with the word %d: ", p);
        scanf("%c", &vetor_two[i]);
        fflush(stdin);

    }

    printf("The characters entered result phrase: %s\n", vetor_two);

    system("pause");
    return(0);

}
