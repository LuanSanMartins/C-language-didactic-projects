#include<stdio.h>
int main(){

    int i, j, k;
    int e = 0;
    int matriz[10][1] = {{5}, {4}, {7}, {5}, {9}, {0}, {9}, {1}, {8}, {9}};

    printf("Elemento  Valor  Histograma\n");
    for(i = 0; i < 10; i++){

        for(j = 0;j < 2; j++){

            e = i + 1;

            if(j==0 && i!=9){

                printf("%d         %d      ", e, matriz[i][j]);

            } else if(j==0 && i==9) {

                printf("%d        %d      ", e, matriz[i][j]);

            } else {

                    for(k = 0; k < matriz[(i-1)][j]; k++){

                        if(j==0){

                            printf("   *");

                        } else {

                            printf("*");

                        }

                    }

            }
        }

        printf("\n");

    }

    system("pause");
    return(0);

}
