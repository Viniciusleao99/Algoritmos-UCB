/*Construa um algoritmo em C, que calcule a média aritmética de 3 números quaisquer fornecidos pelo usuário.*/

#include <stdio.h>

int main() {
    float num1, num2, num3, media;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("Informe o terceiro numero: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A media aritmetica dos tres numeros e: %.2f", media);

    return 0;}