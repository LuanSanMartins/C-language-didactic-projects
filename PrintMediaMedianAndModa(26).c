#include<stdio.h>

int main(){

    float media = 0;
    float median = 0;
    float moda = 0;
    float note = 0;
    float soma = 0;
    int i, j, k, z;
    int vetorNote[26];
    int a = 0;
    int b = 0;


    for(i = 0; i < 26; i++){

        printf("Enter a note: ");
        scanf("%f", &note);

        vetorNote[i] = note;

        soma = soma + vetorNote[i];

    }

    media = soma/i;

    median = (vetorNote[12] + vetorNote[13])/2;

    for(k = 0; k < 26; k++){

        for(z = 0; z < 26; z++){

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
