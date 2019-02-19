#include<stdio.h>
#include<string.h>

int main(){

    int i;
    int n = 0;
    int j = 0;
    char word[10];

    printf("Enter a word: ");
    scanf("%s", &word);

    n = strlen(word);

    for(i = 0; i < n; i++){

        if(word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u'){
            j++;
        }

    }

    printf("The word contain %d vowels\n", j);

    system("pause");
    return(0);

}
