/* Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.*/

#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i", &num);

    if (num % 2 == 0) {
        printf("%i e um numero par.\n", num);
    } else {
        printf("%i e um numero impar.\n", num);}

    return 0;}