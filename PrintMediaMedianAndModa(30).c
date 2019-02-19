#include<stdio.h>

int main(){

    float media = 0;
    float median = 0;
    float moda = 0;
    float note = 0;
    float soma = 0;
    int i, j, k, z;
    int vetorNote[30];
    int a = 0;
    int b = 0;
    int n;

    printf("Enter a value to n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Enter a note: ");
        scanf("%f", &note);

        vetorNote[i] = note;

        soma = soma + vetorNote[i];

    }

    media = soma/i;

    if(n&2==0){

        median = (vetorNote[n/2] + vetorNote[(n/2) + 1])/2;

    } else{

        median = vetorNote[((n-1)/2)];

    }

    for(k = 0; k < n; k++){

        for(z = 0; z < n; z++){

            if(vetorNote[k]==vetorNote[z]){

                a++;

            }

            if(a > b){

                moda = vetorNote[k];

                b = a;

            }

            a = 0;

        }

    }

    printf("The media is: %f\n", media);
    printf("The median is: %f\n", median);
    printf("The moda is: %f\n", moda);

    system("pause");
    return(0);

}
