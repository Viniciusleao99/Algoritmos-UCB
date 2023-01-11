/* Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	int a = 1, b = 0, c; 
	
	printf("Quantos termos quer ver: ");
	scanf("%d", &n1);
	
	printf("\n0 ");
	n1--;
	
	while (n1) {
		printf("%d ", a);
		c = a;
		a += b;
		b = c;
		n1--;
	}	  
return 0;}