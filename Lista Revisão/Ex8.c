/*Elabore um algoritmo em C, que calcule um fatorial de um número fornecido pelo usuário utilizando uma função recursiva.*/

#include <stdio.h>

int fatorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * fatorial(num - 1);}
}

int main() {
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    printf("O fatorial de %i e: %i", num, fatorial(num));

    return 0;}