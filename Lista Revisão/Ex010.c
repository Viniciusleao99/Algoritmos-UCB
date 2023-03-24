/*Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os 
dois números forem iguais,imprima a mensagem “Números iguais”.*/

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O maior numero e: %.2f", num1);
    } else if (num2 > num1) {
        printf("O maior numero e: %.2f", num2);
    } else {
        printf("Numeros iguais");}

    return 0;}
