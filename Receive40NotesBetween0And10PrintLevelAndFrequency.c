#include<stdio.h>
int main(){

    int i, j;
    int note;
    int n = 0;
    int vetor[10] = {0,0,0,0,0,0,0,0,0,0};

    for(i = 0; i <= 40; i++){

        printf("Enter a note: ");
        scanf("%d", &note);

        if(note==1){
            vetor[0]++;
        } else if (note==2){
            vetor[1]++;
        } else if(note==3){
            vetor[2]++;
        } else if(note==4){
            vetor[3]++;
        } else if(note==5){
            vetor[4]++;
        } else if(note==6){
            vetor[5]++;
        } else if(note==7){
            vetor[6]++;
        } else if(note==8){
            vetor[7]++;
        } else if(note==9){
            vetor[8]++;
        } else if(note==10){
            vetor[9]++;
        }

    }

    printf("Nível Frequência\n");
    for(j = 0; j < 10; j++){

        n = j + 1;

        if(j!=9){

            printf("%d     %d\n", n, vetor[j]);

        } else {

            printf("%d    %d\n", n, vetor[j]);

        }

    }

    system("pause");
    return(0);

}
