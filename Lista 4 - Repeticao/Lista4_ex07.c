//Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.
#include<stdio.h>
int main(){

float n, soma = 0, i;

for (i=0; i<10; i++){
printf("Digite um valor:");
scanf("%f", &n);
soma += n;}
 
printf("A soma dos valores equivale a: %.2f", soma);
return 0;}