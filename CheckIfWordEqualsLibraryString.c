#include<stdio.h>
#include<string.h>

int main(){

    char name_one[10];
    char name_two[10];
    int check = 5;

    printf("Enter a name: ");
    scanf("%s", &name_one);

    fflush(stdin);

    printf("Enter a other name: ");
    scanf("%s", &name_two);

    fflush(stdin);

    check = strcmp(name_one, name_two);

    if(check ==0){
        printf("The people are xaras\n");
    } else {
        printf("The people aren't xaras\n");
    }

    system("pause");
    return(0);

}
