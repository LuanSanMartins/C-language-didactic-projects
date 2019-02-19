#include<stdio.h>
#include<string.h>

int main(){

    char word_one[10];
    char word_two[10];

    printf("Enter a first word: ");
    scanf("%s", &word_one);

    printf("Enter a second word: ");
    scanf("%s", &word_two);

    strcat(word_one, word_two);

    printf("%s\n", word_one);

    system("pause");
    return(0);

}
