#include<stdio.h>
#include<string.h>

int main(){

    char word[10];
    int i = 0;

    printf("Enter with a word: ");
    scanf("%s", &word);

    i = strlen(word);

    printf("The amount of latters are: %d\n", i);

    system("pause");
    return(0);

}
