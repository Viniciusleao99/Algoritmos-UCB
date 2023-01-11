//Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).

#include<stdio.h>

int main () {
    int n, cal;

    printf("Digite um numero : ");
    scanf("%i", &n);

    cal = n - 1 + (n % 2);

    for (int i = 0; i < n; i++) {
        printf("%i\n", cal);
        cal -= 2;} 
return 0;}