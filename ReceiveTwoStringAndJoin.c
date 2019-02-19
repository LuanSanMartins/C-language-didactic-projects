#include<stdio.h>
int main(){

    char word_one[10];
    char word_two[10];

    printf("Enter a first word: ");
    scanf("%s", &word_one);

    printf("Enter a second word: ");
    scanf("%s", &word_two);

    printf("%s %s\n", word_one, word_two);

    system("pause");
    return(0);

}
