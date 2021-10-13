#include <stdio.h>

/*
    Faça um programa, com uma função que necessite de um argumento. 
    A função retorna o valor de caractere ‘P’, se seu argumento for 
    positivo, e ‘N’, se seu argumento for zero ou negativo.
*/

void pn(n);

int main(){
    int n;

    printf("POSITIVO OU NEGATIVO\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n);
    pn(n);

    return 0;
}

void pn(n){
    if(n > 0){
        printf("\nPositivo");
    }
    else if(n == 0){
        printf("\nNulo");
    }
    else{
        printf("\nNegativo");
    }
}