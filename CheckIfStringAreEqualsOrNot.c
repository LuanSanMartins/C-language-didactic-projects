#include<stdio.h>
int main(){

    char name_one[10];
    char name_two[10];
    int i = 0;
    int j = 0;
    int z = 0;
    int b = 0;
    int k, tamanho;

    printf("Enter a name: ");
    scanf("%s", &name_one);

    fflush(stdin);

    printf("Enter a other name: ");
    scanf("%s", &name_two);

    fflush(stdin);

    while(name_one[i] != '\0'){
        i++;
    }

    tamanho = i;

    while(name_two[j] != '\0'){
        j++;
    }

    if(i != j){
        printf("The people aren't xaras\n");
        b = 1;
    } else {

        for(k = 0; k < tamanho; k++){

            if(name_one[k] = name_two[k]){

                z++;

            }

        }

    }

    if(z == tamanho){

        printf("The people are xaras\n");

    } else if(b != 1) {

        printf("The people aren't xaras\n");

    }

    system("pause");
    return(0);

}
