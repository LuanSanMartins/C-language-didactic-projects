#include<stdio.h>
int main(){

    int n;
    int vetor[1000];
    int k, i, j, z;
    int aux = 0;
    int p = 0;
    int pk;

    printf("Enter a number to n: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++){

        p = j + 1;

        printf("Enter a element %d: ", p);
        scanf("%d", &vetor[j]);

    }

    printf("Enter a number to k: ");
    scanf("%d", &k);

    for(z = 0; z < n; z++){

        for(i = 0; i < n; i++){

            if(vetor[i] > vetor[i + 1]){

                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;

            }

        }

    }

    pk = k - 1;

    printf("The element %d is: %d\n", k, vetor[pk]);

    system("pause");
    return(0);

}
