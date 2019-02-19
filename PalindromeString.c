#include<stdio.h>
int main(){

    int i, j;
    int z = 0;
    int k = 0;
    int n = 0;
    char word[20];

    printf("Enter a word: ");
    scanf("%s", &word);

    while(word[i] != '\0'){
        i++;
    }

    n = ((i - 1)/2) + 1;
    z = i - 1;

    for(j = 0; j < n; j++){

        if(word[j] == word[z - j]){
            k++;
        }

    }

    if(n==k){
        printf("The word is palindromo\n");
    } else {
        printf("The word isn't palindromo\n");
    }

    system("pause");
    return(0);

}
