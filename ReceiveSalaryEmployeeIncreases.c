#include<stdio.h>
int main(){

    float salario;
    float aumento;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    if(salario>=500){
        //aumento = salario + (salario*(0.2));
        aumento = salario*1.2;
        printf("O sal�rio atualizado do funcion�rio �: %f", aumento);
    } else {
        //aumento = salario + (salario*(0.1));
        aumento = salario*1.1;
        printf("O sal�rio atualizado do funcion�rio �: %f", aumento);
    }

    system("pause");
    return(0);

}
