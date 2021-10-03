#include <stdio.h>
#include <string.h>

void imprimir_n(int num);

int main(){
    int num = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("\n");
    imprimir_n(num);

    return 0;
}

void imprimir_n(int num){
    for(int i = 1; i < num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }    
}