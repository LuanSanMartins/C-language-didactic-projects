#include<stdio.h>
int main(){

    char word_one[10];
    char word_two[10];

    printf("Enter a first word: ");
    scanf("%s", &word_one);

    fflush(stdin);

    printf("Enter a second word: ");
    gets(word_two);

    fflush(stdin);

    printf("The first word entered is: %s\n", word_one);

    printf("The second word entered is: %s\n", word_two);

    system("pause");
    return(0);

}
