//Faça um algoritmo que leia um número positivo e imprima seus divisores.

#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um numero positivo: ");
    scanf("%i", &num);
    
    printf("Divisores de %i:\n", num);
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%i\n", i);
        }
    }
    
    return 0;}