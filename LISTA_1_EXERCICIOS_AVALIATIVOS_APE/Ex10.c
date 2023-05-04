//Faça um programa que leia 10 inteiros e imprima sua média.

#include <stdio.h>

int main() {
    int numeros[10], soma = 0, i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %iº número: ", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Calcula e imprime a média
    float media = (float)soma / 10;
    printf("A media dos numeros e: %i\n", media);

    return 0;}