/*Escreva um programa que leia um numero
e exiba sua tabuada de 1 a 10.*/

#include <stdio.h>

int main(){
    int numero;

    printf("Informe o numero para ver a sua tabuada de multiplicacao: ");
    scanf("%d", &numero);

    printf("A tabuada de %d sera:\n", numero);
    int i = 1;
    for(i; i<=10; i++){
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
}

