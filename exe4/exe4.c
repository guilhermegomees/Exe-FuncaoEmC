#include <stdio.h>
#include <string.h>

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