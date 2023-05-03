//Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>
int main(){
    int n1;
    printf("Digite um numero:");
    scanf("%i", &n1);
if(n1 % 2 == 0){
    printf("Esse numero e par");}
else {
    printf("Esse numero e impar");}    
return 0;}