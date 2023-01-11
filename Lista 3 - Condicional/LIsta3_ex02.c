/*  Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois 
números forem iguais, imprima a mensagem “Números iguais”. */

#include<stdio.h>
int main(){
    int n1,n2;
    printf("Digite dois numeros:");
    scanf("%i%i", &n1,&n2);
if (n1 > n2){
    printf("%i e maior que %i",n1,n2);}
if (n1 < n2){
    printf("%i e menor que %i",n1,n2);}
else{
    printf("Numeros iguais!");}
return 0;}
