#include<stdio.h>

int main(){

    int note, i, j, k, z;
    int a = 0;
    int b = 0;
    float moda = 0;
    int p = 0;
    int median = 0;
    float soma = 0;
    float media = 0;
    int vetor[25];

    for(i = 0; i < 25; i++){

        printf("Enter a note: ");
        scanf("%d", &note);

        vetor[i] = note;

        soma = soma + vetor[i];

    }

    for(j = 0; j < 25; j++){

        p = j + 1;

        printf("The note %d is: %d\n", p, vetor[j]);

    }

    for(k = 0; k < 25; k++){

        for(z = 0; z < 25; z++){

            if(vetor[k]==vetor[z]){

                a++;

            }

            if(a > b){

                moda = vetor[k];

		b = a;

            }

            
            a = 0;

        }

    }

    median = vetor[12];

    media = soma/i;

    printf("The final media is: %f\n", media);
    printf("The median is: %f\n", median);
    printf("The moda is: %f", moda);

}
