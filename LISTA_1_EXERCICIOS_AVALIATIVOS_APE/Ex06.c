//Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.

#include <stdio.h>

int main() {
    int maximo = 1000, soma = 0;

    for (int i = 1; i < maximo; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("A soma do anunciado e: %i\n", soma);

    return 0;}