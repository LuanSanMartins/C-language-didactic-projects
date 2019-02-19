#include<stdio.h>
int main(){

    int vetor[] = {5, 1, 3, 4, 6};
    int i, j, k;
    int aux = 0;

    printf("Messy array: \n");
    for(k = 0; k < 5; k++){

        printf("%d, ", vetor[k]);

    }

    printf("\n");

    printf("Ordered array: \n");
    for(i = 0; i < 5; i++){

        for(j = 0; j < 4; j++){

            if(vetor[j] > vetor[j + 1]){

                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;

            }

        }

        printf("%d, ", vetor[4 - i]);

    }

    printf("\n");

    system("pause");
    return(0);

}
