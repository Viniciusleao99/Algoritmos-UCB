//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.

#include<stdio.h>

int main () {
    int n = 1, multi = 0;

    for (n; multi < 5; n++) {
        if (n % 3 == 0) {
            multi++;
            printf("Numero: %d\n", n);}
    }
return 0;}