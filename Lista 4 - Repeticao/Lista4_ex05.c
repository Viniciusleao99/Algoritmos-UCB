// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>  

int main() {  

int n, i, soma=0;  

for (i=1; i<=100; i++) {  
if (i % 2 == 0)
soma += i;}  
printf("Soma dos 50 primeiros numeros e: %d\n", soma);  

return 0;}