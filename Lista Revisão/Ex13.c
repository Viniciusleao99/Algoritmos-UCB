/* Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre: 
o número digitado ao quadrado e raiz quadrada do número digitado.*/

#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O numero ao quadrado e: %.2f\n", pow(numero, 2));
        printf("A raiz quadrada do numero e: %.2f\n", sqrt(numero));}

    return 0;}