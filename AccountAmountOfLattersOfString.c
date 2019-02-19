#include<stdio.h>

int main(){

    char word[10];
    int i = 0;

    printf("Enter with a word: ");
    scanf("%s", &word);

    while(word[i] != '\0'){

        i++;

    }

    printf("The amount of latters are: %d\n", i);

    system("pause");
    return(0);

}
