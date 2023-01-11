//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.
#include <stdio.h>
int main (){
  int lista[20], i;
 scanf("%i", &lista);
  for(i = 0; i <= lista; i++){
  printf("%d ", i);}
return 0;}