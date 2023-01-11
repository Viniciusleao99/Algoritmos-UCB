// Elabore um algoritmo que receba o nome completo de um cliente e imprima a quantidade de caracteres digitados. 

#include <stdio.h>
#include <string.h>
 
int main(){
  char nome [100];
  int  tam, n;
 
  printf("Informe seu nome completo, por favor!\n");
  gets(nome);
  tam = strlen(nome);
  printf("Seu nome possui %i caracteres\n", n);
return 0;}