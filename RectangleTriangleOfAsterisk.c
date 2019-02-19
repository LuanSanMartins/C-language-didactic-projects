#include<stdio.h>
int main(){

    int i, j, n;

    printf("Enter a number to N: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        for(j=1; j<=i; j++){

            if(j<i){
                printf("*");
            } else if (j==i){
                printf("*\n");
            }
        }

    }

    system("pause");
    return(0);

}
