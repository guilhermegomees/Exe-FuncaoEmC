#include <stdio.h>
#include <string.h>

void soma(a, b, c);

int main(){
    int a, b, c;

    printf("SOMA DE TRES NUMEROS\n\n");

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("Terceiro numero: ");
    scanf("%d", &c);
    soma(a, b, c);

    return 0;
}

void soma(a, b, c){
    int s = a + b + c;
    printf("\nResultado: %d", s);
}