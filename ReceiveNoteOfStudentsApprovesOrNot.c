#include<stdio.h>
int main(){

    int n1;
    int n2;
    int media;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);

    printf("Digite a segunda nota: ");
    scanf("%d", &n2);

    media = (n1 + n2)/2;

    if(media >= 7){
        printf("Aluno aprovado com média: %d", media);
    } else {
        printf("Aluno reprovado com média: %d", media);
    }

    system("pause");
    return(0);

}
